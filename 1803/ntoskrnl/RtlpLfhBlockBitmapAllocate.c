/*
 * XREFs of RtlpLfhBlockBitmapAllocate @ 0x14029ED64
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x14029B370 (RtlpHpLfhSubsegmentAllocateBlock.c)
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
  unsigned __int64 v6; // r11
  volatile signed __int64 *v7; // r10
  volatile signed __int64 *v8; // rbp
  signed __int64 v9; // rdi
  volatile signed __int64 *v10; // rax
  signed __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // ecx
  bool v16; // zf
  signed __int64 v17; // rax
  volatile signed __int64 *v18; // rax

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
      v10 = v7++;
      if ( v10 == v8 )
        v7 = v5;
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
    v11 = ~v9;
    if ( a4 >= 0x40 )
    {
      v13 = 0x5555555555555555LL;
    }
    else
    {
      _BitScanForward64(&v12, v11 & 0x5555555555555555LL);
      a3 += v12;
      v13 = (((1LL << a4) - 1) << v12) & 0x5555555555555555LL;
    }
    _BitScanForward64(&v14, __ROR8__(v13 & v11, a3));
    v15 = ((_BYTE)a3 + (_BYTE)v14) & 0x3F;
    v17 = _InterlockedCompareExchange64(v7, v9 | (a5 << v15), v9);
    v16 = v9 == v17;
    v9 = v17;
    if ( v16 )
      return (v15 + ((unsigned int)(v7 - v5) << 6)) >> 1;
    if ( (v17 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      v18 = v7 + 1;
      v7 = v5;
      if ( v18 <= v8 )
        v7 = v18;
      goto LABEL_2;
    }
  }
}
