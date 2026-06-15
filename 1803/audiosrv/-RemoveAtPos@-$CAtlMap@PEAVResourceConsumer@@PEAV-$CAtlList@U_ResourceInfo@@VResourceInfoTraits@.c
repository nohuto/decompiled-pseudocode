/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1801141DC
 * Callers:
 *     _ATL::CAtlMap_ResourceConsumer_____ptr64_ATL::CAtlList__ResourceInfo_ResourceInfoTraits______ptr64_ResourceConsumerTraits_ATL::CElementTraits_ATL::CAtlList__ResourceInfo_ResourceInfoTraits______ptr64___::SetAt_::_1_::catch$0 @ 0x180114396 (_ATL--CAtlMap_ResourceConsumer_____ptr64_ATL--CAtlList__ResourceInfo_ResourceInfoTr_ea_180114396.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 i; // rax

  v2 = 0LL;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) % *(_DWORD *)(a1 + 16));
  if ( a2 != *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)v4) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    for ( i = *(_QWORD *)(v2 + 16); i != a2; i = *(_QWORD *)(i + 16) )
      v2 = i;
  }
  return ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::RemoveNode(
           a1,
           a2,
           v2);
}
