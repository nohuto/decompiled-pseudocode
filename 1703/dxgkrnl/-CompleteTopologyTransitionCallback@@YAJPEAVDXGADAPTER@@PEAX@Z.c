/*
 * XREFs of ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A9200
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00A9380 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     MonitorIsMonitorConnected @ 0x1C00A9484 (MonitorIsMonitorConnected.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AB07C (DmmGetVideoOutputTechnology.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E9980 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01E34BC (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall CompleteTopologyTransitionCallback(struct DXGADAPTER *this, _QWORD *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r12
  int v5; // r8d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // esi
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rdx
  MONITOR_MGR *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // [rsp+20h] [rbp-39h]
  int v36; // [rsp+30h] [rbp-29h]
  __int64 v37; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v38[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v39[40]; // [rsp+68h] [rbp+Fh] BYREF
  int v40; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v41; // [rsp+D0h] [rbp+77h] BYREF

  v2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v37, this, 0LL);
  v6 = COREADAPTERACCESS::AcquireExclusive(&v37, v5 + 1);
  v11 = 0;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741130 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
      v22[3] = this;
      v22[4] = *((int *)this + 68);
      v22[5] = *((unsigned int *)this + 67);
    }
    else
    {
      v11 = v6;
    }
  }
  else
  {
    v12 = *((_QWORD *)this + 285);
    if ( v12 )
    {
      v13 = 0;
      if ( *(_DWORD *)(v12 + 80) )
      {
        do
        {
          v41 = -1;
          v14 = 0LL;
          while ( 1 )
          {
            v15 = DmmEnumClientVidPnPathTargetsFromSource(this, v13, v14++, &v41);
            if ( v15 < 0 || v41 == -1 )
              break;
            v40 = -2;
            DmmGetVideoOutputTechnology(this, v41, 0LL, &v40);
            if ( v40 == 15 )
            {
              if ( *(_DWORD *)a2 || *((_DWORD *)a2 + 1) )
              {
                v31 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
                *(_QWORD *)(v31 + 24) = 6788LL;
                WdLogEvent5_WdAssertion(v31);
              }
              *a2 = *(_QWORD *)((char *)this + 268);
            }
            LOBYTE(v40) = 0;
            if ( (int)MonitorIsMonitorConnected(this, v41, 0) >= 0 && !(_BYTE)v40 )
            {
              v32 = WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
              *(_QWORD *)(v32 + 24) = this;
              *(_QWORD *)(v32 + 32) = v41;
              MonitorCreateSimulatedMonitor(this, v35, 0, v36, (__int64)v2);
            }
          }
          ++v13;
        }
        while ( v13 < *(_DWORD *)(*((_QWORD *)this + 285) + 80LL) );
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
        WdLogEvent5_WdAssertion(v33);
      }
      v20 = *((_QWORD *)this + 285);
      if ( v20 && (v17 = *(MONITOR_MGR **)(v20 + 96)) != 0LL )
      {
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(v17, v2);
      }
      else
      {
        v34 = WdLogNewEntry5_WdError(v17, v16);
        *(_QWORD *)(v34 + 24) = this;
        WdLogEvent5_WdError(v34);
      }
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v39);
  COREACCESS::~COREACCESS((COREACCESS *)v38);
  return v11;
}
