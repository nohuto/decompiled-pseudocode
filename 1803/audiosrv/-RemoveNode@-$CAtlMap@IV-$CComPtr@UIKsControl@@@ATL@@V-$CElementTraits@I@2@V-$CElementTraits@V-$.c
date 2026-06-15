/*
 * XREFs of ?RemoveNode@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x18011BE38
 * Callers:
 *     ?RemoveAtPos@?$CAtlMap@_JV?$CComPtr@UIUnknown@@@ATL@@V?$CElementTraits@_J@2@V?$CElementTraits@V?$CComPtr@UIUnknown@@@ATL@@@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18011BDE8 (-RemoveAtPos@-$CAtlMap@_JV-$CComPtr@UIUnknown@@@ATL@@V-$CElementTraits@_J@2@V-$CElementTraits@V-.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::RemoveNode(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a3 )
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 16);
  else
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 24) % *(_DWORD *)(a1 + 16))) = *(_QWORD *)(a2 + 16);
  ATL::CAtlMap<__int64,ATL::CComPtr<IUnknown>,ATL::CElementTraits<__int64>,ATL::CElementTraits<ATL::CComPtr<IUnknown>>>::FreeNode(
    a1,
    a2);
}
