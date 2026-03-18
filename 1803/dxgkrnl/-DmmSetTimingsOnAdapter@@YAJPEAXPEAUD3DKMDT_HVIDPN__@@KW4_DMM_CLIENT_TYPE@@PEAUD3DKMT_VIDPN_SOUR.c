/*
 * XREFs of ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DDA24
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B5E6C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01930B4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0005EC8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C021128C (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmSetTimingsOnAdapter(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        _BYTE *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // rbx
  VIDPN_MGR *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  struct DMMVIDPN *v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rsi
  unsigned int v21; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v23);
  }
  v13 = (struct DXGDEVICE *)a7;
  if ( a7 && (*(_DWORD *)(a7 + 328) != 2 || *(_QWORD *)(a7 + 1688) != a1) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v24);
  }
  ++*(_DWORD *)(*(_QWORD *)(a1 + 2456) + 240LL);
  v14 = *(VIDPN_MGR **)(*(_QWORD *)(a1 + 2456) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&a7, (__int64)v14);
  v15 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  v17 = (struct DMMVIDPN *)v15;
  if ( v15 && *(VIDPN_MGR **)(v15 + 48) == v14 )
  {
    v18 = VIDPN_MGR::SetTimingsFromVidPn(
            v14,
            a3,
            a4,
            (VIDPN_MGR **)v15,
            (struct D3DKMT_VIDPN_SOURCE_MASKS *)a5,
            a6,
            0,
            v13,
            a8);
    v20 = v18;
    if ( v18 < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v26 + 24) = v17;
      *(_QWORD *)(v26 + 32) = v20;
      WdLogEvent5_WdError(v26);
      v21 = v20;
    }
    else
    {
      if ( *(_DWORD *)(a5 + 8) | *(_DWORD *)(a5 + 40) | *(_DWORD *)(a5 + 12) | *(_DWORD *)(a5 + 48) | *(_DWORD *)(a5 + 76)
        && (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef(v14, v17) < 0 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v28);
      }
      *(_DWORD *)(a5 + 8) |= *(_DWORD *)(a5 + 40);
      v21 = 0;
    }
  }
  else
  {
    v25 = WdLogNewEntry5_WdError(v16);
    v21 = -1073741811;
    *(_QWORD *)(v25 + 24) = a2;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a7 + 40));
  return v21;
}
