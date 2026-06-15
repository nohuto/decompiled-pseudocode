/*
 * XREFs of ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x1800EC1A0
 * Callers:
 *     ?DoSetCellularEnable@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800EB030 (-DoSetCellularEnable@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularRxMute@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800EB28C (-DoSetCellularRxMute@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularTxMute@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800EB3C0 (-DoSetCellularTxMute@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetProviderChange@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x1800EB4A0 (-DoSetProviderChange@PhoneTopology3@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@.c)
 *     ?GetCellularEnable@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1800EB6D0 (-GetCellularEnable@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularRxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1800EB860 (-GetCellularRxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularTxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1800EBA30 (-GetCellularTxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180030BA4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetNode@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@IAEAI0AEAPEAV312@@Z @ 0x18005B768 (-GetNode@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-.c)
 */

char __fastcall ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
        __int64 a1,
        unsigned int a2,
        struct IUnknown **a3)
{
  __int64 Node; // rax
  struct IUnknown *v5; // rdx
  int v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+20h] BYREF

  Node = ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::GetNode(
           a1,
           a2,
           &v7,
           &v9,
           &v8);
  if ( Node )
  {
    v5 = *(struct IUnknown **)(Node + 8);
    if ( *a3 != v5 )
      ATL::AtlComPtrAssign(a3, v5);
    LOBYTE(Node) = 1;
  }
  return Node;
}
