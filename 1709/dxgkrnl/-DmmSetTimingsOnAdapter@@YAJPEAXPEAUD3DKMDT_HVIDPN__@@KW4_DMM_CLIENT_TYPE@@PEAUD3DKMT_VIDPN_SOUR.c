/*
 * XREFs of ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E1A60
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00925C8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE190 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C00A7D74 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmSetTimingsOnAdapter(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        _BYTE *a6,
        __int64 a7,
        struct COREDEVICEACCESS *a8)
{
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // rbx
  __int64 *v14; // rbp
  __int64 *v15; // rax
  __int64 v16; // rcx
  struct DMMVIDPN *v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rsi
  unsigned int v21; // ebx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v24);
  }
  v13 = (struct DXGDEVICE *)a7;
  if ( a7 && (*(_DWORD *)(a7 + 328) != 2 || *(_QWORD *)(a7 + 1672) != a1) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v25);
  }
  ++*(_DWORD *)(*(_QWORD *)(a1 + 2304) + 240LL);
  v14 = *(__int64 **)(*(_QWORD *)(a1 + 2304) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a7, (__int64)v14);
  v15 = (__int64 *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
  v17 = (struct DMMVIDPN *)v15;
  if ( v15 && (__int64 *)v15[6] == v14 )
  {
    v18 = VIDPN_MGR::SetTimingsFromVidPn(v14, a3, a4, v15, (struct D3DKMT_VIDPN_SOURCE_MASKS *)a5, a6, 0, v13, a8);
    v20 = v18;
    if ( v18 < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v27 + 24) = v17;
      *(_QWORD *)(v27 + 32) = v20;
      WdLogEvent5_WdError(v27);
      v21 = v20;
    }
    else
    {
      if ( *(_DWORD *)(a5 + 8) | *(_DWORD *)(a5 + 40) | *(_DWORD *)(a5 + 12) | *(_DWORD *)(a5 + 48) | *(_DWORD *)(a5 + 76)
        && (int)VIDPN_MGR::CacheLastClientCommittedVidPnRef((VIDPN_MGR *)v14, v17) < 0 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v28);
      }
      *(_DWORD *)(a5 + 8) |= *(_DWORD *)(a5 + 40);
      v21 = 0;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v16);
    v21 = -1073741811;
    *(_QWORD *)(v26 + 24) = a2;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a7 + 40));
  return v21;
}
