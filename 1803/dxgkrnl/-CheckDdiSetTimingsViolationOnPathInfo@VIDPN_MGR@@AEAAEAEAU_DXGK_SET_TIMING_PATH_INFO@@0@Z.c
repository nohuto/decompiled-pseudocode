/*
 * XREFs of ?CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z @ 0x1C021CD60
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00F48DC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
        VIDPN_MGR *this,
        struct _DXGK_SET_TIMING_PATH_INFO *a2,
        struct _DXGK_SET_TIMING_PATH_INFO *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 VidPnTargetId; // rcx
  __int64 v13; // rcx

  v5 = *((_QWORD *)this + 1);
  if ( !v5 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v7);
    v5 = *((_QWORD *)this + 1);
  }
  if ( !DXGADAPTER::UsingSetTimingsFromVidPn(*(DXGADAPTER **)(v5 + 16)) )
    return 1;
  if ( a2->VidPnTargetId != a3->VidPnTargetId
    || a2->OutputColorSpace != a3->OutputColorSpace
    || a2->SelectedWireFormat.Value != a3->SelectedWireFormat.Value
    || a2->InputFlags != a3->InputFlags )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    VidPnTargetId = a2->VidPnTargetId;
    goto LABEL_21;
  }
  if ( a3->OutputFlags >= 2 || *((_DWORD *)&a3->TargetState + 2) >= 0x10000000u || a3->Reserved )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v10 + 24) = a3->VidPnTargetId;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a3->TargetState.ConnectionChangeId )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    VidPnTargetId = a3->VidPnTargetId;
LABEL_21:
    *(_QWORD *)(v11 + 24) = VidPnTargetId;
    goto LABEL_22;
  }
  v13 = *((_BYTE *)&a3->TargetState + 11) & 0xF;
  if ( (unsigned int)(v13 - 12) <= 2 && ((*(_BYTE *)&a2->Input & 3) != 3 || (_DWORD)v13 == 14) )
    return 1;
  v11 = WdLogNewEntry5_WdAssertion(v13);
  *(_QWORD *)(v11 + 24) = HIBYTE(*((_DWORD *)&a3->TargetState + 2)) & 0xF;
  *(_QWORD *)(v11 + 32) = a3->VidPnTargetId;
LABEL_22:
  WdLogEvent5_WdAssertion(v11);
  return 0;
}
