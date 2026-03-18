/*
 * XREFs of ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021E594
 * Callers:
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021E39C (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z @ 0x1C021E420 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0004454 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00AA594 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00BA5A8 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C00BF2FC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C010DA38 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C0111174 (-SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0156EAC (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C022168C (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02225E4 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UpdateTargetLinkTrainingStatus(
        VIDPN_MGR *this,
        struct _DXGK_CONNECTION_CHANGE *a2,
        unsigned __int8 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbp
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rbp
  unsigned int v11; // edx
  unsigned int v12; // ebx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v14; // rcx
  DMMVIDEOPRESENTTARGET *v15; // rsi
  __int64 v16; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 TargetLinkTrainingStatus; // r14
  ULONGLONG ConnectionChangeId; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  const struct DMMVIDPNTOPOLOGY *v28; // r11
  DMMVIDPNPRESENTPATH *v29; // r13
  __int64 v30; // r15
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  char v35; // r13
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rdi
  _QWORD *v39; // rax
  __int64 v40; // rcx
  PERESOURCE **v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  ULONGLONG v45; // [rsp+40h] [rbp-48h] BYREF
  __int64 v46[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v47; // [rsp+90h] [rbp+8h] BYREF
  int CurrentProcessSessionId; // [rsp+98h] [rbp+10h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v49; // [rsp+A8h] [rbp+20h]

  v49 = a4;
  v4 = *((_QWORD *)this + 1);
  if ( !v4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
    v4 = *((_QWORD *)this + 1);
  }
  v9 = *((_DWORD *)a2 + 2);
  v10 = *(_QWORD *)(v4 + 16);
  v11 = v9 & 0xFFFFFF;
  v12 = HIBYTE(v9) & 0xF;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 10), v11);
  v15 = TargetById;
  if ( !TargetById )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFFLL;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  TargetLinkTrainingStatus = (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v45);
  if ( a3 )
    DxgkLogCodePointPacket(0x58u, *((_DWORD *)a2 + 2) & 0xFFFFFF, v12, a2->ConnectionChangeId, *(_QWORD *)(v10 + 268));
  ConnectionChangeId = a2->ConnectionChangeId;
  if ( v45 <= a2->ConnectionChangeId )
  {
    if ( v45 == a2->ConnectionChangeId )
    {
      if ( v12 == (_DWORD)TargetLinkTrainingStatus )
        return 0LL;
      if ( (unsigned int)(TargetLinkTrainingStatus - 13) <= 1 )
      {
        if ( v12 == 12 )
        {
          v23 = WdLogNewEntry5_WdDmmEvent(ConnectionChangeId);
          WdLogEvent5_WdDmmEvent(v23);
          return 0LL;
        }
        if ( !a3 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId);
          v24[3] = TargetLinkTrainingStatus;
          v24[4] = v10;
          v24[5] = *((_DWORD *)a2 + 2) & 0xFFFFFFLL;
LABEL_16:
          WdLogEvent5_WdAssertion(v24);
          return 0LL;
        }
        if ( (_DWORD)TargetLinkTrainingStatus != 13 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId);
          v24[3] = v12;
          v24[4] = TargetLinkTrainingStatus;
          goto LABEL_16;
        }
      }
    }
    *(_DWORD *)(*((_QWORD *)v15 + 64) + 24LL) = v12;
    *(_QWORD *)(*((_QWORD *)v15 + 64) + 16LL) = ConnectionChangeId;
    if ( v12 == (_DWORD)TargetLinkTrainingStatus )
      return 0LL;
    v25 = *((_QWORD *)this + 11);
    if ( !v25 )
    {
      v46[0] = 0LL;
LABEL_47:
      auto_rc<DMMVIDPN const>::reset(v46, 0LL);
      return 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 32));
    v26 = *((_QWORD *)this + 11);
    v46[0] = v26;
    if ( !v26 )
      goto LABEL_47;
    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v26 + 96), *((_DWORD *)a2 + 2) & 0xFFFFFF);
    v29 = PathFromTarget;
    if ( !PathFromTarget )
      goto LABEL_47;
    v30 = *(unsigned int *)(*((_QWORD *)PathFromTarget + 11) + 24LL);
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                v28,
                                                *(_DWORD *)(*((_QWORD *)PathFromTarget + 11) + 24LL),
                                                &v47);
    v32 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
    if ( (int)v32 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v32);
      WdLogEvent5_WdAssertion(v33);
    }
    v34 = *(_QWORD *)(v10 + 2464);
    LOBYTE(v47) = (*((_DWORD *)a2 + 2) & 0xFFFFFF) == v47;
    if ( v34 )
      ADAPTER_RENDER::FlushScheduler(v34, 8, v30, 0);
    if ( v12 == 14 )
    {
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v15);
      DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v15, 1u);
      DMMVIDPNPRESENTPATH::SetDriverGammaRamp(v29);
      v35 = v47;
      if ( !(_BYTE)v47 )
        goto LABEL_47;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 2456) + 112LL) + 3760 * v30 + 1068) = *((_DWORD *)a2 + 2) & 0xFFFFFF;
      v36 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v10 + 2456), v30, 1, 0, a3);
      v38 = v36;
      if ( v36 >= 0 )
        goto LABEL_47;
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v39[3] = v10;
      v39[4] = v30;
      v39[5] = v38;
      WdLogEvent5_WdError(v39);
    }
    else
    {
      if ( v12 != 13 )
      {
        v35 = v47;
        goto LABEL_37;
      }
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v15);
      v35 = v47;
    }
    v12 = 13;
LABEL_37:
    DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v15, 0);
    if ( (_DWORD)TargetLinkTrainingStatus == 14 )
    {
      v41 = *(PERESOURCE ***)(v10 + 2456);
      if ( v35 )
        ADAPTER_DISPLAY::SetVidPnSourceActive(v41, v30, 0, 0, a3);
      else
        ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)v41, v30, 0, 0x800u, a3);
    }
    if ( v12 == 13 )
    {
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v40) + 1745) )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v42);
        if ( (int)ZwUpdateWnfStateData(
                    &WNF_DXGK_PATH_FAILED_OR_INVALIDATED,
                    0LL,
                    0LL,
                    0LL,
                    &CurrentProcessSessionId,
                    0,
                    0) < 0 )
        {
          v44 = WdLogNewEntry5_WdError(v43);
          *(_QWORD *)(v44 + 24) = v10;
          WdLogEvent5_WdError(v44);
        }
      }
      else
      {
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(DXGADAPTER ***)(v10 + 2456), 0LL, v49);
      }
    }
    else
    {
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v15, 1u);
    }
    goto LABEL_47;
  }
  v22 = WdLogNewEntry5_WdWarning(ConnectionChangeId, v18, v19);
  WdLogEvent5_WdWarning(v22);
  return 0LL;
}
