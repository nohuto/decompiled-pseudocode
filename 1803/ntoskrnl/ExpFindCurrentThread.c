/*
 * XREFs of ExpFindCurrentThread @ 0x140088730
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x1400880C0 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x1400884C0 (ExpBoostIoAfterAcquire.c)
 *     ExpAcquireResourceSharedLite @ 0x140100220 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x140120020 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140159160 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x1402BA2F0 (ExpTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x1400889D8 (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindCurrentThread(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  __int64 v6; // r10
  _QWORD *result; // rax
  _QWORD *v12; // r9
  _QWORD *v13; // rdi
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbp
  unsigned __int64 v17; // r14
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  unsigned __int64 v20; // r10
  _QWORD *v21; // rcx

  v6 = *(_QWORD *)(a1 + 48);
  result = (_QWORD *)(a1 + 48);
  if ( v6 != a2 )
  {
    v12 = 0LL;
    v13 = 0LL;
    if ( !v6 )
    {
      v13 = (_QWORD *)(a1 + 48);
      if ( a5 )
        v13 = 0LL;
    }
    v14 = v6 != 0;
    if ( !a6
      || (v15 = *(_QWORD *)(a1 + 16)) == 0
      || a6 >= *(_DWORD *)(v15 + 8)
      || (result = (_QWORD *)(v15 + 16LL * a6), *result != a2) )
    {
      v16 = *(_QWORD *)(a1 + 16);
      result = (_QWORD *)v16;
      if ( !v16
        || (v17 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72),
            v12 = (_QWORD *)(v16 + 16LL * *(unsigned int *)(v16 + 8)),
            result = (_QWORD *)(v16 + 16),
            v14 >= v17) )
      {
LABEL_9:
        if ( a4 )
        {
          if ( v13 || result < v12 && (v13 = result) != 0LL )
          {
            v18 = v13;
            result = v13;
LABEL_14:
            KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)v18 - v16) >> 4;
            return result;
          }
          ExpExpandResourceOwnerTable(a1, a3, v14);
        }
        return 0LL;
      }
      while ( 1 )
      {
        v19 = *result;
        v20 = v14;
        if ( *result == a2 )
          break;
        if ( v19 )
        {
          if ( ++v14 == v17 )
          {
            result += 2;
            goto LABEL_9;
          }
        }
        else
        {
          v21 = result;
          if ( v13 )
            v21 = v13;
          v13 = v21;
        }
        v14 = v20;
        if ( v19 )
          v14 = v20 + 1;
        result += 2;
        if ( result == v12 )
          goto LABEL_9;
      }
      v18 = result;
      goto LABEL_14;
    }
  }
  return result;
}
