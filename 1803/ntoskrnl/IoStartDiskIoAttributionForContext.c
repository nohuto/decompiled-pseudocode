/*
 * XREFs of IoStartDiskIoAttributionForContext @ 0x1400CC6B4
 * Callers:
 *     PspIoRateEntryActivate @ 0x140489D84 (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x14052F4C8 (PspSetJobIoAttribution.c)
 * Callees:
 *     IopDiskIoAttributionTreeCompare @ 0x14008E0DC (IopDiskIoAttributionTreeCompare.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall IoStartDiskIoAttributionForContext(PRTL_BALANCED_NODE Node)
{
  KIRQL v2; // al
  __int64 Root; // rdi
  BOOLEAN v4; // bl
  KIRQL v5; // r15
  int v6; // esi
  __int64 v7; // rax
  __int64 result; // rax

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  Root = (__int64)IopDiskIoAttributionTree.Root;
  v4 = 0;
  v5 = v2;
  if ( (*(_BYTE *)&IopDiskIoAttributionTree.0 & 1) != 0 )
  {
    if ( IopDiskIoAttributionTree.Root )
      Root = (unsigned __int64)&IopDiskIoAttributionTree ^ (unsigned __int64)IopDiskIoAttributionTree.Root;
    else
      Root = 0LL;
  }
  v6 = *(_BYTE *)&IopDiskIoAttributionTree.0 & 1;
  if ( Root )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare((unsigned __int64 *)&Node[1], Root) < 0 )
      {
        v7 = *(_QWORD *)Root;
        if ( v6 )
        {
          if ( !v7 )
            break;
          v7 ^= Root;
        }
        if ( !v7 )
          break;
      }
      else
      {
        v7 = *(_QWORD *)(Root + 8);
        if ( v6 )
        {
          if ( !v7 )
            goto LABEL_11;
          v7 ^= Root;
        }
        if ( !v7 )
        {
LABEL_11:
          v4 = 1;
          break;
        }
      }
      Root = v7;
    }
  }
  RtlRbInsertNodeEx(&IopDiskIoAttributionTree, (PRTL_BALANCED_NODE)Root, v4, Node);
  ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
  result = v5;
  __writecr8(v5);
  return result;
}
