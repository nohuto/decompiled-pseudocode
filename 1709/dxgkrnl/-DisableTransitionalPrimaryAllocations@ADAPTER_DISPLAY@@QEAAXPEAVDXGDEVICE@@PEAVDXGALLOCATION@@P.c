/*
 * XREFs of ?DisableTransitionalPrimaryAllocations@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0174420
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000796C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000F818 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C0020DD8 (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 *     ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1C019E620 (-UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocations(
        DXGADAPTER **this,
        struct DXGDEVICE *a2,
        struct DXGALLOCATION *a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 3201LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 3202LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 3203LL;
    WdLogEvent5_WdAssertion(v12);
  }
  while ( a3 )
  {
    if ( !*((_QWORD *)a3 + 6) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v13 + 24) = 3209LL;
      WdLogEvent5_WdAssertion(v13);
    }
    v14 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
    if ( (v14 & 1) == 0 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v15 + 24) = 3210LL;
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
    if ( v16 >= *((_DWORD *)this + 20) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v17 + 24) = 3213LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v18 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
    if ( *((_QWORD *)a2 + 209) != v18 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v18);
      *(_QWORD *)(v19 + 24) = 3215LL;
      WdLogEvent5_WdAssertion(v19);
    }
    if ( DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)a2, v16) == a3 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v20);
      *(_QWORD *)(v21 + 24) = 3216LL;
      WdLogEvent5_WdAssertion(v21);
    }
    v22 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
    if ( (v22 & 0x10) != 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v23 + 24) = 3217LL;
      WdLogEvent5_WdAssertion(v23);
    }
    if ( ADAPTER_DISPLAY::GetVidPnSourceOwner(this, v16) == a2 )
    {
      if ( VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
             *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 2) + 528LL),
             *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 2) + 536LL),
             *((struct _VIDMM_MULTI_ALLOC **)a3 + 3),
             0LL) )
      {
        COREDEVICEACCESS::Release(a4);
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 528LL) + 8LL)
                                                       + 696LL))(
          *(_QWORD *)(*((_QWORD *)a2 + 2) + 536LL),
          *((_QWORD *)a3 + 3),
          v16);
        COREDEVICEACCESS::AcquireSharedUncheck(a4);
      }
    }
    DXGDEVICE::UnpinTransitionalPrimaryAllocation(a2, a3, v16);
    a3 = (struct DXGALLOCATION *)*((_QWORD *)a3 + 8);
  }
}
