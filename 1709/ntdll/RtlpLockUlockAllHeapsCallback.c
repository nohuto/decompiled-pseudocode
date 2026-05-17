/*
 * XREFs of RtlpLockUlockAllHeapsCallback @ 0x180012D60
 * Callers:
 *     <none>
 * Callees:
 *     RtlLockHeap @ 0x18004A090 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18004A120 (RtlUnlockHeap.c)
 */

__int64 __fastcall RtlpLockUlockAllHeapsCallback(__int64 a1, __int64 a2)
{
  if ( a2 )
    RtlLockHeap();
  else
    RtlUnlockHeap();
  return 0LL;
}
