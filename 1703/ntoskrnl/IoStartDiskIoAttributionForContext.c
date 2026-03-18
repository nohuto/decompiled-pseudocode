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

__int64 __fastcall IoStartDiskIoAttributionForContext(unsigned __int64 a1)
{
  KIRQL v2; // al
  bool v3; // bl
  unsigned __int64 v4; // rdi
  int v5; // esi
  KIRQL v6; // r15
  __int64 result; // rax
  unsigned __int64 v8; // rax

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  v3 = 0;
  v4 = IopDiskIoAttributionTree;
  v5 = BYTE8(IopDiskIoAttributionTree) & 1;
  v6 = v2;
  if ( (_QWORD)IopDiskIoAttributionTree )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare((unsigned __int64 *)(a1 + 24), v4) < 0 )
      {
        v8 = *(_QWORD *)v4;
        if ( v5 )
        {
          if ( !v8 )
            break;
          v8 ^= v4;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          if ( !v8 )
          {
LABEL_6:
            v3 = 1;
            break;
          }
          v8 ^= v4;
        }
        if ( !v8 )
          goto LABEL_6;
      }
      v4 = v8;
    }
  }
  RtlRbInsertNodeEx((__int64)&IopDiskIoAttributionTree, v4, v3, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
  result = v6;
  __writecr8(v6);
  return result;
}
