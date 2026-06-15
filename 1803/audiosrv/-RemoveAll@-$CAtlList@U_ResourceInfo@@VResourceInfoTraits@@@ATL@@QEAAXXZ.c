/*
 * XREFs of ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x180114024
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180055D1C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800D9850 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ??1?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAA@XZ @ 0x18011344C (--1-$CAtlList@_KV-$CElementTraits@_K@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x180113464 (--1CConstraintModel@@UEAA@XZ.c)
 *     ?CleanResourceConsumptionMap@CConstraintModel@@AEAAXPEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@@Z @ 0x180113604 (-CleanResourceConsumptionMap@CConstraintModel@@AEAAXPEAV-$CAtlMap@PEAVResourceConsumer@@PEAV-$CA.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x180114024 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ??1TelephonyController@@MEAA@XZ @ 0x18011A1E0 (--1TelephonyController@@MEAA@XZ.c)
 *     ?Initialize@TelephonyController@@IEAAJXZ @ 0x18011AE04 (-Initialize@TelephonyController@@IEAAJXZ.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180042D04 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x180114024 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  ATL::CAtlPlex **v5; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    do
    {
      v2 = *(_QWORD **)a1;
      if ( !*(_QWORD *)a1 )
        ATL::AtlThrowImpl(-2147467259);
      *(_QWORD *)a1 = *v2;
      *v2 = *(_QWORD *)(a1 + 32);
      v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
      v4 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 32) = v2;
      if ( v3 )
      {
        ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(a1);
        v4 = *(_QWORD *)(a1 + 16);
      }
    }
    while ( v4 );
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = *(ATL::CAtlPlex ***)(a1 + 24);
  if ( v5 )
  {
    ATL::CAtlPlex::FreeDataChain(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
