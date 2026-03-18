/*
 * XREFs of MiPreparePlaceholderVadReplacement @ 0x14075517C
 * Callers:
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     MiRemovePlaceholderVad @ 0x140268600 (MiRemovePlaceholderVad.c)
 *     PerfInfoLogVirtualFree @ 0x1407A93FC (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MiPreparePlaceholderVadReplacement(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a3 + 176));
  MiReferenceVad(a1);
  MiRemovePlaceholderVad(v5);
  result = *(unsigned int *)(a1 + 28);
  *(_QWORD *)(a2 + 824) += (((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                           - (result | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))) << 12)
                         - 4096;
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
  {
    v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    return PerfInfoLogVirtualFree(
             v7 << 12,
             ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) - v7 + 1) << 12,
             a2);
  }
  return result;
}
