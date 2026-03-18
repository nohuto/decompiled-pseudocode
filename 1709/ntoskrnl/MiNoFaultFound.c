/*
 * XREFs of MiNoFaultFound @ 0x140116D14
 * Callers:
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiLargePageFault @ 0x140228A74 (MiLargePageFault.c)
 *     MiRaisedIrqlFault @ 0x140228D0C (MiRaisedIrqlFault.c)
 * Callees:
 *     MiTbFlushType @ 0x1400A5D50 (MiTbFlushType.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 */

_BOOL8 __fastcall MiNoFaultFound(
        char a1,
        volatile signed __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7)
{
  unsigned int v7; // r11d
  BOOL v9; // ebx
  int v10; // edi
  signed __int64 v11; // r9

  v7 = 0;
  v9 = 0;
  v10 = 0;
  v11 = a7;
  if ( (a7 & 0x20) != 0 )
  {
    if ( (MiFlags & 0x100) == 0 )
      v9 = (MiFlags & 0x200) == 0;
  }
  else
  {
    v11 = a7 | 0x20;
    v10 = 1;
  }
  if ( (a1 & 2) != 0 && (v11 & 2) == 0 )
  {
    v10 = 1;
    if ( (v11 & 0x42) == 0x40 )
      v9 = 1;
    v11 |= 0x62uLL;
  }
  if ( v10 && a7 != _InterlockedCompareExchange64(a2, v11, a7) )
    return 0LL;
  if ( v9 && (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
  {
    if ( a5 )
      v7 = MiTbFlushType(a5);
    KeFlushSingleTb(a3, v7, a6);
  }
  return v9;
}
