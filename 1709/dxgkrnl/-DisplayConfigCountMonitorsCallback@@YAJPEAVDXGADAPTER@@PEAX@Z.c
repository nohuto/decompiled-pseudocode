/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B5770
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0008364 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C00B5648 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     MonitorGetMonitorType @ 0x1C00E44B0 (MonitorGetMonitorType.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00FBFB0 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall DisplayConfigCountMonitorsCallback(struct DXGADAPTER *a1, _BYTE *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int EmergentSimulatedTarget; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // r15
  const struct DMMVIDEOPRESENTTARGET *i; // r15
  struct HDXGMONITOR__ *v17; // rdx
  void (__fastcall ***v18)(_QWORD, __int64); // rcx
  int v19; // ebx
  _QWORD *v21; // rax
  int MonitorType; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r12
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE v31[8]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v32[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v33[40]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v34; // [rsp+C8h] [rbp+48h] BYREF
  int v35; // [rsp+D0h] [rbp+50h]
  __int64 v36; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v27 + 24) = 2360LL;
    WdLogEvent5_WdAssertion(v27);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v21[3] = a1;
      v21[4] = *((int *)a1 + 68);
      v21[5] = *((unsigned int *)a1 + 67);
    }
    else
    {
      v2 = v5;
    }
  }
  else if ( *((_QWORD *)a1 + 288) )
  {
    if ( a2[24] )
    {
      v34 = -1;
      EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(a1, &v34);
      v12 = EmergentSimulatedTarget;
      if ( EmergentSimulatedTarget < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
        v28[3] = *((int *)a1 + 68);
        v28[4] = *((unsigned int *)a1 + 67);
        v28[5] = v12;
        WdLogEvent5_WdWarning(v28);
      }
      else if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a2, a1, v34) >= 0
             && (*((_BYTE *)a1 + 300) & 1) != 0 )
      {
        a2[24] = 0;
      }
    }
    v13 = *(_QWORD *)(*((_QWORD *)a1 + 288) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v36, v13);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 80) + 72LL));
    v14 = *(_QWORD *)(v13 + 80);
    v15 = *(_QWORD *)(v14 + 24);
    if ( v15 != v14 + 24 )
    {
      for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v15 - 8);
            i;
            i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v14, i) )
      {
        v17 = (struct HDXGMONITOR__ *)*((_QWORD *)i + 13);
        if ( v17 && !*((_BYTE *)i + 404) )
        {
          MonitorType = MonitorGetMonitorType(a1, v17);
          v26 = MonitorType;
          if ( MonitorType < 0 )
          {
            v29 = WdLogNewEntry5_WdWarning(v24, v23, v25);
            *(_QWORD *)(v29 + 24) = i;
            *(_QWORD *)(v29 + 32) = v26;
            WdLogEvent5_WdWarning(v29);
            break;
          }
          ++*(_DWORD *)a2;
          if ( v35 > 0 )
          {
            if ( v35 > 2 )
            {
              if ( v35 == 5 )
                ++*((_DWORD *)a2 + 2);
            }
            else
            {
              ++*((_DWORD *)a2 + 1);
            }
          }
        }
      }
    }
    if ( v14 )
    {
      v18 = (void (__fastcall ***)(_QWORD, __int64))(v14 + 64);
      v19 = _InterlockedDecrement((volatile signed __int32 *)(v14 + 72));
      if ( v19 )
      {
        if ( v19 < 0 )
        {
          v30 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v30 + 24) = v19;
          WdLogEvent5_WdError(v30);
        }
      }
      else if ( v18 )
      {
        (**v18)(v18, 1LL);
      }
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v36 + 40));
  }
  COREACCESS::~COREACCESS((COREACCESS *)v33);
  COREACCESS::~COREACCESS((COREACCESS *)v32);
  return v2;
}
