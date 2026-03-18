/*
 * XREFs of PopFxMergeActiveTimeBuckets @ 0x140275918
 * Callers:
 *     PopFxPauseDeviceAccounting @ 0x14027593C (PopFxPauseDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x140276A14 (PopFxStopDeviceAccounting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxMergeActiveTimeBuckets(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 88);
  v2 = 5LL;
  do
  {
    result = *(v1 - 5);
    *v1++ += result;
    --v2;
  }
  while ( v2 );
  return result;
}
