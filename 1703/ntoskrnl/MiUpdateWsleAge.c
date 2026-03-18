/*
 * XREFs of MiUpdateWsleAge @ 0x14007C37C
 * Callers:
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 * Callees:
 *     MiSetVaAge @ 0x1400FDA60 (MiSetVaAge.c)
 *     MiGetVaAge @ 0x140100990 (MiGetVaAge.c)
 */

__int64 __fastcall MiUpdateWsleAge(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  char v5; // r9
  __int64 v6; // r10
  _QWORD *v7; // r11

  result = MiGetVaAge(a1, a2 << 25 >> 16);
  if ( v5 != (_BYTE)result && (unsigned __int8)result < 8u && (v5 == 7 || (_BYTE)result == 7) )
  {
    if ( !v5 )
      *v7 |= 0x20uLL;
    LOBYTE(v4) = v5;
    return MiSetVaAge(a1, v6, v4);
  }
  return result;
}
