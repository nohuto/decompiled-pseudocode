/*
 * XREFs of ?_IsSupportedMode@DXGMONITOR@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00F9AD8
 * Callers:
 *     MonitorIsSupportedMode @ 0x1C00F9284 (MonitorIsSupportedMode.c)
 * Callees:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00F98E8 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 */

__int64 __fastcall DXGMONITOR::_IsSupportedMode(
        DXGMONITOR *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        __int64 a3,
        unsigned __int8 *a4,
        enum _D3DKMDT_MODE_PRUNING_REASON *const a5)
{
  unsigned __int8 *v5; // r14
  char v6; // r15
  enum _D3DKMDT_MODE_PRUNING_REASON *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // bl
  __int64 result; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // r15
  __int64 v20; // r12
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  _BYTE v35[4]; // [rsp+30h] [rbp-38h] BYREF
  int v36; // [rsp+34h] [rbp-34h] BYREF
  _DWORD v37[12]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int8 v38; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  v6 = a3;
  if ( !a4 )
    return 3221225485LL;
  v9 = a5;
  if ( !a5 )
    return 3221225485LL;
  v10 = *((unsigned int *)this + 8);
  *a5 = D3DKMDT_MPR_UNINITIALIZED;
  *a4 = 0;
  if ( ((unsigned int)(v10 - 1) <= 2 || (_DWORD)v10 == 14) && (*((_DWORD *)this + 6) & 8) != 0 )
  {
    v22 = WdLogNewEntry5_WdDmmEvent(v10, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = this;
    WdLogEvent5_WdDmmEvent(v22);
    v12 = 1;
    *v9 = D3DKMDT_MPR_ALLCAPS;
LABEL_16:
    *v5 = v12;
    return 0LL;
  }
  v11 = *((unsigned int *)this + 26);
  v12 = 1;
  if ( (unsigned int)(v11 - 1) <= 1 )
  {
    LOBYTE(a4) = v6;
    return DXGMONITOR::_IsSupportedModeInternal((__int64)this, (__int64)a2, v11, (__int64)a4, v5, v9);
  }
  if ( (_DWORD)v11 != 3 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v10, a2, v11, a4);
    WdLogEvent5_WdAssertion(v23);
  }
  LOBYTE(a4) = v6;
  result = DXGMONITOR::_IsSupportedModeInternal((__int64)this, (__int64)a2, 2LL, (__int64)a4, &v38, v37);
  if ( (int)result >= 0 )
  {
    LOBYTE(v14) = v6;
    result = DXGMONITOR::_IsSupportedModeInternal((__int64)this, (__int64)a2, 1LL, v14, v35, &v36);
    if ( (int)result >= 0 )
    {
      v19 = v35[0];
      v20 = v37[0];
      if ( v38 != v35[0] )
      {
        v24 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16, v15, v17, v18);
        v24[4] = v38;
        v24[6] = v19;
        v24[7] = v36;
        v24[3] = this;
        v24[5] = v20;
        WdLogEvent5_WdDmmEvent(v24);
        v29 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v26, v25, v27, v28);
        v29[3] = a2->ActiveSize.cx;
        v29[4] = a2->ActiveSize.cy;
        v29[5] = a2->VSyncFreq.Numerator;
        v29[6] = a2->VSyncFreq.Denominator;
        v29[7] = (int)(*(_DWORD *)&a2->AdditionalSignalInfo << 29) >> 29;
        WdLogEvent5_WdDmmEvent(v29);
        v34 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v31, v30, v32, v33);
        v34[3] = a2->HSyncFreq.Numerator;
        v34[4] = a2->HSyncFreq.Denominator;
        v34[5] = a2->PixelRate;
        WdLogEvent5_WdDmmEvent(v34);
      }
      v21 = v19 == 0;
      if ( !v19 )
      {
        if ( !v38 )
          v12 = 0;
        v21 = 1;
      }
      if ( !v21 )
        LODWORD(v20) = v36;
      *v9 = v20;
      goto LABEL_16;
    }
  }
  return result;
}
