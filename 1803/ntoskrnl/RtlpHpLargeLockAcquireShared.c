/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x14029ED38
 * Callers:
 *     RtlpHpLargeAllocSetExtraPresent @ 0x14029E5E4 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x14029E67C (RtlpHpLargeAllocSize.c)
 * Callees:
 *     RtlpHpAcquireLockShared @ 0x1402975A4 (RtlpHpAcquireLockShared.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquireShared(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockShared((volatile LONG *)(a1 + 72), *(_DWORD *)a1 & 1);
}
