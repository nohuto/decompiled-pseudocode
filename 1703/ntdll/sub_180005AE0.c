/*
 * XREFs of sub_180005AE0 @ 0x180005AE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLockHeap @ 0x18001F870 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x180021980 (RtlUnlockHeap.c)
 */

__int64 __fastcall sub_180005AE0(void *a1, __int64 a2)
{
  if ( a2 )
    RtlLockHeap(a1);
  else
    RtlUnlockHeap(a1);
  return 0LL;
}
