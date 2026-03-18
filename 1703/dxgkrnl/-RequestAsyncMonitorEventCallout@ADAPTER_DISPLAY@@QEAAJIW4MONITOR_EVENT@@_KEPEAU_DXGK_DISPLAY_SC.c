/*
 * XREFs of ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017296C
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115C60 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0194750 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C01971C8 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DISPLAY_CALLOUT_ENTRY *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rcx
  struct DISPLAY_CALLOUT_ENTRY **v31; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v34[16]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v35[10]; // [rsp+50h] [rbp-49h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = 7062LL;
    WdLogEvent5_WdAssertion(v14);
  }
  memset(v35, 0, 0x48uLL);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, (struct DXGFASTMUTEX *const)(a1 + 336), v15, v16);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
  v17 = operator new(0x80uLL, 0x4B677844u, PagedPool);
  if ( v17 )
    v21 = (struct DISPLAY_CALLOUT_ENTRY *)DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
                                            v17,
                                            *(_QWORD *)(a1 + 16) + 268LL,
                                            a2,
                                            a3,
                                            a4,
                                            a5,
                                            a6);
  else
    v21 = 0LL;
  if ( v21 )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 268LL);
    memset(&v35[1], 0, 36);
    v35[0] = 0x480000001ELL;
    LODWORD(v35[6]) = 46;
    HIDWORD(v35[6]) = v29;
    v35[7] = __PAIR64__(a3, a2);
    v35[8] = v29;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v35, v18, v19, v20);
    if ( *(_BYTE *)(a1 + 376) )
    {
      v31 = *(struct DISPLAY_CALLOUT_ENTRY ***)(a1 + 392);
      if ( *v31 != (struct DISPLAY_CALLOUT_ENTRY *)(a1 + 384) )
        __fastfail(3u);
      *(_QWORD *)v21 = a1 + 384;
      *((_QWORD *)v21 + 1) = v31;
      *v31 = v21;
      *(_QWORD *)(a1 + 392) = v21;
      v28 = 0;
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal(v30, v25, v26, v27);
      v28 = DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((struct DXGGLOBAL *)((char *)Global + 1208), v21);
    }
  }
  else
  {
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 268LL);
    memset(&v35[1], 0, 36);
    v35[0] = 0x480000001ELL;
    v35[6] = 0xC00000170000002EuLL;
    v35[7] = __PAIR64__(a3, a2);
    v35[8] = v22;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v35, v18, v19, v20);
    v24 = WdLogNewEntry5_WdLowResource(v23);
    *(_QWORD *)(v24 + 24) = 7087LL;
    WdLogEvent5_WdLowResource(v24);
    v28 = -1073741801;
  }
  if ( v34[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34, v25, v26, v27);
  return v28;
}
