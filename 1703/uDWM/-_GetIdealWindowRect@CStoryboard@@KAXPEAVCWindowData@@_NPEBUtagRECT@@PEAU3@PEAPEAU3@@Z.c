/*
 * XREFs of ?_GetIdealWindowRect@CStoryboard@@KAXPEAVCWindowData@@_NPEBUtagRECT@@PEAU3@PEAPEAU3@@Z @ 0x180001D04
 * Callers:
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x180001C8C (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CStoryboard::_GetIdealWindowRect(
        struct CWindowData *a1,
        char a2,
        const struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT **a5)
{
  int v8; // r11d
  unsigned __int64 v9; // r10
  struct tagRECT *v10; // rbp
  unsigned __int64 v11; // r14
  struct tagRECT v12; // xmm0

  v8 = a2 != 0 ? 0x1000000 : 0x800000;
  v9 = -(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFE0uLL;
  v10 = (struct tagRECT *)((char *)a1 + v9 + 652);
  v11 = v9 + 636;
  if ( (v8 & *((_DWORD *)a1 + 150)) != v8 || IsRectEmpty((const RECT *)((char *)a1 + v9 + 652)) )
  {
    if ( a3 )
      v12 = *a3;
    else
      v12 = (struct tagRECT)*((_OWORD *)a1 + 3);
    *a4 = v12;
    if ( a5 )
      *a5 = 0LL;
  }
  else
  {
    *a4 = *v10;
    if ( a5 )
      *a5 = (struct tagRECT *)((char *)a1 + v11);
  }
}
