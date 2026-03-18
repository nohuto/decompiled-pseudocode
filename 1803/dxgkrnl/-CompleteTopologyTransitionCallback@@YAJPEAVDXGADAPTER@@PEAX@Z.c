/*
 * XREFs of ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00D6910
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00AB1D4 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BA828 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00D6A90 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C00D6C8C (MonitorIsMonitorConnected.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C022D784 (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall CompleteTopologyTransitionCallback(struct DXGADAPTER *this, _QWORD *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r12
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // esi
  unsigned __int64 v13; // r15
  int v14; // eax
  MONITOR_MGR *v15; // rcx
  __int64 v16; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+20h] [rbp-39h]
  int v29; // [rsp+30h] [rbp-29h]
  __int64 v30; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v31[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v32[40]; // [rsp+68h] [rbp+Fh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v33; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v34; // [rsp+D0h] [rbp+77h] BYREF

  v2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v30, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireExclusive(&v30);
  v10 = 0;
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      v18[3] = this;
      v18[4] = *((int *)this + 68);
      v18[5] = *((unsigned int *)this + 67);
    }
    else
    {
      v10 = v5;
    }
  }
  else
  {
    v11 = *((_QWORD *)this + 307);
    if ( v11 )
    {
      v12 = 0;
      if ( *(_DWORD *)(v11 + 80) )
      {
        do
        {
          v34 = -1;
          v13 = 0LL;
          while ( 1 )
          {
            v14 = DmmEnumClientVidPnPathTargetsFromSource(this, v12, v13++, &v34);
            if ( v14 < 0 || v34 == -1 )
              break;
            v33 = D3DKMDT_VOT_UNINITIALIZED;
            DmmGetVideoOutputTechnology(this, v34, 0LL, &v33);
            if ( v33 == D3DKMDT_VOT_MIRACAST )
            {
              if ( *(_DWORD *)a2 || *((_DWORD *)a2 + 1) )
              {
                v24 = WdLogNewEntry5_WdAssertion(v19);
                *(_QWORD *)(v24 + 24) = 7011LL;
                WdLogEvent5_WdAssertion(v24);
              }
              *a2 = *(_QWORD *)((char *)this + 268);
            }
            LOBYTE(v33) = 0;
            if ( (int)MonitorIsMonitorConnected(this, v34, 0) >= 0 && !(_BYTE)v33 )
            {
              v25 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
              *(_QWORD *)(v25 + 24) = this;
              *(_QWORD *)(v25 + 32) = v34;
              MonitorCreateSimulatedMonitor(this, v28, 0, v29, (__int64)v2);
            }
          }
          ++v12;
        }
        while ( v12 < *(_DWORD *)(*((_QWORD *)this + 307) + 80LL) );
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v26);
      }
      v16 = *((_QWORD *)this + 307);
      if ( v16 && (v15 = *(MONITOR_MGR **)(v16 + 96)) != 0LL )
      {
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(v15, v2);
      }
      else
      {
        v27 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v27 + 24) = this;
        WdLogEvent5_WdError(v27);
      }
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v32);
  COREACCESS::~COREACCESS((COREACCESS *)v31);
  return v10;
}
