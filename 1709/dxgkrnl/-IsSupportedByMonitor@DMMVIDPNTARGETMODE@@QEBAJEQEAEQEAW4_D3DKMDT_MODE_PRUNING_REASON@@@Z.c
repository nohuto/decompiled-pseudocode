/*
 * XREFs of ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00D733C
 * Callers:
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00D54C0 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 *     BmlIsSupportedByMonitorTargetMode @ 0x1C00D9470 (BmlIsSupportedByMonitorTargetMode.c)
 * Callees:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00D7B8C (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODE::IsSupportedByMonitor(
        DMMVIDPNTARGETMODE *this,
        __int64 a2,
        unsigned __int8 *const a3,
        enum _D3DKMDT_MODE_PRUNING_REASON *const a4)
{
  __int64 v4; // r14
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int8 v11; // si
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int8 v18; // bl
  unsigned __int8 *v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  int IsSupportedModeInternal; // eax
  _QWORD *v34; // rax
  int v35; // [rsp+30h] [rbp-18h] BYREF
  _DWORD v36[5]; // [rsp+34h] [rbp-14h] BYREF
  unsigned __int8 v37; // [rsp+90h] [rbp+48h] BYREF
  char v38; // [rsp+98h] [rbp+50h]
  unsigned __int8 *v39; // [rsp+A0h] [rbp+58h]
  int v40; // [rsp+A8h] [rbp+60h] BYREF

  v39 = a3;
  v38 = a2;
  LODWORD(v4) = 0;
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
  *a3 = 0;
  *a4 = D3DKMDT_MPR_UNINITIALIZED;
  if ( !*((_QWORD *)this + 5) )
  {
    v23 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v23);
  }
  v8 = *((_QWORD *)this + 5);
  if ( !v8 )
  {
    v24 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v24 + 24) = this;
LABEL_29:
    WdLogEvent5_WdError(v24);
    return 3223192337LL;
  }
  v9 = *(_QWORD *)(v8 + 112);
  if ( !v9 )
  {
    v24 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v24 + 24) = v8;
    goto LABEL_29;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 104LL);
  if ( !v10 )
  {
    v25 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v25 + 24) = *(unsigned int *)(v9 + 24);
    *(_QWORD *)(v25 + 32) = this;
    WdLogEvent5_WdWarning(v25);
    return 3223192376LL;
  }
  v11 = 0;
  if ( this != (DMMVIDPNTARGETMODE *)-72LL )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v10 + 280), 1u);
    v13 = *(unsigned int *)(v10 + 32);
    v11 = 0;
    v40 = 0;
    v37 = 0;
    if ( ((unsigned int)(v13 - 1) <= 2 || (_DWORD)v13 == 14) && (*(_DWORD *)(v10 + 24) & 8) != 0 )
    {
      v26 = WdLogNewEntry5_WdDmmEvent(v13);
      *(_QWORD *)(v26 + 24) = v10;
      WdLogEvent5_WdDmmEvent(v26);
      LODWORD(v4) = 1;
      v11 = 1;
    }
    else
    {
      v14 = *(unsigned int *)(v10 + 104);
      if ( (unsigned int)(v14 - 1) <= 1 )
      {
        LOBYTE(v12) = v38;
        IsSupportedModeInternal = DXGMONITOR::_IsSupportedModeInternal(v10, (char *)this + 72, v14, v12, &v37, &v40);
        v11 = v37;
        v15 = IsSupportedModeInternal;
        LODWORD(v4) = v40;
        goto LABEL_23;
      }
      if ( (_DWORD)v14 != 3 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v27);
      }
      LOBYTE(v12) = v38;
      v15 = DXGMONITOR::_IsSupportedModeInternal(v10, (char *)this + 72, 2LL, v12, &v37, &v35);
      if ( v15 < 0 )
        goto LABEL_23;
      LOBYTE(v16) = v38;
      v15 = DXGMONITOR::_IsSupportedModeInternal(v10, (char *)this + 72, 1LL, v16, &v40, v36);
      if ( v15 < 0 )
        goto LABEL_23;
      v11 = v37;
      v18 = v40;
      v4 = v36[0];
      if ( v37 != (_BYTE)v40 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v17);
        v28[4] = v11;
        v28[5] = v35;
        v28[6] = v18;
        v28[3] = v10;
        v28[7] = v4;
        WdLogEvent5_WdDmmEvent(v28);
        v30 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v29);
        v30[3] = *((unsigned int *)this + 21);
        v30[4] = *((unsigned int *)this + 22);
        v30[5] = *((unsigned int *)this + 23);
        v30[6] = *((unsigned int *)this + 24);
        v30[7] = (int)(*((_DWORD *)this + 30) << 29) >> 29;
        WdLogEvent5_WdDmmEvent(v30);
        v32 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v31);
        v32[3] = *((unsigned int *)this + 25);
        v32[4] = *((unsigned int *)this + 26);
        v32[5] = *((_QWORD *)this + 14);
        WdLogEvent5_WdDmmEvent(v32);
      }
      if ( !v18 && !v11 || (v11 = 1, !v18) )
        LODWORD(v4) = v35;
    }
    v15 = 0;
LABEL_23:
    ExReleaseResourceLite((PERESOURCE)(v10 + 280));
    KeLeaveCriticalRegion();
    goto LABEL_24;
  }
  v15 = -1073741811;
LABEL_24:
  if ( v15 < 0 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v34[5] = v15;
    v34[3] = this;
    v34[4] = v10;
    WdLogEvent5_WdError(v34);
    return (unsigned int)v15;
  }
  else
  {
    v19 = v39;
    *a4 = v4;
    *v19 = v11;
    return 0LL;
  }
}
