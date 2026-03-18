/*
 * XREFs of ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C013BC90
 * Callers:
 *     xxxTooltipWndProc @ 0x1C0113E40 (xxxTooltipWndProc.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C001D2B0 (GreExtTextOutWInternal.c)
 *     GetDPIMETRICSForDpi @ 0x1C007DADC (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C007EA48 (GreSetBkMode.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxClientExtTextOutW @ 0x1C013BDEC (xxxClientExtTextOutW.c)
 *     CALL_LPK @ 0x1C013C798 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall xxxTooltipRender(WCHAR **a1, HDC a2)
{
  __int64 DPIMETRICSForDpi; // rax
  WCHAR *v5; // r8
  int v6; // edx
  int v7; // r9d
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi
  __int64 ThreadWin32Thread; // rax
  int v14; // eax
  WCHAR *SourceString; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  RECT v18; // [rsp+50h] [rbp-38h] BYREF

  if ( a1[6] )
  {
    DPIMETRICSForDpi = GetDPIMETRICSForDpi((*a1)[186]);
    GreSelectFont((__int64)a2, *(_QWORD *)(DPIMETRICSForDpi + 56));
    GreSetTextColor(a2, *(_DWORD *)(gpsi + 4644LL));
    v5 = *a1;
    v6 = -*((_DWORD *)*a1 + 36);
    v7 = -*((_DWORD *)*a1 + 37);
    v8 = *(_DWORD *)(gpsi + 4648LL);
    v18.left = 0;
    v18.right = v6 + *((_DWORD *)v5 + 38);
    v18.top = v7 + *((_DWORD *)v5 + 37);
    v18.bottom = v7 + *((_DWORD *)v5 + 39);
    if ( v8 == (unsigned int)GreGetNearestColor(a2, v8) )
    {
      GreSetBkColor(a2, v8);
      v12 = 2;
    }
    else
    {
      FillRect(a2, &v18, *(HBRUSH *)(gpsi + 4872LL));
      GreSetBkMode(a2, 1);
      v12 = 4;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
    v14 = CALL_LPK(ThreadWin32Thread);
    SourceString = a1[6];
    if ( v14 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( SourceString[v16] );
      xxxClientExtTextOutW((int)a2, 2, 1, v12, (__int64)&v18, SourceString, v16);
    }
    else
    {
      v17 = -1LL;
      do
        ++v17;
      while ( SourceString[v17] );
      GreExtTextOutWInternal(a2, 2, 1, v12, &v18, SourceString, v17, 0LL, 0LL, 0);
    }
  }
}
