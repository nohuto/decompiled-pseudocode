/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x14068F1A8
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x140692C3C (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140692DDC (CmpVirtualPathPresent.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     CmpReferenceHive @ 0x140084160 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     CmpGetNextActiveHive @ 0x1404E3AA0 (CmpGetNextActiveHive.c)
 */

__int64 __fastcall CmpBlockTwoHiveWrites(__int64 a1, __int64 a2, char a3)
{
  char v3; // r14
  char v4; // bp
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 *v10; // rsi
  PERESOURCE *v11; // rcx

  v3 = 0;
  v4 = 0;
  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v10 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v10 = NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( (__int64 *)a1 == NextActiveHive || (__int64 *)a2 == NextActiveHive )
    {
      if ( a3 )
        CmpReferenceHive((__int64)NextActiveHive);
      ExAcquireResourceExclusiveLite((PERESOURCE)v10[356], 1u);
      if ( (__int64 *)a1 == v10 )
        v3 = 1;
      else
        v4 = 1;
      if ( (!a1 || v3 == 1) && (!a2 || v4 == 1) )
      {
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v10 + 347);
        break;
      }
    }
  }
  if ( a1 && !v3 || a2 && !v4 )
  {
    if ( v3 == 1 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
      if ( !a3 || _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5496), 0xFFFFFFFF) != 1 )
        return 3221225524LL;
      v11 = (PERESOURCE *)a1;
    }
    else
    {
      if ( v4 != 1 )
        return 3221225524LL;
      ExReleaseResourceLite(*(PERESOURCE *)(a2 + 2848));
      if ( !a3 || _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 5496), 0xFFFFFFFF) != 1 )
        return 3221225524LL;
      v11 = (PERESOURCE *)a2;
    }
    CmpDeleteHive(v11);
    return 3221225524LL;
  }
  return 0LL;
}
