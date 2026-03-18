/*
 * XREFs of ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102294
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DF40 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01025FC (--0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z @ 0x1C01AC194 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@@Z.c)
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
  PVOID v11; // rax
  struct DISPLAY_CALLOUT_ENTRY *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct DISPLAY_CALLOUT_ENTRY **v15; // rcx
  unsigned int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGGLOBAL *Global; // rax
  _BYTE v23[16]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v24[10]; // [rsp+50h] [rbp-49h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v18 + 24) = 7711LL;
    WdLogEvent5_WdAssertion(v18);
  }
  memset(v24, 0, 0x48uLL);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(a1 + 336));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v11 = operator new(0x88uLL, 0x4B677844u, PagedPool);
  if ( v11 )
    v12 = (struct DISPLAY_CALLOUT_ENTRY *)DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
                                            v11,
                                            *(_QWORD *)(a1 + 16) + 268LL,
                                            a2,
                                            a3,
                                            a4,
                                            a5,
                                            a6);
  else
    v12 = 0LL;
  if ( v12 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 268LL);
    memset(&v24[1], 0, 36);
    v24[0] = 0x480000001ELL;
    LODWORD(v24[6]) = 46;
    HIDWORD(v24[6]) = v13;
    v24[7] = __PAIR64__(a3, a2);
    v24[8] = v13;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24);
    if ( *(_BYTE *)(a1 + 376) )
    {
      v15 = *(struct DISPLAY_CALLOUT_ENTRY ***)(a1 + 392);
      if ( *v15 != (struct DISPLAY_CALLOUT_ENTRY *)(a1 + 384) )
        __fastfail(3u);
      *(_QWORD *)v12 = a1 + 384;
      *((_QWORD *)v12 + 1) = v15;
      *v15 = v12;
      *(_QWORD *)(a1 + 392) = v12;
      v16 = 0;
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal(v14);
      v16 = DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((struct DXGGLOBAL *)((char *)Global + 1192), v12);
    }
  }
  else
  {
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 268LL);
    memset(&v24[1], 0, 36);
    v24[0] = 0x480000001ELL;
    v24[6] = 0xC00000170000002EuLL;
    v24[7] = __PAIR64__(a3, a2);
    v24[8] = v19;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24);
    v21 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v21 + 24) = 7736LL;
    WdLogEvent5_WdLowResource(v21);
    v16 = -1073741801;
  }
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  return v16;
}
