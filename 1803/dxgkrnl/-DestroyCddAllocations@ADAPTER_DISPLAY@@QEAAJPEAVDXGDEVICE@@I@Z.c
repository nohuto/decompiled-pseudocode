/*
 * XREFs of ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C010D918
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C010F350 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0151310 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C0214AB0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C021CE80 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C00E2D74 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F2480 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ @ 0x1C010DFB4 (-CheckSessionOwnership@DISPLAY_SOURCE@@QEAAEXZ.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0153370 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
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
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r14
  __int64 v24; // rbp
  __int64 v25; // rax
  struct DXGALLOCATION *v26; // r8
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdx

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2))
    || !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v18 + 24) = 1084LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v7 = 3760 * v4;
  if ( DISPLAY_SOURCE::CheckSessionOwnership((DISPLAY_SOURCE *)(3760 * v4 + *((_QWORD *)this + 14))) )
  {
    Current = DXGPROCESS::GetCurrent(v9, v8);
    v11 = **(_QWORD **)(*((_QWORD *)this + 14) + v7 + 24);
    if ( *((_QWORD *)Current + 7) != *(_QWORD *)(v11 + 18592) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v20 + 24) = 1101LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v12 = *((_QWORD *)this + 2);
    if ( *(int *)(v12 + 2104) < 0x2000 )
      v13 = 1;
    else
      v13 = *(_DWORD *)(v12 + 248);
    if ( *((_DWORD *)a2 + 106) == 4 )
    {
      if ( v13 )
      {
        v21 = v7 + 88;
        v22 = v13;
        do
        {
          *(_QWORD *)(v21 + *((_QWORD *)this + 14)) = 0LL;
          v21 += 8LL;
          --v22;
        }
        while ( v22 );
      }
      *(_QWORD *)(*((_QWORD *)this + 14) + v7 + 600) = 0LL;
    }
    else
    {
      v14 = *((_QWORD *)this + 14);
      if ( *(_QWORD *)(v7 + v14 + 88) )
      {
        if ( v13 )
        {
          v23 = v7 + 88;
          v24 = v13;
          v25 = *((_QWORD *)this + 14);
          do
          {
            v26 = *(struct DXGALLOCATION **)(v23 + v25);
            v14 = v25;
            if ( v26 )
            {
              ADAPTER_DISPLAY::DisablePrimaryAllocation(this, a2, v26);
              v14 = *((_QWORD *)this + 14);
            }
            v25 = *((_QWORD *)this + 14);
            v23 += 8LL;
            --v24;
          }
          while ( v24 );
        }
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          *(struct DXGRESOURCE **)(*(_QWORD *)(v7 + v14 + 88) + 40LL),
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        v27 = *((_QWORD *)this + 2);
        if ( *(int *)(v27 + 2104) < 0x2000 )
          v28 = 1;
        else
          v28 = *(_DWORD *)(v27 + 248);
        if ( v28 )
        {
          v29 = v7 + 88;
          v30 = v28;
          do
          {
            *(_QWORD *)(v29 + *((_QWORD *)this + 14)) = 0LL;
            v29 += 8LL;
            --v30;
          }
          while ( v30 );
        }
      }
      v15 = *((_QWORD *)this + 14);
      v16 = *(_QWORD *)(v15 + v7 + 600);
      if ( v16 )
      {
        if ( *((_QWORD *)a2 + 211) == *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) || (*((_BYTE *)a2 + 1709) & 1) != 0 )
        {
          DXGDEVICE::DestroyAllocationInternal(
            a2,
            0,
            0LL,
            *(struct DXGRESOURCE **)(v16 + 40),
            0LL,
            DXGDEVICE::DestroyFlagsDefault);
        }
        else
        {
          ObfDereferenceObject(*(PVOID *)(v15 + v7 + 616));
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
    v19 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v19 + 24) = *((_QWORD *)this + 2);
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
}
