/*
 * XREFs of ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00E763C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00E8858 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0006C14 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B47C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B7E8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C000DF98 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00CA450 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00CA5B4 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00CFE7C (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E6ECC (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00E87E0 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104BA4 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0187E6C (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryAllocation(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3,
        __int64 a4)
{
  char v4; // r15
  struct DXGDEVICE *VidPnSourceOwner; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // r9
  __int64 v19; // r8
  struct ADAPTER_RENDER *v20; // r9
  bool v21; // zf
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // r8
  struct COREDEVICEACCESS *v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax

  v4 = 0;
  VidPnSourceOwner = a2;
  if ( !a2 )
  {
    v32 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v32 + 24) = 2533LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !a3 || !*((_QWORD *)a3 + 6) )
  {
    v33 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v33 + 24) = 2534LL;
    WdLogEvent5_WdAssertion(v33);
  }
  v8 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
  if ( (v8 & 2) == 0 && (v8 & 1) == 0 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v8, a2, a3, a4);
    *(_QWORD *)(v34 + 24) = 2535LL;
    WdLogEvent5_WdAssertion(v34);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v35 + 24) = 2536LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v36 + 24) = 2537LL;
    WdLogEvent5_WdAssertion(v36);
  }
  v17 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
  if ( (unsigned int)v17 >= *((_DWORD *)this + 20) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v37 + 24) = 2540LL;
    WdLogEvent5_WdAssertion(v37);
  }
  v18 = *((_QWORD *)VidPnSourceOwner + 2);
  if ( *((_QWORD *)VidPnSourceOwner + 225) == *(_QWORD *)(v18 + 16)
    && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) == 0 )
  {
    if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(v18 + 16)) < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries((ADAPTER_DISPLAY *)this, v20);
      return;
    }
    if ( *(_DWORD *)(v19 + 176) == 1 )
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)VidPnSourceOwner + 2), 8, v17, 0);
    if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v17)
      && ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v17)
      && (*((_DWORD *)ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v17) + v17 + 258) & 0x200) != 0 )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v17) == 3
        && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 2) != 0 )
      {
        v4 = 1;
        goto LABEL_31;
      }
      v21 = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v17) == VidPnSourceOwner;
    }
    else
    {
      v21 = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v17, 0) == *((struct DXGADAPTERALLOCATION **)a3
                                                                                         + 6);
    }
    if ( !v21 )
    {
LABEL_22:
      if ( *((_DWORD *)VidPnSourceOwner + 82) == 2 )
      {
        v31 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
        if ( (v31 & 2) == 0 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v31, v22, v23, v24);
          *(_QWORD *)(v39 + 24) = 2656LL;
          WdLogEvent5_WdAssertion(v39);
        }
        if ( !*(_QWORD *)(*((_QWORD *)a3 + 6) + 8LL) )
        {
          v40 = WdLogNewEntry5_WdAssertion(v31, v22, v23, v24);
          *(_QWORD *)(v40 + 24) = 2657LL;
          WdLogEvent5_WdAssertion(v40);
        }
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)VidPnSourceOwner + 2) + 432LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)VidPnSourceOwner + 2) + 440LL),
          *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)a3 + 6) + 8LL));
        *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) |= 0x10u;
        if ( v4 )
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v17);
      }
      v25 = *((_DWORD *)VidPnSourceOwner + 82);
      if ( v25 != 2 )
      {
        if ( v25 )
        {
          DXGDEVICE::UnpinPrimaryAllocations(VidPnSourceOwner, (unsigned int)v17, v23, v24);
          DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)VidPnSourceOwner, (unsigned int)v17, v26, v27);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations(VidPnSourceOwner, v17);
        }
      }
      return;
    }
LABEL_31:
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 176LL) == 1 )
      ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)VidPnSourceOwner + 2), v22, v23, v24);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 2312LL));
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2)
                                                                                   + 408LL)
                                                                       + 8LL)
                                                           + 456LL))(
           *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 416LL),
           (unsigned int)v17) )
    {
      ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, v17);
    }
    DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL));
    v28 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v17, 0, 2u, 0);
    v30 = v28;
    if ( v28 < 0 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v29, v22);
      v38[3] = (unsigned int)v17;
      v38[4] = this[2];
      v38[5] = v30;
      WdLogEvent5_WdError(v38);
    }
    goto LABEL_22;
  }
}
