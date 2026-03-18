/*
 * XREFs of MiUpdateWsleAge @ 0x14004F124
 * Callers:
 *     MiActOnPte @ 0x140050360 (MiActOnPte.c)
 * Callees:
 *     MiSetVaAge @ 0x140125600 (MiSetVaAge.c)
 *     MiGetVaAge @ 0x14012A280 (MiGetVaAge.c)
 */

__int64 __fastcall MiUpdateWsleAge(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r8
  char v7; // r9
  __int64 v8; // r10
  _QWORD *v9; // r11

  LOBYTE(a4) = a3;
  result = MiGetVaAge(a1, a2 << 25 >> 16, a3, a4);
  if ( v7 != (_BYTE)result && (unsigned __int8)result < 8u && (v7 == 7 || (_BYTE)result == 7) )
  {
    if ( !v7 )
      *v9 |= 0x20uLL;
    LOBYTE(v6) = v7;
    return MiSetVaAge(a1, v8, v6);
  }
  return result;
}
