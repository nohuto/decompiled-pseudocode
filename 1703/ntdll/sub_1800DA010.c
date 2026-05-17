/*
 * XREFs of sub_1800DA010 @ 0x1800DA010
 * Callers:
 *     sub_1800DA0F4 @ 0x1800DA0F4 (sub_1800DA0F4.c)
 * Callees:
 *     RtlSetBits @ 0x180059A60 (RtlSetBits.c)
 */

char __fastcall sub_1800DA010(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rdx
  unsigned int v6; // r10d
  unsigned int v7; // ebx
  __int64 v9; // rcx
  _DWORD *v10; // rdx
  _DWORD *v11; // rdi
  unsigned int v12; // r8d
  bool v13; // zf
  int i; // eax

  if ( !a4 )
    return 0;
  if ( a1 > a3 )
    return 0;
  if ( a3 + a4 < a3 )
    return 0;
  v5 = a1 + a2;
  if ( v5 < a1 )
    return 0;
  if ( a3 + a4 > v5 )
    return 0;
  v6 = a3 - a1;
  v7 = a3 - a1 + a4 - 1;
  if ( v7 >= *(_DWORD *)a5 )
    return 0;
  if ( (unsigned int)a4 > 1 )
  {
    v9 = *(_QWORD *)(a5 + 8);
    v10 = (_DWORD *)(v9 + 4 * ((unsigned __int64)v6 >> 5));
    v11 = (_DWORD *)(v9 + 4 * ((unsigned __int64)v7 >> 5));
    if ( v10 != v11 )
    {
      v13 = ((-1 << v6) & *v10) == 0;
      for ( i = 0; ; i = 0 )
      {
        LOBYTE(i) = v13;
        if ( !i )
          break;
        if ( ++v10 == v11 )
        {
          v12 = 0xFFFFFFFF >> ~(_BYTE)v7;
          goto LABEL_18;
        }
        v13 = *v10 == 0;
      }
      return 0;
    }
    v12 = 0xFFFFFFFF >> (32 - a4) << v6;
LABEL_18:
    if ( (v12 & *v10) != 0 )
      return 0;
  }
  else if ( (_DWORD)a4 != 1 || _bittest(*(const signed __int32 **)(a5 + 8), v6) )
  {
    return 0;
  }
  RtlSetBits(a5, v6, a4);
  return 1;
}
