/*
 * XREFs of ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00F911C
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1C00F4360 (BmlDoesTargetModeObeyConstraint.c)
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00F5210 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 * Callees:
 *     MonitorIsSupportedMode @ 0x1C00F9284 (MonitorIsSupportedMode.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODE::IsSupportedByMonitor(
        DMMVIDPNTARGETMODE *this,
        __int64 a2,
        unsigned __int8 *const a3,
        enum _D3DKMDT_MODE_PRUNING_REASON *const a4)
{
  unsigned __int8 *v5; // r15
  char v6; // bp
  bool v8; // zf
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  int IsSupportedMode; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned __int8 v23; // [rsp+60h] [rbp+8h] BYREF
  enum _D3DKMDT_MODE_PRUNING_REASON v24; // [rsp+70h] [rbp+18h] BYREF

  v5 = a3;
  v6 = a2;
  if ( !a3 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a4 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  *a4 = D3DKMDT_MPR_UNINITIALIZED;
  v8 = *((_QWORD *)this + 5) == 0LL;
  *v5 = 0;
  if ( v8 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v19);
  }
  v9 = *((_QWORD *)this + 5);
  if ( !v9 )
  {
    v20 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v20 + 24) = this;
LABEL_14:
    WdLogEvent5_WdError(v20);
    return 3223192337LL;
  }
  v10 = *(_QWORD *)(v9 + 112);
  if ( !v10 )
  {
    v20 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v20 + 24) = v9;
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 96) + 104LL);
  if ( v11 )
  {
    v24 = D3DKMDT_MPR_UNINITIALIZED;
    v23 = 0;
    LOBYTE(a3) = v6;
    IsSupportedMode = MonitorIsSupportedMode(v11, (char *)this + 72, a3, &v23, &v24);
    v15 = IsSupportedMode;
    if ( IsSupportedMode < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v22[3] = this;
      v22[4] = v11;
      v22[5] = v15;
      WdLogEvent5_WdError(v22);
      return (unsigned int)v15;
    }
    else
    {
      *v5 = v23;
      *a4 = v24;
      return 0LL;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = *(unsigned int *)(v10 + 24);
    *(_QWORD *)(v21 + 32) = this;
    WdLogEvent5_WdWarning(v21);
    return 3223192376LL;
  }
}
