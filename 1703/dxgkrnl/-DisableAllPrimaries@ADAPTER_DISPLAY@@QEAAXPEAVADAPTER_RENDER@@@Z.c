/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104BA4
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00E763C (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01016C0 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104CEC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C00062BC (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0006C14 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C000DF98 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00A0370 (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00CA450 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00CA5B4 (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00CFE7C (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E6ECC (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0187E6C (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableAllPrimaries(
        PERESOURCE **this,
        struct ADAPTER_RENDER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned int v15; // esi
  bool i; // bp
  unsigned int j; // ebp
  unsigned int k; // esi
  __int64 v19; // r14
  struct ADAPTER_RENDER **v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  DXGDODPRESENT *v26; // rcx
  int v27; // eax
  __int64 v28; // r14
  _QWORD *v29; // rax
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v31; // r14
  __int64 v32; // r15
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r8
  struct COREDEVICEACCESS *v43; // r9

  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v21 + 24) = 2904LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a2 + 2)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v22 + 24) = 2905LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v23 + 24) = 2906LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( this[2][286] )
  {
    if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) != 1 )
    {
      v24 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 176LL);
      if ( (_DWORD)v24 != 5 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v24, v10, v12, v13);
        *(_QWORD *)(v25 + 24) = 2916LL;
        WdLogEvent5_WdAssertion(v25);
      }
    }
    ADAPTER_RENDER::DisableOverlays(a2, v10, v12, v13);
  }
  else
  {
    v26 = (DXGDODPRESENT *)this[33];
    if ( v26 )
      DXGDODPRESENT::Flush(v26);
  }
  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) == 1 )
    ADAPTER_RENDER::FlushScheduler((__int64)a2, 8, 0xFFFFFFFF, 0);
  v14 = *((unsigned int *)this[2] + 44);
  if ( (_DWORD)v14 == 1 )
  {
    v15 = 0;
    for ( i = this[2][286] == 0LL; v15 < *((_DWORD *)this + 20); ++v15 )
    {
      if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v15, v12, v13) )
      {
        if ( !i )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 2312LL));
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)a2 + 51) + 8LL) + 456LL))(
                 *((_QWORD *)a2 + 52),
                 v15) )
          {
            ADAPTER_DISPLAY::WaitForVerticalBlankEvent((ADAPTER_DISPLAY *)this, v15);
          }
          DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a2 + 2));
          i = 1;
        }
        v27 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v15, 0LL, 4LL, 0);
        v28 = v27;
        if ( v27 < 0 )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdError(v14, v10);
          v29[3] = v28;
          v29[4] = this[2];
          v29[5] = v15;
          WdLogEvent5_WdError(v29);
        }
      }
    }
  }
  for ( j = 0; j < *((_DWORD *)this + 20); ++j )
  {
    v10 = 3208LL * j;
    if ( this[14][(unsigned __int64)v10 / 8 + 11] )
    {
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
      if ( NumDifferentPhysicalAdapters )
      {
        v31 = v10 + 88;
        v32 = NumDifferentPhysicalAdapters;
        do
        {
          v33 = *(__int64 *)((char *)this[14] + v31);
          if ( v33 )
          {
            v34 = *(_QWORD *)(v33 + 48);
            if ( !v34 )
            {
              v35 = WdLogNewEntry5_WdAssertion(v14, v10, v12, v13);
              *(_QWORD *)(v35 + 24) = 2992LL;
              WdLogEvent5_WdAssertion(v35);
            }
            if ( (*(_DWORD *)(v34 + 4) & 2) == 0 )
            {
              v36 = WdLogNewEntry5_WdAssertion(v14, v10, v12, v13);
              *(_QWORD *)(v36 + 24) = 2993LL;
              WdLogEvent5_WdAssertion(v36);
            }
            if ( ((*(_DWORD *)(v34 + 4) >> 6) & 0xF) != j )
            {
              v37 = WdLogNewEntry5_WdAssertion(v14, v10, v12, v13);
              *(_QWORD *)(v37 + 24) = 2994LL;
              WdLogEvent5_WdAssertion(v37);
            }
            if ( !*(_QWORD *)(v34 + 8) )
            {
              v38 = WdLogNewEntry5_WdAssertion(v14, v10, v12, v13);
              *(_QWORD *)(v38 + 24) = 2995LL;
              WdLogEvent5_WdAssertion(v38);
            }
            if ( (*(_DWORD *)(v34 + 4) & 0x10) == 0 )
            {
              if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) != 1 )
              {
                v39 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 176LL);
                if ( (_DWORD)v39 != 5 )
                {
                  v40 = WdLogNewEntry5_WdAssertion(v39, v10, v12, v13);
                  *(_QWORD *)(v40 + 24) = 3006LL;
                  WdLogEvent5_WdAssertion(v40);
                }
              }
              VIDMM_EXPORT::VidMmInvalidateAllocation(
                *((VIDMM_EXPORT **)a2 + 54),
                *((struct VIDMM_GLOBAL **)a2 + 55),
                *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v34 + 8));
              *(_DWORD *)(v34 + 4) |= 0x10u;
            }
          }
          v31 += 8LL;
          --v32;
        }
        while ( v32 );
      }
    }
  }
  for ( k = 0; k < *((_DWORD *)this + 20); ++k )
  {
    v19 = 401LL * k;
    v20 = (struct ADAPTER_RENDER **)this[14][v19 + 86];
    if ( v20 )
    {
      if ( a2 != v20[2] )
      {
        v41 = WdLogNewEntry5_WdAssertion(v14, v10, v12, v13);
        *(_QWORD *)(v41 + 24) = 3026LL;
        WdLogEvent5_WdAssertion(v41);
      }
      if ( LODWORD(this[14][v19 + 86][3].OwnerTable) )
      {
        DXGDEVICE::UnpinPrimaryAllocations((DXGDEVICE *)v20, k, v12, v13);
        DXGDEVICE::UnpinAllDirectFlipAllocations((PERESOURCE **)v20, k, v42, v43);
      }
      else
      {
        DXGDEVICE::InvalidatePrimaryAllocations((DXGDEVICE *)v20, k);
      }
    }
  }
}
