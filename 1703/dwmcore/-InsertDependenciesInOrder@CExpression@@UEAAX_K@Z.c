/*
 * XREFs of ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x180033430
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18002CE40 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x180033430 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 * Callees:
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x180033430 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1800B1A3C (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CExpression::InsertDependenciesInOrder(CExpression *this, unsigned __int64 a2)
{
  __int64 v2; // rsi
  CExpression *i; // rdx
  __int64 v5; // rax
  __int64 v6; // r8
  struct _RTL_GENERIC_TABLE *v7; // rcx
  _QWORD *v8; // rax
  void *v9; // rbx
  _QWORD *v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rbx
  char v13; // cl
  void (__fastcall *v14)(CExpression *__hidden, unsigned __int64); // rax
  __int64 v15; // rax
  void *v16; // rcx
  __int128 v17; // [rsp+20h] [rbp-48h]
  __int128 Buffer; // [rsp+30h] [rbp-38h] BYREF
  void *lpMem; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v2 = 0LL;
  for ( i = this; (unsigned int)v2 < *((_DWORD *)this + 100); v2 = (unsigned int)(v2 + 1) )
  {
    v5 = *((_QWORD *)i + 2);
    v6 = *((_QWORD *)i + 47);
    lpMem = 0LL;
    v7 = (struct _RTL_GENERIC_TABLE *)(*(_QWORD *)(v5 + 240) + 304LL);
    *(_QWORD *)&v17 = *(_QWORD *)(*((_QWORD *)i + 39) + 8LL * *(unsigned int *)(v6 + 24 * v2 + 20));
    DWORD2(v17) = *(_DWORD *)(v6 + 24 * v2);
    Buffer = v17;
    v8 = RtlLookupElementGenericTable(v7, &Buffer);
    v9 = lpMem;
    v10 = v8;
    while ( v9 )
    {
      v16 = v9;
      v9 = (void *)*((_QWORD *)v9 + 2);
      WPF::ProcessHeapImpl::Free(v16);
    }
    if ( v10 )
      v10 = (_QWORD *)v10[2];
    if ( v10 )
    {
      v11 = CBaseExpression::s_recursionLevel;
      do
      {
        v12 = v10[1];
        v13 = 0;
        if ( (int)++*(_DWORD *)(v12 + 140) <= 1 && *(_QWORD *)(v12 + 144) != a2 && v11 <= 0x10 )
        {
          CBaseExpression::s_recursionLevel = v11 + 1;
          v14 = *(void (__fastcall **)(CExpression *__hidden, unsigned __int64))(*(_QWORD *)v12 + 160LL);
          if ( v14 == CExpression::InsertDependenciesInOrder )
            CExpression::InsertDependenciesInOrder((CExpression *)v12, a2);
          else
            v14((CExpression *)v12, a2);
          if ( (*(_BYTE *)(v12 + 208) & 2) != 0 )
          {
            v15 = *(_QWORD *)(v12 + 16);
            v21 = v12;
            DynArray<CBaseExpression *,1>::AddMultipleAndSet(
              *(_QWORD *)(v15 + 240) + 176LL + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v15 + 240) + 172LL)),
              &v21);
          }
          v13 = 1;
          v11 = CBaseExpression::s_recursionLevel;
        }
        *(_QWORD *)(v12 + 144) = a2;
        if ( v13 )
          CBaseExpression::s_recursionLevel = --v11;
        --*(_DWORD *)(v12 + 140);
        v10 = (_QWORD *)v10[2];
      }
      while ( v10 );
    }
    i = this;
  }
}
