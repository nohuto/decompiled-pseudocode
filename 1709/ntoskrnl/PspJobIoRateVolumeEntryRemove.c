/*
 * XREFs of PspJobIoRateVolumeEntryRemove @ 0x14024E828
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x140717E94 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x14005EF60 (RtlRbRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockTrackerCompare @ 0x14024E650 (MiLockTrackerCompare.c)
 */

signed __int64 __fastcall PspJobIoRateVolumeEntryRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbp
  __int64 v4; // r14
  signed __int64 v5; // rdi
  KIRQL v6; // r15
  signed __int64 v7; // rbx
  int v8; // esi
  int v9; // eax
  signed __int64 v10; // rax

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = a1 + 1448;
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v7 = *(_QWORD *)v4;
  v8 = *(_BYTE *)(v4 + 8) & 1;
  if ( *(_QWORD *)v4 )
  {
    do
    {
      v9 = MiLockTrackerCompare(a2, v7);
      if ( v9 >= 0 )
      {
        if ( v9 <= 0 )
          break;
        v10 = *(_QWORD *)(v7 + 8);
      }
      else
      {
        v10 = *(_QWORD *)v7;
      }
      if ( v8 && v10 )
        v7 ^= v10;
      else
        v7 = v10;
    }
    while ( v7 );
    if ( v7 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v7);
      *(_QWORD *)(v7 + 16) = -1LL;
      v5 = v7;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  __writecr8(v6);
  return v5;
}
