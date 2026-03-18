/*
 * XREFs of PnpNotifyDeviceClassChange @ 0x1404A6D00
 * Callers:
 *     PnpDeviceEventWorker @ 0x1404A58F0 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400676A0 (PsGetServerSiloServiceSessionId.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x1404A6E8C (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140571900 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromSymbolicName @ 0x140581E44 (IopGetSessionIdFromSymbolicName.c)
 */

__int64 __fastcall PnpNotifyDeviceClassChange(__int128 *a1, __int64 *a2, __int64 a3)
{
  __int128 v4; // xmm1
  int SessionIdFromSymbolicName; // edi
  __int64 **v7; // r14
  __int64 *v8; // rbx
  __int64 *v9; // rbp
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
  v7 = (__int64 **)((char *)&PnpDeviceClassNotifyList
                  + 16 * ((*(_DWORD *)a2 + *((_DWORD *)a2 + 1) + *((_DWORD *)a2 + 2) + *((_DWORD *)a2 + 3)) % 0xDu));
  v8 = *v7;
  while ( v8 != (__int64 *)v7 )
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
      && (v8 + 10 == a2 || RtlCompareMemory(v8 + 10, a2, 0x10uLL) == 16) )
    {
      PnpNotifyDriverCallback(v8, &v13, v12);
    }
    ExReleaseResourceLite((PERESOURCE)v8[9]);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
    v8 = (__int64 *)*v8;
    PnpDereferenceNotify(v9);
  }
  KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
  return 0LL;
}
