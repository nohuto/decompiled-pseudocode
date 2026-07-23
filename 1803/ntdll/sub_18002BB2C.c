/*
 * XREFs of sub_18002BB2C @ 0x18002BB2C
 * Callers:
 *     sub_18002B1E8 @ 0x18002B1E8 (sub_18002B1E8.c)
 * Callees:
 *     ZwQueryPerformanceCounter @ 0x18009B0E0 (ZwQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall sub_18002BB2C(__int64 a1)
{
  unsigned __int64 v2; // rdi
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v2 = LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) ^ LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ MEMORY[0x7FFE0014] ^ (unsigned __int64)MEMORY[0x7FFE0018] ^ (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) ^ ((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24 << 24);
  ZwQueryPerformanceCounter(&PerformanceCounter, 0LL);
  return a1 ^ v2 ^ PerformanceCounter.QuadPart ^ ((unsigned __int64)PerformanceCounter.LowPart << 32);
}
