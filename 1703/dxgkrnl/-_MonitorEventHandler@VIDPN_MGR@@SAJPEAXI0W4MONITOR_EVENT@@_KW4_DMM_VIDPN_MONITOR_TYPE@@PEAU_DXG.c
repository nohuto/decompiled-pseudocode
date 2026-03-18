/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115C60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000C6E8 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CBB8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C0044C54 (-LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010388C (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0113970 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1C0115EB0 (_VIDPN_MGR--_MonitorEventHandler_--_2_--_AUTO_PERFTRACK--__AUTO_PERFTRACK.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017296C (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall VIDPN_MGR::_MonitorEventHandler(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r13
  __int64 v8; // rdi
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  _BYTE *v35; // rcx
  __int64 v36; // rax
  DXGAUTOMUTEX *v37; // rcx
  _QWORD *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  _BYTE *v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // r14
  unsigned int *i; // r14
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rbx
  DMMVIDEOPRESENTTARGET *v74; // rax
  unsigned int v75; // r11d
  _BYTE v76[16]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v77[16]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v78; // [rsp+50h] [rbp-20h] BYREF
  __int64 v79; // [rsp+58h] [rbp-18h]
  int v80; // [rsp+60h] [rbp-10h]
  int v81; // [rsp+64h] [rbp-Ch]
  char v82; // [rsp+68h] [rbp-8h]

  v7 = a5;
  LODWORD(v8) = 0;
  v9 = a2;
  v10 = (int)a4;
  v78 = a4;
  v79 = a5;
  v80 = a6;
  v81 = a2;
  v82 = 1;
  if ( a4 > 3 && a4 - 7 > 3 )
  {
    v41 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v41 + 24) = v10;
    WdLogEvent5_WdError(v41);
    LODWORD(v8) = -1073741811;
    goto LABEL_23;
  }
  if ( !a1 )
  {
    v42 = WdLogNewEntry5_WdError(0LL, a2);
    WdLogEvent5_WdError(v42);
    LODWORD(v8) = -1071775742;
    goto LABEL_23;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v43);
  }
  if ( !*(_QWORD *)(a1 + 2280) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v44);
  }
  v16 = *(_QWORD *)(a1 + 2280);
  v17 = *(_QWORD *)(v16 + 88);
  if ( !v17 )
  {
    v45 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v45 + 24) = a1;
    WdLogEvent5_WdError(v45);
    LODWORD(v8) = -1071774923;
    goto LABEL_23;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a5, *(_QWORD *)(v16 + 88), v14, v15);
  v21 = (unsigned int)v10;
  switch ( (_DWORD)v10 )
  {
    case 0:
LABEL_13:
      v22 = v9;
      if ( v9 == -1 )
      {
        if ( (_DWORD)v10 )
        {
          v69 = WdLogNewEntry5_WdAssertion(v21, v9, v19, v20);
          WdLogEvent5_WdAssertion(v69);
        }
        v70 = (_QWORD *)(*(_QWORD *)(v17 + 80) + 24LL);
        v71 = (_QWORD *)*v70;
        if ( (_QWORD *)*v70 == v70 || v71 == (_QWORD *)8 || (v22 = *((unsigned int *)v71 + 4), (_DWORD)v22 == -1) )
        {
          v72 = WdLogNewEntry5_WdError(v71, v22);
          *(_QWORD *)(v72 + 24) = v17;
          WdLogEvent5_WdError(v72);
          LODWORD(v8) = -1071774971;
          goto LABEL_22;
        }
      }
      LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v17, v22, v7, (unsigned int)v10);
      if ( !*(_DWORD *)(v17 + 472)
        && !(_DWORD)v10
        && !*(_BYTE *)(a1 + 2205)
        && (unsigned __int64)(v7 - 1) <= 4
        && (unsigned int)(a6 - 1) <= 2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 80) + 72LL));
        v73 = *(_QWORD *)(v17 + 80);
        v74 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v73, v9);
        if ( v74
          && DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(v74, *(_DWORD *)(v17 + 476), *(_DWORD *)(v17 + 480)) )
        {
          v75 = 6;
          v7 = 0LL;
        }
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2280), v9, v75, v7, 1, a7);
        v82 = 0;
        if ( v73 )
          ReferenceCounted::Release((ReferenceCounted *)(v73 + 64), v23);
      }
      v29 = *((_QWORD *)DXGGLOBAL::GetGlobal(v24, v23, v25, v26) + 117);
      if ( !*(_BYTE *)v29 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v77, *(struct DXGFASTMUTEX *const *)(v29 + 8), v30, v31);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v77);
        v35 = (_BYTE *)(v29 + 16);
        v36 = 18LL;
        do
        {
          *v35 = 0;
          v35 += 48;
          --v36;
        }
        while ( v36 );
        ++*(_DWORD *)(v29 + 880);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v35, v32, v33, v34) + 24) = 228LL;
        if ( !v77[8] )
          goto LABEL_22;
        v37 = (DXGAUTOMUTEX *)v77;
        goto LABEL_21;
      }
