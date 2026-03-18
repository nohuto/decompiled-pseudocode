/*
 * XREFs of ?CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@CAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z @ 0x1C00A6790
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
        struct _DXGK_SET_TIMING_PATH_INFO *a1,
        struct _DXGK_SET_TIMING_PATH_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 VidPnTargetId; // rcx

  if ( a1->VidPnTargetId != a2->VidPnTargetId
    || a1->OutputColorSpace != a2->OutputColorSpace
    || a1->SelectedWireFormat.Value != a2->SelectedWireFormat.Value
    || a1->InputFlags != a2->InputFlags )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    VidPnTargetId = a1->VidPnTargetId;
    goto LABEL_18;
  }
  if ( a2->OutputFlags >= 2 || *((_DWORD *)&a2->TargetState + 2) >= 0x10000000u || a2->Reserved )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = a2->VidPnTargetId;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a2->TargetState.ConnectionChangeId )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    VidPnTargetId = a2->VidPnTargetId;
LABEL_18:
    *(_QWORD *)(v9 + 24) = VidPnTargetId;
    goto LABEL_19;
  }
  v6 = *((_DWORD *)&a2->TargetState + 2) & 0xF000000;
  if ( (((_DWORD)v6 - 201326592) & 0xFCFFFFFF) == 0
    && (_DWORD)v6 != 251658240
    && ((*(_BYTE *)&a1->Input & 3) != 3 || (_DWORD)v6 == 234881024) )
  {
    return 1;
  }
  v9 = WdLogNewEntry5_WdAssertion(v6, 251658240LL, a3, a4);
  *(_QWORD *)(v9 + 24) = HIBYTE(*((_DWORD *)&a2->TargetState + 2)) & 0xF;
  *(_QWORD *)(v9 + 32) = a2->VidPnTargetId;
LABEL_19:
  WdLogEvent5_WdAssertion(v9);
  return 0;
}
