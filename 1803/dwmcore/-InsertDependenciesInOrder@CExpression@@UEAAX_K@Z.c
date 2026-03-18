/*
 * XREFs of ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x1800545B0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x18003A130 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x1800545B0 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 * Callees:
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x1800545B0 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z @ 0x1800CCA74 (-AddMultipleAndSet@-$DynArray@PEAVCBaseExpression@@$00@@QEAAJPEFBQEAVCBaseExpression@@I@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x18013CF80 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 */

void __fastcall CExpression::InsertDependenciesInOrder(CExpression *this, unsigned __int64 a2)
{
  CExpression *v2; // r10
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r9
  _QWORD *v8; // rax
  void *v9; // rbx
  _QWORD *v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rbx
  char v13; // cl
  __int64 v14; // rsi
  void (__fastcall *v15)(CExpression *__hidden, unsigned __int64); // rax
  __int64 v16; // rax
  void *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  __int128 v19; // [rsp+28h] [rbp-40h]
  __int128 Buffer; // [rsp+38h] [rbp-30h] BYREF
  void *v21; // [rsp+48h] [rbp-20h]
  int v23; // [rsp+88h] [rbp+20h]

  v2 = this;
  v4 = 0LL;
  v23 = 0;
  if ( *((_DWORD *)v2 + 100) )
  {
    do
    {
      v5 = *((_QWORD *)v2 + 49);
      v6 = *((_QWORD *)v2 + 2);
      v21 = 0LL;
      v7 = *(_QWORD *)(v6 + 240);
      LODWORD(v6) = *(_DWORD *)(v5 + 24 * v4);
      *(_QWORD *)&v19 = *(_QWORD *)(*((_QWORD *)v2 + 47) + 8LL * *(unsigned int *)(v5 + 24 * v4 + 20));
      DWORD2(v19) = v6;
      Buffer = v19;
      v8 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v7 + 336), &Buffer);
      v9 = v21;
      v10 = v8;
      while ( v9 )
      {
        v17 = v9;
        v9 = (void *)*((_QWORD *)v9 + 2);
        operator delete(v17, 0x18uLL);
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
          if ( (int)++*(_DWORD *)(v12 + 148) <= 1 && *(_QWORD *)(v12 + 152) != a2 && v11 <= 0x10 )
          {
            v14 = 0LL;
            for ( CBaseExpression::s_recursionLevel = v11 + 1;
                  (unsigned int)v14 < *(_DWORD *)(v12 + 240);
                  v14 = (unsigned int)(v14 + 1) )
            {
              CBaseExpression::InsertInOrder(*(CBaseExpression **)(*(_QWORD *)(v12 + 216) + 8 * v14), a2);
            }
            v15 = *(void (__fastcall **)(CExpression *__hidden, unsigned __int64))(*(_QWORD *)v12 + 176LL);
            if ( v15 == CExpression::InsertDependenciesInOrder )
              CExpression::InsertDependenciesInOrder((CExpression *)v12, a2);
            else
              v15((CExpression *)v12, a2);
            if ( (*(_BYTE *)(v12 + 208) & 2) != 0 )
            {
              v16 = *(_QWORD *)(v12 + 16);
              v18 = v12;
              DynArray<CBaseExpression *,1>::AddMultipleAndSet(
                *(_QWORD *)(v16 + 240) + 176LL + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v16 + 240) + 172LL)),
                &v18,
                1LL);
            }
            v13 = 1;
            v11 = CBaseExpression::s_recursionLevel;
          }
          *(_QWORD *)(v12 + 152) = a2;
          if ( v13 )
            CBaseExpression::s_recursionLevel = --v11;
          --*(_DWORD *)(v12 + 148);
          v10 = (_QWORD *)v10[2];
        }
        while ( v10 );
      }
      v2 = this;
      v4 = (unsigned int)(v23 + 1);
      v23 = v4;
    }
    while ( (unsigned int)v4 < *((_DWORD *)this + 100) );
  }
}
