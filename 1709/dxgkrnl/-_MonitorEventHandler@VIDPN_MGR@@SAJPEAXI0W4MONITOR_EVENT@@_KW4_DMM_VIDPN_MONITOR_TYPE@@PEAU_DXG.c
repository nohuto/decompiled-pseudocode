/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DF40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0002730 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00082F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0008364 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C00358CC (-LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102294 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0103AAC (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1C010E1D4 (_VIDPN_MGR--_MonitorEventHandler_--_2_--_AUTO_PERFTRACK--__AUTO_PERFTRACK.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C010FBDC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_MonitorEventHandler(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  void (__fastcall ***v18)(_QWORD, __int64); // rcx
  int v19; // ebx
  __int64 v20; // rdx
  void (__fastcall ***v21)(_QWORD, __int64); // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rdx
  _BYTE *v26; // rcx
  __int64 v27; // rax
  DXGAUTOMUTEX *v28; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rdx
  _BYTE *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r14
  unsigned int *i; // r14
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rbx
  DMMVIDEOPRESENTTARGET *v56; // rax
  unsigned int v57; // r11d
  int v58; // ebx
  __int64 v59; // rax
  _BYTE v60[16]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v61[16]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v62; // [rsp+50h] [rbp-20h] BYREF
  __int64 v63; // [rsp+58h] [rbp-18h]
  int v64; // [rsp+60h] [rbp-10h]
  unsigned int v65; // [rsp+64h] [rbp-Ch]
  char v66; // [rsp+68h] [rbp-8h]

  v7 = a5;
  LODWORD(v8) = 0;
  v10 = (int)a4;
  v62 = a4;
  v63 = a5;
  v64 = a6;
  v65 = a2;
  v66 = 1;
  if ( a4 > 3 && a4 - 7 > 3 )
  {
    v30 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v30 + 24) = v10;
    WdLogEvent5_WdError(v30);
    LODWORD(v8) = -1073741811;
    goto LABEL_33;
  }
  if ( !a1 )
  {
    v31 = WdLogNewEntry5_WdError(0LL);
    WdLogEvent5_WdError(v31);
    LODWORD(v8) = -1071775742;
    goto LABEL_33;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !*(_QWORD *)(a1 + 2304) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v33);
  }
  v13 = *(_QWORD *)(a1 + 2304);
  v14 = *(_QWORD *)(v13 + 88);
  if ( !v14 )
  {
    v34 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v34 + 24) = a1;
    WdLogEvent5_WdError(v34);
    LODWORD(v8) = -1071774923;
    goto LABEL_33;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a5, *(_QWORD *)(v13 + 88));
  v15 = (unsigned int)v10;
  if ( !(_DWORD)v10 )
    goto LABEL_23;
  if ( (_DWORD)v10 == 1 )
  {
    LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v14, a2, v7, 1LL);
    if ( !*(_DWORD *)(v14 + 480) )
      ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2304), a2, 1u, v7, 1, (__int64)a7);
    goto LABEL_32;
  }
  if ( (_DWORD)v10 != 2 )
  {
    if ( (_DWORD)v10 == 3 )
    {
      if ( a2 == -1 )
      {
        v44 = WdLogNewEntry5_WdAssertion((unsigned int)(v10 - 3));
        WdLogEvent5_WdAssertion(v44);
      }
      if ( *(_DWORD *)(v14 + 480) )
        goto LABEL_32;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
      v16 = *(_QWORD *)(v14 + 80);
      v17 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v16, a2);
      if ( v17 && *(_QWORD *)(v17 + 104) )
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2304), a2, 3u, v7, 0, (__int64)a7);
      goto LABEL_18;
    }
    v15 = (unsigned int)(v10 - 7);
    if ( (_DWORD)v10 == 7 )
    {
LABEL_23:
      v20 = a2;
      if ( a2 == -1 )
      {
        if ( (_DWORD)v10 )
        {
          v51 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v51);
        }
        v52 = (_QWORD *)(*(_QWORD *)(v14 + 80) + 24LL);
        v53 = (_QWORD *)*v52;
        if ( (_QWORD *)*v52 == v52 || v53 == (_QWORD *)8 || (v20 = *((unsigned int *)v53 + 4), (_DWORD)v20 == -1) )
        {
          v54 = WdLogNewEntry5_WdError(v53);
          *(_QWORD *)(v54 + 24) = v14;
          WdLogEvent5_WdError(v54);
          LODWORD(v8) = -1071774971;
          goto LABEL_32;
        }
      }
      LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v14, v20, v7, (unsigned int)v10);
      if ( !*(_DWORD *)(v14 + 480)
        && !(_DWORD)v10
        && !*(_BYTE *)(a1 + 2229)
        && (unsigned __int64)(v7 - 1) <= 4
        && (unsigned int)(a6 - 1) <= 2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
        v55 = *(_QWORD *)(v14 + 80);
        v56 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v55, a2);
        if ( v56
          && DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(v56, *(_DWORD *)(v14 + 484), *(_DWORD *)(v14 + 488)) )
        {
          v57 = 6;
          v7 = 0LL;
        }
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2304), a2, v57, v7, 1, (__int64)a7);
        v66 = 0;
        if ( v55 )
        {
          v21 = (void (__fastcall ***)(_QWORD, __int64))(v55 + 64);
          v58 = _InterlockedDecrement((volatile signed __int32 *)(v55 + 72));
          if ( v58 )
          {
            if ( v58 < 0 )
            {
              v59 = WdLogNewEntry5_WdError(v21);
              *(_QWORD *)(v59 + 24) = v58;
              WdLogEvent5_WdError(v59);
            }
          }
          else if ( v21 )
          {
            (**v21)(v21, 1LL);
          }
        }
      }
      v24 = *((_QWORD *)DXGGLOBAL::GetGlobal((__int64)v21) + 117);
      if ( !*(_BYTE *)v24 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v61, *(struct DXGFASTMUTEX *const *)(v24 + 8));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
        v26 = (_BYTE *)(v24 + 16);
        v27 = 18LL;
        do
        {
          *v26 = 0;
          v26 += 32;
          --v27;
        }
        while ( v27 );
        ++*(_DWORD *)(v24 + 592);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v26, v25) + 24) = 223LL;
        if ( !v61[8] )
          goto LABEL_32;
        v28 = (DXGAUTOMUTEX *)v61;
        goto LABEL_31;
      }
      goto LABEL_88;
    }
    v35 = (unsigned int)(v10 - 9);
    if ( (_DWORD)v10 == 9 )
    {
      if ( a2 == -1 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v35);
        WdLogEvent5_WdAssertion(v43);
      }
      if ( !*(_DWORD *)(v14 + 480) )
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2304), a2, 9u, v7, 0, (__int64)a7);
      goto LABEL_32;
    }
    if ( (_DWORD)v10 == 10 )
    {
      if ( a2 == -1 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v35);
        WdLogEvent5_WdAssertion(v37);
      }
      LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged(v14, a2, v7, 10LL);
      ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2304), a2, 0xAu, v7, 1, (__int64)a7);
      v39 = *((_QWORD *)DXGGLOBAL::GetGlobal(v38) + 117);
      if ( !*(_BYTE *)v39 )
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v60, *(struct DXGFASTMUTEX *const *)(v39 + 8));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v60);
        v41 = (_BYTE *)(v39 + 16);
        v42 = 18LL;
        do
        {
          *v41 = 0;
          v41 += 32;
          --v42;
        }
        while ( v42 );
        ++*(_DWORD *)(v39 + 592);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v41, v40) + 24) = 223LL;
        if ( !v60[8] )
          goto LABEL_32;
        v28 = (DXGAUTOMUTEX *)v60;
