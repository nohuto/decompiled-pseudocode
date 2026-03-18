/*
 * XREFs of GetWindowBordersWithDpiAwareness @ 0x1C0040EEC
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0015690 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C003D980 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCalcClientRect @ 0x1C0040AB0 (xxxCalcClientRect.c)
 *     ?zzzNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00FBBB8 (-zzzNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     GetWindowBordersWithCompatFlags2 @ 0x1C0040F94 (GetWindowBordersWithCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersWithDpiAwareness(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v2; // rcx
  int v3; // eax
  int v4; // r9d
  int WindowDpiLastNotify; // eax
  __int64 v7; // rax

  v1 = (_DWORD *)a1;
  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v2 + 552) > 0x9900u )
    v3 = 0;
  else
    v3 = *(_DWORD *)(v2 + 568);
  v4 = v3 | 0x2000000;
  if ( (v1[92] & 0xF) == 0 )
    v4 = v3;
  if ( (v1[76] & 0x10000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v1);
  }
  else if ( (v1[92] & 0xF) == 0
         && (v7 = *(_QWORD *)(v2 + 408)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v7 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  return GetWindowBordersWithCompatFlags2(v1[17], v1[16], (_DWORD)v1, 0, v4, WindowDpiLastNotify);
}
