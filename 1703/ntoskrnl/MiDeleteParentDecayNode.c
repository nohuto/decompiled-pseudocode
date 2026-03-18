/*
 * XREFs of MiDeleteParentDecayNode @ 0x14001683C
 * Callers:
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140138F10 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiRemoveDecayClusterTimer @ 0x1400168C8 (MiRemoveDecayClusterTimer.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 */

unsigned __int8 __fastcall MiDeleteParentDecayNode(__int64 a1)
{
  __int64 v1; // rcx
  ULONG_PTR v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // al
  unsigned __int8 result; // al

  v1 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
  v2 = 48 * v1 - 0x58000000000LL;
  *(_QWORD *)(v2 + 16) = MiMakeTransitionPte(v1, 4LL);
  *(_QWORD *)(v2 + 40) ^= v4 & (v3 ^ *(_QWORD *)(v2 + 40));
  MiUnlinkPageFromList(v2);
  MiRemoveDecayClusterTimer(v2);
  v5 = *(_BYTE *)(v2 + 35);
  if ( (v5 & 8) == 0 )
    return (unsigned __int8)RtlpInterlockedPushEntrySList(&stru_14036CBF0, (PSLIST_ENTRY)v2);
  result = v5 & 0xF7;
  *(_BYTE *)(v2 + 35) = result;
  return result;
}
