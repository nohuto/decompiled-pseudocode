/*
 * XREFs of ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00070F8
 * Callers:
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0007098 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ConvertVideoSignalInfo @ 0x1C0238A34 (ConvertVideoSignalInfo.c)
 *     ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C023A7D4 (-_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C000A800 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00C3E6C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(unsigned __int64 a1)
{
  D3DDDI_RATIONAL *v1; // rsi
  unsigned __int64 v2; // rdx
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v3; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v1 = (D3DDDI_RATIONAL *)(a1 + 20);
  v2 = *(unsigned int *)(a1 + 20);
  v3 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a1;
  if ( *(_QWORD *)(a1 + 20) != 0xFFFFFFFEFFFFFFFEuLL )
  {
    if ( !*(_DWORD *)(a1 + 24)
      || (a1 = 5LL * *(unsigned int *)(a1 + 24), v2 < a1)
      || (v11 = 500, v12 = 1, (unsigned __int8)operator><_D3DDDI_RATIONAL>(v1, &v11)) )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v10[3] = v1->Numerator;
      v10[4] = v3->VSyncFreq.Denominator;
      v10[5] = v3;
      v10[6] = v3->ActiveSize.cx;
      v10[7] = v3->ActiveSize.cy;
      v6 = v10;
      goto LABEL_25;
    }
  }
  if ( *(_QWORD *)&v3->HSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    if ( !v3->HSyncFreq.Denominator
      || (a1 = 1000LL * v3->HSyncFreq.Denominator, v3->HSyncFreq.Numerator < a1)
      || (v11 = 1000000, v12 = 1, (unsigned __int8)operator><_D3DDDI_RATIONAL>(&v3->HSyncFreq, &v11)) )
    {
      v5 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v5[3] = v3->HSyncFreq.Numerator;
      v5[4] = v3->HSyncFreq.Denominator;
      v5[5] = v3->ActiveSize.cx;
      v5[6] = v3->ActiveSize.cy;
      v5[7] = DmmMapVSyncFromRationalToInteger(
                v1,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29),
                0LL);
      goto LABEL_20;
    }
  }
  if ( v3->PixelRate - 1000000 > 0x253FCA1C0LL )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL);
    v5[3] = v3->PixelRate;
    v5[4] = v3->ActiveSize.cx;
    v5[5] = v3->ActiveSize.cy;
    v5[6] = DmmMapVSyncFromRationalToInteger(
              v1,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29),
              0LL);
LABEL_20:
    v6 = v5;
LABEL_25:
    WdLogEvent5_WdError(v6);
    return 3223192330LL;
  }
  if ( v3->ActiveSize.cx < 0x64 || v3->ActiveSize.cy < 0x64 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL);
    v9[3] = v3->ActiveSize.cx;
    v9[4] = v3->ActiveSize.cy;
    v9[5] = v3;
    WdLogEvent5_WdError(v9);
    return 3223192331LL;
  }
  else if ( v3->TotalSize.cx < 0x64 || v3->TotalSize.cy < 0x64 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL);
    v8[3] = v3->TotalSize.cx;
    v8[4] = v3->TotalSize.cy;
    v8[5] = v3;
    WdLogEvent5_WdError(v8);
    return 3223192332LL;
  }
  else if ( (unsigned int)(((int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29) - 1) > 2 )
  {
    v7 = WdLogNewEntry5_WdError(9999000000LL);
    *(_QWORD *)(v7 + 24) = (int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29;
    *(_QWORD *)(v7 + 32) = v3;
    WdLogEvent5_WdError(v7);
    return 3223192402LL;
  }
  else
  {
    return 0LL;
  }
}
