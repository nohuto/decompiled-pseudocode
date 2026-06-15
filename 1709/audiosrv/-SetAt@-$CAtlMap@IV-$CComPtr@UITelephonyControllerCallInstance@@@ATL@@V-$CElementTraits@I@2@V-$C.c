/*
 * XREFs of ?SetAt@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@IAEBV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x1800EEC34
 * Callers:
 *     ?DoSetCellularEnable@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800EB030 (-DoSetCellularEnable@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?Initialize@TelephonyController@@IEAAJXZ @ 0x1800EDC74 (-Initialize@TelephonyController@@IEAAJXZ.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetNode@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@IAEAI0AEAPEAV312@@Z @ 0x18005B768 (-GetNode@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-.c)
 *     ?CreateNode@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@III@Z @ 0x1800EAE94 (-CreateNode@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-$.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::SetAt(
        __int64 a1,
        unsigned int a2,
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
  Node = ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::GetNode(
           a1,
           a2,
           (int *)&v10,
           (unsigned int *)&v14,
           v12);
  v7 = Node;
  if ( Node )
  {
    if ( *(struct IUnknown **)(Node + 8) != *a3 )
      ATL::AtlComPtrAssign((struct IUnknown **)(Node + 8), *a3);
  }
  else
  {
    v8 = ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::CreateNode(
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
      ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::RemoveAtPos(
        a1,
        v14);
      throw;
    }
  }
  return v7;
}
