/*
 * XREFs of ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x1801195C0
 * Callers:
 *     ?DoSetCellularEnable@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1801185A0 (-DoSetCellularEnable@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularRxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1801187EC (-DoSetCellularRxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetCellularTxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180118920 (-DoSetCellularTxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?DoSetProviderChange@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x180118A00 (-DoSetProviderChange@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z.c)
 *     ?GetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180118BD0 (-GetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularEnableSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180118D60 (-GetCellularEnableSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180118E00 (-GetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularRxMuteSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180118FD0 (-GetCellularRxMuteSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1801190E0 (-GetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularTxMuteSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1801192B0 (-GetCellularTxMuteSync@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetNode@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@IAEAI0AEAPEAV312@@Z @ 0x1800981EC (-GetNode@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-.c)
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
