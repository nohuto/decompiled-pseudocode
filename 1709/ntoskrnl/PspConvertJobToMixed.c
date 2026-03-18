/*
 * XREFs of PspConvertJobToMixed @ 0x140717750
 * Callers:
 *     PspBindProcessSessionToJob @ 0x14050CA64 (PspBindProcessSessionToJob.c)
 *     PspSetJobMemoryPartition @ 0x140718000 (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspConvertJobToMixed(__int64 a1, int a2)
{
  int v2; // eax

  if ( *(_DWORD *)(a1 + 480) != -2 )
  {
    v2 = *(_DWORD *)(a1 + 1304);
    if ( (v2 & 0x10) != 0
      || (v2 & 0x40000000) == 0 && ((*(_QWORD *)(a1 + 1544) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 && !a2 )
    {
      return 3221225506LL;
    }
    *(_DWORD *)(a1 + 480) = -2;
  }
  return 0LL;
}
