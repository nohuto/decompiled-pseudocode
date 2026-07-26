/*
 * XREFs of ndisConfigurePeriodicReceives @ 0x1C00050B0
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0100008 (ndisHandlePnPRequest.c)
 *     ndisInitializePeriodicReceives @ 0x1C011EDC8 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005220 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C00052A0 (NdisAcquireRWLockWrite.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C0005358 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C0050558 (ndisTracePeriodicRcvOnOff.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C00C8718 (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00E50B4 (ndisKillReceiveWorkerThreadPool.c)
 */

LONG __fastcall ndisConfigurePeriodicReceives(LARGE_INTEGER *a1)
{
  __int64 v2; // rdx
  int v4; // ecx
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp+8h] BYREF

  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( !a1 )
  {
    DueTime.QuadPart = 0LL;
    dword_1C0098DC4 = -1;
    if ( dword_1C0098DCC || (unsigned int)ndisCreateReceiveWorkerThreadPool() )
      return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    byte_1C0098DC1 = 1;
LABEL_11:
    NdisReleaseRWLock(Lock, &LockState);
    return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
  }
  if ( a1->HighPart != -1 )
  {
    if ( !byte_1C0098DC1 && (unsigned int)ndisCreateReceiveWorkerThreadPool() )
      return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
    if ( BYTE2(dword_1C009AF18) )
    {
      LOBYTE(v2) = 1;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ndisTracePeriodicRcvOnOff)(
        0LL,
        v2,
        (unsigned int)a1->HighPart,
        (LARGE_INTEGER)DueTime.QuadPart);
    }
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    v4 = dword_1C0098DC4;
    DueTime = a1[1];
    dword_1C0098DC4 = a1->HighPart;
    byte_1C0098DC1 = 1;
    if ( v4 == -1 )
      ndisSwitchMiniportReceiveFunction(6LL);
    goto LABEL_11;
  }
  if ( byte_1C0098DC1 == 1 )
  {
    NdisAcquireRWLockWrite(Lock, &LockState, 0);
    DueTime.QuadPart = 0LL;
    dword_1C0098DC4 = -1;
    if ( dword_1C0098DCC )
      byte_1C0098DC1 = 0;
    ndisSwitchMiniportReceiveFunction(7LL);
    NdisReleaseRWLock(Lock, &LockState);
    if ( dword_1C0098DCC )
      ndisKillReceiveWorkerThreadPool();
  }
  return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
