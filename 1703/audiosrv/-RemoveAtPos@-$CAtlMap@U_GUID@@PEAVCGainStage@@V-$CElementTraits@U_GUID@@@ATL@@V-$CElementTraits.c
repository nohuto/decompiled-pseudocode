/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18008EE9C
 * Callers:
 *     _ATL::CAtlMap__GUID_CGainStage_____ptr64_ATL::CElementTraits__GUID__ATL::CElementTraits_CGainStage_____ptr64___::SetAt_::_1_::catch$0 @ 0x18008F4D6 (_ATL--CAtlMap__GUID_CGainStage_____ptr64_ATL--CElementTraits__GUID__ATL--CElementTr_ea_18008F4D6.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 i; // rax

  v2 = 0LL;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 32) % *(_DWORD *)(a1 + 16));
  if ( a2 != *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)v4) )
  {
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    for ( i = *(_QWORD *)(v2 + 24); i != a2; i = *(_QWORD *)(i + 24) )
      v2 = i;
  }
  return ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::RemoveNode(
           a1,
           a2,
           v2);
}
