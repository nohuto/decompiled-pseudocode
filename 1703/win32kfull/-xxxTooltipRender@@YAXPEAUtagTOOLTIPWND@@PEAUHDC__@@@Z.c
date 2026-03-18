/*
 * XREFs of ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C020D6C4
 * Callers:
 *     xxxTooltipWndProc @ 0x1C010DBA0 (xxxTooltipWndProc.c)
 * Callees:
 *     CALL_LPK @ 0x1C000EAB4 (CALL_LPK.c)
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     GreSetBkMode @ 0x1C002B384 (GreSetBkMode.c)
 *     GetDPIMETRICSForDpi @ 0x1C0044264 (GetDPIMETRICSForDpi.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     GreExtTextOutWInternal @ 0x1C0090298 (GreExtTextOutWInternal.c)
 *     xxxClientExtTextOutW @ 0x1C0138734 (xxxClientExtTextOutW.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 */

void __fastcall xxxTooltipRender(WCHAR **a1, HDC a2, __int64 a3, __int64 a4)
{
  __int64 DPIMETRICSForDpi; // rax
  WCHAR *v7; // r8
  int v8; // edx
  int v9; // r9d
  unsigned int v10; // esi
  unsigned int v11; // esi
  __int64 ThreadWin32Thread; // rax
  int v13; // eax
  WCHAR *SourceString; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  struct tagRECT *v17; // [rsp+20h] [rbp-68h]
  RECT v18; // [rsp+50h] [rbp-38h] BYREF

  if ( a1[6] )
  {
    DPIMETRICSForDpi = GetDPIMETRICSForDpi((*a1)[186], (__int64)a2, a3, a4, (__int64)v17);
    GreSelectFontInternal(a2, *(_QWORD *)(DPIMETRICSForDpi + 56), 1);
    GreSetTextColor(a2, *(_DWORD *)(gpsi + 5052LL));
    v7 = *a1;
    v8 = -*((_DWORD *)*a1 + 36);
    v9 = -*((_DWORD *)*a1 + 37);
    v10 = *(_DWORD *)(gpsi + 5056LL);
    v18.left = 0;
    v18.right = v8 + *((_DWORD *)v7 + 38);
    v18.top = v9 + *((_DWORD *)v7 + 37);
    v18.bottom = v9 + *((_DWORD *)v7 + 39);
    if ( v10 == (unsigned int)GreGetNearestColor(a2, v10) )
    {
      GreSetBkColor(a2, v10);
      v11 = 2;
    }
    else
    {
      FillRect(a2, &v18, *(HBRUSH *)(gpsi + 5280LL));
      GreSetBkMode(a2, 1);
      v11 = 4;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v13 = CALL_LPK(ThreadWin32Thread);
    SourceString = a1[6];
    if ( v13 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( SourceString[v15] );
      xxxClientExtTextOutW(a2, 2u, 1u, v11, &v18, SourceString, v15);
    }
    else
    {
      v16 = -1LL;
      do
        ++v16;
      while ( SourceString[v16] );
      GreExtTextOutWInternal(a2, 2, 1, v11, &v18, SourceString, v16, 0LL, 0LL, 0);
    }
  }
}
