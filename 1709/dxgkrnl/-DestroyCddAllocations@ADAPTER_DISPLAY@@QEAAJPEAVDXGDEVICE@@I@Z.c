/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00ADF10
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007B478 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00AE140 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00BBD0C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C01EDC70 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0090640 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009DD6C (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00ACD28 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C00AF5B8 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCddAllocations(ADAPTER_DISPLAY *this, struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // r14
  __int64 v15; // rbp
  struct DXGALLOCATION *v16; // r8
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2))
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v23 + 24) = 1083LL;
    WdLogEvent5_WdAssertion(v23);
  }
  v7 = 3760 * v4;
  if ( DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(3760 * v4 + *((_QWORD *)this + 14))) )
  {
    Current = DXGPROCESS::GetCurrent(v9, v8);
    v11 = **(_QWORD **)(*((_QWORD *)this + 14) + v7 + 24);
    if ( *((_QWORD *)Current + 6) != *(_QWORD *)(v11 + 18592) )
    {
      v25 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v25 + 24) = 1100LL;
      WdLogEvent5_WdAssertion(v25);
    }
    v12 = *((_QWORD *)this + 2);
    if ( *(int *)(v12 + 1968) < 0x2000 )
      v13 = 1;
    else
      v13 = *(_DWORD *)(v12 + 248);
    if ( *((_DWORD *)a2 + 102) == 4 )
    {
      if ( v13 )
      {
        v26 = v7 + 88;
        v27 = v13;
        do
        {
          *(_QWORD *)(v26 + *((_QWORD *)this + 14)) = 0LL;
          v26 += 8LL;
          --v27;
        }
        while ( v27 );
      }
      *(_QWORD *)(*((_QWORD *)this + 14) + v7 + 600) = 0LL;
    }
    else
    {
      if ( *(_QWORD *)(*((_QWORD *)this + 14) + v7 + 88) )
      {
        if ( v13 )
        {
          v14 = v7 + 88;
          v15 = v13;
          do
          {
            v16 = *(struct DXGALLOCATION **)(v14 + *((_QWORD *)this + 14));
            if ( v16 )
              ADAPTER_DISPLAY::DisablePrimaryAllocation((PERESOURCE **)this, a2, v16);
            v14 += 8LL;
            --v15;
          }
          while ( v15 );
        }
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          *(struct DXGRESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 14) + v7 + 88) + 40LL),
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        v17 = *((_QWORD *)this + 2);
        if ( *(int *)(v17 + 1968) < 0x2000 )
          v18 = 1;
        else
          v18 = *(_DWORD *)(v17 + 248);
        if ( v18 )
        {
          v19 = v7 + 88;
          v20 = v18;
          do
          {
            *(_QWORD *)(v19 + *((_QWORD *)this + 14)) = 0LL;
            v19 += 8LL;
            --v20;
          }
          while ( v20 );
        }
      }
      v21 = *((_QWORD *)this + 14);
      if ( *(_QWORD *)(v21 + v7 + 600) )
      {
        if ( *((_QWORD *)a2 + 209) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) || *((_BYTE *)a2 + 1693) )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            *(struct DXGRESOURCE **)(*(_QWORD *)(v21 + v7 + 600) + 40LL),
            0LL,
            DXGDEVICE::DestroyFlagsDefault);
        }
        else
        {
          ObfDereferenceObject(*(PVOID *)(v21 + v7 + 616));
          *(_QWORD *)(*((_QWORD *)this + 14) + v7 + 616) = 0LL;
        }
        *(_QWORD *)(*((_QWORD *)this + 14) + v7 + 600) = 0LL;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) == 1 )
        OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(*((OUTPUTDUPL_CONTEXT ***)this + 13), v4, 0LL, 0, 0, 1);
    }
    return 0LL;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    return 3221225485LL;
  }
}
