/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x1404D83B0
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1404D37D0 (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140667F7C (CmpVirtualPathPresent.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 * Callees:
 *     CmpDeleteHive @ 0x14007EE7C (CmpDeleteHive.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     CmpReferenceHive @ 0x1400F0030 (CmpReferenceHive.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 */

__int64 __fastcall CmpBlockTwoHiveWrites(__int64 a1, __int64 a2, char a3)
{
  char v3; // r14
  char v4; // bp
  __int64 i; // rcx
  __int64 NextActiveHive; // rax
  __int64 v10; // rsi
  __int64 v12; // rcx

  v3 = 0;
  v4 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v10 = NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( a1 == NextActiveHive || a2 == NextActiveHive )
    {
      if ( a3 )
        CmpReferenceHive(NextActiveHive);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v10 + 2848), 1u);
      if ( a1 == v10 )
        v3 = 1;
      else
        v4 = 1;
      if ( (!a1 || v3 == 1) && (!a2 || v4 == 1) )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v10 + 2776));
        break;
      }
    }
  }
  if ( (!a1 || v3) && (!a2 || v4) )
    return 0LL;
  if ( v3 == 1 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
    if ( !a3 || _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 5496), 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v12 = a1;
  }
  else
  {
    if ( v4 != 1 )
      return 3221225524LL;
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 2848));
    if ( !a3 || _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 5496), 0xFFFFFFFF) != 1 )
      return 3221225524LL;
    v12 = a2;
  }
  CmpDeleteHive(v12);
  return 3221225524LL;
}
