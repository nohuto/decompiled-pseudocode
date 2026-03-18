/*
 * XREFs of ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00E5E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B09C0 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00B25D4 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C00B3F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     MonitorIsMonitorConnected @ 0x1C00E5FD0 (MonitorIsMonitorConnected.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01FDE0C (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall CompleteTopologyTransitionCallback(struct DXGADAPTER *this, _QWORD *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r12
  int v5; // r8d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v12; // r15
  int v13; // eax
  MONITOR_MGR *v14; // rcx
  __int64 v15; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-39h]
  int v26; // [rsp+30h] [rbp-29h]
  __int64 v27; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v28[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v29[40]; // [rsp+68h] [rbp+Fh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v30; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v31; // [rsp+D0h] [rbp+77h] BYREF

  v2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v27, this, 0LL);
  v6 = COREADAPTERACCESS::AcquireExclusive(&v27, v5 + 1);
  v9 = 0;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741130 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
      v17[3] = this;
      v17[4] = *((int *)this + 68);
      v17[5] = *((unsigned int *)this + 67);
    }
    else
    {
      v9 = v6;
    }
  }
  else
  {
    v10 = *((_QWORD *)this + 288);
    if ( v10 )
    {
      v11 = 0;
      if ( *(_DWORD *)(v10 + 80) )
      {
        do
        {
          v31 = -1;
          v12 = 0LL;
          while ( 1 )
          {
            v13 = DmmEnumClientVidPnPathTargetsFromSource(this, v11, v12++, &v31);
            if ( v13 < 0 || v31 == -1 )
              break;
            v30 = D3DKMDT_VOT_UNINITIALIZED;
            DmmGetVideoOutputTechnology(this, v31, 0LL, &v30);
            if ( v30 == D3DKMDT_VOT_MIRACAST )
            {
              if ( *(_DWORD *)a2 || *((_DWORD *)a2 + 1) )
              {
                v21 = WdLogNewEntry5_WdAssertion(v18);
                *(_QWORD *)(v21 + 24) = 6803LL;
                WdLogEvent5_WdAssertion(v21);
              }
              *a2 = *(_QWORD *)((char *)this + 268);
            }
            LOBYTE(v30) = 0;
            if ( (int)MonitorIsMonitorConnected(this, v31, 0) >= 0 && !(_BYTE)v30 )
            {
              v22 = WdLogNewEntry5_WdTrace(v20, v19);
              *(_QWORD *)(v22 + 24) = this;
              *(_QWORD *)(v22 + 32) = v31;
              MonitorCreateSimulatedMonitor(this, v25, 0, v26, (__int64)v2);
            }
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)(*((_QWORD *)this + 288) + 80LL) );
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v23 = WdLogNewEntry5_WdAssertion(v14);
        WdLogEvent5_WdAssertion(v23);
      }
      v15 = *((_QWORD *)this + 288);
      if ( v15 && (v14 = *(MONITOR_MGR **)(v15 + 96)) != 0LL )
      {
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(v14, v2);
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v24 + 24) = this;
        WdLogEvent5_WdError(v24);
      }
    }
  }
  COREACCESS::~COREACCESS((COREACCESS *)v29);
  COREACCESS::~COREACCESS((COREACCESS *)v28);
  return v9;
}
