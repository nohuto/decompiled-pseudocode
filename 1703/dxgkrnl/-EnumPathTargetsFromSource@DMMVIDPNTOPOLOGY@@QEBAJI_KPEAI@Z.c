/*
 * XREFs of ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00E05D4
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00A2884 (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00A2B34 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00A9380 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     ?EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C00AD190 (-EnumPathTargetsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY.c)
 *     ?CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00AD730 (-CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00DFE24 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00E0C78 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C01D2068 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01D3910 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     DmmGetMacrovisonSupportFromClientVidPnSource @ 0x1C01D5330 (DmmGetMacrovisonSupportFromClientVidPnSource.c)
 *     DmmGetPathContentFromClientVidPnSource @ 0x1C01D5B38 (DmmGetPathContentFromClientVidPnSource.c)
 *     DmmIsSourcePresentedOnClientVidPnAnalogTvOut @ 0x1C01D60F8 (DmmIsSourcePresentedOnClientVidPnAnalogTvOut.c)
 *     DmmRemovePathsFromVidPnSource @ 0x1C01D66F0 (DmmRemovePathsFromVidPnSource.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C01D6C10 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01DA204 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C01DA748 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@I_KPEAI@Z @ 0x1C01DB3F0 (-EnumPathTargetsFromSource@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01DCF34 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
        DMMVIDPNTOPOLOGY *this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // rsi
  _QWORD *v8; // rdx
  __int64 v9; // r8
  __int64 result; // rax
  DMMVIDPNTOPOLOGY *v11; // rcx
  DMMVIDPNTOPOLOGY *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = (unsigned int)a2;
  if ( !a4 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, 0LL);
    WdLogEvent5_WdAssertion(v15);
  }
  *a4 = -1;
  v8 = (_QWORD *)*((_QWORD *)this + 3);
  v9 = 0LL;
  if ( v8 != (_QWORD *)((char *)this + 24) )
  {
    --v8;
    while ( v8 )
    {
      if ( *(_DWORD *)(v8[11] + 24LL) == (_DWORD)v4 )
      {
        if ( v9 == a3 )
        {
          result = 0LL;
          *a4 = *(_DWORD *)(v8[12] + 24LL);
          return result;
        }
        ++v9;
      }
      v11 = (DMMVIDPNTOPOLOGY *)v8[1];
      v8 = (_QWORD *)((char *)v11 - 8);
      if ( v11 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
        v8 = 0LL;
    }
  }
  v12 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  if ( v12 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) || v12 == (DMMVIDPNTOPOLOGY *)8 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v8, v9, a4) + 24) = this;
  }
  else
  {
    if ( v9 )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v8, v9, a4);
      v13[3] = this;
      v13[4] = v4;
      v13[5] = a3;
      return 1075708748LL;
    }
    v14 = WdLogNewEntry5_WdTrace(v12, v8, 0LL, a4);
    *(_QWORD *)(v14 + 24) = v4;
    *(_QWORD *)(v14 + 32) = this;
  }
  return 3223192377LL;
}
