/*
 * XREFs of ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F2B14
 * Callers:
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F2920 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z @ 0x1C01F29A4 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000586C (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ?IsHpdHandlingEnabled@DXGGLOBAL@@QEBA_NXZ @ 0x1C001D6EC (-IsHpdHandlingEnabled@DXGGLOBAL@@QEBA_NXZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ @ 0x1C001E168 (--1-$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C007C440 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00AE718 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00B07F4 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C00B0810 (-SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C00B0874 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00F8784 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176394 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C01F57F0 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UpdateTargetLinkTrainingStatus(
        VIDPN_MGR *this,
        struct _DXGK_CONNECTION_CHANGE *a2,
        unsigned __int8 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  int v9; // edx
  unsigned int v10; // ebx
  __int64 v11; // rdi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v13; // rcx
  DMMVIDEOPRESENTTARGET *v14; // rbp
  __int64 v15; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 TargetLinkTrainingStatus; // r14
  ULONGLONG ConnectionChangeId; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // edx
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  DMMVIDPNPRESENTPATH *v28; // r13
  __int64 v29; // r15
  int MostImportantVidPnPathTargetsFromSource; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  char v34; // r13
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rsi
  _QWORD *v38; // rax
  __int64 v39; // rcx
  PERESOURCE **v40; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  struct DMMVIDPNTOPOLOGY *v45; // [rsp+40h] [rbp-48h] BYREF
  __int64 v46[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v47; // [rsp+90h] [rbp+8h] BYREF
  int CurrentProcessSessionId; // [rsp+98h] [rbp+10h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v49; // [rsp+A8h] [rbp+20h]

  v49 = a4;
  if ( !*((_QWORD *)this + 1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_DWORD *)a2 + 2);
  v9 = v8 & 0xFFFFFF;
  v10 = HIBYTE(v8) & 0xF;
  v11 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 10), v9);
  v14 = TargetById;
  if ( !TargetById )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFFLL;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  TargetLinkTrainingStatus = (unsigned int)DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v45);
  if ( a3 )
    DxgkLogCodePointPacket(0x58u, *((_DWORD *)a2 + 2) & 0xFFFFFF, v10, a2->ConnectionChangeId, *(_QWORD *)(v11 + 268));
  ConnectionChangeId = a2->ConnectionChangeId;
  if ( (unsigned __int64)v45 <= a2->ConnectionChangeId )
  {
    if ( v45 == (struct DMMVIDPNTOPOLOGY *)a2->ConnectionChangeId )
    {
      if ( v10 == (_DWORD)TargetLinkTrainingStatus )
        return 0LL;
      if ( (unsigned int)(TargetLinkTrainingStatus - 13) <= 1 )
      {
        if ( v10 == 12 )
        {
          v22 = WdLogNewEntry5_WdDmmEvent(ConnectionChangeId);
          WdLogEvent5_WdDmmEvent(v22);
          return 0LL;
        }
        if ( !a3 )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId);
          v23[3] = TargetLinkTrainingStatus;
          v23[4] = v11;
          v23[5] = *((_DWORD *)a2 + 2) & 0xFFFFFFLL;
LABEL_16:
          WdLogEvent5_WdAssertion(v23);
          return 0LL;
        }
        if ( (_DWORD)TargetLinkTrainingStatus != 13 )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId);
          v23[3] = v10;
          v23[4] = TargetLinkTrainingStatus;
          goto LABEL_16;
        }
      }
    }
    *(_DWORD *)(*((_QWORD *)v14 + 64) + 24LL) = v10;
    *(_QWORD *)(*((_QWORD *)v14 + 64) + 16LL) = ConnectionChangeId;
    if ( v10 == (_DWORD)TargetLinkTrainingStatus )
      return 0LL;
    v24 = *((_QWORD *)this + 11);
    if ( !v24 )
    {
      v46[0] = 0LL;
LABEL_47:
      auto_rc<DMMVIDPN const>::~auto_rc<DMMVIDPN const>(v46);
      return 0LL;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 32));
    v25 = *((_QWORD *)this + 11);
    v46[0] = v25;
    if ( !v25 )
      goto LABEL_47;
    v26 = *((_DWORD *)a2 + 2) & 0xFFFFFF;
    v45 = (struct DMMVIDPNTOPOLOGY *)(v25 + 96);
    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v25 + 96), v26);
    v28 = PathFromTarget;
    if ( !PathFromTarget )
      goto LABEL_47;
    v29 = *(unsigned int *)(*((_QWORD *)PathFromTarget + 11) + 24LL);
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                v45,
                                                *(_DWORD *)(*((_QWORD *)PathFromTarget + 11) + 24LL),
                                                &v47);
    v31 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
    if ( (int)v31 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v31);
      WdLogEvent5_WdAssertion(v32);
    }
    v33 = *(_QWORD *)(v11 + 2312);
    LOBYTE(v47) = (*((_DWORD *)a2 + 2) & 0xFFFFFF) == v47;
    if ( v33 )
      ADAPTER_RENDER::FlushScheduler(v33, 8, v29, 0);
    if ( v10 == 14 )
    {
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v14);
      DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v14, 1u);
      DMMVIDPNPRESENTPATH::SetDriverGammaRamp(v28);
      v34 = v47;
      if ( !(_BYTE)v47 )
        goto LABEL_47;
      *(_DWORD *)(3760 * v29 + *(_QWORD *)(*(_QWORD *)(v11 + 2304) + 112LL) + 1068) = *((_DWORD *)a2 + 2) & 0xFFFFFF;
      v35 = ADAPTER_DISPLAY::SetVidPnSourceActive(*(PERESOURCE ***)(v11 + 2304), v29, 1, 0, a3);
      v37 = v35;
      if ( v35 >= 0 )
        goto LABEL_47;
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v36);
      v38[3] = v11;
      v38[4] = v29;
      v38[5] = v37;
      WdLogEvent5_WdError(v38);
    }
    else
    {
      if ( v10 != 13 )
      {
        v34 = v47;
        goto LABEL_37;
      }
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v14);
      v34 = v47;
    }
    v10 = 13;
LABEL_37:
    DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v14, 0);
    if ( (_DWORD)TargetLinkTrainingStatus == 14 )
    {
      v40 = *(PERESOURCE ***)(v11 + 2304);
      if ( v34 )
        ADAPTER_DISPLAY::SetVidPnSourceActive(v40, v29, 0, 0, a3);
      else
        ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)v40, v29, 0LL, 2048, a3);
    }
    if ( v10 == 13 )
    {
      Global = DXGGLOBAL::GetGlobal(v39);
      if ( DXGGLOBAL::IsHpdHandlingEnabled(Global) )
      {
        ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(DXGADAPTER ***)(v11 + 2304), 0LL, v49);
      }
      else
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v42);
        if ( (int)ZwUpdateWnfStateData(
                    &WNF_DX_MONITOR_CHANGE_NOTIFICATION,
                    0LL,
                    0LL,
                    0LL,
                    &CurrentProcessSessionId,
                    0,
                    0) < 0 )
        {
          v44 = WdLogNewEntry5_WdError(v43);
          *(_QWORD *)(v44 + 24) = v11;
          WdLogEvent5_WdError(v44);
        }
      }
    }
    else
    {
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v14, 1u);
    }
    goto LABEL_47;
  }
  v21 = WdLogNewEntry5_WdWarning(ConnectionChangeId, v17, v18);
  WdLogEvent5_WdWarning(v21);
  return 0LL;
}
