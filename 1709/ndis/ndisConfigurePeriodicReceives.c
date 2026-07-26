/*
 * XREFs of ndisConfigurePeriodicReceives @ 0x1C0010DD4
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 *     ndisInitializePeriodicReceives @ 0x1C011C448 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C000F620 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C000F6A0 (NdisAcquireRWLockWrite.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00110E4 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C004FC10 (ndisTracePeriodicRcvOnOff.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00C7DDC (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00E3954 (ndisKillReceiveWorkerThreadPool.c)
 */

LONG __fastcall ndisConfigurePeriodicReceives(LARGE_INTEGER *a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( !a1 )
  {
    DueTime.QuadPart = 0LL;
    dword_1C0097F04 = -1;
    if ( dword_1C0097F0C || (unsigned int)ndisCreateReceiveWorkerThreadPool() )
      return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    byte_1C0097F01 = 1;
LABEL_13:
    NdisReleaseRWLock(Lock, &LockState);
    return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
  }
  if ( a1->HighPart != -1 )
  {
    if ( !byte_1C0097F01 && (unsigned int)ndisCreateReceiveWorkerThreadPool() )
      return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
    if ( BYTE2(dword_1C0099FD8) )
    {
      LOBYTE(v2) = 1;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ndisTracePeriodicRcvOnOff)(
        0LL,
        v2,
        (unsigned int)a1->HighPart,
        (LARGE_INTEGER)DueTime.QuadPart);
    }
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    v3 = dword_1C0097F04;
    DueTime = a1[1];
    dword_1C0097F04 = a1->HighPart;
    byte_1C0097F01 = 1;
    if ( v3 == -1 )
      ndisSwitchMiniportReceiveFunction(6LL);
    goto LABEL_13;
  }
  if ( byte_1C0097F01 == 1 )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    DueTime.QuadPart = 0LL;
    dword_1C0097F04 = -1;
    if ( dword_1C0097F0C )
      byte_1C0097F01 = 0;
    ndisSwitchMiniportReceiveFunction(7LL);
    NdisReleaseRWLock(Lock, &LockState);
    if ( dword_1C0097F0C )
      ndisKillReceiveWorkerThreadPool();
  }
  return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
