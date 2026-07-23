/*
 * XREFs of RtlCSparseBitmapBitsClear @ 0x18006213C
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x180003960 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpSegSegmentFree @ 0x1800620C0 (RtlpHpSegSegmentFree.c)
 * Callees:
 *     RtlpCSparseBitmapPageDecommit @ 0x180105BF0 (RtlpCSparseBitmapPageDecommit.c)
 */

void __fastcall RtlCSparseBitmapBitsClear(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r10
  unsigned __int64 v6; // rdi
  char *v7; // r11
  unsigned __int64 v8; // r8
  volatile signed __int32 *v9; // r9
  __int64 v10; // r14
  int v11; // eax
  unsigned __int64 v12; // r10
  char *v13; // r8
  char *v14; // r9
  char *i; // r8
  int v16; // eax

  while ( a3 )
  {
    v5 = a2 & 0x7FFF;
    v6 = 0x8000 - v5;
    if ( v5 + a3 <= 0x8000 )
      v6 = a3;
    if ( _bittest64((const signed __int64 *)RtlpHpAllocTrackerBitmap, a2 >> 15) )
    {
      v7 = (char *)BaseAddress + 4096 * (a2 >> 15);
      v8 = v6;
      v9 = (volatile signed __int32 *)&v7[4 * ((a2 & 0x7FFF) >> 5)];
      v10 = a2 & 0x1F;
      if ( v10 + v6 > 0x20 )
      {
        if ( (a2 & 0x1F) != 0 )
        {
          _InterlockedAnd(v9, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v10));
          v8 = v6 - (32 - (unsigned int)(a2 & 0x1F));
          ++v9;
        }
        while ( v8 >= 0x20 )
        {
          *v9++ = 0;
          v8 -= 32LL;
        }
        if ( v8 )
        {
          v11 = (1 << v8) - 1;
LABEL_8:
          _InterlockedAnd(v9, ~v11);
        }
      }
      else
      {
        if ( v6 != 32 )
        {
          v11 = ((1 << v6) - 1) << v10;
          goto LABEL_8;
        }
        *v9 = 0;
      }
      if ( v6 >= 0x200 )
      {
        v16 = 1;
      }
      else
      {
        v12 = a2 & 0x7E00;
        if ( v12 + 511 >= 0x8000 )
          goto LABEL_16;
        v13 = &v7[8 * (v12 >> 6)];
        v14 = &v7[8 * ((v12 + 511) >> 6)];
        if ( v13 == v14 )
        {
          LOBYTE(v16) = 1;
          goto LABEL_17;
        }
        if ( *(_QWORD *)v13 )
        {
LABEL_16:
          LOBYTE(v16) = 0;
          goto LABEL_17;
        }
        for ( i = v13 + 8; i != v14; i += 8 )
        {
          if ( *(_QWORD *)i )
            goto LABEL_16;
        }
        LOBYTE(v16) = *(_QWORD *)i == 0LL;
LABEL_17:
        v16 = (unsigned __int8)v16;
      }
      if ( v16 )
        RtlpCSparseBitmapPageDecommit(&RtlpHpAllocTrackerBitmap, a2 >> 15, v6 == 0x8000);
    }
    a2 += v6;
    a3 -= v6;
  }
}
