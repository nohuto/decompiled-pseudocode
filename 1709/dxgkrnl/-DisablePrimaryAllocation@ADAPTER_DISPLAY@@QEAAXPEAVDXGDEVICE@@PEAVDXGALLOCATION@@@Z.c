/*
 * XREFs of ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00ACD28
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00ADF10 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0002030 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00020FC (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00038C8 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000796C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00836CC (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C009E09C (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C009E200 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00AC588 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00ADE98 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C010240C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01774BC (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C019D5A8 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryAllocation(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3)
{
  char v3; // r12
  struct DXGDEVICE *VidPnSourceOwner; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  unsigned __int8 IsLegacyDisplayStateSynchronization; // r15
  DXGADAPTER *v13; // r9
  struct ADAPTER_RENDER *v14; // r8
  bool v15; // r14
  unsigned int v16; // r9d
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r8d
  struct COREDEVICEACCESS *v20; // r9
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax

  v3 = 0;
  VidPnSourceOwner = a2;
  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v25 + 24) = 2995LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !a3 || !*((_QWORD *)a3 + 6) )
  {
    v26 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v26 + 24) = 2996LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v7 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
  if ( (v7 & 2) == 0 && (v7 & 1) == 0 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v27 + 24) = 2997LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v28 + 24) = 2998LL;
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v29 + 24) = 2999LL;
    WdLogEvent5_WdAssertion(v29);
  }
  v10 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
  if ( (unsigned int)v10 >= *((_DWORD *)this + 20) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v30 + 24) = 3002LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v11 = *((_QWORD *)VidPnSourceOwner + 2);
  if ( *((_QWORD *)VidPnSourceOwner + 209) == *(_QWORD *)(v11 + 16)
    && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) == 0 )
  {
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v11 + 16));
    if ( (int)DXGADAPTER::GetDriverVersion(v13) < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries((ADAPTER_DISPLAY *)this, v14);
    }
    else
    {
      v15 = 0;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v10)
        && ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10)
        && (*((_DWORD *)ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10) + v10 + 258) & 0x200) != 0 )
      {
        if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v10) == 3
          && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 2) != 0 )
        {
          v3 = 1;
          v15 = 1;
        }
        else if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10) == VidPnSourceOwner )
        {
          v15 = 1;
        }
      }
      else
      {
        v15 = ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)this, v10, 0) == *((struct DXGADAPTERALLOCATION **)a3
                                                                                           + 6);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 176LL) == 1 )
      {
        v16 = 0;
        if ( IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)VidPnSourceOwner + 2), 8, v10, 0);
        }
        else
        {
          if ( v15 )
            v16 = 1 << v10;
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
            *((ADAPTER_RENDER **)VidPnSourceOwner + 2),
            1 << v10,
            0,
            v16,
            0);
        }
      }
      if ( v15 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 176LL) == 1 )
          ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)VidPnSourceOwner + 2));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 2336LL));
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2)
                                                                                       + 504LL)
                                                                           + 8LL)
                                                               + 456LL))(
               *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 512LL),
               (unsigned int)v10) )
        {
          ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
        }
        DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL));
        v21 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v10, 0, 2u, 0);
        v23 = v21;
        if ( v21 < 0 )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v22);
          v31[3] = (unsigned int)v10;
          v31[4] = this[2];
          v31[5] = v23;
          WdLogEvent5_WdError(v31);
        }
      }
      if ( *((_DWORD *)VidPnSourceOwner + 82) == 2 )
      {
        v24 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
        if ( (v24 & 2) == 0 )
        {
          v32 = WdLogNewEntry5_WdAssertion(v24);
          *(_QWORD *)(v32 + 24) = 3133LL;
          WdLogEvent5_WdAssertion(v32);
        }
        if ( !*(_QWORD *)(*((_QWORD *)a3 + 6) + 8LL) )
        {
          v33 = WdLogNewEntry5_WdAssertion(v24);
          *(_QWORD *)(v33 + 24) = 3134LL;
          WdLogEvent5_WdAssertion(v33);
        }
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)VidPnSourceOwner + 2) + 528LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)VidPnSourceOwner + 2) + 536LL),
          *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)a3 + 6) + 8LL));
        *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) |= 0x10u;
        if ( v3 )
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v10);
      }
      v17 = *((_DWORD *)VidPnSourceOwner + 82);
      if ( v17 != 2 )
      {
        if ( v17 )
        {
          DXGDEVICE::UnpinPrimaryAllocations(VidPnSourceOwner, v10);
          if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) < 2200
            || *(_BYTE *)(v18 + 2236) )
          {
            DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)VidPnSourceOwner, v10, v19, v20);
          }
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations(VidPnSourceOwner, v10);
        }
      }
    }
  }
}
