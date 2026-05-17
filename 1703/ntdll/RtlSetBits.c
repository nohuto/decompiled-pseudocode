/*
 * XREFs of RtlSetBits @ 0x180059A60
 * Callers:
 *     sub_1800584E4 @ 0x1800584E4 (sub_1800584E4.c)
 *     sub_180058A44 @ 0x180058A44 (sub_180058A44.c)
 *     RtlFindClearBitsAndSet @ 0x180059710 (RtlFindClearBitsAndSet.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     sub_1800DA010 @ 0x1800DA010 (sub_1800DA010.c)
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
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
      v7 = byte_180123730[a3] << v4;
LABEL_4:
      *v5 |= v7;
      return;
    }
    if ( (_DWORD)v4 )
    {
      v6 = (unsigned int)v4 + a3 - 8;
      *v5++ |= byte_180121000[v4 + 16];
    }
    if ( (unsigned int)v6 > 8 )
    {
      memset(v5, 255, (unsigned __int64)(unsigned int)v6 >> 3);
      v5 += (unsigned __int64)(unsigned int)v6 >> 3;
      v6 &= 7u;
    }
    if ( (_DWORD)v6 )
    {
      v7 = byte_180123730[v6];
      goto LABEL_4;
    }
  }
}
