/*
 * XREFs of MiActOnMirrorBitmap @ 0x14057AB74
 * Callers:
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     MiUpdateMirrorBitmaps @ 0x14057AB34 (MiUpdateMirrorBitmaps.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1400AECC0 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 *     MiSplitMirrorBitMap @ 0x14057AC10 (MiSplitMirrorBitMap.c)
 */

__int64 __fastcall MiActOnMirrorBitmap(__int64 a1, int a2)
{
  unsigned int *v2; // rsi
  unsigned int v3; // edi
  unsigned int i; // ebx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx

  v2 = (unsigned int *)MmPhysicalMemoryBlock;
  v3 = 0;
  for ( i = 1; v3 < *v2; ++v3 )
  {
    v7 = *(_QWORD *)&v2[4 * v3 + 6];
    v8 = *(_QWORD *)&v2[4 * v3 + 4];
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        RtlSetBitsEx(a1, v8, v7);
      }
      else if ( a2 == 2 )
      {
        RtlClearBitsEx(a1, v8, v7);
      }
    }
    else if ( !(unsigned int)MiSplitMirrorBitMap(a1, v8, v7) )
    {
      return 0;
    }
  }
  return i;
}
