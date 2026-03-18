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

__int64 __fastcall IoStartDiskIoAttributionForContext(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // r8
  __int64 v4; // rdi
  char v5; // bl
  KIRQL v6; // r15
  int v7; // esi
  __int64 v8; // rax
  __int64 result; // rax

  v2 = ExAcquireSpinLockExclusive(&IopDiskIoAttributionLock);
  v4 = IopDiskIoAttributionTree;
  v5 = 0;
  v6 = v2;
  if ( (BYTE8(IopDiskIoAttributionTree) & 1) != 0 )
  {
    if ( (_QWORD)IopDiskIoAttributionTree )
      v4 = (unsigned __int64)&IopDiskIoAttributionTree ^ IopDiskIoAttributionTree;
    else
      v4 = 0LL;
  }
  v7 = BYTE8(IopDiskIoAttributionTree) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( (int)IopDiskIoAttributionTreeCompare((unsigned __int64 *)(a1 + 24), v4) < 0 )
      {
        v8 = *(_QWORD *)v4;
        if ( v7 )
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
        if ( v7 )
        {
          if ( !v8 )
            goto LABEL_11;
          v8 ^= v4;
        }
        if ( !v8 )
        {
LABEL_11:
          v5 = 1;
          break;
        }
      }
      v4 = v8;
    }
  }
  LOBYTE(v3) = v5;
  RtlRbInsertNodeEx(&IopDiskIoAttributionTree, v4, v3, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&IopDiskIoAttributionLock);
  result = v6;
  __writecr8(v6);
  return result;
}
