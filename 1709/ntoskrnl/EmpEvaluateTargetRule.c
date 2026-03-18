/*
 * XREFs of EmpEvaluateTargetRule @ 0x140018A60
 * Callers:
 *     EmpEvaluateUpdateRuleEvalState @ 0x140153194 (EmpEvaluateUpdateRuleEvalState.c)
 *     EmClientRuleEvaluate @ 0x140424420 (EmClientRuleEvaluate.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x140017B40 (EmpEvaluateNodeLink.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpEvaluateTargetRule(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r11
  _DWORD *v4; // rsi
  __int64 v5; // r14
  _QWORD *PoolWithTag; // r12
  __int64 v7; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // r10d
  unsigned int v10; // r13d
  unsigned int v11; // edi
  unsigned int i; // r15d
  unsigned int v13; // r8d
  _QWORD *v14; // r9
  __int64 v15; // rax
  unsigned int j; // eax
  int v17; // ecx
  __int64 v18; // rdx
  unsigned int v20; // [rsp+A0h] [rbp+8h]
  __int64 v23; // [rsp+B8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  PoolWithTag = 0LL;
  v23 = v3;
  v7 = *(unsigned int *)(v3 + 40);
  v8 = 1;
  v9 = *(_DWORD *)(v3 + 44);
  v20 = v9;
  if ( !__PAIR64__(v9, v7) )
  {
    v10 = 1;
LABEL_10:
    v11 = v9 + v7;
    for ( i = 0; i < v10; ++i )
    {
      v13 = 0;
      if ( (_DWORD)v7 )
      {
        v14 = PoolWithTag;
        do
        {
          v15 = i * v11 + v13++;
          *v14++ = *((_QWORD *)EmpStringTable + *(unsigned int *)(v5 + 4 * v15));
        }
        while ( v13 < (unsigned int)v7 );
      }
      for ( j = v7; j < v11; v4[v18] = v17 )
      {
        v17 = *(_DWORD *)(v5 + 4LL * (i * v11 + j));
        v18 = j - (unsigned int)v7;
        ++j;
      }
      v8 = EmpEvaluateNodeLink(*(int **)(v3 + 96), (__int64)PoolWithTag, v7, (__int64)v4, v9, a2, a3, 0LL, 0);
      if ( v8 - 1 <= 1 )
        break;
      v9 = v20;
      v3 = v23;
    }
    goto LABEL_18;
  }
  v10 = *(_DWORD *)(a1 + 24) / (v9 + (unsigned int)v7);
  if ( (_DWORD)v7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v7, 0x76654D45u);
    if ( !PoolWithTag )
      return v8;
    v9 = v20;
  }
  if ( v9 )
  {
    v4 = ExAllocatePoolWithTag(PagedPool, 4LL * v9, 0x76654D45u);
    if ( !v4 )
      goto LABEL_18;
    v9 = v20;
  }
  if ( v10 )
  {
    v3 = v23;
    goto LABEL_10;
  }
LABEL_18:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x76654D45u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x76654D45u);
  return v8;
}
