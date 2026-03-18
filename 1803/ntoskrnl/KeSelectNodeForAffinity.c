/*
 * XREFs of KeSelectNodeForAffinity @ 0x1400CCDDC
 * Callers:
 *     KeStartThread @ 0x14003FBEC (KeStartThread.c)
 *     KiSetIdealNodeProcessByGroup @ 0x14006B7D8 (KiSetIdealNodeProcessByGroup.c)
 *     KiComputeThreadAffinity @ 0x1401329B0 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x140135C70 (KiSetAffinityThread.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSelectNodeForAffinity(__int64 a1)
{
  unsigned __int16 v2; // cx
  unsigned int v3; // r9d
  __int64 v4; // r8

  if ( KeNumberNodes == 1 )
    return KeNodeBlock[0];
  v2 = KiProcessNodeSeed++;
  if ( (unsigned __int16)KiProcessNodeSeed >= (unsigned __int16)KeNumberNodes )
    KiProcessNodeSeed = 0;
  v3 = 0;
  do
  {
    if ( v2 >= (unsigned __int16)KeNumberNodes )
      v2 = 0;
    v4 = KeNodeBlock[v2];
    if ( *(_WORD *)(v4 + 144) == *(_WORD *)(a1 + 8) && (*(_QWORD *)(v4 + 136) & *(_QWORD *)a1) != 0LL )
      return KeNodeBlock[v2];
    ++v3;
    ++v2;
  }
  while ( v3 < (unsigned __int16)KeNumberNodes );
  return 0LL;
}
