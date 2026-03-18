/*
 * XREFs of MiUpdateWsleAge @ 0x140124820
 * Callers:
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 * Callees:
 *     MiSetVaAge @ 0x14009E9C0 (MiSetVaAge.c)
 *     MiGetVaAge @ 0x1400E97AC (MiGetVaAge.c)
 */

char __fastcall MiUpdateWsleAge(__int64 a1, __int64 a2)
{
  char result; // al
  unsigned __int8 v4; // r9
  unsigned __int64 v5; // r10
  _QWORD *v6; // r11

  result = MiGetVaAge(a1, a2 << 25 >> 16);
  if ( v4 != result && (unsigned __int8)result < 8u && (v4 == 7 || result == 7) )
  {
    if ( !v4 )
      *v6 |= 0x20uLL;
    return MiSetVaAge(a1, v5, v4);
  }
  return result;
}
