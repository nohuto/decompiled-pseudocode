/*
 * XREFs of xxxMoveEvent @ 0x1C01A1E40
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00EB950 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     EditionMouseMove @ 0x1C01A0190 (EditionMouseMove.c)
 *     xxxOnPTPMouseOperation @ 0x1C01B1678 (xxxOnPTPMouseOperation.c)
 * Callees:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00BBE1C (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C019C500 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 */

__int64 __fastcall xxxMoveEvent(
        INT a1,
        INT a2,
        unsigned int a3,
        unsigned __int64 a4,
        struct tagPOINT a5,
        __int64 a6,
        struct _SUBPIXELS *a7,
        unsigned __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12)
{
  struct _SUBPIXELS *v12; // r11
  __int64 v13; // rsi
  int v15; // r10d
  int v16; // edi
  unsigned int v17; // ebx
  int v19; // [rsp+38h] [rbp-30h]
  __int64 v20; // [rsp+50h] [rbp-18h] BYREF

  v12 = (struct _SUBPIXELS *)&v20;
  v13 = a6;
  a5 = *(struct tagPOINT *)gptCursorAsync;
  v15 = 0;
  if ( a7 )
    v12 = a7;
  if ( a6 )
    v15 = *(_WORD *)(a6 + 2) & 0x80;
  v16 = a10;
  v17 = a8;
  GetMouseCoord(
    a1,
    a2,
    (a3 & 0x20000 | ((a3 & 0x4000 | (a3 >> 2) & 0x2000) >> 1)) >> 12,
    a8,
    a4,
    &a5,
    v12,
    v19,
    a10,
    v15);
  return xxxMoveEventAbsolute(a5.x, a5.y, a4, 0LL, v13, v17, a9, v16, a12, 1);
}
