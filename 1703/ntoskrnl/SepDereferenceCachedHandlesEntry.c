/*
 * XREFs of SepDereferenceCachedHandlesEntry @ 0x140461664
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x140247A90 (SepSetTokenBnoIsolation.c)
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x14051E5E0 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepCloseCachedTokenHandles @ 0x14003DB94 (SepCloseCachedTokenHandles.c)
 *     RtlRemoveEntryHashTable @ 0x1400667C0 (RtlRemoveEntryHashTable.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  __int64 v6; // rax
  BOOLEAN v8; // r14
  void *v9; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 88;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 88, 0LL);
  v6 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v6 <= 0 )
  {
    if ( v6 )
      __fastfail(0xEu);
    v8 = RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v3 + 8), (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v8 )
    {
      SepCloseCachedTokenHandles(*(_DWORD *)(a2 + 56), *(HANDLE **)(a2 + 64));
      v9 = *(void **)(a2 + 64);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
    return v4;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 0LL;
  }
}
