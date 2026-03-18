/*
 * XREFs of ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0153370
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C010D918 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0015A44 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0019B40 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0019CE0 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0019D28 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0028188 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C010D8B4 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0147198 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0152D80 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01596D0 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0159E20 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C018AD10 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C018C45C (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C018C798 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisablePrimaryAllocation(
        PERESOURCE **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3)
{
  char v3; // r12
  struct DXGDEVICE *VidPnSourceOwner; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int8 IsLegacyDisplayStateSynchronization; // r15
  DXGADAPTER *v19; // r9
  struct ADAPTER_RENDER *v20; // r8
  bool v21; // r14
  __int64 v22; // rcx
  unsigned int v23; // r9d
  int v24; // eax
  __int64 v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  int v31; // r8d
  struct COREDEVICEACCESS *v32; // r9

  v3 = 0;
  VidPnSourceOwner = a2;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 3008LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 || !*((_QWORD *)a3 + 6) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 3009LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
  if ( (v9 & 2) == 0 && (v9 & 1) == 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 3010LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 3011LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v14 + 24) = 3012LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
  if ( (unsigned int)v15 >= *((_DWORD *)this + 20) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v16 + 24) = 3015LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = *((_QWORD *)VidPnSourceOwner + 2);
  if ( *((_QWORD *)VidPnSourceOwner + 211) == *(_QWORD *)(v17 + 16)
    && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 0x10) == 0 )
  {
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(v17 + 16));
    if ( (int)DXGADAPTER::GetDriverVersion(v19) < 2000 )
    {
      ADAPTER_DISPLAY::DisableAllPrimaries(this, v20);
    }
    else
    {
      v21 = 0;
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v15)
        && ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v15)
        && (*((_DWORD *)ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v15) + v15 + 262) & 0x200) != 0 )
      {
        if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType((DXGADAPTER **)this, v15) == 3
          && (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) & 2) != 0 )
        {
          v3 = 1;
          v21 = 1;
        }
        else if ( ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v15) == VidPnSourceOwner )
        {
          v21 = 1;
        }
      }
      else
      {
        v21 = ADAPTER_DISPLAY::GetCddPrimaryAllocation((DXGADAPTER **)this, v15, 0) == *((struct DXGADAPTERALLOCATION **)a3
                                                                                       + 6);
      }
      v22 = *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL);
      if ( *(_DWORD *)(v22 + 176) == 1 )
      {
        v23 = 0;
        if ( IsLegacyDisplayStateSynchronization )
        {
          ADAPTER_RENDER::FlushScheduler(*((_QWORD *)VidPnSourceOwner + 2), 8, v15, 0);
        }
        else
        {
          if ( v21 )
            v23 = 1 << v15;
          ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(
            *((ADAPTER_RENDER **)VidPnSourceOwner + 2),
            1 << v15,
            0,
            v23,
            0);
        }
      }
      if ( v21 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 176LL) == 1 )
          ADAPTER_RENDER::DisableOverlays(*((ADAPTER_RENDER **)VidPnSourceOwner + 2));
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) + 2488LL));
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2)
                                                                                       + 520LL)
                                                                           + 8LL)
                                                               + 552LL))(
               *(_QWORD *)(*((_QWORD *)VidPnSourceOwner + 2) + 528LL),
               (unsigned int)v15) )
        {
          ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
        }
        DXGADAPTER::DecrementVSyncWaiter(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL));
        v24 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v15, 0, 2u, 0);
        v25 = v24;
        if ( v24 < 0 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v22);
          v26[3] = (unsigned int)v15;
          v26[4] = this[2];
          v26[5] = v25;
          WdLogEvent5_WdError(v26);
        }
      }
      if ( *((_DWORD *)VidPnSourceOwner + 82) == 2 )
      {
        v27 = *((_QWORD *)a3 + 6);
        if ( (*(_DWORD *)(v27 + 4) & 2) == 0 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v28 + 24) = 3146LL;
          WdLogEvent5_WdAssertion(v28);
          v27 = *((_QWORD *)a3 + 6);
        }
        if ( !*(_QWORD *)(v27 + 8) )
        {
          v29 = WdLogNewEntry5_WdAssertion(v22);
          *(_QWORD *)(v29 + 24) = 3147LL;
          WdLogEvent5_WdAssertion(v29);
          v27 = *((_QWORD *)a3 + 6);
        }
        VIDMM_EXPORT::VidMmInvalidateAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)VidPnSourceOwner + 2) + 544LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)VidPnSourceOwner + 2) + 552LL),
          *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v27 + 8));
        *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) |= 0x10u;
        if ( v3 )
          VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((DXGADAPTER **)this, v15);
      }
      v30 = *((_DWORD *)VidPnSourceOwner + 82);
      if ( v30 != 2 )
      {
        if ( v30 )
        {
          DXGDEVICE::UnpinPrimaryAllocations(VidPnSourceOwner, v15);
          if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL)) < 2200 )
            DXGDEVICE::UnpinAllDirectFlipAllocations(VidPnSourceOwner, v15, v31, v32);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations(VidPnSourceOwner, v15);
        }
      }
    }
  }
}
