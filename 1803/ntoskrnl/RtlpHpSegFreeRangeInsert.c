/*
 * XREFs of RtlpHpSegFreeRangeInsert @ 0x140297EF0
 * Callers:
 *     RtlpHpSegContextReserve @ 0x140297C58 (RtlpHpSegContextReserve.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402982C4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeShrink @ 0x140298D34 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeInsert(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned int v8; // r10d
  unsigned __int64 v9; // rdx
  bool v10; // r8
  int v11; // r9d
  unsigned __int64 v12; // rax

  v3 = 0LL;
  if ( !a3 && (*(_BYTE *)(a1 + 13) & 2) != 0 && *(unsigned __int8 *)(a2 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    v3 = a2 & *(_QWORD *)a1;
    *(_DWORD *)a2 = -857879297;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 64);
    v7 = a1 + 56;
    v8 = *(_DWORD *)(a2 + 28);
    v9 = *(_QWORD *)v7;
    if ( (v6 & 1) != 0 )
    {
      if ( v9 )
        v9 ^= v7;
      else
        v9 = 0LL;
    }
    v10 = 0;
    v11 = v6 & 1;
    if ( v9 )
    {
      while ( 1 )
      {
        if ( v8 < *(_DWORD *)(v9 + 28) )
        {
          v12 = *(_QWORD *)v9;
          if ( v11 )
          {
            if ( !v12 )
              goto LABEL_21;
            v12 ^= v9;
          }
          if ( !v12 )
          {
LABEL_21:
            v10 = 0;
            break;
          }
        }
        else
        {
          v12 = *(_QWORD *)(v9 + 8);
          if ( v11 )
          {
            if ( !v12 )
              goto LABEL_15;
            v12 ^= v9;
          }
          if ( !v12 )
          {
LABEL_15:
            v10 = 1;
            break;
          }
        }
        v9 = v12;
      }
    }
    RtlRbInsertNodeEx(v7, v9, v10, (_QWORD *)a2);
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 16LL),
      (unsigned __int16)~(*(_DWORD *)(a2 + 28) >> 8));
  }
  return v3;
}
