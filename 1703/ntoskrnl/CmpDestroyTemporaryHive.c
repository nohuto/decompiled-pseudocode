/*
 * XREFs of CmpDestroyTemporaryHive @ 0x140672B30
 * Callers:
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140672BD8 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CmpDestroySecurityCache @ 0x1404CF38C (CmpDestroySecurityCache.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     CmpRemoveHiveFromMapping @ 0x140667944 (CmpRemoveHiveFromMapping.c)
 */

void __fastcall CmpDestroyTemporaryHive(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  _QWORD *v4; // rax

  if ( a1 )
  {
    CmpDestroySecurityCache(a1);
    v2 = a1 + 5368;
    if ( *(_QWORD *)v2 != v2 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
      v3 = *(_QWORD *)v2;
      v4 = *(_QWORD **)(a1 + 5376);
      if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || *v4 != v2 )
        __fastfail(3u);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    }
    if ( (*(_DWORD *)(a1 + 5360) & 2) != 0 )
      CmpRemoveHiveFromMapping(a1);
    HvFreeHive(a1, 1);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5496), 0xFFFFFFFF) == 1 )
      CmpDeleteHive(a1);
  }
}
