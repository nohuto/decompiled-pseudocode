/*
 * XREFs of ?SetSize@CCompositionSkyBoxBrush@@AEAAXM@Z @ 0x18015D414
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CCompositionSkyBoxBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18015D3B0 (-SetProperty@CCompositionSkyBoxBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSkyBoxBrush::SetSize(CCompositionSkyBoxBrush *this, float a2)
{
  __int64 v2; // rax

  if ( *((float *)this + 28) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((float *)this + 28) = a2;
    (*(void (__fastcall **)(CCompositionSkyBoxBrush *, _QWORD, _QWORD))(v2 + 64))(this, 0LL, 0LL);
  }
}
