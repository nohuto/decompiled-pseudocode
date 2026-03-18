/*
 * XREFs of KiChooseLowestRankedThread @ 0x1400A8E28
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x1400EABEC (KiGroupSchedulingQuantumEnd.c)
 *     KiSelectReadyThreadEx @ 0x1400EE3A0 (KiSelectReadyThreadEx.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14003A8F0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400A9160 (KiSelectThreadFromSchedulingGroup.c)
 *     KiSelectReadyThread @ 0x1400F8040 (KiSelectReadyThread.c)
 *     KiSelectThreadFromScbQueue @ 0x14024ABA4 (KiSelectThreadFromScbQueue.c)
 */

__int64 __fastcall KiChooseLowestRankedThread(struct _KPRCB *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // r12d
  __int64 v7; // r14
  char v8; // r9
  __int64 result; // rax
  unsigned int v10; // r15d
  _RTL_BALANCED_NODE *Min; // rax
  _QWORD *Children; // rbx
  _QWORD *v13; // rdi
  unsigned int v14; // eax
  char v15; // cl
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  char v23; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  v4 = a3;
  if ( !v3 )
    return 0LL;
  v7 = a1->ScbOffset + v3;
  if ( !v7 )
    return 0LL;
  if ( a1 == KeGetCurrentPrcb() || (v8 = 0, (_KTHREAD *)a2 != a1->CurrentThread) )
    v8 = 1;
  if ( !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, v7, a3, v8, 0LL) )
    return 0LL;
  result = KiSelectReadyThread(1LL, a1);
  if ( result )
    return result;
  v10 = *(_DWORD *)(*(_QWORD *)(v7 + 416) + 116LL);
  Min = a1->ScbQueue.Min;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Min == (_RTL_BALANCED_NODE *)1 )
      return 0LL;
    Children = (_QWORD *)((unsigned __int64)Min ^ ((unsigned __int64)&a1->ScbQueue | 1));
  }
  else
  {
    Children = a1->ScbQueue.Min->Children;
  }
  if ( !Children )
    return 0LL;
  v13 = Children - 11;
  v14 = *((_DWORD *)Children + 7);
  if ( v14 >= v10 )
  {
    if ( v14 == v10 )
    {
      if ( (int)v4 < *(char *)(a2 + 195) )
        v4 = *(char *)(a2 + 195);
      while ( 1 )
      {
        result = KiSelectThreadFromSchedulingGroup(a1, v13, v4);
        if ( v13 == (_QWORD *)v7 )
        {
          v15 = 1;
        }
        else
        {
          v23 = 0;
          if ( result )
            return result;
          v19 = (unsigned __int64)(v13 + 49);
          v20 = v13[49];
          if ( (v13[50] & 1) != 0 )
          {
            if ( !v20 )
              goto LABEL_35;
            v20 ^= v19;
          }
          if ( !v20 )
            goto LABEL_35;
          result = KiSelectThreadFromScbQueue(v19, (_DWORD)a1, v4, v7, (__int64)&v23);
          v15 = v23;
        }
        if ( result )
          return result;
        if ( v15 )
          return 0LL;
LABEL_35:
        v21 = (_QWORD *)Children[1];
        v22 = Children;
        if ( v21 )
        {
          do
          {
            Children = v21;
            v21 = (_QWORD *)*v21;
          }
          while ( v21 );
        }
        else
        {
          while ( 1 )
          {
            Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !Children || (_QWORD *)*Children == v22 )
              break;
            v22 = Children;
          }
        }
        if ( Children )
        {
          v13 = Children - 11;
          if ( *((_DWORD *)Children + 7) == v10 )
            continue;
        }
        return 0LL;
      }
    }
    return 0LL;
  }
  while ( !*((_WORD *)v13 + 57) )
  {
    v16 = (unsigned __int64)(v13 + 49);
    v17 = *(_QWORD *)(v16 + 8);
    if ( (v17 & 1) != 0 )
    {
      if ( v17 == 1 )
        v18 = 0LL;
      else
        v18 = v17 ^ (v16 | 1);
    }
    else
    {
      v18 = *(_QWORD *)(v16 + 8);
    }
    v13 = (_QWORD *)(v18 - 88);
  }
  return KiSelectThreadFromSchedulingGroup(a1, v13, 0LL);
}
