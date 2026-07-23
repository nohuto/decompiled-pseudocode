/*
 * XREFs of IoStartDiskIoAttributionForContext @ 0x14011F4F4
 * Callers:
 *     PspIoRateEntryActivate @ 0x14041EE10 (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x14054D468 (PspSetJobIoAttribution.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x14004A340 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     IopDiskIoAttributionTreeCompare @ 0x1400AE054 (IopDiskIoAttributionTreeCompare.c)
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
