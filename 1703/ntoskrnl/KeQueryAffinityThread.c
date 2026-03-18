/*
 * XREFs of KeQueryAffinityThread @ 0x1400072C0
 * Callers:
 *     NtQueryInformationThread @ 0x140424560 (NtQueryInformationThread.c)
 *     MiCombineAllPhysicalMemory @ 0x140569FE0 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KeQueryAffinityThread(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a2 + 10) = 0;
  *(_WORD *)(a2 + 14) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 560);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 552);
  *(_QWORD *)(a1 + 64) = 0LL;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
