/*
 * XREFs of CmpDestroyTemporaryHive @ 0x14069DC04
 * Callers:
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14069D3CC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14069DCAC (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     CmpDestroySecurityCache @ 0x140470024 (CmpDestroySecurityCache.c)
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 *     CmpRemoveHiveFromMapping @ 0x140692404 (CmpRemoveHiveFromMapping.c)
 */

void __fastcall CmpDestroyTemporaryHive(char *P)
{
  __int64 v2; // r8
  char *v3; // rdi
  __int64 v4; // rdx
  char **v5; // rax

  if ( P )
  {
    CmpDestroySecurityCache((__int64)P);
    v3 = P + 5368;
    if ( *(char **)v3 != v3 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
      v4 = *(_QWORD *)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = (char **)*((_QWORD *)P + 672), *v5 != v3) )
        __fastfail(3u);
      *v5 = (char *)v4;
      *(_QWORD *)(v4 + 8) = v5;
      ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    }
    if ( (*((_DWORD *)P + 1340) & 2) != 0 )
      CmpRemoveHiveFromMapping((__int64)P);
    HvFreeHive((__int64)P, 1, v2);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 1374, 0xFFFFFFFF) == 1 )
      CmpDeleteHive((PERESOURCE *)P);
  }
}
