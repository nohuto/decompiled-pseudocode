/*
 * XREFs of DxgkQueryMonitorTypeLockHeld @ 0x1C00BA510
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00B6EF8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00E6098 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE3333@Z @ 0x1C010381C (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C012113C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01A24BC (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorType @ 0x1C00E44B0 (MonitorGetMonitorType.c)
 *     MonitorGetMonitorHandle @ 0x1C00E4564 (MonitorGetMonitorHandle.c)
 *     MonitorIsHMDDevicePresent @ 0x1C00F5E8C (MonitorIsHMDDevicePresent.c)
 */

__int64 __fastcall DxgkQueryMonitorTypeLockHeld(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6,
        char *a7,
        bool *a8,
        bool *a9,
        _BYTE *a10)
{
  __int64 v11; // r14
  int IsHMDDevicePresent; // edi
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 result; // rax
  bool *v18; // r13
  char v19; // r8
  _BYTE *v20; // r14
  _DWORD *v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DMMVIDEOPRESENTTARGET *v25; // rcx
  bool *v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  struct _FAST_MUTEX *v35; // rcx
  __int64 v36; // rax
  unsigned __int8 v37; // r14
  int MonitorInstance; // eax
  __int64 v39; // rax
  struct DXGMONITOR *v40; // r14
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int8 IsVirtualModeSuportDisabled; // al
  struct _ERESOURCE *v44; // rcx
  bool v45; // al
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r12
  _BYTE *v50; // rbx
  __int64 v51; // r15
  struct HDXGMONITOR__ *v52; // r14
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int8 v57; // [rsp+30h] [rbp-20h]
  char v58; // [rsp+31h] [rbp-1Fh]
  bool v59; // [rsp+32h] [rbp-1Eh]
  struct DXGMONITOR *v60; // [rsp+38h] [rbp-18h] BYREF
  __int64 v61; // [rsp+40h] [rbp-10h] BYREF
  struct HDXGMONITOR__ *v62; // [rsp+48h] [rbp-8h] BYREF
  struct DMMVIDEOPRESENTTARGET *v63; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v64; // [rsp+98h] [rbp+48h]
  __int64 v65; // [rsp+A0h] [rbp+50h]

  v65 = a3;
  v64 = a2;
  v11 = a2;
  IsHMDDevicePresent = 0;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  v15 = *((_QWORD *)this + 288);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = v11;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  v18 = a9;
  v19 = 1;
  v20 = a6;
  v21 = a5;
  if ( !a4 && !a5 && !a6 && !a8 && !a9 )
  {
LABEL_66:
    if ( a7 )
    {
      v48 = *((_QWORD *)this + 288);
      if ( (!*(_BYTE *)(v48 + 132) || !*(_BYTE *)(v48 + 133))
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL) < 0x4003u )
      {
        v19 = 0;
      }
      *a7 = v19;
    }
    v49 = v65;
    v50 = a10;
    if ( !v65 && !a10 )
      return (unsigned int)IsHMDDevicePresent;
    v51 = v64;
    result = MonitorGetMonitorHandle(this, v64, 0, DxgkQueryMonitorTypeLockHeld, (__int64)&v62);
    IsHMDDevicePresent = result;
    if ( (int)result < 0 )
      return result;
    v52 = v62;
    if ( !v49 || (IsHMDDevicePresent = MonitorGetMonitorType(this, v62), IsHMDDevicePresent >= 0) )
    {
      if ( !v50 )
      {
LABEL_82:
        if ( (int)MonitorReleaseMonitorHandle(this) < 0 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v55);
          *(_QWORD *)(v56 + 24) = 3001LL;
          WdLogEvent5_WdAssertion(v56);
        }
        return (unsigned int)IsHMDDevicePresent;
      }
      LOBYTE(v63) = 0;
      IsHMDDevicePresent = MonitorIsHMDDevicePresent(v52, &v63, v50);
      if ( IsHMDDevicePresent >= 0 )
      {
        if ( !(_BYTE)v63 )
          *v50 = 0;
        goto LABEL_82;
      }
    }
    v54 = WdLogNewEntry5_WdError(v53);
    *(_QWORD *)(v54 + 24) = v51;
    *(_QWORD *)(v54 + 32) = this;
    WdLogEvent5_WdError(v54);
    goto LABEL_82;
  }
  v22 = *(_QWORD *)(v15 + 88);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v61, v22);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v22 + 80) + 72LL));
  v23 = *(_QWORD *)(v22 + 80);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v23, v64);
  v63 = TargetById;
  v25 = TargetById;
  if ( !TargetById )
  {
    if ( v20 )
      *v20 = 0;
    if ( a8 )
      *a8 = *(_BYTE *)(*((_QWORD *)this + 288) + 132LL);
    if ( v18 )
      *v18 = *(_BYTE *)(*((_QWORD *)this + 288) + 133LL);
    goto LABEL_63;
  }
  if ( a4 )
    *a4 = *((_DWORD *)TargetById + 20);
  if ( v21 )
    *v21 = *((_DWORD *)TargetById + 21);
  if ( v20 )
    *v20 = *((_BYTE *)TargetById + 397);
  v26 = a8;
  if ( !a8 && !v18 )
  {
LABEL_63:
    if ( v23 )
      ReferenceCounted::Release((ReferenceCounted *)(v23 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v61 + 40));
    v19 = 1;
    goto LABEL_66;
  }
  v27 = *((unsigned int *)TargetById + 6);
  if ( (_DWORD)v27 == -1 )
  {
    LOBYTE(v25) = v58;
    IsHMDDevicePresent = -1073741811;
    v45 = v59;
LABEL_49:
    if ( IsHMDDevicePresent < 0 )
      goto LABEL_50;
    if ( v26 )
      *v26 = !v45;
    if ( v18 )
      *v18 = (_BYTE)v25 == 0;
    goto LABEL_63;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v28);
    *(_QWORD *)(v29 + 24) = 7392LL;
    WdLogEvent5_WdAssertion(v29);
  }
  v30 = *((_QWORD *)this + 288);
  if ( v30 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v32);
      WdLogEvent5_WdAssertion(v33);
    }
    if ( !*((_QWORD *)this + 288) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v32);
      WdLogEvent5_WdAssertion(v34);
    }
    v35 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 288) + 96LL);
    if ( v35 )
    {
      v60 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v35, v27, 1, (ULONG **)&v60);
      if ( MonitorInstance == -1073741275 )
      {
        v39 = WdLogNewEntry5_WdDmmEvent(v25);
        *(_QWORD *)(v39 + 24) = v27;
        *(_QWORD *)(v39 + 32) = this;
        WdLogEvent5_WdDmmEvent(v39);
        MonitorInstance = -1073741632;
      }
      else
      {
        if ( MonitorInstance >= 0 )
        {
          v40 = v60;
          if ( !v60 || *((_DWORD *)v60 + 104) != 1 )
          {
            v41 = WdLogNewEntry5_WdAssertion(v25);
            WdLogEvent5_WdAssertion(v41);
          }
          if ( !v40 )
          {
            v42 = WdLogNewEntry5_WdAssertion(v25);
            WdLogEvent5_WdAssertion(v42);
          }
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)((char *)v40 + 280), 1u);
          IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v40);
          v44 = (struct _ERESOURCE *)((char *)v40 + 280);
          v37 = IsVirtualModeSuportDisabled;
          ExReleaseResourceLite(v44);
          KeLeaveCriticalRegion();
          MonitorInstance = 0;
        }
        else
        {
          v37 = v57;
        }
        if ( MonitorInstance != -1073741632 )
          goto LABEL_40;
      }
      v37 = 0;
    }
    else
    {
      v36 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v36 + 24) = this;
      WdLogEvent5_WdError(v36);
      v37 = v57;
      MonitorInstance = -1073741811;
    }
