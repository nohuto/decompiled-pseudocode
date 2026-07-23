/*
 * XREFs of PspJobIoRateVolumeEntryInsert @ 0x14024E698
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x140717E94 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x14005E640 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockTrackerCompare @ 0x14024E650 (MiLockTrackerCompare.c)
 */

__int64 __fastcall PspJobIoRateVolumeEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  volatile LONG *v2; // r15
  __int64 v4; // r14
  KIRQL v5; // al
  BOOLEAN v6; // bl
  __int64 v7; // rdi
  int v8; // esi
  unsigned __int64 v9; // r12
  KIRQL v10; // r13
  unsigned __int64 v11; // rax
  __int64 result; // rax

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = a1 + 1448;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v6 = 0;
  v7 = *(_QWORD *)v4;
  v8 = *(_BYTE *)(v4 + 8) & 1;
  v9 = (unsigned __int64)a2[1].Children[0];
  v10 = v5;
  if ( *(_QWORD *)v4 )
  {
    while ( 1 )
    {
      if ( (int)MiLockTrackerCompare(v9, v7) < 0 )
      {
        v11 = *(_QWORD *)v7;
        if ( v8 )
        {
          if ( !v11 )
            break;
          v11 ^= v7;
        }
        if ( !v11 )
          break;
      }
      else
      {
        v11 = *(_QWORD *)(v7 + 8);
        if ( v8 )
        {
          if ( !v11 )
            goto LABEL_7;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_7:
          v6 = 1;
          break;
        }
      }
      v7 = v11;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v7, v6, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = v10;
  __writecr8(v10);
  return result;
}
