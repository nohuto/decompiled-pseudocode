/*
 * XREFs of EtwpAcquireGuidEntryExclusive @ 0x1800642DC
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180036244 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwDeliverDataBlock @ 0x180063BC0 (EtwDeliverDataBlock.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180064118 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpRegisterGuidsApiCallback @ 0x1800641B8 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpEventApiCallback @ 0x180077EF0 (EtwpEventApiCallback.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall EtwpAcquireGuidEntryExclusive(__int64 a1)
{
  struct _TEB *result; // rax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 40));
  result = NtCurrentTeb();
  *(_DWORD *)(a1 + 48) = result->ClientId.UniqueThread;
  return result;
}
