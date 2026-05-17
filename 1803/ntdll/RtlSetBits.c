/*
 * XREFs of RtlSetBits @ 0x1800510C0
 * Callers:
 *     sub_18004F9F4 @ 0x18004F9F4 (sub_18004F9F4.c)
 *     RtlFindClearBitsAndSet @ 0x180050D90 (RtlFindClearBitsAndSet.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800D3500 @ 0x1800D3500 (sub_1800D3500.c)
 * Callees:
 *     memset @ 0x1800A16C0 (memset.c)
 */

void __fastcall RtlSetBits(__int64 a1, unsigned int a2, unsigned int a3)
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
      v7 = byte_180120DD0[a3 + 16] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + a3 - 8;
      *v5++ |= byte_180120DD0[v4 + 32];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_180120DD0[v6 + 16];
      goto LABEL_4;
    }
  }
}