LABEL_40:
    IsHMDDevicePresent = 0;
    if ( MonitorInstance != -1073741632 )
      IsHMDDevicePresent = MonitorInstance;
    if ( IsHMDDevicePresent < 0 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v46 + 24) = IsHMDDevicePresent;
      WdLogEvent5_WdAssertion(v46);
      LOBYTE(v25) = v58;
      v45 = v59;
    }
    else if ( v37 )
    {
      v45 = 1;
      LOBYTE(v25) = 1;
    }
    else
    {
      v45 = *(_BYTE *)(v30 + 132) == 0;
      LOBYTE(v25) = *(_BYTE *)(v30 + 133) == 0;
    }
    v26 = a8;
    goto LABEL_49;
  }
  v31 = WdLogNewEntry5_WdError(v28);
  *(_QWORD *)(v31 + 24) = 7397LL;
  WdLogEvent5_WdError(v31);
  IsHMDDevicePresent = -1073741811;
LABEL_50:
  v47 = WdLogNewEntry5_WdError(v25);
  *(_QWORD *)(v47 + 24) = *((unsigned int *)v63 + 6);
  *(_QWORD *)(v47 + 32) = this;
  WdLogEvent5_WdError(v47);
  if ( v23 )
    ReferenceCounted::Release((ReferenceCounted *)(v23 + 64));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v61 + 40));
  return (unsigned int)IsHMDDevicePresent;
}
