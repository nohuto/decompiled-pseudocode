/*
 * XREFs of ?GetMaxStackCount@CScrollAnimation@@UEBAIXZ @ 0x180181970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceModifierForActiveManipulation@CInteractionTracker@@QEAAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180181A6C (-GetSourceModifierForActiveManipulation@CInteractionTracker@@QEAAPEAVCConditionalExpression@@W4S.c)
 */

__int64 __fastcall CScrollAnimation::GetMaxStackCount(CScrollAnimation *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 SourceModifierForActiveManipulation; // rax
  unsigned int v11; // edi

  v4 = *((_QWORD *)this + 29);
  v5 = 0;
  if ( v4 )
    v7 = *(_QWORD *)(v4 + 8);
  else
    v7 = 0LL;
  v8 = *((int *)this + 57);
  v9 = *(_QWORD *)(v7 + 8 * v8 + 424);
  SourceModifierForActiveManipulation = CInteractionTracker::GetSourceModifierForActiveManipulation(v7, v8, a3, a4);
  if ( SourceModifierForActiveManipulation )
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)SourceModifierForActiveManipulation + 152LL))(SourceModifierForActiveManipulation);
  else
    v11 = 0;
  if ( v9 )
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 152LL))(v9);
  if ( v5 > v11 )
    v11 = v5;
  return v11 + 1;
}
