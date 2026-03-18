/*
 * XREFs of ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BB5F0
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00AD3B8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkDisplayOnOff @ 0x1C00BA9E0 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C00076C8 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000EBC4 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00A632C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C00ADCA0 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00ADE98 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00AE140 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1950 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?DmmResetModeState@@YAJQEAXK@Z @ 0x1C0104990 (-DmmResetModeState@@YAJQEAXK@Z.c)
 */

__int64 __fastcall DmmEnablePathsFromVidPnSource(
        struct DXGDEVICE *a1,
        unsigned int a2,
        char a3,
        PERESOURCE **a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rsi
  unsigned int v18; // ebx
  const struct _D3DKMT_DISPLAYMODE *CddDisplayMode; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int CddAllocations; // eax
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  char v35[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v37[40]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = a2;
  memset(v37, 0, 0x94uLL);
  v9 = *((_QWORD *)a1 + 209);
  v35[0] = 0;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v9) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( *(_QWORD *)(v9 + 2312) && !a3 )
    ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(*(DXGADAPTER ***)(v9 + 2304), v6);
  else
    ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(DXGADAPTER ***)(v9 + 2304), v6, 0);
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v9)
    || v11 && (*(_DWORD *)(v11 + 4) & 0x10) == 0 && *(_QWORD *)(v11 + 16) )
  {
    goto LABEL_10;
  }
  CddDisplayMode = ADAPTER_DISPLAY::GetCddDisplayMode(*(DXGADAPTER ***)(v9 + 2304), v6);
  if ( !CddDisplayMode->Width || !CddDisplayMode->Height )
  {
    v29 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v29 + 24) = v6;
    *(_QWORD *)(v29 + 32) = v9;
    WdLogEvent5_WdWarning(v29);
    return 0LL;
  }
  CddAllocations = ADAPTER_DISPLAY::CreateCddAllocations(*(PERESOURCE ***)(v9 + 2304), a1, v6, CddDisplayMode, a4);
  v26 = CddAllocations;
  if ( CddAllocations >= 0 )
  {
LABEL_10:
    v12 = *(__int64 **)(*(_QWORD *)(v9 + 2304) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v36, (__int64)v12);
    v14 = WdLogNewEntry5_WdDmmEvent(v13);
    v15 = v6;
    *(_QWORD *)(v14 + 24) = v6;
    *(_QWORD *)(v14 + 32) = v12;
    WdLogEvent5_WdDmmEvent(v14);
    v37[8] = 1 << v6;
    v16 = VIDPN_MGR::SetTimingsFromVidPn(v12, 0, 5, 0LL, (struct D3DKMT_VIDPN_SOURCE_MASKS *)v37, v35, 0, 0LL, 0LL);
    v17 = v16;
    if ( v16 < 0 )
    {
      v37[19] = -1;
      FillFailedStatus((struct D3DKMT_VIDPN_SOURCE_MASKS *)v37, v16);
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v30);
      v31[3] = v15;
      v31[4] = *(int *)(v9 + 272);
      v31[5] = *(unsigned int *)(v9 + 268);
      v31[6] = v17;
      WdLogEvent5_WdError(v31);
    }
    v18 = v37[19];
    if ( v37[19] )
    {
      v32 = *(_QWORD *)(v9 + 268);
      v35[0] |= 2u;
      DisplayRestoreVidPnResult(v32, v37[19], 7LL, (unsigned int)v17, a5);
      if ( (int)DmmResetModeState((void *const)v9, v18) < 0 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v33);
        WdLogEvent5_WdAssertion(v34);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v36 + 40));
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v28[3] = v6;
    v28[4] = v9;
    v28[5] = v26;
    WdLogEvent5_WdError(v28);
    v35[0] = 2;
  }
  DmmHandleSetTimingsResult((DXGADAPTER *)v9, (struct _DMM_SET_TIMING_RESULT *)v35, a5);
  return 0LL;
}
