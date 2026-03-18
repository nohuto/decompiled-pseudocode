/*
 * XREFs of MiWakeLargePageRebuild @ 0x140155D70
 * Callers:
 *     MiSignalLargePageRebuild @ 0x1400809A4 (MiSignalLargePageRebuild.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400E7480 (MiUnlinkNodeLargePageHelper.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 */

__int64 __fastcall MiWakeLargePageRebuild(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r10
  unsigned __int8 v4; // al
  __int64 *v5; // r8
  unsigned __int64 v6; // r9
  ULONG_PTR v7; // r10
  __int64 v8; // r11
  unsigned int v9; // ebx

  v3 = 1984LL * a2 + *(_QWORD *)(a1 + 16) + 816LL;
  if ( *(_BYTE *)(v3 + 33) || *(_BYTE *)(v3 + 34) != 8 && (a3 & 1) == 0 )
    return 1LL;
  v4 = PsReferencePartitionSafe(*(_QWORD *)(a1 + 168));
  v9 = v4;
  if ( v4 == 1 )
  {
    *(_BYTE *)(v7 + 33) = v4;
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)(v7 + 16) = MiRebuildLargePages;
    *(_QWORD *)(v7 + 24) = (v8 << 58) | (v6 >> 4) & 0x3FFFFFFFFFFFFFFLL;
    ExQueueWorkItemToPartition(v7, v4 + 3, 0xFFFFFFFF, *v5);
  }
  return v9;
}