LABEL_79:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v28, v27, v30, v31) + 24) = 206LL;
      goto LABEL_22;
    case 1:
      LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v17, v9, v7, 1LL);
      if ( !*(_DWORD *)(v17 + 472) )
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2280), v9, 1LL, v7, 1, a7);
      goto LABEL_22;
    case 2:
      if ( (unsigned int)v7 > 1 )
      {
        v47 = WdLogNewEntry5_WdError((unsigned int)(v10 - 2), v18);
        *(_QWORD *)(v47 + 24) = v7;
        goto LABEL_46;
      }
      if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 2280) + 16LL)) >= 1105 || v9 != -1 )
      {
        LOBYTE(v19) = (_DWORD)v7 == 0;
        LODWORD(v8) = VIDPN_MGR::PowerOnOffVidPnTarget((VIDPN_MGR *)v17, v9, v19, a7);
        goto LABEL_22;
      }
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 80) + 72LL));
      v39 = *(_QWORD **)(v17 + 80);
      v61 = (_QWORD *)v39[3];
      if ( v61 != v39 + 3 )
      {
        for ( i = (unsigned int *)(v61 - 1);
              i;
              i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v39,
                                    (const struct DMMVIDEOPRESENTTARGET *const)i,
                                    v66,
                                    v67) )
        {
          LOBYTE(v19) = (_DWORD)v7 == 0;
          v63 = VIDPN_MGR::PowerOnOffVidPnTarget((VIDPN_MGR *)v17, 0xFFFFFFFFLL, v19, a7);
          v8 = v63;
          if ( v63 < 0 )
          {
            v68 = WdLogNewEntry5_WdError(v65, v64);
            *(_QWORD *)(v68 + 24) = i[6];
            *(_QWORD *)(v68 + 32) = v8;
            WdLogEvent5_WdError(v68);
          }
        }
      }
LABEL_32:
      if ( v39 )
        ReferenceCounted::Release((ReferenceCounted *)(v39 + 8), v18);
      goto LABEL_22;
    case 3:
      if ( v9 == -1 )
      {
        v60 = WdLogNewEntry5_WdAssertion((unsigned int)(v10 - 3), v18, v19, v20);
        WdLogEvent5_WdAssertion(v60);
      }
      if ( *(_DWORD *)(v17 + 472) )
        goto LABEL_22;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 80) + 72LL));
      v39 = *(_QWORD **)(v17 + 80);
      v40 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)v39, v9);
      if ( v40 && *(_QWORD *)(v40 + 104) )
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2280), v9, 3LL, v7, 0, a7);
      goto LABEL_32;
  }
  v21 = (unsigned int)(v10 - 7);
  if ( (_DWORD)v10 == 7 )
    goto LABEL_13;
  v46 = (unsigned int)(v10 - 9);
  if ( (_DWORD)v10 == 9 )
  {
    if ( v9 == -1 )
    {
      v59 = WdLogNewEntry5_WdAssertion(v46, v18, v19, v20);
      WdLogEvent5_WdAssertion(v59);
    }
    if ( !*(_DWORD *)(v17 + 472) )
      ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2280), v9, 9LL, v7, 0, a7);
    goto LABEL_22;
  }
  if ( (_DWORD)v10 != 10 )
  {
    v47 = WdLogNewEntry5_WdError(v46, v18);
    *(_QWORD *)(v47 + 24) = v10;
LABEL_46:
    WdLogEvent5_WdError(v47);
    LODWORD(v8) = -1073741811;
    goto LABEL_22;
  }
  if ( v9 == -1 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v46, v18, v19, v20);
    WdLogEvent5_WdAssertion(v48);
  }
  LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v17, v9, v7, 10LL);
  ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2280), v9, 10LL, v7, 1, a7);
  v53 = *((_QWORD *)DXGGLOBAL::GetGlobal(v50, v49, v51, v52) + 117);
  if ( *(_BYTE *)v53 )
    goto LABEL_79;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v76, *(struct DXGFASTMUTEX *const *)(v53 + 8), v30, v31);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v76);
  v57 = (_BYTE *)(v53 + 16);
  v58 = 18LL;
  do
  {
    *v57 = 0;
    v57 += 48;
    --v58;
  }
  while ( v58 );
  ++*(_DWORD *)(v53 + 880);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v57, v54, v55, v56) + 24) = 228LL;
  if ( !v76[8] )
    goto LABEL_22;
  v37 = (DXGAUTOMUTEX *)v76;
LABEL_21:
  DXGAUTOMUTEX::Release(v37, v18, v19, v20);
LABEL_22:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a5 + 40), v18, v19, v20);
LABEL_23:
  VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(&v78);
  return (unsigned int)v8;
}
