/*
 * XREFs of PspJobIoRateVolumeEntryRemove @ 0x140284BAC
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x14077BEB4 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockTrackerCompare @ 0x140253D40 (MiLockTrackerCompare.c)
 */

unsigned __int64 __fastcall PspJobIoRateVolumeEntryRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  KIRQL v6; // al
  unsigned __int64 v7; // rbx
  KIRQL v8; // r15
  unsigned __int64 v9; // rax
  int v10; // esi
  int v11; // eax
  unsigned __int64 v12; // rax

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = a1 + 1448;
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v7 = *(_QWORD *)v4;
  v8 = v6;
  v9 = *(_QWORD *)(v4 + 8);
  if ( (v9 & 1) != 0 )
  {
    if ( v7 )
      v7 ^= v4;
    else
      v7 = 0LL;
  }
  v10 = v9 & 1;
  if ( v7 )
  {
    do
    {
      v11 = MiLockTrackerCompare(a2, v7);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v12 = *(_QWORD *)(v7 + 8);
      }
      else
      {
        v12 = *(_QWORD *)v7;
      }
      if ( v10 && v12 )
        v7 ^= v12;
      else
        v7 = v12;
    }
    while ( v7 );
    if ( v7 )
    {
      RtlRbRemoveNode(v4, v7);
      *(_QWORD *)(v7 + 16) = -1LL;
      v5 = v7;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  __writecr8(v8);
  return v5;
}
