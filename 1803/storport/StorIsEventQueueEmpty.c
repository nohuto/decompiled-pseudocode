/*
 * XREFs of StorIsEventQueueEmpty @ 0x1C003E4E8
 * Callers:
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C003C39C (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitHierarchicalReset @ 0x1C003CCD0 (RaidUnitHierarchicalReset.c)
 * Callees:
 *     <none>
 */

char __fastcall StorIsEventQueueEmpty(__int64 a1)
{
  char v2; // bl
  USHORT HighestNodeNumber; // ax
  int v4; // edx
  unsigned int v5; // r8d
  _QWORD *i; // rax

  v2 = 1;
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v4 = 0;
  v5 = HighestNodeNumber + 1;
  if ( HighestNodeNumber != -1 )
  {
    for ( i = (_QWORD *)(a1 + 64); (_QWORD *)*i == i; i += 7 )
    {
      if ( ++v4 >= v5 )
        return v2;
    }
    return 0;
  }
  return v2;
}
