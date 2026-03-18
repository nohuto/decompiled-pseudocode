/*
 * XREFs of KiGetThreadCpuSetMaskPointer @ 0x1401107DC
 * Callers:
 *     KeQueryCpuSetsThread @ 0x140202698 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x140202AA0 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadCpuSetMaskPointer(__int64 a1, _DWORD *a2)
{
  if ( (*(_DWORD *)(a1 + 1736) & 0x20000) != 0 )
  {
    if ( a2 )
      *a2 = (unsigned __int16)KiMaximumGroups;
    return *(_QWORD *)(a1 + 1984);
  }
  else
  {
    if ( a2 )
      *a2 = 1;
    return a1 + 1984;
  }
}
