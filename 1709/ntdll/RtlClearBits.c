/*
 * XREFs of RtlClearBits @ 0x18001C050
 * Callers:
 *     RtlFlsFree @ 0x18001B5C0 (RtlFlsFree.c)
 *     LdrpInitializeTls @ 0x18001C128 (LdrpInitializeTls.c)
 *     LdrpAcquireTlsIndex @ 0x18001CC28 (LdrpAcquireTlsIndex.c)
 *     RtlFindSetBitsAndClear @ 0x1800E9990 (RtlFindSetBitsAndClear.c)
 * Callees:
 *     memset @ 0x1800A6C80 (memset.c)
 */

void __fastcall RtlClearBits(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rdx
  _BYTE *v5; // rdi
  __int64 v6; // rsi
  char v7; // al

  if ( a3 )
  {
    v3 = a2;
    v4 = a2 & 7;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 8) + (v3 >> 3));
    v6 = a3;
    if ( (unsigned int)v4 + a3 <= 8 )
    {
      v7 = ~(byte_1801265C8[a3] << v4);
LABEL_4:
      *v5 &= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + a3 - 8;
      *v5++ &= byte_1801265C8[v4];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 0, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_180123FC0[v6];
      goto LABEL_4;
    }
  }
}
