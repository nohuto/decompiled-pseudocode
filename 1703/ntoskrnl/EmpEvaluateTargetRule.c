/*
 * XREFs of EmpEvaluateTargetRule @ 0x1400703A0
 * Callers:
 *     EmpEvaluateUpdateRuleEvalState @ 0x1401633AC (EmpEvaluateUpdateRuleEvalState.c)
 *     EmClientRuleEvaluate @ 0x140404840 (EmClientRuleEvaluate.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x140070590 (EmpEvaluateNodeLink.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpEvaluateTargetRule(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r11
  _DWORD *v4; // rsi
  __int64 v5; // r14
  _QWORD *PoolWithTag; // r12
  __int64 v7; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // r10d
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  unsigned int v12; // edi
  unsigned int v13; // r8d
  _QWORD *v14; // r10
  _QWORD *v15; // r9
  __int64 v16; // rax
  unsigned int i; // eax
  int v18; // ecx
  __int64 v19; // rdx
  unsigned int v21; // [rsp+A0h] [rbp+8h]
  __int64 v24; // [rsp+B8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 16);
  PoolWithTag = 0LL;
  v24 = v3;
  v7 = *(unsigned int *)(v3 + 40);
  v8 = 1;
  v9 = *(_DWORD *)(v3 + 44);
  v21 = v9;
  if ( !__PAIR64__(v9, v7) )
  {
    v10 = 1;
    v11 = 0;
LABEL_10:
    v12 = v9 + v7;
    do
    {
      v13 = 0;
      if ( (_DWORD)v7 )
      {
        v14 = EmpStringTable;
        v15 = PoolWithTag;
        do
        {
          v16 = v11 * v12 + v13++;
          *v15++ = v14[*(unsigned int *)(v5 + 4 * v16)];
        }
        while ( v13 < (unsigned int)v7 );
        v9 = v21;
      }
      for ( i = v7; i < v12; v4[v19] = v18 )
      {
        v18 = *(_DWORD *)(v5 + 4LL * (v11 * v12 + i));
        v19 = i - (unsigned int)v7;
        ++i;
      }
      v8 = EmpEvaluateNodeLink(*(_QWORD *)(v3 + 96), (_DWORD)PoolWithTag, v7, (_DWORD)v4, v9, a2, a3, 0LL, 0);
      if ( v8 - 1 <= 1 )
        break;
      v9 = v21;
      ++v11;
      v3 = v24;
    }
    while ( v11 < v10 );
    goto LABEL_19;
  }
  v10 = *(_DWORD *)(a1 + 24) / (v9 + (unsigned int)v7);
  if ( (_DWORD)v7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v7, 0x76654D45u);
    if ( !PoolWithTag )
      return v8;
    v9 = v21;
  }
  if ( v9 )
  {
    v4 = ExAllocatePoolWithTag(PagedPool, 4LL * v9, 0x76654D45u);
    if ( !v4 )
      goto LABEL_19;
    v9 = v21;
  }
  v11 = 0;
  if ( v10 )
  {
    v3 = v24;
    goto LABEL_10;
  }
LABEL_19:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x76654D45u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x76654D45u);
  return v8;
}
