/*
 * XREFs of ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A3538
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0063590 (xxxSetWindowPosAndBand.c)
 * Callees:
 *     _MonitorFromWindow @ 0x1C00208D4 (_MonitorFromWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01A37A4 (-IsRectBogus@@YAHHHHH@Z.c)
 */

void __fastcall FixBogusSWP(struct tagWND *a1, int *a2, int *a3, int a4, int a5, char a6)
{
  __int64 v10; // rbx
  int v11; // edi
  int *v12; // rdx
  int *v13; // r8
  int v14; // edx
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+24h] [rbp-24h]
  int v20; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+2Ch] [rbp-1Ch]

  v10 = MonitorFromWindow(*((_QWORD *)a1 + 15), 2u);
  if ( v10 != *(_QWORD *)(GetDispInfo() + 88) )
  {
    if ( (a6 & 1) != 0 )
    {
      a4 = *((_DWORD *)a1 + 34) - *((_DWORD *)a1 + 32);
      v11 = *((_DWORD *)a1 + 35) - *((_DWORD *)a1 + 33);
    }
    else
    {
      v11 = a5;
    }
    if ( (unsigned int)IsRectBogus(*a2, *a3, a4, v11) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 52LL) & 1) != 0 )
      {
        v12 = (int *)(*(_QWORD *)(v10 + 40) + 44LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                           + 52LL) & 1) != 0 )
      {
        v12 = (int *)(*(_QWORD *)(v10 + 40) + 60LL);
      }
      else
      {
        v12 = (int *)(*(_QWORD *)(v10 + 40) + 28LL);
      }
      IntersectRect(&v18, v12, (int *)(*((_QWORD *)a1 + 15) + 128LL));
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 52LL) & 1) != 0 )
      {
        v13 = (int *)(*(_QWORD *)(v10 + 40) + 92LL);
      }
      else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
             && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                           + 52LL) & 1) != 0 )
      {
        v13 = (int *)(*(_QWORD *)(v10 + 40) + 108LL);
      }
      else
      {
        v13 = (int *)(*(_QWORD *)(v10 + 40) + 76LL);
      }
      *a2 = v18 + (v20 - v18 - a4) / 2;
      *a3 = v19 + (v21 - v19 - v11) / 2;
      v14 = v13[2];
      if ( a4 + *a2 > v14 )
        *a2 = v14 - a4;
      v15 = v13[3];
      if ( v11 + *a3 > v15 )
        *a3 = v15 - v11;
      v16 = *a2;
      if ( *a2 < *v13 )
        v16 = *v13;
      *a2 = v16;
      v17 = *a3;
      if ( *a3 < v13[1] )
        v17 = v13[1];
      *a3 = v17;
    }
  }
}
