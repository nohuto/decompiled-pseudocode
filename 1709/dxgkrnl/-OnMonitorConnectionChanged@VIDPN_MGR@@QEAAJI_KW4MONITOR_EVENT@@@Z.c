/*
 * XREFs of ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C010FBDC
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DF40 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00059A8 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0007718 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0012DC0 (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C0035780 (-Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00A42F8 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00E4564 (MonitorGetMonitorHandle.c)
 *     MonitorIsHMDDevicePresent @ 0x1C00F5E8C (MonitorIsHMDDevicePresent.c)
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0106EA8 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 *     MonitorGetNativeFlags @ 0x1C01222D4 (MonitorGetNativeFlags.c)
 */

__int64 __fastcall VIDPN_MGR::OnMonitorConnectionChanged(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v6; // r12
  volatile signed __int32 *v8; // rbx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  int v11; // ebx
  bool v12; // zf
  unsigned int v13; // ebx
  int MonitorHandle; // eax
  __int64 v15; // rcx
  __int64 v16; // r14
  struct HDXGMONITOR__ *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v20; // r8
  unsigned int v21; // r14d
  int NativeFlags; // eax
  __int64 v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // al
  char v28; // cl
  char v29; // al
  int IsHMDDevicePresent; // eax
  char v31; // al
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rdx
  struct _IO_REMOVE_LOCK *v36; // rbx
  __int64 v38; // rax
  __int64 v39; // rax
  void (__fastcall ***v40)(_QWORD, __int64); // rcx
  int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // r14
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  unsigned int PathSourceFromTarget; // ebx
  __int64 v63; // rax
  __int64 v64; // rax
  char v65; // [rsp+30h] [rbp-20h] BYREF
  char v66; // [rsp+31h] [rbp-1Fh] BYREF
  _BYTE v67[6]; // [rsp+32h] [rbp-1Eh] BYREF
  struct HDXGMONITOR__ *v68; // [rsp+38h] [rbp-18h] BYREF
  __int64 v69; // [rsp+40h] [rbp-10h] BYREF
  struct HDXGMONITOR__ *v70; // [rsp+48h] [rbp-8h]
  char v71; // [rsp+80h] [rbp+30h] BYREF

  v6 = a2;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 40) + 8LL) != KeGetCurrentThread() )
  {
    v38 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v38);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 80) + 72LL));
  v8 = *(volatile signed __int32 **)(a1 + 80);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v8, v6);
  if ( TargetById )
  {
    if ( v8 )
    {
      v9 = (void (__fastcall ***)(_QWORD, __int64))(v8 + 16);
      v11 = _InterlockedDecrement(v8 + 18);
      if ( v11 )
      {
        if ( v11 < 0 )
        {
          v43 = WdLogNewEntry5_WdError(v9);
          *(_QWORD *)(v43 + 24) = v11;
          WdLogEvent5_WdError(v43);
        }
      }
      else if ( v9 )
      {
        (**v9)(v9, 1LL);
      }
    }
    v68 = 0LL;
    v12 = *(_QWORD *)(a1 + 8) == 0LL;
    v13 = *((_DWORD *)TargetById + 6);
    v70 = (struct HDXGMONITOR__ *)*((_QWORD *)TargetById + 13);
    if ( v12 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v44);
    }
    MonitorHandle = MonitorGetMonitorHandle(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL), v13, 0, TargetById, &v68);
    v16 = MonitorHandle;
    if ( MonitorHandle == -1073741275 )
    {
      v17 = v68;
      if ( v68 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v45);
      }
      LODWORD(v16) = 0;
    }
    else if ( MonitorHandle < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v47[3] = v6;
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v48 = WdLogNewEntry5_WdAssertion(v46);
        WdLogEvent5_WdAssertion(v48);
      }
      v47[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      v47[5] = v16;
      WdLogEvent5_WdError(v47);
      v17 = 0LL;
      v68 = 0LL;
    }
    else
    {
      v17 = v68;
    }
    if ( v17 == v70 )
    {
      if ( a4 == 10 )
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
      DMMVIDEOPRESENTTARGET::SetConnectedMonitor(TargetById, v17);
      *((_BYTE *)TargetById + 406) = 1;
      if ( v17 )
      {
        v21 = *((_DWORD *)TargetById + 6);
        v65 = 0;
        v66 = 0;
        v67[0] = 0;
        if ( !*(_QWORD *)(a1 + 8) )
        {
          v49 = WdLogNewEntry5_WdAssertion(v19);
          WdLogEvent5_WdAssertion(v49);
        }
        NativeFlags = MonitorGetNativeFlags(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v21, &v65, &v66, v67);
        v24 = NativeFlags;
        if ( NativeFlags < 0 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v23);
          v51[3] = v6;
          if ( !*(_QWORD *)(a1 + 8) )
          {
            v52 = WdLogNewEntry5_WdAssertion(v50);
            WdLogEvent5_WdAssertion(v52);
          }
          v51[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          v51[5] = v24;
          WdLogEvent5_WdError(v51);
        }
        if ( !*(_QWORD *)(a1 + 8) )
        {
          v53 = WdLogNewEntry5_WdAssertion(v23);
          WdLogEvent5_WdAssertion(v53);
        }
        v25 = *(_QWORD *)(a1 + 8);
        v26 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 2304LL);
        if ( *(_BYTE *)(v26 + 132) )
        {
          if ( !v25 )
          {
            v54 = WdLogNewEntry5_WdAssertion(v26);
            WdLogEvent5_WdAssertion(v54);
          }
          v25 = *(_QWORD *)(a1 + 8);
          v26 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 2304LL);
          if ( *(_BYTE *)(v26 + 133) )
            goto LABEL_25;
        }
        if ( !v25 )
        {
          v55 = WdLogNewEntry5_WdAssertion(v26);
          WdLogEvent5_WdAssertion(v55);
        }
        v27 = 0;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 192LL) + 64LL)
                                   + 40LL)
                       + 28LL) >= 0x4003u )
