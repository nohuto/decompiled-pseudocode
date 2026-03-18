/*
 * XREFs of ExpFindCurrentThread @ 0x1400909C0
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x14001BAA0 (ExpSetResourceOwnerPointerEx.c)
 *     ExpAcquireResourceSharedLite @ 0x14008F610 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14008FC20 (ExpAcquireResourceExclusiveLite.c)
 *     ExpBoostIoAfterAcquire @ 0x140091CD0 (ExpBoostIoAfterAcquire.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14009C290 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x140143640 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x14025C3A0 (ExpTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x140027C24 (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindCurrentThread(
        __int64 a1,
        __int64 a2,
        struct _KLOCK_QUEUE_HANDLE *a3,
        int a4,
        int a5,
        unsigned int a6)
{
  __int64 v6; // r10
  _QWORD *result; // rax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rbx
  _QWORD *v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  __int64 v16; // rsi
  _QWORD *v17; // rdx

  v6 = *(_QWORD *)(a1 + 48);
  result = (_QWORD *)(a1 + 48);
  if ( v6 != a2 )
  {
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    if ( v6 )
    {
      v12 = 1LL;
    }
    else
    {
      v13 = (_QWORD *)(a1 + 48);
      if ( a5 )
        v13 = 0LL;
    }
    if ( !a6
      || (v14 = *(_QWORD *)(a1 + 16)) == 0
      || a6 >= *(_DWORD *)(v14 + 8)
      || (result = (_QWORD *)(v14 + 16LL * a6), *result != a2) )
    {
      v15 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
      v16 = *(_QWORD *)(a1 + 16);
      result = (_QWORD *)v16;
      if ( !v16
        || (v11 = (_QWORD *)(v16 + 16LL * *(unsigned int *)(v16 + 8)), result = (_QWORD *)(v16 + 16), v12 >= v15) )
      {
LABEL_10:
        if ( a4 )
        {
          if ( v13 || result < v11 && (v13 = result) != 0LL )
          {
            v17 = v13;
            result = v13;
LABEL_15:
            KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)v17 - v16) >> 4;
            return result;
          }
          ExpExpandResourceOwnerTable(a1, a3);
        }
        return 0LL;
      }
      while ( *result != a2 )
      {
        if ( *result )
        {
          if ( ++v12 == v15 )
          {
            result += 2;
            goto LABEL_10;
          }
        }
        else if ( !v13 )
        {
          v13 = result;
        }
        result += 2;
        if ( result == v11 )
          goto LABEL_10;
      }
      v17 = result;
      goto LABEL_15;
    }
  }
  return result;
}
