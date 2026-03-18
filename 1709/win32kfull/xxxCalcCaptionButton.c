/*
 * XREFs of xxxCalcCaptionButton @ 0x1C0212320
 * Callers:
 *     xxxGetTitleBarInfoEx @ 0x1C004A0DC (xxxGetTitleBarInfoEx.c)
 *     xxxTrackCaptionButton @ 0x1C02125C4 (xxxTrackCaptionButton.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     xxxMNCanClose @ 0x1C007BA94 (xxxMNCanClose.c)
 *     GetWindowBordersForDpi @ 0x1C007C2E0 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 */

__int64 __fastcall xxxCalcCaptionButton(__int64 a1, int a2, __int16 *a3, int *a4, _WORD *a5, int a6)
{
  bool v7; // zf
  unsigned int WindowDpiLastNotify; // esi
  __int64 v12; // rax
  int v13; // r8d
  int v14; // r15d
  int v15; // r13d
  int DpiDependentMetric; // eax
  __int64 v17; // rcx
  int v18; // r12d
  int v19; // esi
  __int16 v20; // ax
  _WORD *v21; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // r9d
  int v25; // edx

  v7 = (*(_DWORD *)(a1 + 304) & 0x10000000) == 0;
  *a3 = 0;
  if ( v7 )
  {
    if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
      && (v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v12 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
    }
  }
  else
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
  }
  if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 )
    v13 = -3;
  else
    v13 = -(int)GetWindowBordersForDpi(
                  *(_DWORD *)(a1 + 68),
                  *(_DWORD *)(a1 + 64),
                  (__int64)a3,
                  (__int64)a4,
                  WindowDpiLastNotify);
  *a4 = *(_DWORD *)(a1 + 128) - v13;
  a4[2] = v13 + *(_DWORD *)(a1 + 136);
  a4[1] = *(_DWORD *)(a1 + 132) - v13;
  a4[3] = v13 + *(_DWORD *)(a1 + 140);
  v14 = -*(_DWORD *)(a1 + 128);
  v15 = -*(_DWORD *)(a1 + 132);
  if ( *(char *)(a1 + 64) >= 0 )
  {
    DpiDependentMetric = GetDpiDependentMetric(12LL, WindowDpiLastNotify);
    v17 = 13LL;
  }
  else
  {
    DpiDependentMetric = GetDpiDependentMetric(23LL, WindowDpiLastNotify);
    v17 = 24LL;
  }
  v18 = DpiDependentMetric;
  v19 = GetDpiDependentMetric(v17, WindowDpiLastNotify);
  switch ( a2 )
  {
    case 5:
      if ( (unsigned int)xxxMNCanClose(a1) || a6 )
      {
        *a5 = (*(char *)(a1 + 64) >> 7) & 0x29;
        v20 = -4000;
LABEL_29:
        *a3 = v20;
      }
LABEL_32:
      if ( !*a3 )
        return (unsigned __int16)v14 | ((unsigned __int16)v15 << 16);
      goto LABEL_33;
    case 2:
      if ( (*(_BYTE *)(a1 + 70) & 2) == 0 && !a6 )
        goto LABEL_32;
      LOWORD(v14) = v14 + 2;
      a4[2] += -2 * v18;
      v21 = a5;
      if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 )
      {
        *a5 = 4;
        v20 = -4064;
        goto LABEL_29;
      }
      break;
    case 3:
      if ( (*(_BYTE *)(a1 + 70) & 1) == 0 && !a6 )
        goto LABEL_32;
      a4[2] -= v18;
      v21 = a5;
      if ( (*(_BYTE *)(a1 + 71) & 1) == 0 )
      {
        *a5 = 14;
        v20 = -4048;
        goto LABEL_29;
      }
      break;
    default:
      if ( (*(_BYTE *)(a1 + 65) & 4) != 0 )
      {
        a4[2] -= v18;
        *a5 = 11;
        *a3 = -3712;
      }
      goto LABEL_32;
  }
  *v21 = 8;
  *a3 = -3808;
LABEL_33:
  v22 = a4[1];
  v23 = a4[2];
  LOWORD(v15) = v22 + v15 + 2;
  a4[3] = v22 + v19;
  ++a4[3];
  a4[2] = v23 + 1;
  LOWORD(v14) = v23 - v18 + v14;
  v24 = v23 - v18 - 1;
  *a4 = v24;
  a4[1] = v22 - 1;
  if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
  {
    v25 = *(_DWORD *)(a1 + 128) + *(_DWORD *)(a1 + 136) - v24;
    a4[2] = v25;
    *a4 = v25 - (1 - (-v18 - 1));
  }
  return (unsigned __int16)v14 | ((unsigned __int16)v15 << 16);
}
