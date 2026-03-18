/*
 * XREFs of AslpPathWildcardFreeFindContext @ 0x1407DB814
 * Callers:
 *     AslPathWildcardFindClose @ 0x1407DA2BC (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x1407DA2FC (AslPathWildcardFindFirst.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ULongLongMult @ 0x140223478 (ULongLongMult.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1407DB8EC (AslpPathWildcardFreeMatchNode.c)
 */

void __fastcall AslpPathWildcardFreeFindContext(_QWORD **a1)
{
  _QWORD *v1; // rbx
  ULONGLONG i; // rdi
  ULONGLONG v4; // rax
  ULONGLONG v5; // rdx
  void *v6; // rcx
  void *v7; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      for ( i = 0LL; i < v1[4]; ++i )
      {
        v4 = 0LL;
        if ( i < v1[4] )
        {
          if ( ULongLongMult(v1[3], i, &pullResult) < 0 || (v5 = v1[7], v5 + pullResult < v5) )
            v4 = 0LL;
          else
            v4 = v5 + pullResult;
        }
        AslpPathWildcardFreeMatchNode(v4);
      }
      v6 = (void *)v1[7];
      if ( v6 )
        ExFreePoolWithTag(v6, 0x72615452u);
      memset(v1 + 2, 0, 0x30uLL);
      v7 = (void *)v1[1];
      if ( v7 )
      {
        ExFreePoolWithTag(v7, 0x74705041u);
        v1[1] = 0LL;
      }
      ExFreePoolWithTag(v1, 0x74705041u);
      *a1 = 0LL;
    }
  }
}
