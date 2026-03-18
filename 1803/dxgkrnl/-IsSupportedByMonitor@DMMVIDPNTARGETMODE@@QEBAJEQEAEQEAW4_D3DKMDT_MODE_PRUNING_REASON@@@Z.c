/*
 * XREFs of ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00BE59C
 * Callers:
 *     BmlIsSupportedByMonitorTargetMode @ 0x1C00C1EE0 (BmlIsSupportedByMonitorTargetMode.c)
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C021B640 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C00029B4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00B7E54 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODE::IsSupportedByMonitor(
        DMMVIDPNTARGETMODE *this,
        __int64 a2,
        unsigned __int8 *const a3,
        enum _D3DKMDT_MODE_PRUNING_REASON *const a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  struct HDXGMONITOR__ *v9; // r12
  unsigned __int8 v10; // r14
  __int64 v11; // rsi
  int MonitorFromHandle; // ebx
  struct DXGMONITOR *v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int8 v19; // bl
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int IsSupportedModeInternal; // eax
  _QWORD *v35; // rax
  _BYTE v36[4]; // [rsp+30h] [rbp-28h] BYREF
  int v37; // [rsp+34h] [rbp-24h] BYREF
  int v38; // [rsp+38h] [rbp-20h] BYREF
  PERESOURCE Resource; // [rsp+40h] [rbp-18h]
  struct DXGMONITOR *v40; // [rsp+A0h] [rbp+48h] BYREF
  char v41; // [rsp+A8h] [rbp+50h]
  unsigned __int8 *v42; // [rsp+B0h] [rbp+58h]
  enum _D3DKMDT_MODE_PRUNING_REASON *v43; // [rsp+B8h] [rbp+60h]

  v43 = a4;
  v42 = a3;
  v41 = a2;
  if ( !a3 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a4 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v22);
  }
  *a4 = D3DKMDT_MPR_UNINITIALIZED;
  v7 = *((_QWORD *)this + 5);
  *a3 = 0;
  if ( !v7 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v23);
    v7 = *((_QWORD *)this + 5);
    if ( !v7 )
    {
      v24 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v24 + 24) = this;
LABEL_31:
      WdLogEvent5_WdError(v24);
      return 3223192337LL;
    }
  }
  v8 = *(_QWORD *)(v7 + 112);
  if ( !v8 )
  {
    v24 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v24 + 24) = v7;
    goto LABEL_31;
  }
  v9 = *(struct HDXGMONITOR__ **)(*(_QWORD *)(v8 + 96) + 104LL);
  if ( !v9 )
  {
    v25 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v25 + 24) = *(unsigned int *)(v8 + 24);
    *(_QWORD *)(v25 + 32) = this;
    WdLogEvent5_WdWarning(v25);
    return 3223192376LL;
  }
  v10 = 0;
  LODWORD(v11) = 0;
  if ( this != (DMMVIDPNTARGETMODE *)-72LL )
  {
    v40 = 0LL;
    MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v9, &v40);
    if ( MonitorFromHandle < 0 )
      goto LABEL_25;
    v13 = v40;
    if ( !v40 )
    {
      v26 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v26);
    }
    Resource = (PERESOURCE)((char *)v13 + 296);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v13 + 296), 1u);
    v15 = *((unsigned int *)v13 + 12);
    v10 = 0;
    v37 = 0;
    LOBYTE(v40) = 0;
    if ( ((unsigned int)(v15 - 1) <= 2 || (_DWORD)v15 == 14) && (*((_DWORD *)v13 + 10) & 8) != 0 )
    {
      v27 = WdLogNewEntry5_WdDmmEvent(v15);
      *(_QWORD *)(v27 + 24) = v13;
      WdLogEvent5_WdDmmEvent(v27);
      LODWORD(v11) = 1;
      v10 = 1;
    }
    else
    {
      v16 = *((_DWORD *)v13 + 30);
      if ( v16 - 1 <= 1 )
      {
        LOBYTE(v14) = v41;
        IsSupportedModeInternal = DXGMONITOR::_IsSupportedModeInternal(
                                    (__int64)v13,
                                    (__int64)this + 72,
                                    v16,
                                    v14,
                                    &v40,
                                    &v37);
        v10 = (unsigned __int8)v40;
        MonitorFromHandle = IsSupportedModeInternal;
        LODWORD(v11) = v37;
        goto LABEL_24;
      }
      if ( v16 != 3 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v28);
      }
      LOBYTE(v14) = v41;
      MonitorFromHandle = DXGMONITOR::_IsSupportedModeInternal((__int64)v13, (__int64)this + 72, 2u, v14, &v40, &v37);
      if ( MonitorFromHandle < 0 )
        goto LABEL_24;
      LOBYTE(v17) = v41;
      MonitorFromHandle = DXGMONITOR::_IsSupportedModeInternal((__int64)v13, (__int64)this + 72, 1u, v17, v36, &v38);
      if ( MonitorFromHandle < 0 )
        goto LABEL_24;
      v10 = (unsigned __int8)v40;
      v19 = v36[0];
      v11 = v38;
      if ( (_BYTE)v40 != v36[0] )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v18);
        v29[4] = v10;
        v29[5] = v37;
        v29[6] = v19;
        v29[3] = v13;
        v29[7] = v11;
        WdLogEvent5_WdDmmEvent(v29);
        v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30);
        v31[3] = *((unsigned int *)this + 21);
        v31[4] = *((unsigned int *)this + 22);
        v31[5] = *((unsigned int *)this + 23);
        v31[6] = *((unsigned int *)this + 24);
        v31[7] = (int)(*((_DWORD *)this + 30) << 29) >> 29;
        WdLogEvent5_WdDmmEvent(v31);
        v33 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32);
        v33[3] = *((unsigned int *)this + 25);
        v33[4] = *((unsigned int *)this + 26);
        v33[5] = *((_QWORD *)this + 14);
        WdLogEvent5_WdDmmEvent(v33);
      }
      if ( !v19 && !v10 || (v10 = 1, !v19) )
        LODWORD(v11) = v37;
    }
    MonitorFromHandle = 0;
LABEL_24:
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
    goto LABEL_25;
  }
  MonitorFromHandle = -1073741811;
LABEL_25:
  if ( MonitorFromHandle < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v35[5] = MonitorFromHandle;
    v35[3] = this;
    v35[4] = v9;
    WdLogEvent5_WdError(v35);
    return (unsigned int)MonitorFromHandle;
  }
  else
  {
    *v42 = v10;
    *v43 = v11;
    return 0LL;
  }
}
