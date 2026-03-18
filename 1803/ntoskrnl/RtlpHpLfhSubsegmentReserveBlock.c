/*
 * XREFs of RtlpHpLfhSubsegmentReserveBlock @ 0x14029D07C
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x14029A9A8 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentReserveBlock(__int64 a1, __int64 a2, int a3, unsigned __int16 *a4, _DWORD *a5)
{
  unsigned int v5; // r10d
  unsigned int v6; // r11d
  unsigned __int16 v9; // r9
  unsigned __int16 v10; // dx
  unsigned int v11; // edx

  v5 = 0;
  LOWORD(v6) = *(_WORD *)(a2 + 32);
  *a5 = 0;
  while ( 1 )
  {
    v9 = *a4;
    if ( *a4 >= (unsigned __int16)v6 )
      v9 = v6;
    if ( (unsigned __int16)v6 <= v9 && a3 == 1 )
      break;
    v10 = v6 - v9;
    v6 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(a2 + 32), v6 - v9, v6);
    v11 = v9 + v10;
    if ( (unsigned __int16)v6 == v11 )
    {
      *a4 = v9;
      return 1;
    }
    if ( v6 < v11 )
      *a5 = 1;
  }
  return v5;
}
