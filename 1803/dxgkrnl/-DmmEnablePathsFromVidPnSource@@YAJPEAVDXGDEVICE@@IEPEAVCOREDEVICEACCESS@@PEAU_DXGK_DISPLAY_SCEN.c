/*
 * XREFs of ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010F42C
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D05C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkDisplayOnOff @ 0x1C010F5D0 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000B6AC (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0027DE0 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DEA4C (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00F48DC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C010D80C (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C010D8B4 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0151310 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C02150D0 (-DmmResetModeState@@YAJQEAXK@Z.c)
 */

__int64 __fastcall DmmEnablePathsFromVidPnSource(
        struct DXGDEVICE *a1,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  VIDPN_MGR *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  __int64 v18; // rax
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int CddAllocations; // eax
  __int64 v24; // rcx
  __int64 v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  char v32[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v34[60]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = a2;
  memset(v34, 0, sizeof(v34));
  v9 = *((_QWORD *)a1 + 211);
  v32[0] = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v9) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !*(_QWORD *)(v9 + 2464) || a3 )
    ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(DXGADAPTER ***)(v9 + 2456), v6, 0);
  else
    ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v9 + 2456), v6);
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v9)
    || v11 && (*(_DWORD *)(v11 + 4) & 0x10) == 0 && *(_QWORD *)(v11 + 16) )
  {
    goto LABEL_10;
  }
  CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*(DXGADAPTER ***)(v9 + 2456), v6);
  if ( !CddDisplayMode->Width || !CddDisplayMode->Height )
  {
    v27 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v27 + 24) = v6;
    *(_QWORD *)(v27 + 32) = v9;
    WdLogEvent5_WdWarning(v27);
    return 0LL;
  }
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(*(ADAPTER_DISPLAY **)(v9 + 2456), a1, v6, CddDisplayMode, a4);
  v25 = CddAllocations;
  if ( CddAllocations >= 0 )
  {
LABEL_10:
    v12 = *(VIDPN_MGR **)(*(_QWORD *)(v9 + 2456) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v33, (__int64)v12);
    v14 = WdLogNewEntry5_WdDmmEvent(v13);
    *(_QWORD *)(v14 + 24) = v6;
    *(_QWORD *)(v14 + 32) = v12;
    WdLogEvent5_WdDmmEvent(v14);
    v34[8] = 1 << v6;
    v15 = VIDPN_MGR::SetTimingsFromVidPn(v12, 0, 5u, 0LL, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v34, v32, 0, 0LL, 0LL);
    v16 = v15;
    if ( v15 < 0 )
    {
      v34[19] = -1;
      FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v34, v15);
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v29[3] = v6;
      v29[4] = *(int *)(v9 + 272);
      v29[5] = *(unsigned int *)(v9 + 268);
      v29[6] = v16;
      WdLogEvent5_WdError(v29);
    }
    if ( v34[19] )
    {
      v32[0] |= 2u;
      if ( (int)DmmResetModeState((void *const)v9, v34[19]) < 0 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v30);
        WdLogEvent5_WdAssertion(v31);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v26[3] = v6;
    v26[4] = v9;
    v26[5] = v25;
    WdLogEvent5_WdError(v26);
    v32[0] = 2;
  }
  DmmHandleSetTimingsResult((ADAPTER_DISPLAY **)v9, (struct _DMM_SET_TIMING_RESULT *)v32, a5);
  return 0LL;
}
