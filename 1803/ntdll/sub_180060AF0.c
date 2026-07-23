/*
 * XREFs of sub_180060AF0 @ 0x180060AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnlockHeap @ 0x18001FB70 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x18001FC90 (RtlLockHeap.c)
 */

__int64 __fastcall sub_180060AF0(void *a1, __int64 a2)
{
  if ( a2 )
    RtlLockHeap(a1);
  else
    RtlUnlockHeap(a1);
  return 0LL;
}
