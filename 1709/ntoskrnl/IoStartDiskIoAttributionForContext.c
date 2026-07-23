/*
 * XREFs of IoStartDiskIoAttributionForContext @ 0x140007CD0
 * Callers:
 *     PspIoRateEntryActivate @ 0x140445410 (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x1404457CC (PspSetJobIoAttribution.c)
 * Callees:
 *     IopDiskIoAttributionTreeCompare @ 0x1400079B0 (IopDiskIoAttributionTreeCompare.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall IoStartDiskIoAttributionForContext(PRTL_BALANCED_NODE Node)
{
  KIRQL v2; // al
  BOOLEAN v3; // bl
  __int64 Root; // rdi
  int v5; // esi
  KIRQL v6; // r15
  __int64 result; // rax
  unsigned __int64 v8; // rax

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  v3 = 0;
  Root = (__int64)IopDiskIoAttributionTree.Root;
  v5 = *(_BYTE *)&IopDiskIoAttributionTree.0 & 1;
  v6 = v2;
  if ( IopDiskIoAttributionTree.Root )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare((unsigned __int64 *)&Node[1], Root) < 0 )
      {
        v8 = *(_QWORD *)Root;
        if ( v5 )
        {
          if ( !v8 )
            break;
          v8 ^= Root;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(Root + 8);
        if ( v5 )
        {
          if ( !v8 )
          {
LABEL_6:
            v3 = 1;
            break;
          }
          v8 ^= Root;
        }
        if ( !v8 )
          goto LABEL_6;
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&IopDiskIoAttributionTree, (PRTL_BALANCED_NODE)Root, v3, Node);
  ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
  result = v6;
  __writecr8(v6);
  return result;
}
