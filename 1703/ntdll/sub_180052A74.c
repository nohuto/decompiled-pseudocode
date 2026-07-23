/*
 * XREFs of sub_180052A74 @ 0x180052A74
 * Callers:
 *     sub_18001ABBC @ 0x18001ABBC (sub_18001ABBC.c)
 *     sub_18001AF94 @ 0x18001AF94 (sub_18001AF94.c)
 *     EtwDeliverDataBlock @ 0x1800523B0 (EtwDeliverDataBlock.c)
 *     sub_1800528A4 @ 0x1800528A4 (sub_1800528A4.c)
 *     sub_180052944 @ 0x180052944 (sub_180052944.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall sub_180052A74(__int64 a1)
{
  struct _TEB *result; // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  result = NtCurrentTeb();
  *(_DWORD *)(a1 + 48) = result->ClientId.UniqueThread;
  return result;
}
