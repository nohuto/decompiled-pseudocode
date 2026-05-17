/*
 * XREFs of sub_180038F14 @ 0x180038F14
 * Callers:
 *     sub_18003A528 @ 0x18003A528 (sub_18003A528.c)
 * Callees:
 *     ZwQueryPerformanceCounter @ 0x1800A5920 (ZwQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall sub_180038F14(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) ^ MEMORY[0x7FFE0014] ^ (unsigned __int64)MEMORY[0x7FFE0018] ^ (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) ^ ((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24 << 24);
  ZwQueryPerformanceCounter(&v4, 0LL);
  return a1 ^ v2 ^ v4 ^ ((unsigned __int64)(unsigned int)v4 << 32);
}
