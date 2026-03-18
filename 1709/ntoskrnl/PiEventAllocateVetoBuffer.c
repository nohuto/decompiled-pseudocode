/*
 * XREFs of PiEventAllocateVetoBuffer @ 0x14055D848
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PnpAllocateCriticalMemory @ 0x14055D8C8 (PnpAllocateCriticalMemory.c)
 */

_DWORD *__fastcall PiEventAllocateVetoBuffer(__int64 a1)
{
  unsigned int v1; // edi
  _DWORD *CriticalMemory; // rbx
  __int64 v3; // rax

  v1 = a1;
  CriticalMemory = (_DWORD *)PnpAllocateCriticalMemory(a1, 1LL, 24LL, 1299213904LL);
  if ( CriticalMemory )
  {
    v3 = PnpAllocateCriticalMemory(v1, 1LL, 1024LL, 1299213904LL);
    if ( v3 )
    {
      *CriticalMemory = 0;
      CriticalMemory[2] = 0x4000000;
      *((_QWORD *)CriticalMemory + 2) = v3;
    }
    else
    {
      ExFreePoolWithTag(CriticalMemory, 0x4D706E50u);
      return 0LL;
    }
  }
  return CriticalMemory;
}
