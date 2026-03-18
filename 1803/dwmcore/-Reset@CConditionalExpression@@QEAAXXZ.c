/*
 * XREFs of ?Reset@CConditionalExpression@@QEAAXXZ @ 0x180188254
 * Callers:
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x180187350 (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18019552C (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KW4ScrollAxis@@PEA_NPEAM@Z @ 0x1801BE4D8 (-ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionVa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CConditionalExpression::Reset(CConditionalExpression *this)
{
  unsigned int v1; // esi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = 0;
  for ( *((_DWORD *)this + 85) = *((_DWORD *)this + 73); v1 < *((_DWORD *)this + 80); ++v1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 37) + 16LL * v1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
    v4 = *(_QWORD *)(*((_QWORD *)this + 37) + 16LL * v1 + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4);
  }
}
