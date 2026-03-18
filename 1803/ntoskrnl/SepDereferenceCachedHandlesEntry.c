/*
 * XREFs of SepDereferenceCachedHandlesEntry @ 0x140546F80
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x14006B930 (SepSetTokenBnoIsolation.c)
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x140593260 (SepTokenDeleteMethod.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     SepCloseCachedTokenHandles @ 0x14009EFF4 (SepCloseCachedTokenHandles.c)
 *     RtlRemoveEntryHashTable @ 0x1400A1100 (RtlRemoveEntryHashTable.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rbx
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  char v10; // di
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  BOOLEAN v15; // r14
  char v16; // di
  void *v17; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 88;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 88, 0LL);
  v9 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v9 <= 0 )
  {
    if ( v9 )
      __fastfail(0xEu);
    v15 = RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v3 + 8), (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2, 0LL);
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3, v12, v13, v14);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v15 )
    {
      SepCloseCachedTokenHandles(*(_DWORD *)(a2 + 56), *(HANDLE **)(a2 + 64));
      v17 = *(void **)(a2 + 64);
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
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
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3, v6, v7, v8);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
}
