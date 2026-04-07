/*
 * XREFs of ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180018A20
 * Callers:
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180016D90 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180017060 (-ValidateVisual@CButton@@UEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x1800178A0 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180018770 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::DoCanvasLayout(
        const struct tagSIZE *a1,
        const struct _MARGINS *a2,
        const struct tagSIZE *a3,
        struct tagPOINT *a4,
        struct tagSIZE *a5)
{
  int cxLeftWidth; // r10d
  int cxRightWidth; // edi
  int cyBottomHeight; // ebx
  int cyTopHeight; // r11d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  LONG cx; // eax
  LONG cy; // eax
  bool result; // al
  LONG v14; // eax
  struct tagPOINT v15; // [rsp+0h] [rbp-18h]
  struct tagSIZE v16; // [rsp+28h] [rbp+10h]

  cxLeftWidth = a2->cxLeftWidth;
  cxRightWidth = a2->cxRightWidth;
  cyBottomHeight = a2->cyBottomHeight;
  cyTopHeight = a2->cyTopHeight;
  if ( a2->cxLeftWidth == 0x7FFFFFFF
    && cxRightWidth == 0x7FFFFFFF
    && cyTopHeight == 0x7FFFFFFF
    && cyBottomHeight == 0x7FFFFFFF )
  {
    return 0;
  }
  v9 = (unsigned __int64)*a3;
  v10 = HIDWORD(*(unsigned __int64 *)a3);
  v16 = (struct tagSIZE)v9;
  v15.y = 0;
  if ( cxRightWidth == 0x7FFFFFFF )
  {
    v14 = 0;
    if ( cxLeftWidth != 0x7FFFFFFF )
      v14 = cxLeftWidth;
  }
  else
  {
    cx = a1->cx;
    if ( cxLeftWidth != 0x7FFFFFFF )
    {
      v15.x = cxLeftWidth;
      v16.cx = cx - cxRightWidth - cxLeftWidth;
      goto LABEL_6;
    }
    v14 = cx - v9 - cxRightWidth;
  }
  v15.x = v14;
LABEL_6:
  if ( cyBottomHeight == 0x7FFFFFFF )
  {
    if ( cyTopHeight == 0x7FFFFFFF )
      goto LABEL_10;
  }
  else
  {
    cy = a1->cy;
    if ( cyTopHeight == 0x7FFFFFFF )
    {
      v15.y = cy - v10 - cyBottomHeight;
      goto LABEL_10;
    }
    v16.cy = cy - cyTopHeight - cyBottomHeight;
  }
  v15.y = cyTopHeight;
LABEL_10:
  if ( v16.cx <= 0 )
    v16.cx = 0;
  if ( v16.cy <= 0 )
    v16.cy = 0;
  result = 1;
  *a5 = v16;
  *a4 = v15;
  return result;
}
