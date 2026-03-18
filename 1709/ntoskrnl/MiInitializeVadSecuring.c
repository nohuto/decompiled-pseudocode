/*
 * XREFs of MiInitializeVadSecuring @ 0x140856D5C
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 */

__int64 MiInitializeVadSecuring()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v3 = (v2 | (unsigned int)ExGenRandom(0)) ^ v1;
  result = 1LL;
  if ( !v3 )
    v3 = 1LL;
  qword_1403884F0 = v3;
  return result;
}
