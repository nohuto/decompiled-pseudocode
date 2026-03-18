/*
 * XREFs of ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C019F2FC
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C0101D80 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C0102790 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C016B3C8 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGPRESENT::IntersectRect(struct tagRECT *a1, const struct tagRECT *a2, const struct tagRECT *a3)
{
  const struct tagRECT *v3; // r9
  LONG left; // r10d
  LONG right; // r9d
  LONG top; // edx
  LONG bottom; // ecx

  v3 = a3;
  if ( a2->left > a3->left )
    v3 = a2;
  left = v3->left;
  a1->left = v3->left;
  right = a3->right;
  if ( a2->right < right )
    right = a2->right;
  a1->right = right;
  if ( left >= right )
    return 0;
  top = a3->top;
  if ( a2->top > top )
    top = a2->top;
  a1->top = top;
  bottom = a3->bottom;
  if ( a2->bottom < bottom )
    bottom = a2->bottom;
  a1->bottom = bottom;
  return top < bottom;
}
