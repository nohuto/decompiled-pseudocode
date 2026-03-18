/*
 * XREFs of ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C00AE718
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z @ 0x1C01F2644 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKPEAVDXGDEVICE@@@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F2B14 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C000EF1C (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C001DFE0 (--1-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C007FC5C (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00ADCA0 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00ADE98 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00E85B0 (DxgkStatusChangeNotify.c)
 *     ?DisableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C0104530 (-DisableVSync@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetVidPnSourceActive(
        PERESOURCE **this,
        unsigned int a2,
        char a3,
        char a4,
        unsigned __int8 a5)
{
  __int64 v6; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  PERESOURCE *v11; // rdx
  _QWORD *v12; // r13
  bool v13; // zf
  PERESOURCE *v14; // rax
  bool v15; // bp
  PERESOURCE v16; // rcx
  KSPIN_LOCK SpinLock; // rdi
  _QWORD *Address; // rbx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v20; // r8
  PERESOURCE *v21; // rdi
  struct _KTHREAD **v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  ULONG v25; // eax
  __int64 v26; // rcx
  char *v27; // rdi
  __int64 v28; // rax
  PDRIVER_OBJECT v30; // rcx
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v32; // rcx
  struct DXGADAPTERALLOCATION *v33; // rdi
  __int64 v34; // rcx
  _QWORD *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  DXGADAPTER *v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  _QWORD *v44; // rax
  PERESOURCE *v45; // rcx
  PERESOURCE *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // [rsp+38h] [rbp-50h] BYREF
  __int64 v50; // [rsp+40h] [rbp-48h]
  void *v51; // [rsp+90h] [rbp+8h] BYREF
  char v52; // [rsp+A8h] [rbp+20h]

  v52 = a4;
  v6 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v9 + 24) = 435LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (unsigned int)v6 >= *((_DWORD *)this + 20) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v10 + 24) = 436LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = this[14];
  v12 = 0LL;
  v13 = LOBYTE(v11[470 * v6 + 90]) == 0;
  LOBYTE(v11[470 * v6 + 90]) = a3;
  v14 = this[2];
  v15 = v13 != (a3 == 0);
  v16 = v14[289];
  if ( v16 )
  {
    SpinLock = v16[4].SpinLock;
    v12 = v14[289];
    Address = v16[4].Address;
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)this, v6);
    LOBYTE(v20) = a3;
    (*(void (__fastcall **)(KSPIN_LOCK, _QWORD, __int64, const struct _DXGK_DISPLAYMODE_INFO *))(Address[1] + 432LL))(
      SpinLock,
      (unsigned int)v6,
      v20,
      DisplayModeInfo);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v12[63] + 8LL) + 776LL))(v12[64], (unsigned int)v6);
  }
  else
  {
    v21 = this[33];
    if ( v21 )
    {
      v22 = (struct _KTHREAD **)&v21[1][26 * v6];
      if ( a3 )
        BLTQUEUE::EnableVSync(v22);
      else
        BLTQUEUE::DisableVSync((BLTQUEUE *)v22);
      _InterlockedExchange((volatile __int32 *)&v21[1][26 * v6 + 8].ActiveCount, 0);
    }
  }
  if ( a3 )
  {
    if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
    {
      if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v6) )
      {
        if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation((DXGADAPTER **)this, v6, 0) )
        {
          v25 = IoSizeofWorkItem();
          v27 = (char *)operator new[](v25 + 12LL, 0x4B677844u, (enum _POOL_TYPE)512);
          if ( !v27 )
          {
            v28 = WdLogNewEntry5_WdLowResource(v26);
            *(_QWORD *)(v28 + 24) = this;
            WdLogEvent5_WdLowResource(v28);
            return 3221225495LL;
          }
          *(_QWORD *)v27 = *(PERESOURCE *)((char *)this[2] + 268);
          v30 = g_pDriverObject;
          *((_DWORD *)v27 + 2) = v6;
          IoInitializeWorkItem(v30, (PIO_WORKITEM)(v27 + 12));
          IoQueueWorkItemEx((PIO_WORKITEM)(v27 + 12), DxgkpDelayPresentCddPrimary, DelayedWorkQueue, v27);
        }
        goto LABEL_46;
      }
      goto LABEL_39;
    }
    if ( *(_QWORD *)(v23 + 2312) )
    {
      DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation((DXGADAPTER **)this, v6);
      v33 = DisplayedPrimaryAllocation;
      if ( !DisplayedPrimaryAllocation || (v32 = *((unsigned int *)DisplayedPrimaryAllocation + 1), (v32 & 0x10) != 0) )
      {
        v44 = (_QWORD *)WdLogNewEntry5_WdError(v32);
        v37 = -1071775482LL;
        goto LABEL_37;
      }
      CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v51);
      v35 = v51;
      if ( !v51 )
      {
        v36 = WdLogNewEntry5_WdLowResource(v34);
        *(_QWORD *)(v36 + 24) = 556LL;
        WdLogEvent5_WdLowResource(v36);
        LODWORD(v37) = -1073741801;
LABEL_26:
        CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::~CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v51);
        return (unsigned int)v37;
      }
      memset(v51, 0, 0x840uLL);
      *(_DWORD *)v35 = v6;
      v35[2] = *((_QWORD *)v33 + 2);
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *))(*(_QWORD *)(v12[66] + 8LL) + 216LL))(
        v12[67],
        *((_QWORD *)v33 + 1),
        (__int64)v35 + 4,
        v35 + 1);
      *((_DWORD *)v35 + 138) |= 1u;
      v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v12[63] + 8LL) + 712LL))(v12[64], v35);
      v37 = v38;
      if ( v38 < 0 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
        v40[3] = this[2];
        v40[4] = v6;
        v40[5] = v37;
        WdLogEvent5_WdError(v40);
        goto LABEL_26;
      }
      CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::~CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v51);
    }
    if ( ((_DWORD)this[40] & 2) != 0
      || v52 && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v6) == 1 )
    {
      v41 = (DXGADAPTER *)this[2];
      if ( *((_DWORD *)v41 + 69) != 1297040209 || (int)DXGADAPTER::GetDriverVersion(v41) > 1300 )
      {
LABEL_39:
        if ( !BYTE1(this[14][470 * v6 + 90]) )
          v15 = 1;
        if ( this[2][289] )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v12[63] + 8LL) + 784LL))(v12[64], (unsigned int)v6);
        }
        else
        {
          v46 = this[33];
          if ( v46 )
            _InterlockedExchange((volatile __int32 *)&v46[1][26 * v6 + 8].ActiveCount, 1);
        }
        goto LABEL_46;
      }
    }
    LOBYTE(v24) = 1;
    v42 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v6, v24, 2048, a5);
    v37 = v42;
    if ( v42 < 0 )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v43);
LABEL_37:
      v45 = this[2];
      v44[4] = v6;
      v44[3] = v45;
      v44[5] = v37;
      WdLogEvent5_WdError(v44);
      return (unsigned int)v37;
    }
  }
  else
  {
    ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v6, 0LL, 2048, a5);
  }
LABEL_46:
  if ( v15 )
  {
    v50 = 0LL;
    v49 = 1;
    if ( (int)DxgkStatusChangeNotify(&v49) < 0 )
    {
      v48 = WdLogNewEntry5_WdAssertion(v47);
      *(_QWORD *)(v48 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v48);
    }
  }
  return 0LL;
}
