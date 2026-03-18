/*
 * XREFs of PnpNotifyDeviceClassChange @ 0x140585D88
 * Callers:
 *     PnpDeviceEventWorker @ 0x14054B420 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400DF800 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x140585F14 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140586518 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromSymbolicName @ 0x140586638 (IopGetSessionIdFromSymbolicName.c)
 */

__int64 __fastcall PnpNotifyDeviceClassChange(__int128 *a1, _DWORD *a2, __int64 a3)
{
  __int128 v4; // xmm1
  int SessionIdFromSymbolicName; // edi
  _QWORD *v7; // r14
  _QWORD *v8; // rbx
  void *v9; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-78h] BYREF
  int v13; // [rsp+28h] [rbp-70h] BYREF
  __int128 v14; // [rsp+2Ch] [rbp-6Ch]
  __int128 v15; // [rsp+3Ch] [rbp-5Ch]
  __int64 v16; // [rsp+50h] [rbp-48h]

  v4 = *(_OWORD *)a2;
  SessionIdFromSymbolicName = -1;
  v14 = *a1;
  v13 = 3145729;
  v15 = v4;
  v16 = a3;
  ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
  v7 = (_QWORD *)((char *)&PnpDeviceClassNotifyList + 16 * ((*a2 + a2[1] + a2[2] + a2[3]) % 0xDu));
  v8 = (_QWORD *)*v7;
  while ( v8 != v7 )
  {
    v9 = v8;
    if ( *((_DWORD *)v8 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(-1LL) )
      SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(a3);
    ++*((_WORD *)v8 + 28);
    KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v8[9], 1u);
    if ( (SessionIdFromSymbolicName == -1 || *((_DWORD *)v8 + 5) == SessionIdFromSymbolicName)
      && !*((_BYTE *)v8 + 58)
      && (v8 + 10 == (_QWORD *)a2 || RtlCompareMemory(v8 + 10, a2, 0x10uLL) == 16) )
    {
      PnpNotifyDriverCallback(v8, &v13, v12);
    }
    ExReleaseResourceLite((PERESOURCE)v8[9]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
    v8 = (_QWORD *)*v8;
    PnpDereferenceNotify(v9);
  }
  KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
  return 0LL;
}
