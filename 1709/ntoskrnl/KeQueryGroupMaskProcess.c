/*
 * XREFs of KeQueryGroupMaskProcess @ 0x14008A924
 * Callers:
 *     PspWritePebAffinityInfo @ 0x14045F5C4 (PspWritePebAffinityInfo.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return (*(_DWORD *)(a1 + 440) >> 9) & 0xFFFFF;
}
