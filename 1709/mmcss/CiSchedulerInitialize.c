/*
 * XREFs of CiSchedulerInitialize @ 0x1C000D19C
 * Callers:
 *     CsInitialize @ 0x1C000C194 (CsInitialize.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0001EF4 (WPP_SF_.c)
 */

__int64 CiSchedulerInitialize()
{
  NTSTATUS v1; // ebx
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF
  void *ThreadHandle; // [rsp+70h] [rbp+8h] BYREF

  HIDWORD(WPP_MAIN_CB.SecurityDescriptor) = *(&WPP_MAIN_CB.ActiveThreadCount + 1) * CiSystemResponsiveness / 0x64;
  LODWORD(WPP_MAIN_CB.SecurityDescriptor) = *(&WPP_MAIN_CB.ActiveThreadCount + 1)
                                          - *(&WPP_MAIN_CB.ActiveThreadCount + 1) * CiSystemResponsiveness / 0x64;
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = ExAllocateTimer(0LL, 0LL, 4LL);
  if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
    CiProcessorIdleHistoryBits = 0;
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = -1LL;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v1 = PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           0LL,
           0LL,
           0LL,
           (PKSTART_ROUTINE)CiSchedulerThreadFunction,
           &Event);
    if ( v1 < 0 )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xBu,
          (__int64)&WPP_c55bb13be5913af8a2f5960fa336dd1c_Traceguids);
    }
    else
    {
      ZwClose(ThreadHandle);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    return (unsigned int)v1;
  }
  else
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_c55bb13be5913af8a2f5960fa336dd1c_Traceguids);
    return 3221225495LL;
  }
}
