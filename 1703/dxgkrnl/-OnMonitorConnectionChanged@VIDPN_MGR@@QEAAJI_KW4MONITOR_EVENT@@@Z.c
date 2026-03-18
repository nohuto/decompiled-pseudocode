/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0113970
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115C60 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A8B8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C000B558 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C0044B18 (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AC540 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00AC68C (MonitorGetMonitorHandle.c)
 *     MonitorIsHMDDevicePresent @ 0x1C00ADEB8 (MonitorIsHMDDevicePresent.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E0D48 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     MonitorGetNativeFlags @ 0x1C0105B7C (MonitorGetNativeFlags.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0117F18 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     MonitorIsPhysicalMonitor @ 0x1C0122F7C (MonitorIsPhysicalMonitor.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r13d
  __int64 v6; // r12
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // zf
  unsigned int v15; // ebx
  int MonitorHandle; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  struct HDXGMONITOR__ *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v25; // r8
  __int64 v26; // r9
  unsigned int v27; // r14d
  int NativeFlags; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // al
  unsigned __int8 v37; // cl
  char v38; // al
  int IsHMDDevicePresent; // eax
  char v40; // al
  __int64 v41; // rbx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  struct HDXGMONITOR__ *v47; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rbx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  _QWORD *v65; // r14
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  _QWORD *v72; // rbx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned int PathSourceFromTarget; // ebx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rax
  __int64 v84; // rax
  unsigned __int8 v85; // [rsp+30h] [rbp-20h] BYREF
  bool v86; // [rsp+31h] [rbp-1Fh] BYREF
  unsigned __int8 v87[6]; // [rsp+32h] [rbp-1Eh] BYREF
  __int64 v88; // [rsp+38h] [rbp-18h] BYREF
  __int64 v89; // [rsp+40h] [rbp-10h] BYREF
  struct HDXGMONITOR__ *v90; // [rsp+48h] [rbp-8h]
  char v91; // [rsp+80h] [rbp+30h] BYREF

  v4 = a4;
  v6 = (unsigned int)a2;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 40) + 8LL) != KeGetCurrentThread() )
  {
    v49 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v49);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 80) + 72LL));
  v8 = *(_QWORD *)(a1 + 80);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, (unsigned int)v6, a3, a4);
  if ( TargetById )
  {
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64), v9);
    v88 = 0LL;
    v14 = *(_QWORD *)(a1 + 8) == 0LL;
    v15 = *((_DWORD *)TargetById + 6);
    v90 = (struct HDXGMONITOR__ *)*((_QWORD *)TargetById + 13);
    if ( v14 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v10, v9, v12, v13);
      WdLogEvent5_WdAssertion(v52);
    }
    MonitorHandle = MonitorGetMonitorHandle(
                      *(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL),
                      v15,
                      0LL,
                      TargetById,
                      (struct HDXGMONITOR__ **)&v88);
    v21 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v22 = (struct HDXGMONITOR__ *)v88;
      if ( v88 )
      {
        v53 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        WdLogEvent5_WdAssertion(v53);
      }
      LODWORD(v21) = 0;
    }
    else if ( MonitorHandle < 0 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
      v56[3] = v6;
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v59 = WdLogNewEntry5_WdAssertion(v55, v54, v57, v58);
        WdLogEvent5_WdAssertion(v59);
      }
      v56[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      v56[5] = v21;
      WdLogEvent5_WdError(v56);
      v22 = 0LL;
      v88 = 0LL;
    }
    else
    {
      v22 = (struct HDXGMONITOR__ *)v88;
    }
    if ( v22 == v90 )
    {
      if ( v4 == 10 )
      {
        if ( a3 == 2 )
        {
          *((_BYTE *)TargetById + 404) = 1;
        }
        else if ( a3 == 1 )
        {
          *((_BYTE *)TargetById + 404) = 0;
        }
      }
    }
    else
    {
      *((_BYTE *)TargetById + 407) = MonitorIsPhysicalMonitor(v22);
      *((_QWORD *)TargetById + 13) = v22;
      *((_BYTE *)TargetById + 406) = 1;
      if ( v22 )
      {
        v27 = *((_DWORD *)TargetById + 6);
        v85 = 0;
        v86 = 0;
        v87[0] = 0;
        if ( !*(_QWORD *)(a1 + 8) )
        {
          v60 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
          WdLogEvent5_WdAssertion(v60);
        }
        NativeFlags = MonitorGetNativeFlags(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL), v27, &v85, &v86, v87);
        v33 = NativeFlags;
        if ( NativeFlags < 0 )
        {
          v65 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
          v65[3] = v6;
          if ( !*(_QWORD *)(a1 + 8) )
          {
            v66 = WdLogNewEntry5_WdAssertion(v62, v61, v63, v64);
            WdLogEvent5_WdAssertion(v66);
          }
          v65[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          v65[5] = v33;
          WdLogEvent5_WdError(v65);
        }
        if ( !g_Win32kSupportsPathIndependentRotation )
          goto LABEL_56;
        if ( !*(_QWORD *)(a1 + 8) )
        {
          v67 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
          WdLogEvent5_WdAssertion(v67);
        }
        v34 = *(_QWORD *)(a1 + 8);
        v35 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 2280LL);
        if ( *(_BYTE *)(v35 + 133) )
        {
          if ( !v34 )
          {
            v68 = WdLogNewEntry5_WdAssertion(v35, 0LL, v31, v32);
            WdLogEvent5_WdAssertion(v68);
          }
          v34 = *(_QWORD *)(a1 + 8);
          v35 = *(_QWORD *)(*(_QWORD *)(v34 + 16) + 2280LL);
          if ( *(_BYTE *)(v35 + 134) )
            goto LABEL_24;
        }
        if ( !v34 )
        {
          v69 = WdLogNewEntry5_WdAssertion(v35, 0LL, v31, v32);
          WdLogEvent5_WdAssertion(v69);
        }
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 192LL) + 64LL)
                                   + 40LL)
                       + 28LL) >= 0x4003u )
