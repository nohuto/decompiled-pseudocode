/*
 * XREFs of RtlpHpHeapWalk @ 0x1800619F0
 * Callers:
 *     RtlpWalkHeapInternal @ 0x180061978 (RtlpWalkHeapInternal.c)
 * Callees:
 *     RtlpHpSegWalk @ 0x180061ADC (RtlpHpSegWalk.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18006F598 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeAllocReport @ 0x1801074D4 (RtlpHpLargeAllocReport.c)
 */

__int64 __fastcall RtlpHpHeapWalk(unsigned __int64 a1, unsigned __int64 *a2, __int64 a3)
{
  char v4; // bp
  unsigned __int64 v5; // rdx
  int v7; // esi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *Metadata; // rax
  unsigned __int64 v12; // rdx

  v4 = a3;
  v5 = *a2;
  if ( !v5 )
  {
    *((_DWORD *)a2 + 7) = 0;
    a2[1] = 4096LL;
    *((_WORD *)a2 + 9) = -32766;
    *((_DWORD *)a2 + 6) = 4096;
    *a2 = a1;
    *((_BYTE *)a2 + 17) = 0;
    a2[4] = a1;
    a2[5] = a1;
    return 0LL;
  }
  if ( v5 != a1 )
  {
    if ( (_WORD)v5 )
    {
      v7 = 0;
    }
    else
    {
      v10 = RtlCSparseBitmapBitmaskRead(a1, 2 * (v5 >> 20));
      if ( !v10 )
      {
LABEL_15:
        if ( *a2 )
        {
          Metadata = (__int64 *)RtlpHpLargeAllocGetMetadata(a1);
          v9 = 0LL;
          if ( Metadata )
          {
            v9 = *Metadata;
            if ( !*Metadata )
            {
              v9 = Metadata[1];
              if ( !v9 )
              {
                while ( Metadata != *(__int64 **)(a1 + 80) )
                {
                  v12 = Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( Metadata != *(__int64 **)(v12 + 8) && *(_QWORD *)(v12 + 8) )
                  {
                    v9 = *(_QWORD *)(v12 + 8);
                    goto LABEL_23;
                  }
                  Metadata = (__int64 *)(Metadata[2] & 0xFFFFFFFFFFFFFFFCuLL);
                }
                return 2147483674LL;
              }
            }
          }
        }
        else
        {
LABEL_8:
          v9 = *(_QWORD *)(a1 + 80);
          if ( !v9 )
            return 2147483674LL;
        }
LABEL_23:
        RtlpHpLargeAllocReport(a1, v9, a2);
        return 0LL;
      }
      v7 = v10 - 1;
    }
    if ( v7 < 2 )
      goto LABEL_6;
    goto LABEL_15;
  }
  *a2 = 0LL;
  v7 = 0;
LABEL_6:
  while ( 1 )
  {
    LOBYTE(a3) = v4;
    result = RtlpHpSegWalk(a1 + 104LL * v7 + 112, a2, a3);
    if ( (_DWORD)result != -2147483622 )
      return result;
    *a2 = 0LL;
    if ( ++v7 >= 2 )
      goto LABEL_8;
  }
}
