/*
 * XREFs of SepDereferenceCachedHandlesEntry @ 0x14048D324
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x140101B68 (SepSetTokenBnoIsolation.c)
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x14048D160 (SepTokenDeleteMethod.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     SepCloseCachedTokenHandles @ 0x140101F64 (SepCloseCachedTokenHandles.c)
 *     RtlRemoveEntryHashTable @ 0x140103D20 (RtlRemoveEntryHashTable.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  __int64 v6; // rax
  char v7; // bl
  BOOLEAN v9; // r14
  char v10; // bl
  void *v11; // rcx

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
    v9 = RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v3 + 8), (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2, 0LL);
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v9 )
    {
      SepCloseCachedTokenHandles(*(_DWORD *)(a2 + 56), *(HANDLE **)(a2 + 64));
      v11 = *(void **)(a2 + 64);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
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
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
}
