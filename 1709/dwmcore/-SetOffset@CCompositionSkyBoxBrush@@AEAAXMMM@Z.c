/*
 * XREFs of ?SetOffset@CCompositionSkyBoxBrush@@AEAAXMMM@Z @ 0x18015D360
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CCompositionSkyBoxBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18015D3B0 (-SetProperty@CCompositionSkyBoxBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSkyBoxBrush::SetOffset(CCompositionSkyBoxBrush *this, float a2, float a3, float a4)
{
  __int64 v4; // rax

  if ( *((float *)this + 24) != a2 || *((float *)this + 25) != a3 || *((float *)this + 26) != a4 )
  {
    v4 = *(_QWORD *)this;
    *((float *)this + 24) = a2;
    *((float *)this + 25) = a3;
    *((float *)this + 26) = a4;
    (*(void (__fastcall **)(CCompositionSkyBoxBrush *, _QWORD, _QWORD))(v4 + 64))(this, 0LL, 0LL);
  }
}
