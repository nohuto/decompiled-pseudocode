/*
 * XREFs of RtlCSparseBitmapBitsClear @ 0x14029D4F0
 * Callers:
 *     RtlpHpVaMgrRangeCleanup @ 0x140296F5C (RtlpHpVaMgrRangeCleanup.c)
 *     RtlpHpVaMgrRangeCreate @ 0x140297130 (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpSegSegmentFree @ 0x1402990F4 (RtlpHpSegSegmentFree.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x14029D404 (RtlCSparseBitmapBitmaskWrite.c)
 * Callees:
 *     RtlpCSparseBitmapPageDecommit @ 0x14029DF34 (RtlpCSparseBitmapPageDecommit.c)
 */

void __fastcall RtlCSparseBitmapBitsClear(__int64 a1, signed __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  volatile signed __int32 *v10; // r8
  __int64 v11; // r11
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rdx
  __int64 *v15; // r10
  __int64 *i; // rdx
  __int64 v17; // r8

  while ( a3 > 0 )
  {
    v6 = a2 % 0x8000;
    v7 = 0x8000 - a2 % 0x8000;
    if ( a2 % 0x8000 + a3 <= 0x8000 )
      v7 = a3;
    if ( _bittest64((const signed __int64 *)a1, (unsigned __int64)a2 >> 30) )
    {
      if ( !_bittest64(*(const signed __int64 **)(a1 + 8), (unsigned __int64)a2 >> 15) )
        goto LABEL_34;
      v8 = *(_QWORD *)(a1 + 16) + ((a2 / 0x8000) << 12);
      v9 = v7;
      v10 = (volatile signed __int32 *)(v8 + 4 * (v6 >> 5));
      v11 = (a2 % 0x8000) & 0x1F;
      if ( (unsigned __int64)(v11 + v7) > 0x20 )
      {
        if ( (v6 & 0x1F) != 0 )
        {
          _InterlockedAnd(v10, ~(((1 << (32 - (v6 & 0x1F))) - 1) << v11));
          v9 = v7 - (32 - (unsigned int)(v6 & 0x1F));
          v6 = a2 % 0x8000;
          ++v10;
        }
        while ( v9 >= 0x20 )
        {
          *v10++ = 0;
          v9 -= 32LL;
        }
        if ( v9 )
        {
          v12 = (1 << v9) - 1;
          goto LABEL_16;
        }
      }
      else
      {
        if ( v7 == 32 )
        {
          *v10 = 0;
          goto LABEL_17;
        }
        v12 = ((1 << v7) - 1) << v11;
LABEL_16:
        _InterlockedAnd(v10, ~v12);
        v6 = a2 % 0x8000;
      }
LABEL_17:
      if ( v7 >= 512 )
      {
        v13 = 1;
        goto LABEL_30;
      }
      v6 &= 0xFFFFFFFFFFFFFE00uLL;
      if ( v6 + 511 < 0x8000 )
      {
        v14 = (__int64 *)(v8 + 8 * (v6 >> 6));
        v15 = (__int64 *)(v8 + 8 * ((v6 + 511) >> 6));
        if ( v14 == v15 )
        {
          LOBYTE(v13) = 1;
        }
        else
        {
          if ( (*v14 & (-1LL << v6)) != 0 )
            goto LABEL_20;
          for ( i = v14 + 1; ; ++i )
          {
            v17 = *i;
            if ( i == v15 )
              break;
            if ( v17 )
              goto LABEL_20;
          }
          LOBYTE(v13) = (v17 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v6 - 1))) == 0;
        }
      }
      else
      {
LABEL_20:
        LOBYTE(v13) = 0;
      }
      v13 = (unsigned __int8)v13;
LABEL_30:
      if ( v13 )
        RtlpCSparseBitmapPageDecommit(a1, a2 / 0x8000, v7 == 0x8000, v6, v13);
      goto LABEL_34;
    }
    v7 = 0x40000000 - a2 % 0x40000000;
    if ( a2 % 0x40000000 + a3 <= 0x40000000 )
      v7 = a3;
LABEL_34:
    a2 += v7;
    a3 -= v7;
  }
}
