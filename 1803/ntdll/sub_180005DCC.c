/*
 * XREFs of sub_180005DCC @ 0x180005DCC
 * Callers:
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 *     sub_180005D90 @ 0x180005D90 (sub_180005D90.c)
 *     sub_180029AF4 @ 0x180029AF4 (sub_180029AF4.c)
 *     sub_180074A2C @ 0x180074A2C (sub_180074A2C.c)
 *     sub_180081554 @ 0x180081554 (sub_180081554.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall sub_180005DCC(__int64 a1)
{
  struct _TEB *result; // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  result = NtCurrentTeb();
  *(_DWORD *)(a1 + 48) = result->ClientId.UniqueThread;
  return result;
}
