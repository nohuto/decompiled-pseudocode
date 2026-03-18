/*
 * XREFs of ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00E7A8C
 * Callers:
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0098B40 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BF7F0 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ??0?$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ @ 0x1C0002FEC (--0-$CTemporaryAlloc@U_DXGKARG_SETVIDPNSOURCEADDRESS@@$0CAA@$00@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00CFE7C (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C00D3238 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D3888 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00E6CD4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateModeWithPrimary(
        PERESOURCE **this,
        PERESOURCE **a2,
        unsigned int a3,
        struct DXGADAPTERALLOCATION *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  PERESOURCE v13; // r15
  __int64 Flink; // rbp
  PERESOURCE *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int *v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbp
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  void *v42; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  LODWORD(v8) = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v32 + 24) = 2113LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( (unsigned int)v5 >= *((_DWORD *)this + 20) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v33 + 24) = 2114LL;
    WdLogEvent5_WdAssertion(v33);
  }
  if ( this[2] != a2[225] )
  {
    v34 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v34 + 24) = 2115LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v13 = a2[2][2];
  Flink = (__int64)v13[22].SystemResourcesList.Flink;
  if ( !Flink || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(Flink + 16)) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v35 + 24) = 2121LL;
    WdLogEvent5_WdAssertion(v35);
  }
  v15 = this[2];
  if ( v15[286] )
  {
    if ( v15 != (PERESOURCE *)v13 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      *(_QWORD *)(v36 + 24) = 2128LL;
      WdLogEvent5_WdAssertion(v36);
    }
    ADAPTER_RENDER::DisableOverlays((ADAPTER_RENDER *)v13[22].SystemResourcesList.Flink, v9, v11, v12);
  }
  ADAPTER_RENDER::FlushScheduler(Flink, 8, v5, 0);
  if ( !DXGADAPTER::IsVSyncAvailable((ADAPTER_DISPLAY **)this[2], (unsigned int)v5, v16, v17) )
    return 0LL;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)this[2]) )
  {
    if ( *(_QWORD *)(v18 + 2288) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(Flink + 408) + 8LL) + 784LL))(
        *(_QWORD *)(Flink + 416),
        (unsigned int)v5);
    }
    else
    {
      v37 = *(_QWORD *)(*(_QWORD *)(v18 + 2280) + 264LL);
      if ( v37 )
        _InterlockedExchange((volatile __int32 *)(2704 * v5 + *(_QWORD *)(v37 + 8) + 856), 1);
    }
    goto LABEL_23;
  }
  if ( !*(_QWORD *)(v18 + 2288) )
  {
LABEL_21:
    v28 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v5, 1u, 0x20u, 0);
    v8 = v28;
    if ( v28 < 0 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
      v41[3] = v8;
      v41[4] = this[2];
      v41[5] = v5;
      WdLogEvent5_WdError(v41);
    }
LABEL_23:
    ADAPTER_DISPLAY::SetGammaRamp(this, v5, 0LL);
    return (unsigned int)v8;
  }
  CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>::CTemporaryAlloc<_DXGKARG_SETVIDPNSOURCEADDRESS,512,1>(
    &v42,
    v18);
  v23 = (unsigned int *)v42;
  if ( v42 )
  {
    if ( !a4 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
      *(_QWORD *)(v39 + 24) = 2182LL;
      WdLogEvent5_WdAssertion(v39);
    }
    *v23 = v5;
    *((_QWORD *)v23 + 2) = *((_QWORD *)a4 + 2);
    (*(void (__fastcall **)(struct _LIST_ENTRY *, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(Flink + 432) + 8LL)
                                                                                         + 216LL))(
      v13[22].SystemResourcesList.Flink[27].Blink,
      *((_QWORD *)a4 + 1),
      v23 + 1,
      v23 + 2);
    v23[138] |= 1u;
    v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(Flink + 408) + 8LL) + 712LL))(
            *(_QWORD *)(Flink + 416),
            v23);
    v27 = v24;
    if ( v24 >= 0 )
    {
      operator delete(v23);
      goto LABEL_21;
    }
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
    v40[3] = v27;
    v40[4] = this[2];
    v40[5] = v5;
    v40[6] = v23[2];
    WdLogEvent5_WdError(v40);
  }
  else
  {
    v38 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v38 + 24) = this;
    WdLogEvent5_WdLowResource(v38);
    LODWORD(v27) = -1073741801;
  }
  operator delete(v23);
  return (unsigned int)v27;
}
