/*
 * XREFs of sub_1801042E8 @ 0x1801042E8
 * Callers:
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 * Callees:
 *     sub_1800FD1F4 @ 0x1800FD1F4 (sub_1800FD1F4.c)
 *     sub_1801043C8 @ 0x1801043C8 (sub_1801043C8.c)
 */

char __fastcall sub_1801042E8(int a1, int a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  char result; // al

  sub_1801043C8();
  v7 = (unsigned int)dword_18015D040;
  if ( (a1 & 8) != 0 )
  {
    v7 = dword_18015D040 | 0x10u;
    dword_18015D040 |= 0x10u;
  }
  if ( (a1 & 4) != 0 )
  {
    v7 = (unsigned int)v7 | 8;
    dword_18015D040 = v7;
  }
  if ( (a2 & 0x100000) != 0 || (a1 & 2) != 0 )
  {
    v7 = (unsigned int)v7 | 2;
    dword_18015D040 = v7;
  }
  LOBYTE(v5) = (v7 & 2) == 0;
  if ( ((unsigned __int8)v5 & ((a1 & 1) == 0)) == 0 )
  {
    v7 = (unsigned int)v7 | 4;
    dword_18015D040 = v7;
  }
  if ( (a1 & 0xFF00) != 0 )
    dword_180159764 = BYTE1(a1);
  if ( (a1 & 0xFF0000) != 0 )
    dword_18015A43C = BYTE2(a1);
  if ( (a1 & 0x10) != 0 )
    sub_1800FD1F4(v5, v4, (unsigned __int64 *)v7, v6);
  result = byte_18015D028;
  if ( (a1 & 0x20) != 0 )
  {
    result = byte_18015D028 | 4;
    byte_18015D028 |= 4u;
  }
  if ( (a1 & 0x40) != 0 )
    dword_180159760 = 0;
  if ( (a1 & 0x80u) != 0 )
  {
    result |= 8u;
    byte_18015D028 = result;
  }
  return result;
}
