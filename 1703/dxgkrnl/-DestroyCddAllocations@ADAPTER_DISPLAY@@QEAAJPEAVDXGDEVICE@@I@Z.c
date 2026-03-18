/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00E8858
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     DmmDisablePathsFromVidPnSource @ 0x1C009A290 (DmmDisablePathsFromVidPnSource.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8A44 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     DmmRemovePathsFromVidPnSource @ 0x1C01D66F0 (DmmRemovePathsFromVidPnSource.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00CA174 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00DDD20 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00E763C (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00E96E0 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCddAllocations(ADAPTER_DISPLAY *this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // r14
  __int64 v21; // rbp
  struct DXGALLOCATION *v22; // r8
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2))
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v30 + 24) = 638LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v10 = 3208 * v4;
  if ( DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(3208 * v4 + *((_QWORD *)this + 14))) )
  {
    Current = DXGPROCESS::GetCurrent(v12);
    v16 = **(_QWORD **)(*((_QWORD *)this + 14) + v10 + 24);
    v17 = *(_QWORD *)(v16 + 18584);
    if ( *((_QWORD *)Current + 6) != v17 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v16, v17, v14, v15);
      *(_QWORD *)(v32 + 24) = 655LL;
      WdLogEvent5_WdAssertion(v32);
    }
    v18 = *((_QWORD *)this + 2);
    if ( *(int *)(v18 + 1944) < 0x2000 )
      v19 = 1;
    else
      v19 = *(_DWORD *)(v18 + 248);
    if ( *((_DWORD *)a2 + 102) == 4 )
    {
      if ( v19 )
      {
        v33 = v10 + 88;
        v34 = v19;
        do
        {
          *(_QWORD *)(v33 + *((_QWORD *)this + 14)) = 0LL;
          v33 += 8LL;
          --v34;
        }
        while ( v34 );
      }
      *(_QWORD *)(*((_QWORD *)this + 14) + v10 + 600) = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(*((_QWORD *)this + 14) + v10 + 88) )
      {
        if ( v19 )
        {
          v20 = v10 + 88;
          v21 = v19;
          do
          {
            v22 = *(struct DXGALLOCATION **)(v20 + *((_QWORD *)this + 14));
            if ( v22 )
              ADAPTER_DISPLAY::DisablePrimaryAllocation((PERESOURCE **)this, a2, v22, v15);
            v20 += 8LL;
            --v21;
          }
          while ( v21 );
        }
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          *(struct DXGRESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 14) + v10 + 88) + 40LL),
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        v23 = *((_QWORD *)this + 2);
        if ( *(int *)(v23 + 1944) < 0x2000 )
          v24 = 1;
        else
          v24 = *(_DWORD *)(v23 + 248);
        if ( v24 )
        {
          v25 = v10 + 88;
          v26 = v24;
          do
          {
            *(_QWORD *)(v25 + *((_QWORD *)this + 14)) = 0LL;
            v25 += 8LL;
            --v26;
          }
          while ( v26 );
        }
      }
      v27 = *((_QWORD *)this + 14);
      v28 = *(_QWORD *)(v27 + v10 + 600);
      if ( v28 )
      {
        if ( *((_QWORD *)a2 + 225) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) || *((_BYTE *)a2 + 1821) )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            *(struct DXGRESOURCE **)(v28 + 40),
            0LL,
            DXGDEVICE::DestroyFlagsDefault);
        }
        else
        {
          ObfDereferenceObject(*(PVOID *)(v27 + v10 + 616));
          *(_QWORD *)(*((_QWORD *)this + 14) + v10 + 616) = 0LL;
        }
        *(_QWORD *)(*((_QWORD *)this + 14) + v10 + 600) = 0LL;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) == 1 )
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
          *((OUTPUTDUPL_CONTEXT ***)this + 13),
          (unsigned int)v4,
          0LL,
          0LL,
          0,
          1);
    }
    return 0LL;
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v31 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    return 3221225485LL;
  }
}
