/*
 * XREFs of KiChooseLowestRankedThread @ 0x1400AB7D4
 * Callers:
 *     KiSelectReadyThreadEx @ 0x14008B420 (KiSelectReadyThreadEx.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14008ED50 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiSelectReadyThread @ 0x14006F300 (KiSelectReadyThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400ABA00 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1400D2970 (KiSelectThreadFromSchedulingGroup.c)
 *     KiSelectThreadFromScbQueue @ 0x14020C8C0 (KiSelectThreadFromScbQueue.c)
 */

unsigned __int64 *__fastcall KiChooseLowestRankedThread(struct _KPRCB *a1, _KTHREAD *a2, unsigned int a3)
{
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rbp
  unsigned int Priority; // r12d
  unsigned __int64 *result; // rax
  __int64 v8; // rbp
  char v9; // r9
  unsigned __int64 *v10; // r8
  unsigned int v11; // r15d
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rdi
  unsigned int v14; // eax
  char v15; // cl
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  char v18; // [rsp+68h] [rbp+10h] BYREF

  SchedulingGroup = a2->SchedulingGroup;
  Priority = a3;
  if ( !SchedulingGroup )
    return 0LL;
  v8 = (__int64)SchedulingGroup + a1->ScbOffset;
  if ( !v8 )
    return 0LL;
  if ( a1 == KeGetCurrentPrcb() || (v9 = 0, a2 != a1->CurrentThread) )
    v9 = 1;
  if ( !(unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)a2, v8, a3, v9, 0LL) )
    return 0LL;
  result = KiSelectReadyThread(1, (__int64)a1, v10);
  if ( result )
    return result;
  v11 = *(_DWORD *)(*(_QWORD *)(v8 + 416) + 116LL);
  v12 = (_QWORD *)((unsigned __int64)a1->ScbQueue.Min & 0xFFFFFFFFFFFFFFFEuLL);
  if ( !v12 )
    return 0LL;
  v13 = (unsigned __int64)(v12 - 11);
  v14 = *((_DWORD *)v12 + 7);
  if ( v14 >= v11 )
  {
    if ( v14 == v11 )
    {
      if ( (int)Priority < a2->Priority )
        Priority = a2->Priority;
      while ( 1 )
      {
        result = (unsigned __int64 *)KiSelectThreadFromSchedulingGroup(a1, v13, Priority);
        if ( v13 == v8 )
        {
          v15 = 1;
        }
        else
        {
          v18 = 0;
          if ( result )
            return result;
          if ( !*(_QWORD *)(v13 + 392) )
            goto LABEL_21;
          result = (unsigned __int64 *)KiSelectThreadFromScbQueue(
                                         (int)v13 + 392,
                                         (_DWORD)a1,
                                         Priority,
                                         v8,
                                         (__int64)&v18);
          v15 = v18;
        }
        if ( result )
          return result;
        if ( v15 )
          return 0LL;
LABEL_21:
        v16 = (_QWORD *)v12[1];
        v17 = v12;
        if ( v16 )
        {
          do
          {
            v12 = v16;
            v16 = (_QWORD *)*v16;
          }
          while ( v16 );
        }
        else
        {
          while ( 1 )
          {
            v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !v12 || (_QWORD *)*v12 == v17 )
              break;
            v17 = v12;
          }
        }
        if ( v12 )
        {
          v13 = (unsigned __int64)(v12 - 11);
          if ( *((_DWORD *)v12 + 7) == v11 )
            continue;
        }
        return 0LL;
      }
    }
    return 0LL;
  }
  while ( !*(_WORD *)(v13 + 114) )
    v13 = (*(_QWORD *)(v13 + 400) & 0xFFFFFFFFFFFFFFFEuLL) - 88;
  return (unsigned __int64 *)KiSelectThreadFromSchedulingGroup(a1, v13, 0LL);
}
