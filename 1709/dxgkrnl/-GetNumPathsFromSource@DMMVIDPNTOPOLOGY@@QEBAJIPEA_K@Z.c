/*
 * XREFs of ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00A38D4
 * Callers:
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00A45F0 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A7A6C (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00A8B60 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z @ 0x1C00B68B0 (-GetVidPnPathsSourcesTargetsCount@@YAXPEAVDXGADAPTER@@PEAVDMMVIDPN@@PEAI22@Z.c)
 *     ?GetNumPathsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C00D37C0 (-GetNumPathsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IP.c)
 *     ?GetNumPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IPEA_K@Z @ 0x1C00E34E0 (-GetNumPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C00F74A0 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01EB850 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01EEFF0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C01F2644 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01F3158 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01F5934 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000A36C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::GetNumPathsFromSource(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rbx
  __int64 Container; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  DMMVIDPNTOPOLOGY *v9; // r8
  char *v10; // r8
  DMMVIDPNTOPOLOGY *v11; // rax
  char *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v3 = a2;
  if ( a3 )
  {
    *a3 = 0LL;
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    if ( IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v3) )
    {
      v8 = 0LL;
      v9 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
      if ( v9 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
        goto LABEL_12;
      v10 = (char *)v9 - 8;
      if ( !v10 )
        goto LABEL_12;
      do
      {
        v11 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v10 + 1);
        v12 = v10 + 88;
        v10 = (char *)v11 - 8;
        if ( v11 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
          v10 = 0LL;
        v7 = *(unsigned int *)(*(_QWORD *)v12 + 24LL);
        v13 = v8 + 1;
        if ( (_DWORD)v7 != (_DWORD)v3 )
          v13 = v8;
        v8 = v13;
      }
      while ( v10 );
      if ( v13 )
      {
        *a3 = v13;
        return 0LL;
      }
      else
      {
LABEL_12:
        v15 = WdLogNewEntry5_WdTrace(v7, v8);
        *(_QWORD *)(v15 + 24) = v3;
        *(_QWORD *)(v15 + 32) = this;
        return 3223192377LL;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v17 + 24) = v3;
      WdLogEvent5_WdError(v17);
      return 3223192324LL;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = v3;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
}
