/*
 * XREFs of ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D9940
 * Callers:
 *     ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D9750 (-DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z @ 0x1C01D97D4 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z.c)
 * Callees:
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C0002FEC (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000A78C (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00A4494 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C00A44B0 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C00A4518 (-SetTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00A5300 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D3888 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00E6CD4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00E8674 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00E8F04 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C0103BF4 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0172854 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C01B460C (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C01DCDF0 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::UpdateTargetLinkTrainingStatus(
        VIDPN_MGR *this,
        struct _DXGK_CONNECTION_CHANGE *a2,
        __int64 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  unsigned int v4; // esi
  const struct DMMVIDPNTOPOLOGY *v7; // r12
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // rdx
  unsigned int v11; // r15d
  __int64 v12; // rbp
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  DMMVIDEOPRESENTTARGET *v16; // rdi
  __int64 v17; // rax
  unsigned int TargetLinkTrainingStatus; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r13
  ULONGLONG ConnectionChangeId; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  struct DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // r15
  __int64 v43; // rdi
  __int64 v44; // rbx
  const struct _DXGK_DISPLAYMODE_INFO *v45; // rax
  __int64 v46; // r8
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  unsigned int v48; // edx
  __int64 v49; // rcx
  _QWORD *v50; // rbx
  __int64 v51; // rax
  void *v52; // rcx
  struct DXGADAPTERALLOCATION *v53; // rdx
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  _QWORD *v58; // rax
  int v59; // eax
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdi
  __int64 v69; // rbx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v71; // rcx
  _QWORD *v72; // [rsp+30h] [rbp-78h]
  ULONGLONG v73; // [rsp+38h] [rbp-70h] BYREF
  struct DMMVIDEOPRESENTTARGET *v74; // [rsp+40h] [rbp-68h]
  __int64 v75; // [rsp+48h] [rbp-60h] BYREF
  void *v76; // [rsp+50h] [rbp-58h] BYREF
  struct DXGADAPTERALLOCATION *v77; // [rsp+58h] [rbp-50h]
  bool v78; // [rsp+B0h] [rbp+8h]
  __int64 v79; // [rsp+B0h] [rbp+8h]
  unsigned int v80; // [rsp+B8h] [rbp+10h] BYREF
  char v81; // [rsp+C0h] [rbp+18h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v82; // [rsp+C8h] [rbp+20h]

  v82 = a4;
  v81 = a3;
  v4 = 0;
  LODWORD(v7) = 0;
  if ( !*((_QWORD *)this + 1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_DWORD *)a2 + 2);
  v10 = v9 & 0xFFFFFF;
  v11 = HIBYTE(v9) & 0xF;
  v12 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 10), v10, a3, (__int64)a4);
  v74 = TargetById;
  v16 = TargetById;
  if ( !TargetById )
  {
    v17 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v17 + 24) = *((_DWORD *)a2 + 2) & 0xFFFFFFLL;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v73);
  LOBYTE(v22) = v81;
  v23 = TargetLinkTrainingStatus;
  if ( v81 )
  {
    DxgkLogCodePointPacket(0x58u, *((_DWORD *)a2 + 2) & 0xFFFFFF, v11, a2->ConnectionChangeId, *(_QWORD *)(v12 + 268));
    LOBYTE(v22) = v81;
  }
  ConnectionChangeId = a2->ConnectionChangeId;
  if ( v73 > a2->ConnectionChangeId )
  {
    v25 = WdLogNewEntry5_WdWarning(ConnectionChangeId, v22, v20, v21);
    WdLogEvent5_WdWarning(v25);
    return 0LL;
  }
  if ( v73 == a2->ConnectionChangeId )
  {
    if ( v11 == (_DWORD)v23 )
      return 0LL;
    if ( (unsigned int)(v23 - 13) <= 1 )
    {
      if ( v11 == 12 )
      {
        v26 = WdLogNewEntry5_WdDmmEvent(ConnectionChangeId, v22, v20, v21);
        WdLogEvent5_WdDmmEvent(v26);
        return 0LL;
      }
      if ( !(_BYTE)v22 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId, v22, v20, v21);
        v27[3] = v23;
        v27[4] = v12;
        v27[5] = *((_DWORD *)a2 + 2) & 0xFFFFFF;
LABEL_17:
        WdLogEvent5_WdAssertion(v27);
        return 0LL;
      }
      if ( (_DWORD)v23 != 13 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdAssertion(ConnectionChangeId, v22, v20, v21);
        v27[3] = v11;
        v27[4] = v23;
        goto LABEL_17;
      }
    }
  }
  *(_DWORD *)(*((_QWORD *)v16 + 64) + 24LL) = v11;
  *(_QWORD *)(*((_QWORD *)v16 + 64) + 16LL) = ConnectionChangeId;
  if ( v11 == (_DWORD)v23 )
    return 0LL;
  v28 = *((_QWORD *)this + 11);
  if ( !v28 )
  {
    v75 = 0LL;
LABEL_66:
    v4 = (unsigned int)v7;
    goto LABEL_67;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v28 + 32));
  v29 = *((_QWORD *)this + 11);
  v75 = v29;
  if ( !v29 )
    goto LABEL_66;
  v7 = (const struct DMMVIDPNTOPOLOGY *)(v29 + 96);
  PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget((DMMVIDPNTOPOLOGY *)(v29 + 96), *((_DWORD *)a2 + 2) & 0xFFFFFF);
  if ( PathFromTarget )
  {
    v31 = *(unsigned int *)(*((_QWORD *)PathFromTarget + 11) + 24LL);
    LODWORD(v7) = GetMostImportantVidPnPathTargetsFromSource(v7, v31, &v80);
    if ( (int)((_DWORD)v7 + 0x80000000) >= 0 && (_DWORD)v7 != -1071774919 )
    {
      v35 = WdLogNewEntry5_WdAssertion(0x80000000LL, v32, v33, v34);
      WdLogEvent5_WdAssertion(v35);
    }
    v36 = *(_QWORD *)(v12 + 2288);
    v72 = 0LL;
    v78 = (*((_DWORD *)a2 + 2) & 0xFFFFFF) == v80;
    if ( v36 )
    {
      v72 = *(_QWORD **)(v12 + 2288);
      ADAPTER_RENDER::FlushScheduler(v36, 8, v31, 0);
    }
    if ( v11 != 14 )
    {
      if ( v11 != 13 )
        goto LABEL_55;
      DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v16, v32, v33, v34);
LABEL_54:
      v11 = 13;
LABEL_55:
      DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v16, 0LL, v33, v34);
      if ( v78 )
      {
        if ( (_DWORD)v23 != 14 )
          goto LABEL_63;
        ADAPTER_DISPLAY::SetVidPnSourceActive(*(DXGADAPTER ***)(v12 + 2280), v31, 0);
        if ( *(_QWORD *)(v12 + 2288) )
        {
          v68 = v72[52];
          v69 = v72[51];
          DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v12 + 2280), v31);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, const struct _DXGK_DISPLAYMODE_INFO *))(*(_QWORD *)(v69 + 8)
                                                                                                 + 432LL))(
            v68,
            (unsigned int)v31,
            0LL,
            DisplayModeInfo);
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v72[51] + 8LL) + 776LL))(v72[52], (unsigned int)v31);
          v16 = v74;
LABEL_62:
          LODWORD(v7) = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                          *(ADAPTER_DISPLAY **)(v12 + 2280),
                          (unsigned int)v31,
                          0LL,
                          512LL,
                          0);
LABEL_63:
          if ( v11 == 13 )
            ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(DXGADAPTER ***)(v12 + 2280), 0LL, v82);
          else
            DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v16, 1u);
          goto LABEL_66;
        }
        v71 = *(_QWORD *)(*(_QWORD *)(v12 + 2280) + 264LL);
        v79 = v71;
        if ( !v71 )
          goto LABEL_62;
        BLTQUEUE::DisableVSync((struct _KTHREAD **)(2704 * v31 + *(_QWORD *)(v71 + 8)), v65, v66, v67);
        _InterlockedExchange((volatile __int32 *)(2704 * v31 + *(_QWORD *)(v79 + 8) + 856), 0);
      }
      if ( (_DWORD)v23 != 14 )
        goto LABEL_63;
      goto LABEL_62;
    }
    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v16, v32, v33, v34);
    LOBYTE(v37) = 1;
    DMMVIDEOPRESENTTARGET::SetTargetCurrentActive(v16, v37, v38, v39);
    if ( v78 )
    {
      *(_DWORD *)(3208 * v31 + *(_QWORD *)(*(_QWORD *)(v12 + 2280) + 112LL) + 1028) = *((_DWORD *)a2 + 2) & 0xFFFFFF;
      ADAPTER_DISPLAY::SetVidPnSourceActive(*(DXGADAPTER ***)(v12 + 2280), v31, 1);
      v42 = v72;
      if ( !*(_QWORD *)(v12 + 2288) )
        goto LABEL_48;
      v43 = v72[52];
      v44 = v72[51];
      v45 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v12 + 2280), v31);
      LOBYTE(v46) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, __int64, const struct _DXGK_DISPLAYMODE_INFO *))(*(_QWORD *)(v44 + 8)
                                                                                              + 432LL))(
        v43,
        (unsigned int)v31,
        v46,
        v45);
      v16 = v74;
    }
    else
    {
      v42 = v72;
    }
    if ( *(_QWORD *)(v12 + 2288) )
    {
      if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v12) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v42[51] + 8LL) + 784LL))(v42[52], (unsigned int)v31);
      }
      else
      {
        DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v12 + 2280), v31);
        v77 = DisplayedPrimaryAllocation;
        if ( DisplayedPrimaryAllocation && (*((_DWORD *)DisplayedPrimaryAllocation + 1) & 0x10) == 0 )
        {
          CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
            &v76,
            v48);
          v50 = v76;
          if ( !v76 )
          {
            v51 = WdLogNewEntry5_WdLowResource(v49);
            WdLogEvent5_WdLowResource(v51);
            v52 = 0LL;
            LODWORD(v7) = -1073741801;
LABEL_41:
            operator delete(v52);
            goto LABEL_54;
          }
          memset(v76, 0, 0x840uLL);
          v53 = v77;
          *(_DWORD *)v50 = v31;
          v50[2] = *((_QWORD *)v53 + 2);
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *))(*(_QWORD *)(v42[54] + 8LL) + 216LL))(
            v42[55],
            *((_QWORD *)v53 + 1),
            (__int64)v50 + 4,
            v50 + 1);
          *((_DWORD *)v50 + 138) |= 1u;
          v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v42[51] + 8LL) + 712LL))(v42[52], v50);
          v7 = (const struct DMMVIDPNTOPOLOGY *)v54;
          if ( v54 < 0
            || (LOBYTE(v57) = 1,
                v59 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                        *(ADAPTER_DISPLAY **)(v12 + 2280),
                        (unsigned int)v31,
                        v57,
                        512LL,
                        0),
                v7 = (const struct DMMVIDPNTOPOLOGY *)v59,
                v59 < 0) )
          {
            v58 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55);
            v58[3] = v12;
            v58[4] = v31;
            v58[5] = v7;
            WdLogEvent5_WdError(v58);
            v52 = v50;
            goto LABEL_41;
          }
          operator delete(v50);
        }
      }
      ADAPTER_DISPLAY::SetGammaRamp(*(PERESOURCE ***)(v12 + 2280), v31, 0LL);
      goto LABEL_66;
    }
LABEL_48:
    v60 = *(_QWORD *)(*(_QWORD *)(v12 + 2280) + 264LL);
    if ( v60 )
      BLTQUEUE::EnableVSync((struct _KTHREAD **)(*(_QWORD *)(v60 + 8) + 2704 * v31), v60, v40, v41);
    LOBYTE(v40) = 1;
    v61 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(*(ADAPTER_DISPLAY **)(v12 + 2280), (unsigned int)v31, v40, 512LL, 0);
    v7 = (const struct DMMVIDPNTOPOLOGY *)v61;
    if ( v61 >= 0 )
      goto LABEL_66;
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62);
    v64[3] = v12;
    v64[4] = v31;
    v64[5] = v7;
    WdLogEvent5_WdError(v64);
    goto LABEL_54;
  }
LABEL_67:
  auto_rc<DMMVIDPN const>::reset(&v75, 0LL);
  return v4;
}
