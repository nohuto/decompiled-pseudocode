/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x14002FEB8
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140007B00 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000F8F0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ??1?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAA@XZ @ 0x14002FF18 (--1-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x14002FF48 (--1-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V-$.c)
 *     ?FreeNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14003EDE8 (-FreeNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x1400415CC (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14002F028 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14003EDE8 (-FreeNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@.c)
 */

void __fastcall ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(
        __int64 a1)
{
  ATL::CAtlPlex **v2; // rcx

  while ( *(_QWORD *)(a1 + 16) )
  {
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = **(_QWORD **)a1;
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = *(ATL::CAtlPlex ***)(a1 + 24);
  if ( v2 )
  {
    ATL::CAtlPlex::FreeDataChain(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
