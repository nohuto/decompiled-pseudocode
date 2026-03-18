/*
 * XREFs of ?DisableTransitionalPrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0170BD4
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B7E8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C000F5E0 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C0022F6C (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PE.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableTransitionalPrimaryAllocation(
        DXGADAPTER **this,
        struct DXGDEVICE *a2,
        struct _VIDMM_MULTI_ALLOC **a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _BOOL8 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned int v22; // edi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v8 + 24) = 2719LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a3 || !a3[6] )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 2720LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((unsigned int *)a3[6] + 1);
  if ( (v10 & 1) == 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 2721LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = 2722LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    *(_QWORD *)(v21 + 24) = 2723LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v22 = (*((_DWORD *)a3[6] + 1) >> 6) & 0xF;
  if ( v22 >= *((_DWORD *)this + 20) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    *(_QWORD *)(v23 + 24) = 2727LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL);
  if ( *((_QWORD *)a2 + 225) != v24 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v24, v17, v19, v20);
    *(_QWORD *)(v25 + 24) = 2729LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( DXGDEVICE::GetDisplayedPrimary(a2, v22, v19) == (const struct DXGALLOCATION *)a3 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
    *(_QWORD *)(v30 + 24) = 2730LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v31 = *((unsigned int *)a3[6] + 1);
  if ( (v31 & 0x10) != 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v31, v26, v28, v29);
    *(_QWORD *)(v32 + 24) = 2731LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( ADAPTER_DISPLAY::GetVidPnSourceOwner(this, v22) == a2
    && VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
         *(VIDMM_EXPORT **)(*((_QWORD *)a2 + 2) + 432LL),
         *(struct VIDMM_GLOBAL **)(*((_QWORD *)a2 + 2) + 440LL),
         a3[3],
         0LL) )
  {
    COREDEVICEACCESS::Release(a4);
    (*(void (__fastcall **)(_QWORD, struct _VIDMM_MULTI_ALLOC *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2)
                                                                                                + 432LL)
                                                                                    + 8LL)
                                                                        + 696LL))(
      *(_QWORD *)(*((_QWORD *)a2 + 2) + 440LL),
      a3[3],
      v22);
    COREDEVICEACCESS::AcquireSharedUncheck(a4);
  }
  DXGDEVICE::UnpinTransitionalPrimaryAllocation(a2, (struct DXGALLOCATION *)a3, v22);
}
