/*
 * XREFs of ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C0123110
 * Callers:
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C0122434 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ProtectHandle @ 0x1C005F844 (ProtectHandle.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall IOCPDispatcher::InitializeUserModeHandleDuplicate(IOCPDispatcher *this)
{
  CInputThread *v1; // rdi
  bool v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  int v7; // edx
  NTSTATUS v8; // edi
  __int64 v10; // [rsp+28h] [rbp-20h]

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v3 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  if ( !*((_QWORD *)this + 343) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  if ( *((_QWORD *)this + 344) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  v6 = ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         *((HANDLE *)this + 343),
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PHANDLE)this + 344,
         0,
         0,
         2u);
  v8 = v6;
  if ( v6 >= 0 )
  {
    ProtectHandle(*((void **)this + 344), v7, 0LL, 1);
  }
  else
  {
    LODWORD(v10) = v6;
    WPP_RECORDER_SF_d(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
      2u,
      2u,
      0x17u,
      (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids,
      v10);
  }
  return v8 >= 0;
}
