/*
 * XREFs of _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C01CEE00
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C002AB38 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C01B4120 (DxgkRedrawCursorForPostCompositon.c)
 */

void __fastcall lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_(DXGADAPTER_REFERENCE *this)
{
  DxgkRedrawCursorForPostCompositon(*(DXGADAPTER **)this, *((_DWORD *)this + 4));
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)this, 0LL);
  ExFreePoolWithTag(this, 0);
}
