/*
 * XREFs of ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C020DF64
 * Callers:
 *     xxxEndScroll @ 0x1C020F160 (xxxEndScroll.c)
 * Callees:
 *     DrawThumb2 @ 0x1C00D66F0 (DrawThumb2.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C00D686C (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     SBCtlSetup @ 0x1C020EED0 (SBCtlSetup.c)
 */

void __fastcall DrawCtlThumb(struct tagSBWND *a1)
{
  HDC DCEx; // rsi
  HBRUSH ColorObjects; // rbx
  __int64 v4; // rdi

  DCEx = (HDC)_GetDCEx(*(_QWORD *)a1, 0LL, 65537LL);
  SBCtlSetup(a1);
  ColorObjects = (HBRUSH)xxxGetColorObjects(*(struct tagWND **)a1, (__int64)DCEx);
  v4 = GreSelectBrush(DCEx, ColorObjects);
  DrawThumb2(*(_QWORD *)a1, (_DWORD *)a1 + 4, DCEx, ColorObjects, *((_DWORD *)a1 + 2), *((_DWORD *)a1 + 3));
  GreSelectBrush(DCEx, v4);
  _ReleaseDC(DCEx);
}
