/*
 * XREFs of ?GetMaxStackCount@CScrollAnimation@@UEBAIXZ @ 0x180188D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x18016BF60 (-GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAx.c)
 */

__int64 __fastcall CScrollAnimation::GetMaxStackCount(CScrollAnimation *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rsi
  __int64 SourceModifierConditionalAnimation; // rcx
  unsigned int v8; // edi

  v1 = *((_QWORD *)this + 35);
  v2 = 0;
  if ( v1 )
    v3 = *(_QWORD *)(v1 + 8);
  else
    v3 = 0LL;
  v4 = *((int *)this + 69);
  v5 = *(_QWORD **)(v3 + 544);
  v6 = *(_QWORD *)(v3 + 8 * v4 + 440);
  if ( v5 )
    SourceModifierConditionalAnimation = CManipulation::GetSourceModifierConditionalAnimation(v5, v4);
  else
    SourceModifierConditionalAnimation = 0LL;
  if ( SourceModifierConditionalAnimation )
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)SourceModifierConditionalAnimation + 168LL))(SourceModifierConditionalAnimation);
  else
    v8 = 0;
  if ( v6 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6);
  if ( v2 > v8 )
    v8 = v2;
  return v8 + 1;
}
