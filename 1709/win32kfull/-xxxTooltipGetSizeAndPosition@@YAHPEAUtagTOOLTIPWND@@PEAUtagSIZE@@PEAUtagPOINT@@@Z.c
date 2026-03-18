/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C013B98C
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C013B8C0 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     _MonitorFromPoint @ 0x1C0055A30 (_MonitorFromPoint.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C011431C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C013BB18 (-GetCursorHeight@@YAHXZ.c)
 *     xxxClientGetTextExtentPointW @ 0x1C013C0B8 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C013C798 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall xxxTooltipGetSizeAndPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  __int64 v6; // rcx
  struct tagMONITOR *v7; // rax
  __int64 v8; // rbp
  HDC TooltipDC; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __m128i *MonitorRect; // rax
  LONG cy; // r8d
  LONG y; // edx
  unsigned __int64 v24; // xmm0_8
  unsigned __int16 *v26; // rdx
  __int64 v27; // r8
  __m128i v28; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v29[3]; // [rsp+40h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(gpsi + 4944LL);
  *a3 = (struct tagPOINT)v6;
  v7 = (struct tagMONITOR *)MonitorFromPoint(v6, 0, 0);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  TooltipDC = GetTooltipDC(a1, v7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16);
    v29[0] = *(_QWORD *)(v17 + 392);
    *(_QWORD *)(v17 + 392) = v29;
    v29[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)(*((_QWORD *)a1 + 6) + 2 * v18) );
    xxxClientGetTextExtentPointW(TooltipDC);
    if ( ThreadUnlock1(v20, v19) )
      goto LABEL_6;
    _ReleaseDC(TooltipDC);
    return 0LL;
  }
  v26 = (unsigned __int16 *)*((_QWORD *)a1 + 6);
  v27 = -1LL;
  do
    ++v27;
  while ( v26[v27] );
  GreGetTextExtentW(TooltipDC, v26, v27, a2, 1);
LABEL_6:
  _ReleaseDC(TooltipDC);
  a2->cx += 6;
  a2->cy += 4;
  MonitorRect = (__m128i *)GetMonitorRect(&v28, v8);
  cy = a2->cy;
  y = a3->y;
  v28 = *MonitorRect;
  v24 = _mm_srli_si128(v28, 8).m128i_u64[0];
  if ( y + cy >= SHIDWORD(v24) )
  {
    *((_DWORD *)a1 + 8) &= ~1u;
    a3->y = y - cy;
  }
  else
  {
    a3->y += GetCursorHeight();
    *((_DWORD *)a1 + 8) |= 1u;
  }
  if ( a2->cx + a3->x >= (int)v24 )
    a3->x = v24 - a2->cx;
  if ( a3->x < v28.m128i_i32[0] )
    a3->x = v28.m128i_i32[0];
  return 1LL;
}
