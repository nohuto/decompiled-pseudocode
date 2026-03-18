/*
 * XREFs of UserGetCurrentDesktopId @ 0x1C00DB8C4
 * Callers:
 *     hdcOpenDCW @ 0x1C005A170 (hdcOpenDCW.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall UserGetCurrentDesktopId(_QWORD *a1)
{
  unsigned int v2; // ebx

  *a1 = -1LL;
  v2 = 0;
  if ( *(struct tagDESKTOP **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) == grpdeskRitInput )
  {
    v2 = 1;
    *a1 = ***(_QWORD ***)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 8LL);
  }
  return v2;
}
