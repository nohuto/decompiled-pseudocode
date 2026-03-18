/*
 * XREFs of ExpFindCurrentThread @ 0x140080790
 * Callers:
 *     ExpAcquireSharedStarveExclusive @ 0x14007CE20 (ExpAcquireSharedStarveExclusive.c)
 *     ExReleaseResourceForThreadLite @ 0x14007D110 (ExReleaseResourceForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1400801D0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140080900 (ExpAcquireResourceExclusiveLite.c)
 *     ExpBoostIoAfterAcquire @ 0x1400F19F0 (ExpBoostIoAfterAcquire.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14013EE50 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x140285CC0 (ExpTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     ExpExpandResourceOwnerTable @ 0x14011D5F0 (ExpExpandResourceOwnerTable.c)
 */

_QWORD *__fastcall ExpFindCurrentThread(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  __int64 v6; // r10
  _QWORD *result; // rax
  _QWORD *v12; // rdx
  unsigned __int64 v13; // r8
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r10
  unsigned __int64 v17; // r9
  _QWORD *v18; // rdx

  v6 = *(_QWORD *)(a1 + 48);
  result = (_QWORD *)(a1 + 48);
  if ( v6 != a2 )
  {
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    if ( v6 )
    {
      v13 = 1LL;
    }
    else
    {
      v14 = (_QWORD *)(a1 + 48);
      if ( a5 )
        v14 = 0LL;
    }
    if ( !a6
      || (v15 = *(_QWORD *)(a1 + 16)) == 0
      || a6 >= *(_DWORD *)(v15 + 8)
      || (result = (_QWORD *)(v15 + 16LL * a6), *result != a2) )
    {
      v16 = *(_QWORD *)(a1 + 16);
      result = (_QWORD *)v16;
      if ( v16 )
      {
        v17 = *(unsigned int *)(a1 + 64) + (unsigned __int64)*(unsigned int *)(a1 + 72);
        v12 = (_QWORD *)(v16 + 16LL * *(unsigned int *)(v16 + 8));
        result = (_QWORD *)(v16 + 16);
        if ( v13 < v17 )
        {
          while ( *result != a2 )
          {
            if ( *result )
            {
              if ( ++v13 == v17 )
              {
                result += 2;
                goto LABEL_16;
              }
            }
            else if ( !v14 )
            {
              v14 = result;
            }
            result += 2;
            if ( result == v12 )
              goto LABEL_16;
          }
          v18 = result;
          goto LABEL_21;
        }
      }
LABEL_16:
      if ( a4 )
      {
        if ( v14 || result < v12 && (v14 = result) != 0LL )
        {
          v18 = v14;
          result = v14;
LABEL_21:
          KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)v18 - v16) >> 4;
          return result;
        }
        ExpExpandResourceOwnerTable(a1, a3);
      }
      return 0LL;
    }
  }
  return result;
}
