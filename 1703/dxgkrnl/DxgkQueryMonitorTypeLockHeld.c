/*
 * XREFs of DxgkQueryMonitorTypeLockHeld @ 0x1C0099E20
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00A74A4 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C012189C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C018DD48 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE3333@Z @ 0x1C01AAE28 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AC540 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00AC68C (MonitorGetMonitorHandle.c)
 *     MonitorIsHMDDevicePresent @ 0x1C00ADEB8 (MonitorIsHMDDevicePresent.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00DFF30 (IsVirtualizationDisabledForTarget.c)
 *     MonitorGetMonitorType @ 0x1C00F0468 (MonitorGetMonitorType.c)
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
  __int64 v11; // r13
  int IsHMDDevicePresent; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  bool *v19; // r15
  char v20; // r8
  bool *v21; // r14
  _BYTE *v22; // r12
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct DMMVIDEOPRESENTTARGET *TargetById; // r13
  __int64 v31; // r15
  _BYTE *v32; // rbx
  __int64 result; // rax
  struct HDXGMONITOR__ *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  char v51; // [rsp+30h] [rbp-28h] BYREF
  char v52[7]; // [rsp+31h] [rbp-27h] BYREF
  __int64 v53; // [rsp+38h] [rbp-20h] BYREF
  struct HDXGMONITOR__ *v54; // [rsp+40h] [rbp-18h] BYREF
  char v55; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v56; // [rsp+A8h] [rbp+50h]
  __int64 v57; // [rsp+B0h] [rbp+58h]
  _DWORD *v58; // [rsp+B8h] [rbp+60h]

  v58 = a4;
  v57 = a3;
  v56 = a2;
  v11 = a2;
  IsHMDDevicePresent = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v41 + 24) = 3476LL;
    WdLogEvent5_WdAssertion(v41);
  }
  v18 = *((_QWORD *)this + 285);
  if ( !v18 )
  {
    v42 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v42 + 24) = this;
    *(_QWORD *)(v42 + 32) = v11;
    WdLogEvent5_WdError(v42);
    return 3221225485LL;
  }
  v19 = a9;
  v20 = 1;
  v21 = a8;
  v22 = a6;
  if ( a4 || a5 || a6 || a8 || a9 )
  {
    v23 = *(_QWORD *)(v18 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v53, v23, 1LL, v17);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v23 + 80) + 72LL));
    v24 = *(_QWORD *)(v23 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v24, (unsigned int)v11, v25, v26);
    if ( TargetById )
    {
      if ( v58 )
        *v58 = *((_DWORD *)TargetById + 20);
      if ( a5 )
        *a5 = *((_DWORD *)TargetById + 21);
      if ( v22 )
        *v22 = *((_BYTE *)TargetById + 397);
      if ( v21 || v19 )
      {
        IsHMDDevicePresent = IsVirtualizationDisabledForTarget(this, *((unsigned int *)TargetById + 6), &v51, v52);
        if ( IsHMDDevicePresent < 0 )
        {
          v44 = WdLogNewEntry5_WdError(v43, v27);
          *(_QWORD *)(v44 + 24) = *((unsigned int *)TargetById + 6);
          *(_QWORD *)(v44 + 32) = this;
          WdLogEvent5_WdError(v44);
          if ( v24 )
            ReferenceCounted::Release((ReferenceCounted *)(v24 + 64), v45);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v53 + 40), v45, v46, v47);
          return (unsigned int)IsHMDDevicePresent;
        }
        if ( v21 )
          *v21 = v51 == 0;
        if ( v19 )
          *v19 = v52[0] == 0;
      }
    }
    else
    {
      if ( v22 )
        *v22 = 0;
      if ( v21 )
        *v21 = *(_BYTE *)(*((_QWORD *)this + 285) + 133LL);
      if ( v19 )
        *v19 = *(_BYTE *)(*((_QWORD *)this + 285) + 134LL);
    }
    if ( v24 )
      ReferenceCounted::Release((ReferenceCounted *)(v24 + 64), v27);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v53 + 40), v27, v28, v29);
    LODWORD(v11) = v56;
    v20 = 1;
  }
  if ( a7 )
  {
    if ( !g_Win32kSupportsPathIndependentRotation
      || ((v48 = *((_QWORD *)this + 285), !*(_BYTE *)(v48 + 133)) || !*(_BYTE *)(v48 + 134))
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL) < 0x4003u )
    {
      v20 = 0;
    }
    *a7 = v20;
  }
  v31 = v57;
  v32 = a10;
  if ( !v57 && !a10 )
    return (unsigned int)IsHMDDevicePresent;
  result = MonitorGetMonitorHandle(this, v11, 0, DxgkQueryMonitorTypeLockHeld, (__int64)&v54);
  IsHMDDevicePresent = result;
  if ( (int)result >= 0 )
  {
    v34 = v54;
    if ( !v31 || (IsHMDDevicePresent = MonitorGetMonitorType(this, v54), IsHMDDevicePresent >= 0) )
    {
      if ( !v32 )
        goto LABEL_28;
      v55 = 0;
      IsHMDDevicePresent = MonitorIsHMDDevicePresent(v34, &v55, v32);
      if ( IsHMDDevicePresent >= 0 )
      {
        if ( !v55 )
          *v32 = 0;
        goto LABEL_28;
      }
    }
    v49 = WdLogNewEntry5_WdError(v36, v35);
    *(_QWORD *)(v49 + 24) = (unsigned int)v11;
    *(_QWORD *)(v49 + 32) = this;
    WdLogEvent5_WdError(v49);
LABEL_28:
    if ( (int)MonitorReleaseMonitorHandle(this, v34, DxgkQueryMonitorTypeLockHeld) < 0 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v38, v37, v39, v40);
      *(_QWORD *)(v50 + 24) = 3609LL;
      WdLogEvent5_WdAssertion(v50);
    }
    return (unsigned int)IsHMDDevicePresent;
  }
  return result;
}
