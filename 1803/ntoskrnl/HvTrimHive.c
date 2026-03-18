/*
 * XREFs of HvTrimHive @ 0x140517868
 * Callers:
 *     CmpTrimHive @ 0x140495A18 (CmpTrimHive.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140052680 (MiDeprioritizeVirtualAddresses.c)
 *     HvpGetCellMap @ 0x1404E4320 (HvpGetCellMap.c)
 */

void __fastcall HvTrimHive(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 CellMap; // rax
  __int64 v7; // r10
  __int64 v8; // r10
  char *AnyMultiplexedVm; // rax
  __int64 v10; // r11
  __int64 v11; // r10

  if ( a2 < a3 )
  {
    v4 = a2;
    do
    {
      CellMap = HvpGetCellMap(a1, v4);
      v7 = *(_QWORD *)(CellMap + 8);
      if ( (v7 & 2) == 0 )
      {
        v8 = v7 | 4;
        *(_QWORD *)(CellMap + 8) = v8;
        if ( (v8 & 1) != 0 && (v8 & 8) != 0 )
        {
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
          MiDeprioritizeVirtualAddresses(
            v11 & 0xFFFFFFFFFFFFFFF0uLL,
            (unsigned __int64)*(unsigned int *)(v10 + 16) >> 12,
            (__int64)AnyMultiplexedVm,
            24);
        }
      }
      v4 += 4096;
    }
    while ( v4 < a3 );
  }
}