LABEL_24:
          v36 = 1;
        else
LABEL_56:
          v36 = 0;
        v37 = v85;
        *((_BYTE *)TargetById + 397) = v85;
        if ( v36 || !v37 || (v38 = 1, !v86) )
          v38 = 0;
        *((_BYTE *)TargetById + 398) = v38;
        v91 = 0;
        IsHMDDevicePresent = MonitorIsHMDDevicePresent(v22, &v91, 0LL, v32);
        v21 = IsHMDDevicePresent;
        if ( IsHMDDevicePresent < 0 )
        {
          v72 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
          v72[3] = v6;
          if ( !*(_QWORD *)(a1 + 8) )
          {
            v75 = WdLogNewEntry5_WdAssertion(v71, v70, v73, v74);
            WdLogEvent5_WdAssertion(v75);
          }
          v72[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          v72[5] = v21;
          WdLogEvent5_WdError(v72);
          v40 = 0;
          LODWORD(v21) = 0;
          v91 = 0;
        }
        else
        {
          v40 = v91;
        }
        *((_BYTE *)TargetById + 404) = v40;
        *((_BYTE *)TargetById + 405) = v87[0];
      }
      else
      {
        *(_WORD *)((char *)TargetById + 397) = 0;
        *((_WORD *)TargetById + 202) = 256;
      }
      v41 = *(_QWORD *)(a1 + 120);
      if ( v41 != a1 + 120 )
      {
        v42 = v41 - 8;
        while ( v42 )
        {
          if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v42 + 96), v6) )
            DMMVIDPNTOPOLOGY::Invalidate((DMMVIDPNTOPOLOGY *)(v42 + 96));
          v76 = *(_QWORD *)(v42 + 8);
          v42 = v76 - 8;
          if ( v76 == a1 + 120 )
            v42 = 0LL;
        }
      }
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v77 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
        WdLogEvent5_WdAssertion(v77);
      }
      ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(*(ADAPTER_DISPLAY **)(a1 + 8), v23, v25);
      v43 = *(_QWORD *)(a1 + 88);
      v89 = 0LL;
      if ( v43 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v43 + 32));
        v44 = *(_QWORD *)(a1 + 88);
      }
      else
      {
        v44 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v89, v44);
      if ( v89 )
      {
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPNTOPOLOGY *)(v89 + 96), v6, v45, v46);
        if ( PathSourceFromTarget != -1 )
        {
          if ( !*(_QWORD *)(a1 + 8) )
          {
            v83 = WdLogNewEntry5_WdAssertion(v79, v78, v81, v82);
            WdLogEvent5_WdAssertion(v83);
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(a1 + 8), PathSourceFromTarget, 1);
        }
      }
      auto_rc<DMMVIDPN const>::reset(&v89, 0LL);
    }
    v47 = v90;
    if ( v90 )
    {
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v84 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
        WdLogEvent5_WdAssertion(v84);
      }
      MonitorReleaseMonitorHandle(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL), v47, TargetById, v20);
    }
    return (unsigned int)v21;
  }
  else
  {
    v50 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v50 + 24) = v6;
    *(_QWORD *)(v50 + 32) = a1;
    WdLogEvent5_WdError(v50);
    if ( v8 )
      ReferenceCounted::Release((ReferenceCounted *)(v8 + 64), v51);
    return 3223192325LL;
  }
}
