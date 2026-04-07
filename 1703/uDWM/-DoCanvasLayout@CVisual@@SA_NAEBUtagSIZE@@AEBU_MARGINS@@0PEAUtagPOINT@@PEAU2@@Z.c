/*
 * XREFs of ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x18001F8D0
 * Callers:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x18001EC70 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x1800200B0 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180020980 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
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
  int cyTopHeight; // eax
  LONG cx; // ecx
  bool result; // al
  int v10; // ecx
  struct tagPOINT v11; // [rsp+0h] [rbp-18h]
  struct tagSIZE v12; // [rsp+28h] [rbp+10h]

  cxLeftWidth = a2->cxLeftWidth;
  cyTopHeight = a2->cyTopHeight;
  if ( *(_QWORD *)&a2->cxLeftWidth == 0x7FFFFFFF7FFFFFFFLL
    && cyTopHeight == 0x7FFFFFFF
    && a2->cyBottomHeight == 0x7FFFFFFF )
  {
    return 0;
  }
  v12 = *a3;
  v11.y = 0;
  if ( a2->cxRightWidth == 0x7FFFFFFF )
  {
    v10 = 0;
    if ( cxLeftWidth != 0x7FFFFFFF )
      v10 = a2->cxLeftWidth;
  }
  else
  {
    cx = a1->cx;
    if ( cxLeftWidth != 0x7FFFFFFF )
    {
      v11.x = a2->cxLeftWidth;
      v12.cx = cx - a2->cxRightWidth - cxLeftWidth;
      goto LABEL_5;
    }
    v10 = cx - a3->cx - a2->cxRightWidth;
  }
  v11.x = v10;
LABEL_5:
  if ( a2->cyBottomHeight == 0x7FFFFFFF )
  {
    if ( cyTopHeight == 0x7FFFFFFF )
      goto LABEL_9;
  }
  else if ( cyTopHeight == 0x7FFFFFFF )
  {
    cyTopHeight = a1->cy - a3->cy - a2->cyBottomHeight;
  }
  else
  {
    v12.cy = a1->cy - cyTopHeight - a2->cyBottomHeight;
  }
  v11.y = cyTopHeight;
LABEL_9:
  if ( v12.cx <= 0 )
    v12.cx = 0;
  if ( v12.cy <= 0 )
    v12.cy = 0;
  result = 1;
  *a5 = v12;
  *a4 = v11;
  return result;
}
