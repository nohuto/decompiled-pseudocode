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

__int64 __fastcall IoStartDiskIoAttributionForContext(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r8
  char v4; // bl
  __int64 v5; // rdi
  int v6; // esi
  KIRQL v7; // r15
  __int64 result; // rax
  __int64 v9; // rax

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  v4 = 0;
  v5 = IopDiskIoAttributionTree;
  v6 = BYTE8(IopDiskIoAttributionTree) & 1;
  v7 = v2;
  if ( (_QWORD)IopDiskIoAttributionTree )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare((unsigned __int64 *)(a1 + 24), v5) < 0 )
      {
        v9 = *(_QWORD *)v5;
        if ( v6 )
        {
          if ( !v9 )
            break;
          v9 ^= v5;
        }
        if ( !v9 )
          break;
      }
      else
      {
        v9 = *(_QWORD *)(v5 + 8);
        if ( v6 )
        {
          if ( !v9 )
          {
LABEL_6:
            v4 = 1;
            break;
          }
          v9 ^= v5;
        }
        if ( !v9 )
          goto LABEL_6;
      }
      v5 = v9;
    }
  }
  LOBYTE(v3) = v4;
  RtlRbInsertNodeEx(&IopDiskIoAttributionTree, v5, v3, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
  result = v7;
  __writecr8(v7);
  return result;
}
