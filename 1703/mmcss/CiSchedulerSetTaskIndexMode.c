/*
 * XREFs of CiSchedulerSetTaskIndexMode @ 0x1C0001650
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A290 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSystemUpdateMediaBufferingState @ 0x1C0001780 (CiSystemUpdateMediaBufferingState.c)
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     CiLogSetTaskIndexMode @ 0x1C0004118 (CiLogSetTaskIndexMode.c)
 */

void __fastcall CiSchedulerSetTaskIndexMode(__int64 a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // eax
  __int64 *v7; // rbx
  __int64 *i; // rsi
  HANDLE ThreadId; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  HANDLE v11; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 136) + 3LL) & 1) != 0 )
  {
    if ( byte_1C0007298 )
      CiLogSetTaskIndexMode();
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    v4 = 0;
    v5 = ((*(_DWORD *)(a1 + 184) | 1u) >> 1) & 1;
    if ( a2 == 1 )
      v4 = 2;
    v6 = *(_DWORD *)(a1 + 184) & 0xFFFFFFFC | 1 | v4;
    *(_DWORD *)(a1 + 184) = v6;
    if ( v5 != ((v6 >> 1) & 1) )
    {
      if ( a2 == 1 )
      {
        ++CiTotalTasksBuffering;
        CiSystemUpdateMediaBufferingState();
      }
      v7 = *(__int64 **)(a1 + 32);
      for ( i = (__int64 *)(a1 + 32); v7 != i; v7 = (__int64 *)*v7 )
      {
        if ( byte_1C0007298 )
        {
          ThreadId = PsGetThreadId((PETHREAD)v7[2]);
          v10 = (const EVENT_DESCRIPTOR *)&CiThreadBufferingStartEvent;
          v11 = ThreadId;
          *(_QWORD *)&UserData.Size = 4LL;
          UserData.Ptr = (ULONGLONG)&v11;
          if ( a2 != 1 )
            v10 = &CiThreadBufferingStopEvent;
          EtwWrite(RegHandle, v10, 0LL, 1u, &UserData);
        }
        KeUpdateThreadTag(v7[2], a2);
      }
      if ( a2 != 1 )
      {
        --CiTotalTasksBuffering;
        CiSystemUpdateMediaBufferingState();
      }
    }
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  }
}
