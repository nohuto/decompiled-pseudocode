/*
 * XREFs of ?InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z @ 0x18015EAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800A2700 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 */

void __fastcall CConditionalExpression::InsertDependenciesInOrder(CConditionalExpression *this, unsigned __int64 a2)
{
  unsigned int i; // edi
  CBaseExpression *v5; // rcx
  CBaseExpression *v6; // rcx
  CBaseExpression *v7; // rcx

  for ( i = 0; i < *((_DWORD *)this + 76); ++i )
  {
    v5 = *(CBaseExpression **)(*((_QWORD *)this + 35) + 16LL * i);
    if ( v5 )
      CBaseExpression::InsertInOrder(v5, a2);
    v6 = *(CBaseExpression **)(*((_QWORD *)this + 35) + 16LL * i + 8);
    if ( v6 )
      CBaseExpression::InsertInOrder(v6, a2);
  }
  v7 = (CBaseExpression *)*((_QWORD *)this + 39);
  if ( v7 )
    CBaseExpression::InsertInOrder(v7, a2);
}
