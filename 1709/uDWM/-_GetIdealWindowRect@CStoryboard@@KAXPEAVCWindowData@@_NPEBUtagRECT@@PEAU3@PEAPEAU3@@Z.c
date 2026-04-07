/*
 * XREFs of ?_GetIdealWindowRect@CStoryboard@@KAXPEAVCWindowData@@_NPEBUtagRECT@@PEAU3@PEAPEAU3@@Z @ 0x180001AF0
 * Callers:
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180001A78 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::_GetIdealWindowRect(
        struct CWindowData *a1,
        unsigned __int8 a2,
        const struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT **a5)
{
  __int64 v7; // r14
  struct tagRECT v9; // xmm0

  v7 = 32 * (a2 ^ 1LL);
  if ( (((a2 + 1) << 23) & *((_DWORD *)a1 + 150)) != (a2 + 1) << 23
    || IsRectEmpty((const RECT *)((char *)a1 + v7 + 620)) )
  {
    if ( a3 )
      v9 = *a3;
    else
      v9 = (struct tagRECT)*((_OWORD *)a1 + 3);
    *a4 = v9;
    if ( a5 )
      *a5 = 0LL;
  }
  else
  {
    *a4 = *(struct tagRECT *)((char *)a1 + v7 + 620);
    if ( a5 )
      *a5 = (struct tagRECT *)((char *)a1 + v7 + 604);
  }
}
