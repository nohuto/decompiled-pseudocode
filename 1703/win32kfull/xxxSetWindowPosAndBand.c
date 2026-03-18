/*
 * XREFs of xxxSetWindowPosAndBand @ 0x1C0063590
 * Callers:
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxResetTooltip @ 0x1C00AFC70 (xxxResetTooltip.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C020D2EC (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     IsWindowGhosted @ 0x1C005CE98 (IsWindowGhosted.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     InternalBeginDeferWindowPos @ 0x1C006323C (InternalBeginDeferWindowPos.c)
 *     _DeferWindowPos @ 0x1C00632C8 (_DeferWindowPos.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 *     xxxHandleHealthyWindow @ 0x1C013208C (xxxHandleHealthyWindow.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A3538 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 */

__int64 __fastcall xxxSetWindowPosAndBand(
        struct tagWND *a1,
        __int64 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // edi
  int v9; // esi
  int v10; // ebp
  int v11; // r14d
  unsigned int v14; // r8d
  int v15; // r15d
  int v16; // r12d
  void *v17; // rax
  struct tagSMWP *v18; // rax
  __int64 v20; // rcx
  int v21; // [rsp+A0h] [rbp+18h] BYREF
  int v22; // [rsp+A8h] [rbp+20h] BYREF

  v22 = a4;
  v21 = a3;
  v8 = a7;
  v9 = 0;
  v10 = a4;
  v11 = a3;
  if ( (a7 & 0x80u) != 0 && *((_QWORD *)a1 + 2) == gptiCurrent && (unsigned int)IsWindowGhosted((__int64)a1) )
    xxxHandleHealthyWindow(a1);
  v14 = 1;
  if ( ((unsigned __int8)~*((_BYTE *)a1 + 61) & ((v8 & 0xC0) != 0)) != 0 )
  {
    v8 |= 3u;
    if ( (v8 & 0x40) != 0 && (*((_BYTE *)a1 + 71) & 0x10) != 0 )
      v9 = 1;
  }
  v15 = a6;
  v16 = a5;
  if ( (*((_BYTE *)a1 + 61) & 4) == 0
    && *(_DWORD *)*gpDispInfo > 1u
    && (v8 & 2) == 0
    && (*((_BYTE *)a1 + 71) & 0x50) == 0
    && (*((_BYTE *)a1 + 70) & 0xC0) == 0xC0 )
  {
    v20 = *((_QWORD *)a1 + 15);
    if ( v20 )
    {
      if ( (*(_BYTE *)(v20 + 71) & 0x10) != 0 && !IsRectEmptyInl((const struct tagRECT *)(v20 + 128)) )
      {
        FixBogusSWP(a1, &v21, &v22, v16, v15, v8);
        v10 = v22;
        v14 = 1;
        v11 = v21;
      }
    }
  }
  v17 = InternalBeginDeferWindowPos(v14);
  if ( !v17 )
    return 0LL;
  v18 = (struct tagSMWP *)DeferWindowPos((__int64)v17, (__int64)a1, a2, v11, v10, v16, v15, v8, a8);
  if ( !v18 || !(unsigned int)xxxEndDeferWindowPosEx(v18) )
    return 0LL;
  if ( v9 )
    xxxRedrawWindow(a1);
  return 1LL;
}
