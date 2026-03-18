/*
 * XREFs of MiLockDriverMappings @ 0x1400F8E80
 * Callers:
 *     MiReleaseDriverPtes @ 0x1405413F0 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140541558 (MiReserveDriverPtes.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDriverMappings(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140388400, 0LL);
}
