/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00AD1DC
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00925C8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00E8460 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C000EF1C (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0079574 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00836CC (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C008483C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateModeWithPrimary(
        PERESOURCE **this,
        PERESOURCE **a2,
        unsigned int a3,
        struct DXGADAPTERALLOCATION *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  PERESOURCE v10; // r15
  __int64 v11; // rbp
  PERESOURCE *v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbp
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  void *v32; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  LODWORD(v8) = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v22 + 24) = 2575LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v23 + 24) = 2576LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( this[2] != a2[209] )
  {
    v24 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v24 + 24) = 2577LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v10 = a2[2][2];
  v11 = *(_QWORD *)&v10[22].ActiveCount;
  if ( !v11 || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v11 + 16)) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v25 + 24) = 2583LL;
    WdLogEvent5_WdAssertion(v25);
  }
  v12 = this[2];
  if ( v12[289] )
  {
    if ( v12 != (PERESOURCE *)v10 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v26 + 24) = 2590LL;
      WdLogEvent5_WdAssertion(v26);
    }
    ADAPTER_RENDER::DisableOverlays(*(ADAPTER_RENDER **)&v10[22].ActiveCount);
  }
  ADAPTER_RENDER::FlushScheduler(v11, 8, v5, 0);
  if ( !DXGADAPTER::IsVSyncAvailable((ADAPTER_DISPLAY **)this[2], v5) )
    return 0LL;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
  {
    if ( *(_QWORD *)(v14 + 2312) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v11 + 504) + 8LL) + 784LL))(
        *(_QWORD *)(v11 + 512),
        (unsigned int)v5);
    }
    else
    {
      v27 = *(_QWORD *)(*(_QWORD *)(v14 + 2304) + 264LL);
      if ( v27 )
        _InterlockedExchange((volatile __int32 *)(2704 * v5 + *(_QWORD *)(v27 + 8) + 856), 1);
    }
    goto LABEL_24;
  }
  if ( !*(_QWORD *)(v14 + 2312) )
  {
LABEL_22:
    v20 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v5, 1u, 0x20u, 0);
    v8 = v20;
    if ( v20 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v31[3] = v8;
      v31[4] = this[2];
      v31[5] = v5;
      WdLogEvent5_WdError(v31);
    }
LABEL_24:
    ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, v5);
    return (unsigned int)v8;
  }
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v32);
  v16 = (unsigned int *)v32;
  if ( v32 )
  {
    if ( !a4 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v15);
      *(_QWORD *)(v29 + 24) = 2644LL;
      WdLogEvent5_WdAssertion(v29);
    }
    *v16 = v5;
    *((_QWORD *)v16 + 2) = *((_QWORD *)a4 + 2);
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v11 + 528) + 8LL)
                                                                           + 216LL))(
      *(_QWORD *)(*(_QWORD *)&v10[22].ActiveCount + 536LL),
      *((_QWORD *)a4 + 1),
      v16 + 1,
      v16 + 2);
    v16[138] |= 1u;
    v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v11 + 504) + 8LL) + 712LL))(
            *(_QWORD *)(v11 + 512),
            v16);
    v19 = v17;
    if ( v17 >= 0 )
    {
      operator delete(v16);
      goto LABEL_22;
    }
    v30 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v30[3] = v19;
    v30[4] = this[2];
    v30[5] = v5;
    v30[6] = v16[2];
    WdLogEvent5_WdError(v30);
  }
  else
  {
    v28 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v28 + 24) = this;
    WdLogEvent5_WdLowResource(v28);
    LODWORD(v19) = -1073741801;
  }
  operator delete(v16);
  return (unsigned int)v19;
}
