/*
 * XREFs of sub_1800DB78C @ 0x1800DB78C
 * Callers:
 *     sub_1800DB7F0 @ 0x1800DB7F0 (sub_1800DB7F0.c)
 * Callees:
 *     <none>
 */

char sub_1800DB78C()
{
  if ( (dword_18015AE48 & 1) != 0 )
  {
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x2000000;
    *Value |= 1u;
  }
  else if ( (dword_18015AE48 & 0x8000) != 0 )
  {
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x2000000;
  }
  return 1;
}
