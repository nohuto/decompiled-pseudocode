/*
 * XREFs of ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00917C4
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0026E90 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     IntersectRect @ 0x1C00285C8 (IntersectRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 */

struct tagMONITOR *__fastcall AdjustDisplayMonitor(struct tagMONITOR *a1, struct tagRECT *a2)
{
  __int64 i; // rbx
  int *v6; // r8
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF

  for ( i = *((_QWORD *)gpDispInfo + 12); i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) == 0 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 52LL) & 1) != 0 )
      {
        v6 = (int *)(*(_QWORD *)(i + 40) + 44LL);
      }
      else
      {
        v6 = (int *)((W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                  && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                + 52LL) & 1) != 0
                   ? *(_QWORD *)(i + 40) + 60LL
                   : *(_QWORD *)(i + 40) + 28LL);
      }
      if ( (unsigned int)IntersectRect(v7, &a2->left, v6) )
        return (struct tagMONITOR *)i;
    }
  }
  return a1;
}
