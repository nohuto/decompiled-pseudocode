/*
 * XREFs of ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00A4154
 * Callers:
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C007B228 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007B478 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00A4228 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00D701C (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00E1E38 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@I@Z @ 0x1C00E223C (-DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_C.c)
 *     ?EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C00E3430 (-EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1C00F74A0 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C00FA9D0 (-EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01EB850 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C01EC290 (-DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTE.c)
 *     ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C01ECBE8 (-DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C01ED218 (-DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z.c)
 *     ?DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z @ 0x1C01ED4A8 (-DmmIsSourcePresentedOnClientVidPnUsedByFirmware@@YAJQEAXIPEAE@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C01EDC70 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C01EE49C (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01EEFF0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01F3158 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C01F3698 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01F5934 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
        DMMVIDPNTOPOLOGY *this,
        _QWORD *a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // rsi
  DMMVIDPNTOPOLOGY *v7; // rbx
  DMMVIDPNTOPOLOGY *v8; // r9
  __int64 v9; // r8
  __int64 result; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = (unsigned int)a2;
  v7 = this;
  if ( !a4 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  *a4 = -1;
  v8 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v7 + 3);
  v9 = 0LL;
  if ( v8 != (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
  {
    a2 = (_QWORD *)((char *)v8 - 8);
    while ( a2 )
    {
      if ( *(_DWORD *)(a2[11] + 24LL) == (_DWORD)v4 )
      {
        if ( v9 == a3 )
        {
          result = 0LL;
          *a4 = *(_DWORD *)(a2[12] + 24LL);
          return result;
        }
        ++v9;
      }
      this = (DMMVIDPNTOPOLOGY *)a2[1];
      a2 = (_QWORD *)((char *)this - 8);
      if ( this == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
        a2 = 0LL;
    }
  }
  if ( v8 == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) || *((_QWORD *)v7 + 3) == 8LL )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = v7;
  }
  else
  {
    if ( v9 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
      v11[3] = v7;
      v11[4] = v4;
      v11[5] = a3;
      return 1075708748LL;
    }
    v13 = WdLogNewEntry5_WdTrace(this, a2);
    *(_QWORD *)(v13 + 24) = v4;
    *(_QWORD *)(v13 + 32) = v7;
  }
  return 3223192377LL;
}
