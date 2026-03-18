/*
 * XREFs of xxxSpeedHitTest @ 0x1C005F884
 * Callers:
 *     DetermineMouseInputTarget @ 0x1C005F7F4 (DetermineMouseInputTarget.c)
 *     ?RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01ABC1C (-RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z.c)
 *     EditionSpeedHitTest @ 0x1C01D1770 (EditionSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D214C (xxxPointerSpeedHitTest.c)
 * Callees:
 *     EditionTryDwmHitTest @ 0x1C005F960 (EditionTryDwmHitTest.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C005F9CC (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0062A4C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     xxxDCompSpeedHitTest @ 0x1C00B6DB8 (xxxDCompSpeedHitTest.c)
 */

struct tagWND *__fastcall xxxSpeedHitTest(
        int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        struct tagPOINT *a5,
        struct _SUBPIXELS *a6,
        __int64 a7,
        __int64 a8)
{
  struct tagWND *v11; // rax

  if ( a1 || (unsigned int)EditionTryDwmHitTest(0LL) )
    return (struct tagWND *)xxxDCompSpeedHitTest(a2, a1, a4, 0LL, a7, a8);
  v11 = TopLevelSpeedHitTest(grpdeskRitInput, a5, a6);
  if ( v11 )
    return ClassicChildTreeSpeedHitTest(v11, *a5);
  else
    return *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
}
