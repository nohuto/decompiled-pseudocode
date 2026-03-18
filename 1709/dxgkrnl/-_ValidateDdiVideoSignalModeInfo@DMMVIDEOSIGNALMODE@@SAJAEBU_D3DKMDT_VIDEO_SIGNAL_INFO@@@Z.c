/*
 * XREFs of ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000B6A4
 * Callers:
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000B644 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ConvertVideoSignalInfo @ 0x1C01084C4 (ConvertVideoSignalInfo.c)
 *     ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C010B388 (-_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C000E5F4 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00D5698 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(unsigned __int64 a1)
{
  D3DDDI_RATIONAL *v1; // rsi
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v2; // rdi
  D3DDDI_RATIONAL *p_HSyncFreq; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v1 = (D3DDDI_RATIONAL *)(a1 + 20);
  v2 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a1;
  if ( *(_DWORD *)(a1 + 20) != -2 || *(_DWORD *)(a1 + 24) != -2 )
  {
    if ( !*(_DWORD *)(a1 + 24)
      || (a1 = 5LL * *(unsigned int *)(a1 + 24), v1->Numerator < a1)
      || (v11 = 500, v12 = 1, (unsigned __int8)operator><_D3DDDI_RATIONAL>(v1, &v11)) )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v10[3] = v1->Numerator;
      v10[4] = v2->VSyncFreq.Denominator;
      v10[5] = v2;
      v10[6] = v2->ActiveSize.cx;
      v10[7] = v2->ActiveSize.cy;
      v6 = v10;
      goto LABEL_27;
    }
  }
  p_HSyncFreq = &v2->HSyncFreq;
  if ( v2->HSyncFreq.Numerator != -2 || v2->HSyncFreq.Denominator != -2 )
  {
    if ( !v2->HSyncFreq.Denominator
      || (a1 = 1000LL * v2->HSyncFreq.Denominator, p_HSyncFreq->Numerator < a1)
      || (v11 = 1000000, v12 = 1, (unsigned __int8)operator><_D3DDDI_RATIONAL>(&v2->HSyncFreq, &v11)) )
    {
      v5 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v5[3] = p_HSyncFreq->Numerator;
      v5[4] = v2->HSyncFreq.Denominator;
      v5[5] = v2->ActiveSize.cx;
      v5[6] = v2->ActiveSize.cy;
      v5[7] = DmmMapVSyncFromRationalToInteger(
                v1,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v2->AdditionalSignalInfo << 29) >> 29),
                0LL);
      goto LABEL_22;
    }
  }
  if ( v2->PixelRate - 1000000 > 0x253FCA1C0LL )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL);
    v5[3] = v2->PixelRate;
    v5[4] = v2->ActiveSize.cx;
    v5[5] = v2->ActiveSize.cy;
    v5[6] = DmmMapVSyncFromRationalToInteger(
              v1,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v2->AdditionalSignalInfo << 29) >> 29),
              0LL);
LABEL_22:
    v6 = v5;
LABEL_27:
    WdLogEvent5_WdError(v6);
    return 3223192330LL;
  }
  if ( v2->ActiveSize.cx < 0x64 || v2->ActiveSize.cy < 0x64 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL);
    v9[3] = v2->ActiveSize.cx;
    v9[4] = v2->ActiveSize.cy;
    v9[5] = v2;
    WdLogEvent5_WdError(v9);
    return 3223192331LL;
  }
  else if ( v2->TotalSize.cx < 0x64 || v2->TotalSize.cy < 0x64 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL);
    v8[3] = v2->TotalSize.cx;
    v8[4] = v2->TotalSize.cy;
    v8[5] = v2;
    WdLogEvent5_WdError(v8);
    return 3223192332LL;
  }
  else if ( (unsigned int)(((int)(*(_DWORD *)&v2->AdditionalSignalInfo << 29) >> 29) - 1) > 2 )
  {
    v7 = WdLogNewEntry5_WdError(9999000000LL);
    *(_QWORD *)(v7 + 24) = (int)(*(_DWORD *)&v2->AdditionalSignalInfo << 29) >> 29;
    *(_QWORD *)(v7 + 32) = v2;
    WdLogEvent5_WdError(v7);
    return 3223192402LL;
  }
  else
  {
    return 0LL;
  }
}
