/*
 * XREFs of ?InsertDependenciesInOrder@CConditionalExpression@@UEAAX_K@Z @ 0x180187C40
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18013CF80 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 */

void __fastcall CConditionalExpression::InsertDependenciesInOrder(CConditionalExpression *this, unsigned __int64 a2)
{
  unsigned int i; // edi
  __int64 v5; // rax
  CBaseExpression *v6; // rcx
  CBaseExpression *v7; // rcx
  CBaseExpression *v8; // rcx

  for ( i = 0; i < *((_DWORD *)this + 80); ++i )
  {
    v5 = *((_QWORD *)this + 37);
    v6 = *(CBaseExpression **)(v5 + 16LL * i);
    if ( v6 )
    {
      CBaseExpression::InsertInOrder(v6, a2);
      v5 = *((_QWORD *)this + 37);
    }
    v7 = *(CBaseExpression **)(v5 + 16LL * i + 8);
    if ( v7 )
      CBaseExpression::InsertInOrder(v7, a2);
  }
  v8 = (CBaseExpression *)*((_QWORD *)this + 41);
  if ( v8 )
    CBaseExpression::InsertInOrder(v8, a2);
}
