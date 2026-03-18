/*
 * XREFs of ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0156FCC
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0217CE0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019BEE4 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C01A1558 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v10; // rcx
  __int64 v11; // rax
  PVOID v12; // rax
  struct DISPLAY_CALLOUT_ENTRY *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  struct DISPLAY_CALLOUT_ENTRY **v19; // rcx
  struct DXGGLOBAL *Global; // rax
  _BYTE v22[16]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v23[10]; // [rsp+50h] [rbp-49h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 7731LL;
    WdLogEvent5_WdAssertion(v11);
  }
  memset(v23, 0, 0x48uLL);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)(a1 + 336), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v12 = operator new[](0x88uLL, 0x4B677844u, PagedPool);
  if ( v12 )
    v13 = (struct DISPLAY_CALLOUT_ENTRY *)DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
                                            v12,
                                            *(_QWORD *)(a1 + 16) + 268LL,
                                            a2,
                                            a3,
                                            a4,
                                            a5,
                                            a6);
  else
    v13 = 0LL;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 268LL);
  memset(&v23[1], 0, 36);
  v23[0] = 0x480000001ELL;
  LODWORD(v23[6]) = 46;
  v23[7] = __PAIR64__(a3, a2);
  v23[8] = v14;
  if ( v13 )
  {
    HIDWORD(v23[6]) = v14;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v23);
    if ( *(_BYTE *)(a1 + 376) )
    {
      v19 = *(struct DISPLAY_CALLOUT_ENTRY ***)(a1 + 392);
      if ( *v19 != (struct DISPLAY_CALLOUT_ENTRY *)(a1 + 384) )
        __fastfail(3u);
      *(_QWORD *)v13 = a1 + 384;
      *((_QWORD *)v13 + 1) = v19;
      *v19 = v13;
      *(_QWORD *)(a1 + 392) = v13;
      v17 = 0;
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal(v18);
      v17 = DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((struct DXGGLOBAL *)((char *)Global + 1320), v13);
    }
  }
  else
  {
    HIDWORD(v23[6]) = -1073741801;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v23);
    v16 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v16 + 24) = 7756LL;
    WdLogEvent5_WdLowResource(v16);
    v17 = -1073741801;
  }
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  return v17;
}
