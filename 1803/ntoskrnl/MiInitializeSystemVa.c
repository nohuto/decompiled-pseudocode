/*
 * XREFs of MiInitializeSystemVa @ 0x1408BB130
 * Callers:
 *     MmInitSystem @ 0x14089C070 (MmInitSystem.c)
 * Callees:
 *     MiAssignSharedUserRanges @ 0x14017D65C (MiAssignSharedUserRanges.c)
 *     MiRebaseDynamicRelocationRegions @ 0x1408BB1A4 (MiRebaseDynamicRelocationRegions.c)
 *     MiSetSystemRegionTypes @ 0x1408BB48C (MiSetSystemRegionTypes.c)
 *     MiAssignTopLevelRanges @ 0x1408BB5B0 (MiAssignTopLevelRanges.c)
 *     MiInitializeTopLevelBitmap @ 0x1408BB990 (MiInitializeTopLevelBitmap.c)
 */

__int64 __fastcall MiInitializeSystemVa(__int64 a1)
{
  unsigned int v2; // esi
  int v3; // ebx
  int v4; // eax

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 8) != 0 )
    MiFlags |= 0x400000u;
  v2 = 16;
  v3 = 8;
  do
  {
    while ( 1 )
    {
      MiInitializeTopLevelBitmap();
      v4 = MiAssignTopLevelRanges(v2);
      if ( v4 )
        goto LABEL_5;
      if ( !v3 )
        break;
      --v3;
    }
    v3 = 8;
LABEL_5:
    v2 >>= 1;
  }
  while ( !v4 );
  MiAssignSharedUserRanges(a1);
  MiSetSystemRegionTypes();
  return MiRebaseDynamicRelocationRegions(a1);
}
