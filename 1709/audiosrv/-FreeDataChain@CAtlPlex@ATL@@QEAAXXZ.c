/*
 * XREFs of ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x18005A990
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x180019B18 (--1CAudioSession@@MEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioStreamVolumeCallback@@V?$CElementTraits@PEAUIAudioStreamVolumeCallback@@@ATL@@@ATL@@QEAAXXZ @ 0x180031884 (-RemoveAll@-$CAtlList@PEAUIAudioStreamVolumeCallback@@V-$CElementTraits@PEAUIAudioStreamVolumeCa.c)
 *     ?FreePlexes@?$CAtlMap@KV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@K@2@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@AEAAXXZ @ 0x18005B63C (-FreePlexes@-$CAtlMap@KV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElemen.c)
 *     ?RemoveAll@?$CAtlList@PEAGV?$CElementTraits@PEAG@ATL@@@ATL@@QEAAXXZ @ 0x1800651BC (-RemoveAll@-$CAtlList@PEAGV-$CElementTraits@PEAG@ATL@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@QEAAXXZ @ 0x1800A2AB0 (-RemoveAll@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtrE.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_149a920f_402c_418b_8687_6fa74df4953b@@3U__s_GUID@@B@2@@ATL@@QEAAXXZ @ 0x1800E8E84 (-RemoveAll@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_149a920f_402c_418b_8687_6fa74df495.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VPhoneTopology3WorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopology3WorkItem@@@2@@ATL@@QEAAXXZ @ 0x1800EC490 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VPhoneTopology3WorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhone.c)
 *     ?RemoveAll@?$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEAAXXZ @ 0x1800EEA18 (-RemoveAll@-$CAtlList@U_tagKSTOPOLOGY_ENDPOINTIDPAIR@@VRoutingPairsTraits@@@ATL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlPlex::FreeDataChain(ATL::CAtlPlex **this)
{
  ATL::CAtlPlex *v1; // rbx

  if ( this )
  {
    do
    {
      v1 = *this;
      free(this);
      this = (ATL::CAtlPlex **)v1;
    }
    while ( v1 );
  }
}
