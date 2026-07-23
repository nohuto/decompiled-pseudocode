/*
 * XREFs of sub_1800D4F58 @ 0x1800D4F58
 * Callers:
 *     sub_1800D4FBC @ 0x1800D4FBC (sub_1800D4FBC.c)
 * Callees:
 *     <none>
 */

char sub_1800D4F58()
{
  if ( (dword_18015B300 & 1) != 0 )
  {
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x2000000;
    *Value |= 1u;
  }
  else if ( (dword_18015B300 & 0x8000) != 0 )
  {
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x2000000;
  }
  return 1;
}
