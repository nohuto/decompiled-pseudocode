/*
 * XREFs of MiNoFaultFound @ 0x1400B53AC
 * Callers:
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiRaisedIrqlFault @ 0x1400B5050 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x140261DA4 (MiLargePageFault.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 */

_BOOL8 __fastcall MiNoFaultFound(
        __int64 a1,
        volatile signed __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        signed __int64 a6)
{
  unsigned int v6; // r11d
  BOOL v8; // ebx
  int v9; // edi
  signed __int64 v10; // r9
  __int64 v12; // rcx

  v6 = 0;
  v8 = 0;
  v9 = 0;
  v10 = a6;
  if ( (a6 & 0x20) != 0 )
  {
    if ( (MiFlags & 0x100) == 0 )
      v8 = (MiFlags & 0x200) == 0;
  }
  else
  {
    v10 = a6 | 0x20;
    v9 = 1;
  }
  if ( (*(_QWORD *)(a1 + 8) & 2) != 0 && (v10 & 2) == 0 )
  {
    v9 = 1;
    if ( (v10 & 0x42) == 0x40 )
      v8 = 1;
    v10 |= 0x62uLL;
  }
  if ( v9 && a6 != _InterlockedCompareExchange64(a2, v10, a6) )
    return 0LL;
  if ( v8 && (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 )
      v6 = MiTbFlushType(v12);
    KeFlushSingleTb(a3, v6, a5);
  }
  return v8;
}
