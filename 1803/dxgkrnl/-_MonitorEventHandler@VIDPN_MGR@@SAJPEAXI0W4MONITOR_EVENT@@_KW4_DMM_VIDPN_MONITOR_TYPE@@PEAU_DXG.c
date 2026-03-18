/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0217CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E20 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0003570 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0016070 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C0044CA0 (-LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00C3DF8 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0156FCC (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 *     _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1C020FE78 (_VIDPN_MGR--_MonitorEventHandler_--_2_--_AUTO_PERFTRACK--__AUTO_PERFTRACK.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0215AC0 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0216514 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
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
  __int64 v7; // r15
  __int64 v8; // rdi
  int v9; // r12d
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // rax
  unsigned int v33; // edx
  unsigned int *NextTarget; // r14
  _QWORD *v35; // rcx
  char v36; // r15
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // edx
  __int64 v41; // rax
  _QWORD *v42; // rdx
  _QWORD *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rbx
  DMMVIDEOPRESENTTARGET *v46; // rax
  unsigned int v47; // r11d
  struct DXGGLOBAL *Global; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned int v53; // [rsp+30h] [rbp-38h] BYREF
  __int64 v54; // [rsp+38h] [rbp-30h]
  int v55; // [rsp+40h] [rbp-28h]
  unsigned int v56; // [rsp+44h] [rbp-24h]
  char v57; // [rsp+48h] [rbp-20h]

  v7 = a5;
  LODWORD(v8) = 0;
  v9 = a6;
  v11 = (int)a4;
  v53 = a4;
  v54 = a5;
  v55 = a6;
  v56 = a2;
  v57 = 1;
  if ( a4 <= 3 || a4 - 7 <= 3 )
  {
    if ( !a1 )
    {
      v16 = WdLogNewEntry5_WdError(0LL);
      WdLogEvent5_WdError(v16);
      LODWORD(v8) = -1071775742;
      goto LABEL_71;
    }
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v18);
    }
    v19 = *(_QWORD *)(a1 + 2456);
    if ( !v19 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v20);
      v19 = *(_QWORD *)(a1 + 2456);
    }
    v21 = *(_QWORD *)(v19 + 88);
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v22 + 24) = a1;
      WdLogEvent5_WdError(v22);
      LODWORD(v8) = -1071774923;
      goto LABEL_71;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&a5, v21);
    v24 = (unsigned int)v11;
    switch ( (_DWORD)v11 )
    {
      case 0:
        goto LABEL_51;
      case 1:
        LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged((_QWORD *)v21, a2, v23, 1);
        if ( !*(_DWORD *)(v21 + 480) )
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2456), a2, 1u, v7, 1, (__int64)a7);
        goto LABEL_70;
      case 2:
        if ( (unsigned int)v7 > 1 )
        {
          v26 = WdLogNewEntry5_WdError((unsigned int)(v11 - 2));
          *(_QWORD *)(v26 + 24) = v7;
          goto LABEL_20;
        }
        if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(a1 + 2456) + 16LL)) >= 1105 || a2 != -1 )
        {
          LODWORD(v8) = VIDPN_MGR::PowerOnOffVidPnTarget((VIDPN_MGR *)v21, a2, (_DWORD)v7 == 0, a7);
          goto LABEL_70;
        }
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 80) + 72LL));
        v31 = *(_QWORD **)(v21 + 80);
        NextTarget = 0LL;
        v35 = (_QWORD *)v31[3];
        if ( v35 != v31 + 3 )
          NextTarget = (unsigned int *)(v35 - 1);
        if ( NextTarget )
        {
          v36 = (_DWORD)v7 == 0;
          do
          {
            v37 = VIDPN_MGR::PowerOnOffVidPnTarget((VIDPN_MGR *)v21, 0xFFFFFFFF, v36, a7);
            v8 = v37;
            if ( v37 < 0 )
            {
              v39 = WdLogNewEntry5_WdError(v38);
              *(_QWORD *)(v39 + 24) = NextTarget[6];
              *(_QWORD *)(v39 + 32) = v8;
              WdLogEvent5_WdError(v39);
            }
            NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                           (DMMVIDEOPRESENTTARGETSET *)v31,
                                           (const struct DMMVIDEOPRESENTTARGET *const)NextTarget);
          }
          while ( NextTarget );
        }
        break;
      case 3:
        if ( a2 == -1 )
        {
          v30 = WdLogNewEntry5_WdAssertion((unsigned int)(v11 - 3));
          WdLogEvent5_WdAssertion(v30);
        }
        if ( *(_DWORD *)(v21 + 480) )
          goto LABEL_70;
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 80) + 72LL));
        v31 = *(_QWORD **)(v21 + 80);
        v32 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)v31, a2);
        if ( v32 && *(_QWORD *)(v32 + 104) )
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2456), v33, 3u, v7, 0, (__int64)a7);
        if ( !v31 )
          goto LABEL_70;
        break;
      default:
        v24 = (unsigned int)(v11 - 7);
        if ( (_DWORD)v11 != 7 )
        {
          v25 = (unsigned int)(v11 - 9);
          if ( (_DWORD)v11 == 9 )
          {
            if ( a2 == -1 )
            {
              v29 = WdLogNewEntry5_WdAssertion(v25);
              WdLogEvent5_WdAssertion(v29);
            }
            if ( !*(_DWORD *)(v21 + 480) )
              ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2456), a2, 9u, v7, 0, (__int64)a7);
            goto LABEL_70;
          }
          if ( (_DWORD)v11 != 10 )
          {
            v26 = WdLogNewEntry5_WdError(v25);
            *(_QWORD *)(v26 + 24) = v11;
LABEL_20:
            WdLogEvent5_WdError(v26);
            LODWORD(v8) = -1073741811;
LABEL_70:
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a5 + 40));
            goto LABEL_71;
          }
          if ( a2 == -1 )
          {
            v27 = WdLogNewEntry5_WdAssertion(v25);
            WdLogEvent5_WdAssertion(v27);
          }
          LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged((_QWORD *)v21, a2, v23, 10);
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2456), a2, 0xAu, v7, 1, (__int64)a7);
LABEL_69:
          Global = DXGGLOBAL::GetGlobal(v28);
          QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 127), v49, v50, v51);
          goto LABEL_70;
        }
