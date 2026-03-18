/*
 * XREFs of MiLockDriverMappings @ 0x140125758
 * Callers:
 *     MiReserveDriverPtes @ 0x14055D0C4 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140583170 (MiReleaseDriverPtes.c)
 * Callees:
 *     <none>
 */

void __fastcall MiLockDriverMappings(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036C0C0, 0LL);
}