LABEL_25:
          v27 = 1;
        v28 = v65;
        *((_BYTE *)TargetById + 397) = v65;
        if ( v27 || !v28 || (v29 = 1, !v66) )
          v29 = 0;
        *((_BYTE *)TargetById + 398) = v29;
        v71 = 0;
        IsHMDDevicePresent = MonitorIsHMDDevicePresent(v17, &v71, 0LL);
        v16 = IsHMDDevicePresent;
        if ( IsHMDDevicePresent < 0 )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdError(v19);
          v57[3] = v6;
          if ( !*(_QWORD *)(a1 + 8) )
          {
            v58 = WdLogNewEntry5_WdAssertion(v56);
            WdLogEvent5_WdAssertion(v58);
          }
          v57[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
          v57[5] = v16;
          WdLogEvent5_WdError(v57);
          v31 = 0;
          LODWORD(v16) = 0;
          v71 = 0;
        }
        else
        {
          v31 = v71;
        }
        *((_BYTE *)TargetById + 404) = v31;
        *((_BYTE *)TargetById + 405) = v67[0];
      }
      else
      {
        *(_WORD *)((char *)TargetById + 397) = 0;
        *((_WORD *)TargetById + 202) = 256;
      }
      v32 = *(_QWORD *)(a1 + 120);
      if ( v32 != a1 + 120 )
      {
        v33 = v32 - 8;
        while ( v33 )
        {
          if ( DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v33 + 96), v6) )
            DMMVIDPNTOPOLOGY::Invalidate((DMMVIDPNTOPOLOGY *)(v33 + 96));
          v59 = *(_QWORD *)(v33 + 8);
          v33 = v59 - 8;
          if ( v59 == a1 + 120 )
            v33 = 0LL;
        }
      }
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v60 = WdLogNewEntry5_WdAssertion(v19);
        WdLogEvent5_WdAssertion(v60);
      }
      ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(*(PERESOURCE ***)(a1 + 8), v18, v20);
      v34 = *(_QWORD *)(a1 + 88);
      v69 = 0LL;
      if ( v34 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v34 + 32));
        v35 = *(_QWORD *)(a1 + 88);
      }
      else
      {
        v35 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v69, v35);
      if ( v69 )
      {
        PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
                                 (DMMVIDPNTOPOLOGY *)(v69 + 96),
                                 (unsigned int)v6);
        if ( PathSourceFromTarget != -1 )
        {
          if ( !*(_QWORD *)(a1 + 8) )
          {
            v63 = WdLogNewEntry5_WdAssertion(v61);
            WdLogEvent5_WdAssertion(v63);
          }
          ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(a1 + 8), PathSourceFromTarget, 1);
        }
      }
      auto_rc<DMMVIDPN const>::reset(&v69, 0LL);
    }
    v36 = (struct _IO_REMOVE_LOCK *)v70;
    if ( v70 )
    {
      if ( !*(_QWORD *)(a1 + 8) )
      {
        v64 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v64);
      }
      MonitorReleaseMonitorHandle(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL), v36, TargetById);
    }
    return (unsigned int)v16;
  }
  else
  {
    v39 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v39 + 24) = v6;
    *(_QWORD *)(v39 + 32) = a1;
    WdLogEvent5_WdError(v39);
    if ( v8 )
    {
      v40 = (void (__fastcall ***)(_QWORD, __int64))(v8 + 16);
      v41 = _InterlockedDecrement(v8 + 18);
      if ( v41 )
      {
        if ( v41 < 0 )
        {
          v42 = WdLogNewEntry5_WdError(v40);
          *(_QWORD *)(v42 + 24) = v41;
          WdLogEvent5_WdError(v42);
        }
      }
      else if ( v40 )
      {
        (**v40)(v40, 1LL);
      }
    }
    return 3223192325LL;
  }
}