LABEL_51:
        v40 = a2;
        if ( a2 == -1 )
        {
          if ( (_DWORD)v11 )
          {
            v41 = WdLogNewEntry5_WdAssertion(v24);
            WdLogEvent5_WdAssertion(v41);
          }
          v23 = 0LL;
          v42 = (_QWORD *)(*(_QWORD *)(v21 + 80) + 24LL);
          v43 = (_QWORD *)*v42;
          if ( (_QWORD *)*v42 != v42 )
            v23 = *v42 - 8LL;
          if ( !v23 || (v40 = *(_DWORD *)(v23 + 24), v40 == -1) )
          {
            v44 = WdLogNewEntry5_WdError(v43);
            *(_QWORD *)(v44 + 24) = v21;
            WdLogEvent5_WdError(v44);
            LODWORD(v8) = -1071774971;
            goto LABEL_70;
          }
        }
        LODWORD(v8) = VIDPN_MGR::OnMonitorConnectionChanged((_QWORD *)v21, v40, v23, v11);
        if ( !*(_DWORD *)(v21 + 480)
          && !(_DWORD)v11
          && !*(_BYTE *)(a1 + 2373)
          && (unsigned __int64)(v7 - 1) <= 4
          && (unsigned int)(v9 - 1) <= 2 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 80) + 72LL));
          v45 = *(_QWORD *)(v21 + 80);
          v46 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v45, a2);
          if ( v46
            && DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(v46, *(_DWORD *)(v21 + 484), *(_DWORD *)(v21 + 488)) )
          {
            v47 = 6;
            v7 = 0LL;
          }
          ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(*(_QWORD *)(a1 + 2456), a2, v47, v7, 1, (__int64)a7);
          v57 = 0;
          if ( v45 )
            ReferenceCounted::Release((ReferenceCounted *)(v45 + 64));
        }
        goto LABEL_69;
    }
    ReferenceCounted::Release((ReferenceCounted *)(v31 + 8));
    goto LABEL_70;
  }
  v13 = WdLogNewEntry5_WdError(a1);
  *(_QWORD *)(v13 + 24) = v11;
  WdLogEvent5_WdError(v13);
  LODWORD(v8) = -1073741811;
LABEL_71:
  VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK((__int64)&v53, v14, v15);
  return (unsigned int)v8;
}
