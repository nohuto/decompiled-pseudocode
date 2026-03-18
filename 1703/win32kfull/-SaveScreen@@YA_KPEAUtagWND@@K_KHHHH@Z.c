/*
 * XREFs of ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C020C2CC
 * Callers:
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C020C454 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreSaveScreenBits @ 0x1C027D6D8 (GreSaveScreenBits.c)
 */

__int64 __fastcall SaveScreen(struct tagWND *a1, unsigned int a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  int v9; // r8d
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  int *v13; // r8
  int v15[4]; // [rsp+20h] [rbp-38h] BYREF

  v9 = *((_WORD *)a1 + 41) & 0x3FFF;
  if ( v9 == 669 )
    v10 = 0;
  else
    v10 = *((_DWORD *)a1 + 32);
  v15[0] = a4 + v10;
  v15[2] = a4 + a6;
  if ( v9 == 669 )
    v11 = 0;
  else
    v11 = *((_DWORD *)a1 + 33);
  v15[3] = a7 + a5;
  v15[1] = a5 + v11;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v12 = gpDispInfo;
    v13 = (int *)(*gpDispInfo + 40LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v12 = gpDispInfo;
    v13 = (int *)(*gpDispInfo + 56LL);
  }
  else
  {
    v12 = gpDispInfo;
    v13 = (int *)(*gpDispInfo + 24LL);
  }
  if ( (unsigned int)IntersectRect(v15, v15, v13) )
    return GreSaveScreenBits(*(_QWORD *)(*(_QWORD *)v12 + 32LL), a2, a3, v15);
  else
    return 0LL;
}
