/*
 * XREFs of ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000CE28
 * Callers:
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000CDC8 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C010850C (-_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ConvertVideoSignalInfo @ 0x1C0109E2C (ConvertVideoSignalInfo.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C0002234 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00F5430 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(unsigned __int64 a1, __int64 a2)
{
  D3DDDI_RATIONAL *v2; // rsi
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v3; // rdi
  D3DDDI_RATIONAL *p_HSyncFreq; // rbp
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  v2 = (D3DDDI_RATIONAL *)(a1 + 20);
  v3 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a1;
  if ( *(_DWORD *)(a1 + 20) != -2 || *(_DWORD *)(a1 + 24) != -2 )
  {
    if ( !*(_DWORD *)(a1 + 24)
      || (a1 = 5LL * *(unsigned int *)(a1 + 24), v2->Numerator < a1)
      || (v12 = 500, v13 = 1, operator><_D3DDDI_RATIONAL>((unsigned int *)v2, &v12)) )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
      v11[3] = v2->Numerator;
      v11[4] = v3->VSyncFreq.Denominator;
      v11[5] = v3;
      v11[6] = v3->ActiveSize.cx;
      v11[7] = v3->ActiveSize.cy;
      v7 = v11;
      goto LABEL_27;
    }
  }
  p_HSyncFreq = &v3->HSyncFreq;
  if ( v3->HSyncFreq.Numerator != -2 || v3->HSyncFreq.Denominator != -2 )
  {
    if ( !v3->HSyncFreq.Denominator
      || (a1 = 1000LL * v3->HSyncFreq.Denominator, p_HSyncFreq->Numerator < a1)
      || (v12 = 1000000, v13 = 1, operator><_D3DDDI_RATIONAL>((unsigned int *)&v3->HSyncFreq, &v12)) )
    {
      v6 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
      v6[3] = p_HSyncFreq->Numerator;
      v6[4] = v3->HSyncFreq.Denominator;
      v6[5] = v3->ActiveSize.cx;
      v6[6] = v3->ActiveSize.cy;
      v6[7] = DmmMapVSyncFromRationalToInteger(
                v2,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29),
                0LL);
      goto LABEL_22;
    }
  }
  if ( v3->PixelRate - 1000000 > 0x253FCA1C0LL )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL, a2);
    v6[3] = v3->PixelRate;
    v6[4] = v3->ActiveSize.cx;
    v6[5] = v3->ActiveSize.cy;
    v6[6] = DmmMapVSyncFromRationalToInteger(
              v2,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29),
              0LL);
LABEL_22:
    v7 = v6;
LABEL_27:
    WdLogEvent5_WdError(v7);
    return 3223192330LL;
  }
  if ( v3->ActiveSize.cx < 0x64 || v3->ActiveSize.cy < 0x64 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL, a2);
    v10[3] = v3->ActiveSize.cx;
    v10[4] = v3->ActiveSize.cy;
    v10[5] = v3;
    WdLogEvent5_WdError(v10);
    return 3223192331LL;
  }
  else if ( v3->TotalSize.cx < 0x64 || v3->TotalSize.cy < 0x64 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL, a2);
    v9[3] = v3->TotalSize.cx;
    v9[4] = v3->TotalSize.cy;
    v9[5] = v3;
    WdLogEvent5_WdError(v9);
    return 3223192332LL;
  }
  else if ( (unsigned int)(((int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29) - 1) > 2 )
  {
    v8 = WdLogNewEntry5_WdError(9999000000LL, a2);
    *(_QWORD *)(v8 + 24) = (int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29;
    *(_QWORD *)(v8 + 32) = v3;
    WdLogEvent5_WdError(v8);
    return 3223192402LL;
  }
  else
  {
    return 0LL;
  }
}
