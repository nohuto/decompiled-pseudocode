/*
 * XREFs of KiGetProcessCpuSetMaskPointer @ 0x140202E74
 * Callers:
 *     KeQueryCpuSetsProcess @ 0x140202600 (KeQueryCpuSetsProcess.c)
 *     KeSetCpuSetsProcess @ 0x1402028C0 (KeSetCpuSetsProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetProcessCpuSetMaskPointer(__int64 a1, int a2, _DWORD *a3)
{
  if ( (*(_DWORD *)(a1 + 1740) & 0x200) != 0 )
  {
    *a3 = (unsigned __int16)KiMaximumGroups;
    if ( a2 )
      return *(_QWORD *)(a1 + 1928);
    else
      return *(_QWORD *)(a1 + 1936);
  }
  else
  {
    *a3 = 1;
    return a1 + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 1936;
  }
}
