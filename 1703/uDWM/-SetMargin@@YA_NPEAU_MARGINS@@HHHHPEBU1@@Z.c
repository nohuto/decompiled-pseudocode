/*
 * XREFs of ?SetMargin@@YA_NPEAU_MARGINS@@HHHHPEBU1@@Z @ 0x1800143D0
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x1800268E0 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall SetMargin(
        struct _MARGINS *a1,
        int cxLeftWidth,
        int a3,
        int cyTopHeight,
        int a5,
        const struct _MARGINS *a6)
{
  int cxRightWidth; // r10d
  int cyBottomHeight; // r8d
  int v8; // eax
  bool result; // al

  cxRightWidth = a3;
  if ( a6 )
  {
    if ( cxLeftWidth >= a6->cxLeftWidth )
      cxLeftWidth = a6->cxLeftWidth;
    if ( a3 >= a6->cxRightWidth )
      cxRightWidth = a6->cxRightWidth;
    if ( cyTopHeight >= a6->cyTopHeight )
      cyTopHeight = a6->cyTopHeight;
    cyBottomHeight = a5;
    if ( a5 >= a6->cyBottomHeight )
      cyBottomHeight = a6->cyBottomHeight;
  }
  else
  {
    cyBottomHeight = a5;
  }
  v8 = a1->cxLeftWidth;
  if ( cxLeftWidth != a1->cxLeftWidth )
    a1->cxLeftWidth = cxLeftWidth;
  result = cxLeftWidth != v8;
  if ( cxRightWidth != a1->cxRightWidth )
  {
    a1->cxRightWidth = cxRightWidth;
    result = 1;
  }
  if ( cyTopHeight != a1->cyTopHeight )
  {
    a1->cyTopHeight = cyTopHeight;
    result = 1;
  }
  if ( cyBottomHeight != a1->cyBottomHeight )
  {
    a1->cyBottomHeight = cyBottomHeight;
    return 1;
  }
  return result;
}
