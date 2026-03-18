/*
 * XREFs of ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z @ 0x1C00A1A9C
 * Callers:
 *     ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C0074B10 (-DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@PEAVCMutex@@@Z @ 0x1C0074CF0 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 *     ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z @ 0x1C0074DC0 (-GetFirstElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CList<COPMProtectedOutput>::GetNextElementIndex(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v4; // r9d
  unsigned int v5; // ecx
  unsigned int v6; // eax

  if ( a2 + 1 < a2 )
    return 0;
  v4 = a2 + 1;
  v5 = *(_DWORD *)(a1 + 12);
  if ( a2 + 1 >= v5 )
    return 0;
  while ( !*(_QWORD *)(*(_QWORD *)a1 + 8LL * v4) )
  {
    v6 = v4 + 1;
    if ( v4 + 1 >= v4 )
    {
      ++v4;
      if ( v6 < v5 )
        continue;
    }
    return 0;
  }
  *a3 = v4;
  return 1;
}
