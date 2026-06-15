/*
 * XREFs of ?SetAt@?$CAtlMap@_JV?$CComPtr@UIUnknown@@@ATL@@V?$CElementTraits@_J@2@V?$CElementTraits@V?$CComPtr@UIUnknown@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@_JAEBV?$CComPtr@UIUnknown@@@2@@Z @ 0x1800FD07C
 * Callers:
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1800FBBCC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAXPEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateNode@?$CAtlMap@_JV?$CComPtr@UIUnknown@@@ATL@@V?$CElementTraits@_J@2@V?$CElementTraits@V?$CComPtr@UIUnknown@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@_JII@Z @ 0x1800FC194 (-CreateNode@-$CAtlMap@_JV-$CComPtr@UIUnknown@@@ATL@@V-$CElementTraits@_J@2@V-$CElementTraits@V-$.c)
 *     ?GetNode@?$CAtlMap@_JV?$CComPtr@UIUnknown@@@ATL@@V?$CElementTraits@_J@2@V?$CElementTraits@V?$CComPtr@UIUnknown@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@_JAEAI1AEAPEAV312@@Z @ 0x1800FC364 (-GetNode@-$CAtlMap@_JV-$CComPtr@UIUnknown@@@ATL@@V-$CElementTraits@_J@2@V-$CElementTraits@V-$CCo.c)
 */

__int64 __fastcall ATL::CAtlMap<__int64,ATL::CComPtr<IUnknown>,ATL::CElementTraits<__int64>,ATL::CElementTraits<ATL::CComPtr<IUnknown>>>::SetAt(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3)
{
  __int64 Node; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v11 = -2LL;
  Node = ATL::CAtlMap<__int64,ATL::CComPtr<IUnknown>,ATL::CElementTraits<__int64>,ATL::CElementTraits<ATL::CComPtr<IUnknown>>>::GetNode(
           a1,
           a2,
           &v10,
           &v14,
           v12);
  v7 = Node;
  if ( Node )
  {
    if ( *(struct IUnknown **)(Node + 8) != *a3 )
      ATL::AtlComPtrAssign((struct IUnknown **)(Node + 8), *a3);
  }
  else
  {
    v8 = ATL::CAtlMap<__int64,ATL::CComPtr<IUnknown>,ATL::CElementTraits<__int64>,ATL::CElementTraits<ATL::CComPtr<IUnknown>>>::CreateNode(
           a1,
           a2,
           v10,
           v14);
    v7 = v8;
    v14 = v8;
    try
    {
      if ( *(struct IUnknown **)(v8 + 8) != *a3 )
        ATL::AtlComPtrAssign((struct IUnknown **)(v8 + 8), *a3);
    }
    catch ( ... )
    {
      ATL::CAtlMap<__int64,ATL::CComPtr<IUnknown>,ATL::CElementTraits<__int64>,ATL::CElementTraits<ATL::CComPtr<IUnknown>>>::RemoveAtPos(
        a1,
        v14);
      throw;
    }
  }
  return v7;
}
