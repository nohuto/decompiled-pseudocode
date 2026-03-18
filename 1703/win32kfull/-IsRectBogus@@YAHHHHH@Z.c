/*
 * XREFs of ?IsRectBogus@@YAHHHHH@Z @ 0x1C01A37A4
 * Callers:
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A3538 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?TestRectBogus@@YAHPEAUtagRECT@@HHHH@Z @ 0x1C01A3C90 (-TestRectBogus@@YAHPEAUtagRECT@@HHHH@Z.c)
 */

__int64 __fastcall IsRectBogus(int a1, int a2, int a3, int a4)
{
  __int64 v8; // rdi
  unsigned int v9; // ebx
  struct tagRECT *v10; // rcx
  struct tagRECT *v11; // rcx

  v8 = *(_QWORD *)(GetDispInfo() + 88);
  v9 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v10 = (struct tagRECT *)(*(_QWORD *)(v8 + 40) + 92LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                       + 52LL) & 1) != 0 )
  {
    v10 = (struct tagRECT *)(*(_QWORD *)(v8 + 40) + 108LL);
  }
  else
  {
    v10 = (struct tagRECT *)(*(_QWORD *)(v8 + 40) + 76LL);
  }
  if ( (unsigned int)TestRectBogus(v10, a1, a2, a3, a4) )
    return 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL) + 52LL) & 1) != 0 )
  {
    v11 = (struct tagRECT *)(*(_QWORD *)(v8 + 40) + 44LL);
  }
  else
  {
    v11 = (struct tagRECT *)((W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                  + 408)
                                                      + 8LL)
                                        + 52LL) & 1) != 0
                           ? *(_QWORD *)(v8 + 40) + 60LL
                           : *(_QWORD *)(v8 + 40) + 28LL);
  }
  if ( (unsigned int)TestRectBogus(v11, a1, a2, a3, a4) )
    return 1;
  return v9;
}
