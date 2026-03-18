/*
 * XREFs of _lambda_2c9284ca1958a319979d23566d67cec5_::_lambda_invoker_cdecl_ @ 0x1C01B6D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C003A65C (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C019D780 (DxgkRedrawCursorForPostCompositon.c)
 */

void __fastcall lambda_2c9284ca1958a319979d23566d67cec5_::_lambda_invoker_cdecl_(
        DXGADAPTER **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DxgkRedrawCursorForPostCompositon(*this, *((unsigned int *)this + 4), a3, a4);
  DXGADAPTER_REFERENCE::Assign(this, 0LL);
  ExFreePoolWithTag(this, 0);
}
