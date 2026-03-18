/*
 * XREFs of MiReturnCcAccessLog @ 0x140007EDC
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14009C460 (MiTrimOrAgeWorkingSet.c)
 *     MiCheckAndProcessCcAccessLog @ 0x140230700 (MiCheckAndProcessCcAccessLog.c)
 *     MmPrefetchForCacheManager @ 0x140492FC0 (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x140007F3C (MiQueuePageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x140011CE0 (MmFreeAccessPfnBuffer.c)
 */

__int64 __fastcall MiReturnCcAccessLog(signed __int64 P, int a2)
{
  _QWORD *v2; // r8
  __int64 result; // rax

  v2 = (_QWORD *)P;
  if ( a2 )
  {
    result = *(_QWORD *)(P + 24);
    *(_QWORD *)(P + 32) = result;
  }
  if ( !qword_140388C40 )
  {
    result = -_InterlockedCompareExchange64(&qword_140388C40, P, 0LL);
    v2 = (_QWORD *)(-(__int64)(result != 0) & P);
  }
  if ( v2 )
  {
    if ( (_QWORD *)v2[4] == v2 + 9 )
      return MmFreeAccessPfnBuffer(v2);
    else
      return MiQueuePageAccessLog(v2);
  }
  return result;
}
