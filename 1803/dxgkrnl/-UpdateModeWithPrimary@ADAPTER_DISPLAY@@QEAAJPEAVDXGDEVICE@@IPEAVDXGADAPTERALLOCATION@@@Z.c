/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C0157CFC
 * Callers:
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C010BB20 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01930B4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C0019DF4 (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E1C6C (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00F48DC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C010DC8C (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01596D0 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
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
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  PERESOURCE v13; // r15
  __int64 v14; // rbp
  __int64 v15; // rax
  PERESOURCE *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  _DWORD *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int v30; // eax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  void *v33; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  LODWORD(v8) = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 2588LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 2589LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( this[2] != a2[211] )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v12 + 24) = 2590LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = a2[2][2];
  v14 = *(_QWORD *)&v13[23].NumberOfSharedWaiters;
  if ( !v14 || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v14 + 16)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v15 + 24) = 2596LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = this[2];
  if ( v16[308] )
  {
    if ( v16 != (PERESOURCE *)v13 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v17 + 24) = 2603LL;
      WdLogEvent5_WdAssertion(v17);
    }
    ADAPTER_RENDER::DisableOverlays(*(ADAPTER_RENDER **)&v13[23].NumberOfSharedWaiters);
  }
  ADAPTER_RENDER::FlushScheduler(v14, 8, v5, 0);
  if ( DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)this[2], v5) )
  {
    if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
    {
      if ( v19 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v14 + 520) + 8LL) + 896LL))(
          *(_QWORD *)(v14 + 528),
          (unsigned int)v5);
      }
      else
      {
        v20 = *(_QWORD *)(*(_QWORD *)(v18 + 2456) + 264LL);
        if ( v20 )
          _InterlockedExchange((volatile __int32 *)(2704 * v5 + *(_QWORD *)(v20 + 8) + 856), 1);
      }
LABEL_31:
      ADAPTER_DISPLAY::UpdateGammaRamp((DXGADAPTER **)this, v5);
      return (unsigned int)v8;
    }
    if ( v19 )
    {
      CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(&v33);
      v22 = v33;
      if ( !v33 )
      {
        v23 = WdLogNewEntry5_WdLowResource(v21);
        *(_QWORD *)(v23 + 24) = this;
        WdLogEvent5_WdLowResource(v23);
        LODWORD(v24) = -1073741801;
LABEL_27:
        operator delete(v22);
        return (unsigned int)v24;
      }
      if ( !a4 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v25 + 24) = 2657LL;
        WdLogEvent5_WdAssertion(v25);
      }
      *v22 = v5;
      *((_QWORD *)v22 + 2) = *((_QWORD *)a4 + 2);
      (*(void (__fastcall **)(_QWORD, _QWORD, _DWORD *, _DWORD *))(*(_QWORD *)(*(_QWORD *)(v14 + 544) + 8LL) + 216LL))(
        *(_QWORD *)(*(_QWORD *)&v13[23].NumberOfSharedWaiters + 552LL),
        *((_QWORD *)a4 + 1),
        v22 + 1,
        v22 + 2);
      v22[138] |= 1u;
      v26 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(*(_QWORD *)(v14 + 520) + 8LL) + 824LL))(
              *(_QWORD *)(v14 + 528),
              v22);
      v24 = v26;
      if ( v26 < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v27);
        v28[3] = v24;
        v28[4] = this[2];
        v28[5] = v5;
        v28[6] = (unsigned int)v22[2];
        WdLogEvent5_WdError(v28);
        goto LABEL_27;
      }
      operator delete(v22);
    }
    v30 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v5, 1u, 0x20u, 0);
    v8 = v30;
    if ( v30 < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v32[3] = v8;
      v32[4] = this[2];
      v32[5] = v5;
      WdLogEvent5_WdError(v32);
    }
    goto LABEL_31;
  }
  return 0LL;
}