LABEL_31:
        DXGAUTOMUTEX::Release(v28);
        goto LABEL_32;
      }
LABEL_88:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22) + 24) = 201LL;
      goto LABEL_32;
    }
    v36 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v36 + 24) = v10;
LABEL_48:
    WdLogEvent5_WdError(v36);
    LODWORD(v8) = -1073741811;
    goto LABEL_32;
  }
  if ( (unsigned int)v7 > 1 )
  {
    v36 = WdLogNewEntry5_WdError((unsigned int)(v10 - 2));
    *(_QWORD *)(v36 + 24) = v7;
    goto LABEL_48;
  }
  if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 2304) + 16LL)) < 1105 && a2 == -1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
    v16 = *(_QWORD *)(v14 + 80);
    v46 = *(_QWORD *)(v16 + 24);
    if ( v46 != v16 + 24 )
    {
      for ( i = (unsigned int *)(v46 - 8);
            i;
            i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v16,
                                  (const struct DMMVIDEOPRESENTTARGET *const)i) )
      {
        v48 = VIDPN_MGR::PowerOnOffVidPnTarget((VIDPN_MGR *)v14, 0xFFFFFFFF, (_DWORD)v7 == 0, a7);
        v8 = v48;
        if ( v48 < 0 )
        {
          v50 = WdLogNewEntry5_WdError(v49);
          *(_QWORD *)(v50 + 24) = i[6];
          *(_QWORD *)(v50 + 32) = v8;
          WdLogEvent5_WdError(v50);
        }
      }
    }
LABEL_18:
    if ( v16 )
    {
      v18 = (void (__fastcall ***)(_QWORD, __int64))(v16 + 64);
      v19 = _InterlockedDecrement((volatile signed __int32 *)(v16 + 72));
      if ( v19 )
      {
        if ( v19 < 0 )
        {
          v45 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v45 + 24) = v19;
          WdLogEvent5_WdError(v45);
        }
      }
      else if ( v18 )
      {
        (**v18)(v18, 1LL);
      }
    }
    goto LABEL_32;
  }
  LODWORD(v8) = VIDPN_MGR::PowerOnOffVidPnTarget((VIDPN_MGR *)v14, a2, (_DWORD)v7 == 0, a7);
LABEL_32:
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a5 + 40));
LABEL_33:
  VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(&v62);
  return (unsigned int)v8;
}
