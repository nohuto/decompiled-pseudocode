/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F8220
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000C6E8 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C008D03C (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 *     MonitorGetMonitorType @ 0x1C00F0468 (MonitorGetMonitorType.c)
 *     DmmGetEmergentSimulatedTarget @ 0x1C00F83E4 (DmmGetEmergentSimulatedTarget.c)
 */

__int64 __fastcall DisplayConfigCountMonitorsCallback(struct DXGADAPTER *this, _BYTE *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int EmergentSimulatedTarget; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rbx
  _QWORD *v23; // r14
  const struct DMMVIDEOPRESENTTARGET *i; // r14
  struct HDXGMONITOR__ *v25; // rdx
  _QWORD *v27; // rax
  int MonitorType; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  _BYTE v35[8]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v36[32]; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v37[80]; // [rsp+48h] [rbp-50h] BYREF
  int v38; // [rsp+A8h] [rbp+10h] BYREF
  int v39; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v40; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0;
  if ( !a2 )
  {
    v32 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v32 + 24) = 2973LL;
    WdLogEvent5_WdAssertion(v32);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, this, 0LL);
  v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35);
  if ( v7 < 0 )
  {
    if ( v7 == -1073741130 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
      v27[3] = this;
      v27[4] = *((int *)this + 68);
      v27[5] = *((unsigned int *)this + 67);
    }
    else
    {
      v4 = v7;
    }
  }
  else if ( *((_QWORD *)this + 285) )
  {
    if ( a2[24] )
    {
      v38 = -1;
      EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(this, &v38);
      v17 = EmergentSimulatedTarget;
      if ( EmergentSimulatedTarget < 0 )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
        v33[3] = *((int *)this + 68);
        v33[4] = *((unsigned int *)this + 67);
        v33[5] = v17;
        WdLogEvent5_WdWarning(v33);
      }
      else if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext((__int64)a2, (__int64)this, v38) >= 0
             && (*((_BYTE *)this + 300) & 1) != 0 )
      {
        a2[24] = 0;
      }
    }
    v18 = *(_QWORD *)(*((_QWORD *)this + 285) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v40, v18, v10, v11);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 80) + 72LL));
    v22 = *(_QWORD **)(v18 + 80);
    v23 = (_QWORD *)v22[3];
    if ( v23 != v22 + 3 )
    {
      for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v23 - 1);
            i;
            i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v22, i, v20, v21) )
      {
        v25 = (struct HDXGMONITOR__ *)*((_QWORD *)i + 13);
        if ( v25 && !*((_BYTE *)i + 404) )
        {
          MonitorType = MonitorGetMonitorType(this, v25, &v39, v21);
          v31 = MonitorType;
          if ( MonitorType < 0 )
          {
            v34 = WdLogNewEntry5_WdWarning(v30, v29, v20, v21);
            *(_QWORD *)(v34 + 24) = i;
            *(_QWORD *)(v34 + 32) = v31;
            WdLogEvent5_WdWarning(v34);
            break;
          }
          ++*(_DWORD *)a2;
          if ( v39 > 0 )
          {
            if ( v39 > 2 )
            {
              if ( v39 == 5 )
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
    if ( v22 )
      ReferenceCounted::Release((ReferenceCounted *)(v22 + 8), v19);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v40 + 40), v19, v20, v21);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v37);
  COREACCESS::~COREACCESS((COREACCESS *)v36);
  return v4;
}
