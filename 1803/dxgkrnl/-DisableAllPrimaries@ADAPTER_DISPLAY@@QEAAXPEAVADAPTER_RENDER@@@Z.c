/*
 * XREFs of ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0152D80
 * Callers:
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E3B00 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0153370 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0153734 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01564E8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0015A44 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C001616C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0028188 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C00D936C (-Flush@DXGDODPRESENT@@QEAAXXZ.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C010D5A4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0147198 (-WaitForVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01596D0 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C018AD10 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C018C45C (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C018C798 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableAllPrimaries(PERESOURCE **this, struct ADAPTER_RENDER *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  DXGDODPRESENT *v11; // rcx
  PERESOURCE v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edi
  bool v15; // bp
  int v16; // eax
  __int64 v17; // r14
  _QWORD *v18; // rax
  unsigned int i; // ebp
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // edi
  __int64 v34; // r14
  PERESOURCE *v35; // rax
  struct ADAPTER_RENDER **v36; // rbp
  __int64 v37; // rax
  int v38; // r8d
  struct COREDEVICEACCESS *v39; // r9

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 3440LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)a2 + 2)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 3441LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 3442LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( this[2][308] )
  {
    if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) != 1 )
    {
      v9 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 176LL);
      if ( (_DWORD)v9 != 5 )
      {
        v10 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v10 + 24) = 3452LL;
        WdLogEvent5_WdAssertion(v10);
      }
    }
    ADAPTER_RENDER::DisableOverlays(a2);
  }
  else
  {
    v11 = (DXGDODPRESENT *)this[33];
    if ( v11 )
      DXGDODPRESENT::Flush(v11);
  }
  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) == 1 )
    ADAPTER_RENDER::FlushScheduler((__int64)a2, 8, 0xFFFFFFFF, 0);
  v12 = (PERESOURCE)*((unsigned int *)this[2] + 44);
  if ( (_DWORD)v12 == 1 )
  {
    v14 = 0;
    v12 = this[2][308];
    v13 = *((_DWORD *)this + 20);
    if ( v13 )
    {
      v15 = v12 == 0LL;
      do
      {
        if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v14) )
        {
          if ( !v15 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 2) + 2488LL));
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)a2 + 65) + 8LL) + 552LL))(
                   *((_QWORD *)a2 + 66),
                   v14) )
            {
              ADAPTER_DISPLAY::WaitForVerticalBlankEvent((DXGADAPTER **)this);
            }
            DXGADAPTER::DecrementVSyncWaiter(*((DXGADAPTER **)a2 + 2));
            v15 = 1;
          }
          v16 = ADAPTER_DISPLAY::SetVidPnSourceVisibility((ADAPTER_DISPLAY *)this, v14, 0, 4u, 0);
          v17 = v16;
          if ( v16 < 0 )
          {
            v18 = (_QWORD *)WdLogNewEntry5_WdError(v12);
            v18[3] = v17;
            v18[4] = this[2];
            v18[5] = v14;
            WdLogEvent5_WdError(v18);
          }
        }
        v13 = *((_DWORD *)this + 20);
        ++v14;
      }
      while ( v14 < v13 );
    }
  }
  else
  {
    v13 = *((_DWORD *)this + 20);
  }
  for ( i = 0; i < v13; ++i )
  {
    if ( this[14][470 * i + 11] )
    {
      NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters((DXGADAPTER *)this[2]);
      if ( NumDifferentPhysicalAdapters )
      {
        v22 = v21 + 88;
        v23 = NumDifferentPhysicalAdapters;
        do
        {
          v24 = *(__int64 *)((char *)this[14] + v22);
          if ( v24 )
          {
            v25 = *(_QWORD *)(v24 + 48);
            if ( !v25 )
            {
              v26 = WdLogNewEntry5_WdAssertion(v12);
              *(_QWORD *)(v26 + 24) = 3528LL;
              WdLogEvent5_WdAssertion(v26);
            }
            v27 = *(_DWORD *)(v25 + 4);
            if ( (v27 & 2) == 0 )
            {
              v28 = WdLogNewEntry5_WdAssertion(v12);
              *(_QWORD *)(v28 + 24) = 3529LL;
              WdLogEvent5_WdAssertion(v28);
              v27 = *(_DWORD *)(v25 + 4);
            }
            if ( ((v27 >> 6) & 0xF) != i )
            {
              v29 = WdLogNewEntry5_WdAssertion(v12);
              *(_QWORD *)(v29 + 24) = 3530LL;
              WdLogEvent5_WdAssertion(v29);
            }
            if ( !*(_QWORD *)(v25 + 8) )
            {
              v30 = WdLogNewEntry5_WdAssertion(v12);
              *(_QWORD *)(v30 + 24) = 3531LL;
              WdLogEvent5_WdAssertion(v30);
            }
            if ( (*(_DWORD *)(v25 + 4) & 0x10) == 0 )
            {
              if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 176LL) != 1 )
              {
                v31 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 176LL);
                if ( (_DWORD)v31 != 5 )
                {
                  v32 = WdLogNewEntry5_WdAssertion(v31);
                  *(_QWORD *)(v32 + 24) = 3542LL;
                  WdLogEvent5_WdAssertion(v32);
                }
              }
              VIDMM_EXPORT::VidMmInvalidateAllocation(
                *((VIDMM_EXPORT **)a2 + 68),
                *((struct VIDMM_GLOBAL **)a2 + 69),
                *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v25 + 8));
              *(_DWORD *)(v25 + 4) |= 0x10u;
            }
          }
          v22 += 8LL;
          --v23;
        }
        while ( v23 );
      }
    }
    v13 = *((_DWORD *)this + 20);
  }
  v33 = 0;
  if ( v13 )
  {
    do
    {
      v34 = 470LL * v33;
      v35 = this[14];
      v36 = (struct ADAPTER_RENDER **)v35[v34 + 86];
      if ( v36 )
      {
        if ( a2 != v36[2] )
        {
          v37 = WdLogNewEntry5_WdAssertion(v12);
          *(_QWORD *)(v37 + 24) = 3562LL;
          WdLogEvent5_WdAssertion(v37);
          v35 = this[14];
        }
        if ( LODWORD(v35[v34 + 86][3].OwnerTable) )
        {
          DXGDEVICE::UnpinPrimaryAllocations((DXGDEVICE *)v36, v33);
          if ( (int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)v36[2] + 2)) < 2200 )
            DXGDEVICE::UnpinAllDirectFlipAllocations((DXGDEVICE *)v36, v33, v38, v39);
        }
        else
        {
          DXGDEVICE::InvalidatePrimaryAllocations((DXGDEVICE *)v36, v33);
        }
      }
      ++v33;
    }
    while ( v33 < *((_DWORD *)this + 20) );
  }
}
