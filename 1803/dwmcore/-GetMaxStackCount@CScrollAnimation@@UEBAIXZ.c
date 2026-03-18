/*
 * XREFs of ?GetMaxStackCount@CScrollAnimation@@UEBAIXZ @ 0x1801BE1A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1801C9E48 (-GetSourceModifierForActiveManipulation@InteractionSourceManager@@QEBAPEAVCConditionalExpression.c)
 */

__int64 __fastcall CScrollAnimation::GetMaxStackCount(CScrollAnimation *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 SourceModifierForActiveManipulation; // rax
  unsigned int v8; // edi

  v1 = *((_QWORD *)this + 37);
  v2 = 0;
  if ( v1 )
    v4 = *(_QWORD *)(v1 + 8);
  else
    v4 = 0LL;
  v5 = *((int *)this + 73);
  v6 = *(_QWORD *)(v4 + 8 * v5 + 536);
  SourceModifierForActiveManipulation = InteractionSourceManager::GetSourceModifierForActiveManipulation(v4 + 352, v5);
  if ( SourceModifierForActiveManipulation )
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)SourceModifierForActiveManipulation + 168LL))(SourceModifierForActiveManipulation);
  else
    v8 = 0;
  if ( v6 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6);
  if ( v2 <= v8 )
    v2 = v8;
  return v2 + 1;
}
