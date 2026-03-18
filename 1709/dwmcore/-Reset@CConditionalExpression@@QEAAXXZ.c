/*
 * XREFs of ?Reset@CConditionalExpression@@QEAAXXZ @ 0x18015F0B8
 * Callers:
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x18015E230 (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18016D2E4 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KW4ScrollAxis@@PEA_NPEAM@Z @ 0x180189098 (-ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionVa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CConditionalExpression::Reset(CConditionalExpression *this)
{
  unsigned int v1; // esi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = 0;
  for ( *((_DWORD *)this + 81) = *((_DWORD *)this + 69); v1 < *((_DWORD *)this + 76); ++v1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 35) + 16LL * v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    v4 = *(_QWORD *)(*((_QWORD *)this + 35) + 16LL * v1 + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4);
  }
}
