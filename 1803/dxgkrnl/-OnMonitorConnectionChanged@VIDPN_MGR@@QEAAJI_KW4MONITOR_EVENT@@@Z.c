/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0215AC0
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0217CE0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0004564 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0019C48 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C0044AD0 (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0044F68 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AA09C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00ABA7C (MonitorGetMonitorHandle.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00BBE40 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     MonitorGetUsageClass @ 0x1C00D9C08 (MonitorGetUsageClass.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0155AE8 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     MonitorGetNativeFlags @ 0x1C022E328 (MonitorGetNativeFlags.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(_QWORD *a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // r13
  unsigned int v15; // ebx
  __int64 v16; // rax
  int MonitorHandle; // eax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rbx
  struct HDXGMONITOR__ *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rax
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // rax
  int NativeFlags; // eax
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // rcx
  _QWORD *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  char v43; // al
  char v44; // cl
  char v45; // al
  int UsageClass; // eax
  __int64 v47; // rcx
  __int64 v48; // rcx
  _QWORD *v49; // r14
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // eax
  _QWORD *v53; // r14
  _QWORD *v54; // rcx
  _QWORD *v55; // rax
  PERESOURCE **v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned int PathSourceFromTarget; // r14d
  PERESOURCE **v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  char v65[4]; // [rsp+30h] [rbp-20h] BYREF
  int v66; // [rsp+34h] [rbp-1Ch] BYREF
  int v67; // [rsp+38h] [rbp-18h] BYREF
  struct HDXGMONITOR__ *v68; // [rsp+40h] [rbp-10h] BYREF
  __int64 v69; // [rsp+48h] [rbp-8h] BYREF
  char v70; // [rsp+90h] [rbp+40h] BYREF
  __int64 v71; // [rsp+A0h] [rbp+50h] BYREF

  v71 = a3;
  v6 = a2;
  if ( *(struct _KTHREAD **)(a1[5] + 8LL) != KeGetCurrentThread() )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v7);
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1[10] + 72LL));
  v8 = a1[10];
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, v6);
  if ( TargetById )
  {
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    v13 = a1[1];
    v14 = *((_QWORD *)TargetById + 13);
    v15 = *((_DWORD *)TargetById + 6);
    v69 = v14;
    v68 = 0LL;
    if ( !v13 )
    {
      v16 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v16);
      v13 = a1[1];
    }
    MonitorHandle = MonitorGetMonitorHandle(*(DXGADAPTER **)(v13 + 16), v15, 0LL, TargetById, &v68);
    v20 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v21 = v68;
      if ( v68 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v22);
      }
      LODWORD(v20) = 0;
    }
    else if ( MonitorHandle >= 0 )
    {
      v21 = v68;
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v24[3] = v6;
      v25 = a1[1];
      if ( !v25 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v26);
        v25 = a1[1];
      }
      v24[4] = *(_QWORD *)(v25 + 16);
      v24[5] = v20;
      WdLogEvent5_WdError(v24);
      v21 = 0LL;
      v68 = 0LL;
    }
    if ( v21 == (struct HDXGMONITOR__ *)v14 )
    {
      if ( a4 == 10 )
      {
        LODWORD(v20) = MonitorGetUsageClass(v21, &v67);
        if ( (int)v20 < 0 )
          LODWORD(v20) = 0;
        else
          *((_DWORD *)TargetById + 22) = v67;
      }
    }
    else
    {
      DMMVIDEOPRESENTTARGET::SetConnectedMonitor(TargetById, v21);
      v28 = 0LL;
      *((_BYTE *)TargetById + 405) = 1;
      if ( v21 )
      {
        v29 = a1[1];
        v30 = *((_DWORD *)TargetById + 6);
        LOBYTE(v71) = 0;
        v70 = 0;
        v65[0] = 0;
        if ( !v29 )
        {
          v31 = WdLogNewEntry5_WdAssertion(0LL);
          WdLogEvent5_WdAssertion(v31);
          v29 = a1[1];
        }
        NativeFlags = MonitorGetNativeFlags(*(_QWORD *)(v29 + 16), v30, &v71, &v70, v65);
        v34 = NativeFlags;
        if ( NativeFlags < 0 )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdError(v33);
          v36[3] = v6;
          v37 = a1[1];
          if ( !v37 )
          {
            v38 = WdLogNewEntry5_WdAssertion(v35);
            WdLogEvent5_WdAssertion(v38);
            v37 = a1[1];
          }
          v36[4] = *(_QWORD *)(v37 + 16);
          v36[5] = v34;
          WdLogEvent5_WdError(v36);
        }
        v39 = a1[1];
        if ( !v39 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v33);
          WdLogEvent5_WdAssertion(v40);
          v39 = a1[1];
        }
        v41 = *(_QWORD *)(v39 + 16);
        v42 = *(_QWORD *)(v41 + 2456);
        if ( *(_BYTE *)(v42 + 132) && *(_BYTE *)(v42 + 133)
          || (v43 = 0, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 192) + 64LL) + 40LL) + 28LL) >= 0x4003u) )
        {
          v43 = 1;
        }
        v44 = v71;
        *((_BYTE *)TargetById + 397) = v71;
        if ( v43 || !v44 || (v45 = 1, !v70) )
          v45 = 0;
        *((_BYTE *)TargetById + 398) = v45;
        v66 = 0;
        UsageClass = MonitorGetUsageClass(v21, &v66);
        v20 = UsageClass;
        if ( UsageClass >= 0 )
        {
          v52 = v66;
        }
        else
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdError(v47);
          v49[3] = v6;
          v50 = a1[1];
          if ( !v50 )
          {
            v51 = WdLogNewEntry5_WdAssertion(v48);
            WdLogEvent5_WdAssertion(v51);
            v50 = a1[1];
          }
          v49[4] = *(_QWORD *)(v50 + 16);
          v49[5] = v20;
          WdLogEvent5_WdError(v49);
          v52 = 0;
          LODWORD(v20) = 0;
          v66 = 0;
        }
        *((_DWORD *)TargetById + 22) = v52;
        v28 = 0LL;
        *((_BYTE *)TargetById + 404) = v65[0];
      }
      else
      {
        *(_WORD *)((char *)TargetById + 397) = 0;
        *((_DWORD *)TargetById + 22) = 0;
        *((_BYTE *)TargetById + 404) = 1;
      }
      v53 = 0LL;
      v54 = (_QWORD *)a1[15];
      if ( v54 != a1 + 15 )
        v53 = v54 - 1;
      if ( v53 )
      {
        do
        {
          if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v53 + 12), v6) )
            DMMVIDPNTOPOLOGY::Invalidate((DMMVIDPNTOPOLOGY *)(v53 + 12));
          v55 = (_QWORD *)v53[1];
          v53 = v55 - 1;
          if ( v55 == a1 + 15 )
            v53 = 0LL;
        }
        while ( v53 );
        v14 = v69;
      }
      v56 = (PERESOURCE **)a1[1];
      if ( !v56 )
      {
        v57 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v57);
        v56 = (PERESOURCE **)a1[1];
      }
      ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v56, v28, v27);
      v58 = a1[11];
      v69 = 0LL;
      if ( v58 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v58 + 32));
        v59 = a1[11];
      }
      else
      {
        v59 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v69, v59);
      if ( v69 )
      {
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v69 + 96), v6);
        if ( PathSourceFromTarget != -1 )
        {
          v61 = (PERESOURCE **)a1[1];
          if ( !v61 )
          {
            v62 = WdLogNewEntry5_WdAssertion(0LL);
            WdLogEvent5_WdAssertion(v62);
            v61 = (PERESOURCE **)a1[1];
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(v61, PathSourceFromTarget, 1);
        }
      }
      auto_rc<DMMVIDPN const>::reset(&v69, 0LL);
    }
    if ( v14 )
    {
      v63 = a1[1];
      if ( !v63 )
      {
        v64 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v64);
        v63 = a1[1];
      }
      MonitorReleaseMonitorHandle(*(DXGADAPTER **)(v63 + 16), v14, TargetById, v19);
    }
    return (unsigned int)v20;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v6;
    *(_QWORD *)(v11 + 32) = a1;
    WdLogEvent5_WdError(v11);
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
    return 3223192325LL;
  }
}
