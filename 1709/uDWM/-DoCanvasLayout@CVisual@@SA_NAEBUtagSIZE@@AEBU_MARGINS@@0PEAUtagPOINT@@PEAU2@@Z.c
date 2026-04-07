/*
 * XREFs of ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180014E60
 * Callers:
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180015830 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180016110 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180016910 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
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
  int cxLeftWidth; // eax
  int cxRightWidth; // r11d
  int cyBottomHeight; // ebx
  int cyTopHeight; // r10d
  LONG cy; // eax
  bool result; // al
  int v12; // ecx
  struct tagPOINT v13; // [rsp+0h] [rbp-18h]
  struct tagSIZE v14; // [rsp+28h] [rbp+10h]

  cxLeftWidth = a2->cxLeftWidth;
  cxRightWidth = a2->cxRightWidth;
  cyBottomHeight = a2->cyBottomHeight;
  cyTopHeight = a2->cyTopHeight;
  if ( *(_QWORD *)&a2->cxLeftWidth == 0x7FFFFFFF7FFFFFFFLL && cyTopHeight == 0x7FFFFFFF && cyBottomHeight == 0x7FFFFFFF )
    return 0;
  v14 = *a3;
  v13.y = 0;
  if ( cxRightWidth == 0x7FFFFFFF )
  {
    v12 = 0;
    if ( cxLeftWidth != 0x7FFFFFFF )
      v12 = a2->cxLeftWidth;
    v13.x = v12;
  }
  else if ( cxLeftWidth == 0x7FFFFFFF )
  {
    v13.x = a1->cx - *(_QWORD *)a3 - cxRightWidth;
  }
  else
  {
    v13.x = a2->cxLeftWidth;
    v14.cx = a1->cx - cxRightWidth - cxLeftWidth;
  }
  if ( cyBottomHeight == 0x7FFFFFFF )
  {
    if ( cyTopHeight == 0x7FFFFFFF )
      goto LABEL_9;
  }
  else
  {
    cy = a1->cy;
    if ( cyTopHeight == 0x7FFFFFFF )
    {
      v13.y = cy - a3->cy - cyBottomHeight;
      goto LABEL_9;
    }
    v14.cy = cy - cyTopHeight - cyBottomHeight;
  }
  v13.y = a2->cyTopHeight;
LABEL_9:
  if ( v14.cx <= 0 )
    v14.cx = 0;
  if ( v14.cy <= 0 )
    v14.cy = 0;
  result = 1;
  *a5 = v14;
  *a4 = v13;
  return result;
}
