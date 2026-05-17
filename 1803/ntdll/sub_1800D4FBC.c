/*
 * XREFs of sub_1800D4FBC @ 0x1800D4FBC
 * Callers:
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 * Callees:
 *     sub_1800D4EE8 @ 0x1800D4EE8 (sub_1800D4EE8.c)
 *     sub_1800D4F58 @ 0x1800D4F58 (sub_1800D4F58.c)
 */

__int64 sub_1800D4FBC()
{
  int v0; // r8d
  unsigned int v1; // r9d
  unsigned int v2; // eax
  char v3; // al

  v0 = dword_18015B300;
  v1 = 0;
  if ( (dword_18015B300 & 0x8001) != 0 && !sub_1800D4F58() )
    v1 = -1073741823;
  if ( (v0 & 4) != 0 )
  {
    v2 = sub_1800D4EE8();
    v0 = dword_18015B300;
    v1 = v2;
  }
  if ( (v0 & 8) != 0 )
  {
    if ( NtCurrentPeb()->BeingDebugged || MEMORY[0x7FFE02D4] )
      NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag | 0x10000;
    v0 = dword_18015B300;
  }
  v3 = byte_18015D42A;
  if ( (v0 & 0x40000) != 0 )
    v3 = 1;
  byte_18015D42A = v3;
  return v1;
}
