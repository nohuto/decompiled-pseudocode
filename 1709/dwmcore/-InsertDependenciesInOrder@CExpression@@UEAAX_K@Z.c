/*
 * XREFs of ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x1800A7EA0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x1800A12A0 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800A2700 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800A2700 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 */

void __fastcall CExpression::InsertDependenciesInOrder(CExpression *this, unsigned __int64 a2)
{
  __int64 i; // rdi
  __int64 v5; // rax
  __int64 v6; // r8
  struct _RTL_GENERIC_TABLE *v7; // rcx
  PVOID v8; // rax
  CBaseExpression **v9; // rbx
  PVOID v10; // rbp
  CBaseExpression **v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-38h]
  __int128 Buffer; // [rsp+30h] [rbp-28h] BYREF
  void *lpMem; // [rsp+40h] [rbp-18h]

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 96); i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = *((_QWORD *)this + 47);
    lpMem = 0LL;
    v7 = (struct _RTL_GENERIC_TABLE *)(*(_QWORD *)(v5 + 216) + 304LL);
    *(_QWORD *)&v12 = *(_QWORD *)(*((_QWORD *)this + 45) + 8LL * *(unsigned int *)(v6 + 24 * i + 20));
    DWORD2(v12) = *(_DWORD *)(v6 + 24 * i);
    Buffer = v12;
    v8 = RtlLookupElementGenericTable(v7, &Buffer);
    v9 = (CBaseExpression **)lpMem;
    v10 = v8;
    while ( v9 )
    {
      v11 = v9;
      v9 = (CBaseExpression **)v9[2];
      WPF::ProcessHeapImpl::Free(v11);
    }
    if ( v10 )
      v9 = (CBaseExpression **)*((_QWORD *)v10 + 2);
    while ( v9 )
    {
      CBaseExpression::InsertInOrder(v9[1], a2);
      v9 = (CBaseExpression **)v9[2];
    }
  }
}
