/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C010240C
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00ACD28 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0102554 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0174158 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C00020FC (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000281C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00038C8 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C007FD0C (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00836CC (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C009E09C (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C009E200 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00AC588 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C019D5A8 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableAllPrimaries(PERESOURCE **this, struct ADAPTER_RENDER *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // esi
  bool i; // bp
  unsigned int j; // ebp
  unsigned int k; // esi
  __int64 v11; // r14
  struct ADAPTER_RENDER **v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  DXGDODPRESENT *v18; // rcx
  int v19; // eax
  __int64 v20; // r14
  _QWORD *v21; // rax
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // r8d
  struct COREDEVICEACCESS *v36; // r9

  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 3429LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a2 + 2)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v14 + 24) = 3430LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v15 + 24) = 3431LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( this[2][289] )
  {
    if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) != 1 )
    {
      v16 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 176LL);
      if ( (_DWORD)v16 != 5 )
      {
        v17 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v17 + 24) = 3441LL;
        WdLogEvent5_WdAssertion(v17);
      }
    }
    ADAPTER_RENDER::DisableOverlays(a2);
  }
  else
  {
    v18 = (DXGDODPRESENT *)this[33];
    if ( v18 )
      DXGDODPRESENT::Flush(v18);
  }
  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) == 1 )
    ADAPTER_RENDER::FlushScheduler((__int64)a2, 8, 0xFFFFFFFF, 0);
  v6 = *((unsigned int *)this[2] + 44);
  if ( (_DWORD)v6 == 1 )
  {
    v7 = 0;
    for ( i = this[2][289] == 0LL; v7 < *((_DWORD *)this + 20); ++v7 )
    {
      if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v7) )
      {
        if ( !i )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 2336LL));
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)a2 + 63) + 8LL) + 456LL))(
                 *((_QWORD *)a2 + 64),
                 v7) )
          {
            ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
          }
          DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a2 + 2));
          i = 1;
        }
        v19 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v7, 0LL, 4, 0);
        v20 = v19;
        if ( v19 < 0 )
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdError(v6);
          v21[3] = v20;
          v21[4] = this[2];
          v21[5] = v7;
          WdLogEvent5_WdError(v21);
        }
      }
    }
  }
  for ( j = 0; j < *((_DWORD *)this + 20); ++j )
  {
    if ( this[14][470 * j + 11] )
    {
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
      if ( NumDifferentPhysicalAdapters )
      {
        v24 = v23 + 88;
        v25 = NumDifferentPhysicalAdapters;
        do
        {
          v26 = *(__int64 *)((char *)this[14] + v24);
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 48);
            if ( !v27 )
            {
              v28 = WdLogNewEntry5_WdAssertion(v6);
              *(_QWORD *)(v28 + 24) = 3517LL;
              WdLogEvent5_WdAssertion(v28);
            }
            if ( (*(_DWORD *)(v27 + 4) & 2) == 0 )
            {
              v29 = WdLogNewEntry5_WdAssertion(v6);
              *(_QWORD *)(v29 + 24) = 3518LL;
              WdLogEvent5_WdAssertion(v29);
            }
            if ( ((*(_DWORD *)(v27 + 4) >> 6) & 0xF) != j )
            {
              v30 = WdLogNewEntry5_WdAssertion(v6);
              *(_QWORD *)(v30 + 24) = 3519LL;
              WdLogEvent5_WdAssertion(v30);
            }
            if ( !*(_QWORD *)(v27 + 8) )
            {
              v31 = WdLogNewEntry5_WdAssertion(v6);
              *(_QWORD *)(v31 + 24) = 3520LL;
              WdLogEvent5_WdAssertion(v31);
            }
            if ( (*(_DWORD *)(v27 + 4) & 0x10) == 0 )
            {
              if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) != 1 )
              {
                v32 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 176LL);
                if ( (_DWORD)v32 != 5 )
                {
                  v33 = WdLogNewEntry5_WdAssertion(v32);
                  *(_QWORD *)(v33 + 24) = 3531LL;
                  WdLogEvent5_WdAssertion(v33);
                }
              }
              VIDMM_EXPORT::VidMmInvalidateAllocation(
                *((VIDMM_EXPORT **)a2 + 66),
                *((struct VIDMM_GLOBAL **)a2 + 67),
                *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v27 + 8));
              *(_DWORD *)(v27 + 4) |= 0x10u;
            }
          }
          v24 += 8LL;
          --v25;
        }
        while ( v25 );
      }
    }
  }
  for ( k = 0; k < *((_DWORD *)this + 20); ++k )
  {
    v11 = 470LL * k;
    v12 = (struct ADAPTER_RENDER **)this[14][v11 + 86];
    if ( v12 )
    {
      if ( a2 != v12[2] )
      {
        v34 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v34 + 24) = 3551LL;
        WdLogEvent5_WdAssertion(v34);
      }
      if ( LODWORD(this[14][v11 + 86][3].OwnerTable) )
      {
        DXGDEVICE::UnpinPrimaryAllocations((DXGDEVICE *)v12, k);
        if ( (int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)v12[2] + 2)) < 2200 || *(_BYTE *)(v6 + 2236) )
          DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)v12, k, v35, v36);
      }
      else
      {
        DXGDEVICE::InvalidatePrimaryAllocations((DXGDEVICE *)v12, k);
      }
    }
  }
}
