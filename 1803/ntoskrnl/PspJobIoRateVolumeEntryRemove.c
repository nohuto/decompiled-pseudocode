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

__int64 __fastcall PspJobIoRateVolumeEntryRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbp
  _RTL_RB_TREE *v4; // r14
  __int64 v5; // rdi
  KIRQL v6; // al
  __int64 Root; // rbx
  KIRQL v8; // r15
  _RTL_BALANCED_NODE *Min; // rax
  int v10; // esi
  int v11; // eax
  __int64 v12; // rax

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = (_RTL_RB_TREE *)(a1 + 1448);
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  Root = (__int64)v4->Root;
  v8 = v6;
  Min = v4->Min;
  if ( ((unsigned __int8)Min & 1) != 0 )
  {
    if ( Root )
      Root ^= (unsigned __int64)v4;
    else
      Root = 0LL;
  }
  v10 = (unsigned __int8)Min & 1;
  if ( Root )
  {
    do
    {
      v11 = MiLockTrackerCompare(a2, Root);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v12 = *(_QWORD *)(Root + 8);
      }
      else
      {
        v12 = *(_QWORD *)Root;
      }
      if ( v10 && v12 )
        Root ^= v12;
      else
        Root = v12;
    }
    while ( Root );
    if ( Root )
    {
      RtlRbRemoveNode(v4, (PRTL_BALANCED_NODE)Root);
      *(_QWORD *)(Root + 16) = -1LL;
      v5 = Root;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  __writecr8(v8);
  return v5;
}
