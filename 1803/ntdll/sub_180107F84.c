/*
 * XREFs of sub_180107F84 @ 0x180107F84
 * Callers:
 *     sub_180048564 @ 0x180048564 (sub_180048564.c)
 *     TpAlpcRegisterCompletionList @ 0x180107EF0 (TpAlpcRegisterCompletionList.c)
 * Callees:
 *     ZwAlpcSetInformation @ 0x18009BC10 (ZwAlpcSetInformation.c)
 */

__int64 __fastcall sub_180107F84(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  signed __int32 v4; // r8d

  result = *(_DWORD *)(a1 + 288) & 3;
  if ( (*(_BYTE *)(a1 + 288) & 3) == 3 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(a1 + 284);
      v3 = MEMORY[0x7FFE03C0] + *(_DWORD *)(*(_QWORD *)(a1 + 216) + 420LL);
      v4 = v3 + MEMORY[0x7FFE03C0];
      if ( (int)result >= v3 && (int)result <= v4 + MEMORY[0x7FFE03C0] )
        break;
      if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 284), v4, result) )
        ZwAlpcSetInformation();
    }
  }
  return result;
}
