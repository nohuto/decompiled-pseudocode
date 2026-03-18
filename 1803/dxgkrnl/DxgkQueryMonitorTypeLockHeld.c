/*
 * XREFs of DxgkQueryMonitorTypeLockHeld @ 0x1C01C7A90
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00AD874 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0191274 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01916F8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C01C6EAC (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AA09C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00ABA7C (MonitorGetMonitorHandle.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B7644 (IsVirtualizationDisabledForTarget.c)
 *     MonitorGetMonitorType @ 0x1C00C689C (MonitorGetMonitorType.c)
 */

__int64 __fastcall DxgkQueryMonitorTypeLockHeld(
        DXGADAPTER *this,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6,
        char *a7,
        bool *a8,
        bool *a9)
{
  int MonitorType; // r12d
  __int64 v10; // rbp
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 result; // rax
  bool *v17; // r14
  char v18; // r8
  bool *v19; // rsi
  _BYTE *v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DMMVIDEOPRESENTTARGET *v24; // rbp
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  _DWORD *v28; // rbx
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  bool v35; // [rsp+30h] [rbp-58h] BYREF
  __int64 v36; // [rsp+38h] [rbp-50h] BYREF
  struct HDXGMONITOR__ *v37; // [rsp+40h] [rbp-48h] BYREF
  bool v38; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v39; // [rsp+98h] [rbp+10h]
  _DWORD *v40; // [rsp+A0h] [rbp+18h]

  v40 = a3;
  v39 = a2;
  MonitorType = 0;
  v10 = a2;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  v14 = *((_QWORD *)this + 307);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = this;
    *(_QWORD *)(v15 + 32) = v10;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v17 = a9;
  v18 = 1;
  v19 = a8;
  v20 = a6;
  if ( a4 || a5 || a6 || a8 || a9 )
  {
    v21 = *(_QWORD *)(v14 + 88);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v36, v21);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 80) + 72LL));
    v22 = *(_QWORD *)(v21 + 80);
    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v22, v10);
    v24 = TargetById;
    if ( TargetById )
    {
      if ( a4 )
        *a4 = *((_DWORD *)TargetById + 20);
      if ( a5 )
        *a5 = *((_DWORD *)TargetById + 21);
      if ( v20 )
        *v20 = *((_BYTE *)TargetById + 397);
      if ( v19 || v17 )
      {
        MonitorType = IsVirtualizationDisabledForTarget(this, *((_DWORD *)TargetById + 6), &v38, &v35);
        if ( MonitorType < 0 )
        {
          v26 = WdLogNewEntry5_WdError(v25);
          *(_QWORD *)(v26 + 24) = *((unsigned int *)v24 + 6);
          *(_QWORD *)(v26 + 32) = this;
          WdLogEvent5_WdError(v26);
          if ( v22 )
            ReferenceCounted::Release((ReferenceCounted *)(v22 + 64));
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v36 + 40));
          return (unsigned int)MonitorType;
        }
        if ( v19 )
          *v19 = !v38;
        if ( v17 )
          *v17 = !v35;
      }
    }
    else
    {
      if ( v20 )
        *v20 = 0;
      if ( v19 )
        *v19 = *(_BYTE *)(*((_QWORD *)this + 307) + 132LL);
      if ( v17 )
        *v17 = *(_BYTE *)(*((_QWORD *)this + 307) + 133LL);
    }
    if ( v22 )
      ReferenceCounted::Release((ReferenceCounted *)(v22 + 64));
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v36 + 40));
    LODWORD(v10) = v39;
    v18 = 1;
  }
  if ( a7 )
  {
    v27 = *((_QWORD *)this + 307);
    if ( (!*(_BYTE *)(v27 + 132) || !*(_BYTE *)(v27 + 133))
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL) < 0x4003u )
    {
      v18 = 0;
    }
    *a7 = v18;
  }
  v28 = v40;
  if ( v40 )
  {
    result = MonitorGetMonitorHandle(this, (unsigned int)v10, 0LL, DxgkQueryMonitorTypeLockHeld, &v37);
    if ( (int)result < 0 )
      return result;
    MonitorType = MonitorGetMonitorType(this, v37, v28, v29);
    if ( MonitorType < 0 )
    {
      v32 = WdLogNewEntry5_WdError(v30);
      *(_QWORD *)(v32 + 24) = (unsigned int)v10;
      *(_QWORD *)(v32 + 32) = this;
      WdLogEvent5_WdError(v32);
    }
    if ( (int)MonitorReleaseMonitorHandle(this, (__int64)v37, DxgkQueryMonitorTypeLockHeld, v31) < 0 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v34 + 24) = 3010LL;
      WdLogEvent5_WdAssertion(v34);
    }
  }
  return (unsigned int)MonitorType;
}
