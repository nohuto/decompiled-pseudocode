/*
 * XREFs of sub_1800DB7F0 @ 0x1800DB7F0
 * Callers:
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 * Callees:
 *     sub_1800DB71C @ 0x1800DB71C (sub_1800DB71C.c)
 *     sub_1800DB78C @ 0x1800DB78C (sub_1800DB78C.c)
 */

__int64 sub_1800DB7F0()
{
  int v0; // r8d
  unsigned int v1; // r9d
  unsigned int v2; // eax
  char v3; // al

  v0 = dword_18015AE48;
  v1 = 0;
  if ( (dword_18015AE48 & 0x8001) != 0 && !sub_1800DB78C() )
    v1 = -1073741823;
  if ( (v0 & 4) != 0 )
  {
    v2 = sub_1800DB71C();
    v0 = dword_18015AE48;
    v1 = v2;
  }
  if ( (v0 & 8) != 0 )
  {
    if ( NtCurrentPeb()->BeingDebugged || MEMORY[0x7FFE02D4] )
      NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x10000;
    v0 = dword_18015AE48;
  }
  v3 = byte_18015C3E0;
  if ( (v0 & 0x40000) != 0 )
    v3 = 1;
  byte_18015C3E0 = v3;
  return v1;
}
