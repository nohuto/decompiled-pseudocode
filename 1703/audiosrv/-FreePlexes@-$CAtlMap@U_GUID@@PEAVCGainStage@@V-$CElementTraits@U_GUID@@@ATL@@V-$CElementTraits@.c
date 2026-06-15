/*
 * XREFs of ?FreePlexes@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXXZ @ 0x180025070
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001553C (--1CAudioSession@@MEAA@XZ.c)
 *     ?FreeNode@?$CAtlMap@U_GUID@@PEAVCGainStage@@V?$CElementTraits@U_GUID@@@ATL@@V?$CElementTraits@PEAVCGainStage@@@4@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18008BA08 (-FreeNode@-$CAtlMap@U_GUID@@PEAVCGainStage@@V-$CElementTraits@U_GUID@@@ATL@@V-$CElementTraits@PE.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180025818 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlMap<_GUID,CGainStage *,ATL::CElementTraits<_GUID>,ATL::CElementTraits<CGainStage *>>::FreePlexes(
        __int64 a1)
{
  ATL::CAtlPlex *v2; // rcx

  *(_QWORD *)(a1 + 64) = 0LL;
  v2 = *(ATL::CAtlPlex **)(a1 + 56);
  if ( v2 )
  {
    ATL::CAtlPlex::FreeDataChain(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
}
