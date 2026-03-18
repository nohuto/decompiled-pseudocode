/*
 * XREFs of PnpNotifyDeviceClassChange @ 0x1406027D0
 * Callers:
 *     PnpDeviceEventWorker @ 0x14051FE70 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     PsGetServerSiloServiceSessionId @ 0x14006D170 (PsGetServerSiloServiceSessionId.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSilo @ 0x1400F17B0 (PsGetCurrentServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     PnpNotifyDriverCallback @ 0x1405E28F8 (PnpNotifyDriverCallback.c)
 *     PnpDereferenceNotify @ 0x1405E5808 (PnpDereferenceNotify.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14060295C (IopGetSessionIdFromSymbolicName.c)
 */

__int64 __fastcall PnpNotifyDeviceClassChange(__int128 *a1, _DWORD *a2, __int64 a3)
{
  __int128 v4; // xmm1
  int SessionIdFromSymbolicName; // edi
  __int64 *v7; // r14
  __int64 v8; // rbx
  PVOID **v9; // rbp
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int v13; // [rsp+20h] [rbp-78h] BYREF
  int v14; // [rsp+28h] [rbp-70h] BYREF
  __int128 v15; // [rsp+2Ch] [rbp-6Ch]
  __int128 v16; // [rsp+3Ch] [rbp-5Ch]
  __int64 v17; // [rsp+50h] [rbp-48h]

  v4 = *(_OWORD *)a2;
  SessionIdFromSymbolicName = -1;
  v15 = *a1;
  v14 = 3145729;
  v16 = v4;
  v17 = a3;
  ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
  v7 = (__int64 *)((char *)&PnpDeviceClassNotifyList + 16 * ((*a2 + a2[1] + a2[2] + a2[3]) % 0xDu));
  v8 = *v7;
  while ( (__int64 *)v8 != v7 )
  {
    v9 = (PVOID **)v8;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *(_DWORD *)(v8 + 20) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
      SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(a3);
    ++*(_WORD *)(v8 + 56);
    KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v8 + 72), 1u);
    if ( (SessionIdFromSymbolicName == -1 || *(_DWORD *)(v8 + 20) == SessionIdFromSymbolicName)
      && !*(_BYTE *)(v8 + 58)
      && ((_DWORD *)(v8 + 80) == a2 || RtlCompareMemory((const void *)(v8 + 80), a2, 0x10uLL) == 16) )
    {
      PnpNotifyDriverCallback(v8, (__int64)&v14, &v13);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v8 + 72));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
    v8 = *(_QWORD *)v8;
    PnpDereferenceNotify(v9);
  }
  KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
  return 0LL;
}
