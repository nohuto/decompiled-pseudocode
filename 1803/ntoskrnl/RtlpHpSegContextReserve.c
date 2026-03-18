/*
 * XREFs of RtlpHpSegContextReserve @ 0x140297C58
 * Callers:
 *     RtlpHpHeapCreate @ 0x140294F54 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpSegFreeRangeInsert @ 0x140297EF0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegHeapAddSegment @ 0x1402980A4 (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentAllocate @ 0x140298F5C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x140299178 (RtlpHpSegSegmentInitialize.c)
 */

__int64 __fastcall RtlpHpSegContextReserve(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v5; // edi
  unsigned __int64 v6; // r13
  unsigned int v7; // ebp
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r11

  v3 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = 0;
  v6 = ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 + a2 - 1) / (unsigned int)-*(_DWORD *)a1;
  v7 = (256 - *(unsigned __int8 *)(a1 + 10)) << *(_BYTE *)(a1 + 9);
  if ( v6 )
  {
    while ( 1 )
    {
      if ( v3 <= v7 )
      {
        v8 = v3;
        v3 = 0LL;
      }
      else
      {
        v8 = v7;
        v3 -= v7;
      }
      v9 = RtlpHpSegSegmentAllocate(a1, v8);
      v10 = v9;
      if ( !v9 )
        break;
      *(_DWORD *)(v9 + 32LL * *(unsigned __int8 *)(a1 + 10)) = -857879331;
      RtlpHpSegSegmentInitialize(a1, v9, v8);
      RtlpHpSegFreeRangeInsert(a1, v11, 1LL);
      RtlpHpSegHeapAddSegment(a1, v10);
      if ( !--v6 )
        return v5;
    }
    return (unsigned int)-1073741670;
  }
  return v5;
}
