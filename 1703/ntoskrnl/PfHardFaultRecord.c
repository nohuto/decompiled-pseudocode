/*
 * XREFs of PfHardFaultRecord @ 0x140010C3C
 * Callers:
 *     MiIssueHardFault @ 0x140096E10 (MiIssueHardFault.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 */

__int64 __fastcall PfHardFaultRecord(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a5 + 24);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a6 + 1600);
  *(_DWORD *)(a1 + 52) = a3;
  if ( (PerfGlobalGroupMask & 0x2000) != 0 )
  {
    EtwGetKernelTraceTimestamp(a1, 0x2000LL);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  result = (unsigned int)dword_140382C14;
  if ( (dword_140382C14 & 1) != 0 )
  {
    result = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000320];
  }
  else
  {
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
