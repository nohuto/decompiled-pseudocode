/*
 * XREFs of RtlpInitializeThreadActivationContextStack @ 0x1800783E0
 * Callers:
 *     LdrpInitializeThread @ 0x18002EC08 (LdrpInitializeThread.c)
 *     RtlFreeThreadActivationContextStack @ 0x1800783B0 (RtlFreeThreadActivationContextStack.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInitializeThreadActivationContextStack(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*(_QWORD *)(a1 + 712) )
  {
    *(_DWORD *)(a1 + 680) = 0;
    *(_QWORD *)(a1 + 656) = 0LL;
    *(_QWORD *)(a1 + 672) = a1 + 664;
    *(_QWORD *)(a1 + 664) = a1 + 664;
    *(_DWORD *)(a1 + 684) = 1;
    result = MEMORY[0x7FFE0320];
    *(_DWORD *)(a1 + 688) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    *(_DWORD *)(a1 + 680) = 2;
    *(_QWORD *)(a1 + 712) = a1 + 656;
  }
  return result;
}
