/*
 * XREFs of KiGetProcessCpuSetMaskPointer @ 0x14018174C
 * Callers:
 *     KeSetCpuSetsProcess @ 0x1401813DC (KeSetCpuSetsProcess.c)
 *     KeQueryCpuSetsProcess @ 0x140246800 (KeQueryCpuSetsProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetProcessCpuSetMaskPointer(__int64 a1, int a2, _DWORD *a3)
{
  if ( (*(_DWORD *)(a1 + 1740) & 0x80u) != 0 )
  {
    *a3 = (unsigned __int16)KiMaximumGroups;
    if ( a2 )
      return *(_QWORD *)(a1 + 1952);
    else
      return *(_QWORD *)(a1 + 1960);
  }
  else
  {
    *a3 = 1;
    return a1 + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 1960;
  }
}
