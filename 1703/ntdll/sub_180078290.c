/*
 * XREFs of sub_180078290 @ 0x180078290
 * Callers:
 *     sub_180041490 @ 0x180041490 (sub_180041490.c)
 *     RtlFreeThreadActivationContextStack @ 0x180078260 (RtlFreeThreadActivationContextStack.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180078290(__int64 a1)
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
