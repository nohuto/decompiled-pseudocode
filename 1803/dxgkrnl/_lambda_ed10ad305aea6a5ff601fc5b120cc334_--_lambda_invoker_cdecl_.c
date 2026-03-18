/*
 * XREFs of _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C01D7980
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C01AFE14 (DxgkRedrawCursorForPostCompositon.c)
 */

void __fastcall lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_(void *a1)
{
  DxgkRedrawCursorForPostCompositon(*(DXGADAPTER **)a1, *((_DWORD *)a1 + 4));
  if ( *(_QWORD *)a1 )
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)a1);
  *(_QWORD *)a1 = 0LL;
  operator delete(a1);
}
