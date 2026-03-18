/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00AF490
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E20 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C00AF654 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00C473C (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 *     MonitorGetMonitorType @ 0x1C00C689C (MonitorGetMonitorType.c)
 */

__int64 __fastcall DisplayConfigCountMonitorsCallback(struct DXGADAPTER *a1, _BYTE *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int EmergentSimulatedTarget; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rbx
  _QWORD *v16; // rbx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  _QWORD *v18; // rcx
  struct HDXGMONITOR__ *v19; // rdx
  _QWORD *v21; // rax
  int MonitorType; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  _BYTE v30[8]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v31[32]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v32[80]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v33; // [rsp+A8h] [rbp+10h] BYREF
  int v34; // [rsp+B0h] [rbp+18h]
  __int64 v35; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v27 + 24) = 2385LL;
    WdLogEvent5_WdAssertion(v27);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      v21[3] = a1;
      v21[4] = *((int *)a1 + 68);
      v21[5] = *((unsigned int *)a1 + 67);
    }
    else
    {
      v2 = v5;
    }
  }
  else if ( *((_QWORD *)a1 + 307) )
  {
    if ( a2[24] )
    {
      v33 = -1;
      EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(a1, &v33);
      v14 = EmergentSimulatedTarget;
      if ( EmergentSimulatedTarget < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
        v28[3] = *((int *)a1 + 68);
        v28[4] = *((unsigned int *)a1 + 67);
        v28[5] = v14;
        WdLogEvent5_WdWarning(v28);
      }
      else if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a2, a1, v33) >= 0
             && (*((_BYTE *)a1 + 300) & 1) != 0 )
      {
        a2[24] = 0;
      }
    }
    v15 = *(_QWORD *)(*((_QWORD *)a1 + 307) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v35, v15);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 80) + 72LL));
    v16 = *(_QWORD **)(v15 + 80);
    NextTarget = 0LL;
    v18 = (_QWORD *)v16[3];
    if ( v18 != v16 + 3 )
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v18 - 1);
    for ( ; NextTarget; NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                       (DMMVIDEOPRESENTTARGETSET *)v16,
                                       NextTarget) )
    {
      v19 = (struct HDXGMONITOR__ *)*((_QWORD *)NextTarget + 13);
      if ( v19 && !*((_DWORD *)NextTarget + 22) )
      {
        MonitorType = MonitorGetMonitorType(a1, v19);
        v26 = MonitorType;
        if ( MonitorType < 0 )
        {
          v29 = WdLogNewEntry5_WdWarning(v24, v23, v25);
          *(_QWORD *)(v29 + 24) = NextTarget;
          *(_QWORD *)(v29 + 32) = v26;
          WdLogEvent5_WdWarning(v29);
          break;
        }
        ++*(_DWORD *)a2;
        if ( v34 > 0 )
        {
          if ( v34 > 2 )
          {
            if ( v34 == 5 )
              ++*((_DWORD *)a2 + 2);
          }
          else
          {
            ++*((_DWORD *)a2 + 1);
          }
        }
      }
    }
    ReferenceCounted::Release((ReferenceCounted *)(v16 + 8));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v35 + 40));
  }
  COREACCESS::~COREACCESS((COREACCESS *)v32);
  COREACCESS::~COREACCESS((COREACCESS *)v31);
  return v2;
}
