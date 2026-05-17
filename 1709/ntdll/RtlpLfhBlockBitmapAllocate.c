/*
 * XREFs of RtlpLfhBlockBitmapAllocate @ 0x1801026D8
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x180107090 (RtlpHpLfhSubsegmentAllocateBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLfhBlockBitmapAllocate(
        unsigned __int64 *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  volatile signed __int64 *v5; // rsi
  unsigned __int64 v6; // rbx
  volatile signed __int64 *v7; // r10
  volatile signed __int64 *v8; // rbp
  signed __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // r11
  unsigned __int64 v12; // rcx
  bool v13; // zf
  signed __int64 v14; // rax
  int v16; // [rsp+20h] [rbp+10h]

  v5 = (volatile signed __int64 *)a1[1];
  v6 = *a1;
  v7 = &v5[(unsigned __int64)(unsigned int)(2 * a2) >> 6];
  v8 = &v5[(*a1 - 1) >> 6];
LABEL_2:
  if ( v6 >= 0x40 )
  {
    while ( 1 )
    {
      v9 = *v7;
      if ( (*v7 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      if ( v7 == v8 )
        v7 = v5;
      else
        ++v7;
    }
    if ( v7 == v8 && (v6 & 0x3F) != 0 && (v6 & 0x3F) < a4 )
      a4 = v6 & 0x3F;
  }
  else
  {
    v9 = *v7;
    if ( (unsigned int)v6 < a4 )
      a4 = v6;
  }
  a3 = ((a4 * a3) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    if ( a4 >= 0x40 )
    {
      v11 = 0x5555555555555555LL;
    }
    else
    {
      _BitScanForward64(&v10, ~v9 & 0x5555555555555555LL);
      a3 += v10;
      v11 = (((1LL << a4) - 1) << v10) & 0x5555555555555555LL;
    }
    _BitScanForward64(&v12, __ROR8__(v11 & ~v9, a3));
    v16 = ((_BYTE)a3 + (_BYTE)v12) & 0x3F;
    v14 = _InterlockedCompareExchange64(v7, v9 | (a5 << v16), v9);
    v13 = v9 == v14;
    v9 = v14;
    if ( v13 )
      return (v16 + ((unsigned int)(v7 - v5) << 6)) >> 1;
    if ( (v14 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      if ( ++v7 > v8 )
        v7 = v5;
      goto LABEL_2;
    }
  }
}
