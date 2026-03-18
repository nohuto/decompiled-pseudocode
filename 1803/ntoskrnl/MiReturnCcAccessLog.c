/*
 * XREFs of MiReturnCcAccessLog @ 0x14007A104
 * Callers:
 *     MiCheckAndProcessCcAccessLog @ 0x14016A630 (MiCheckAndProcessCcAccessLog.c)
 *     MmPrefetchForCacheManager @ 0x1404BBCB8 (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x14007A164 (MiQueuePageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x14007AB38 (MmFreeAccessPfnBuffer.c)
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
  if ( !qword_1403CBF00 )
  {
    result = -_InterlockedCompareExchange64(&qword_1403CBF00, P, 0LL);
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
