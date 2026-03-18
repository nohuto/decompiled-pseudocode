/*
 * XREFs of ?Reset@CConditionalExpression@@QEAAXXZ @ 0x18016B8A0
 * Callers:
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x18016AF48 (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@IEAAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KPEA_NPEAM@Z @ 0x180181D4C (-ProcessConditionalExpression@CScrollAnimation@@IEAAJPEAVCConditionalExpression@@PEAVCExpression.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ @ 0x180181E40 (-SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ.c)
 * Callees:
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

void __fastcall CConditionalExpression::Reset(CConditionalExpression *this)
{
  unsigned int v1; // esi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = 0;
  for ( *((_DWORD *)this + 69) = *((_DWORD *)this + 57); v1 < *((_DWORD *)this + 64); ++v1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 29) + 16LL * v1);
    memset_0(*(void **)(v3 + 256), 0, *(unsigned int *)(v3 + 264));
    v4 = *(_QWORD *)(*((_QWORD *)this + 29) + 16LL * v1 + 8);
    memset_0(*(void **)(v4 + 256), 0, *(unsigned int *)(v4 + 264));
  }
}
