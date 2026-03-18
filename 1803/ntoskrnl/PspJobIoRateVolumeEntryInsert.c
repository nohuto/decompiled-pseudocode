/*
 * XREFs of PspJobIoRateVolumeEntryInsert @ 0x1402849FC
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x14077BEB4 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLockTrackerCompare @ 0x140253D40 (MiLockTrackerCompare.c)
 */

__int64 __fastcall PspJobIoRateVolumeEntryInsert(__int64 a1, _QWORD *a2)
{
  volatile LONG *v2; // r15
  unsigned __int64 *v4; // r14
  KIRQL v5; // al
  unsigned __int64 v6; // rcx
  bool v7; // bl
  unsigned __int64 v8; // r12
  KIRQL v9; // r13
  unsigned __int64 v10; // rdi
  int v11; // esi
  unsigned __int64 v12; // rax
  __int64 result; // rax

  v2 = (volatile LONG *)(a1 + 1440);
  v4 = (unsigned __int64 *)(a1 + 1448);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v6 = v4[1];
  v7 = 0;
  v8 = a2[3];
  v9 = v5;
  v10 = *v4;
  if ( (v6 & 1) != 0 )
  {
    if ( v10 )
      v10 ^= (unsigned __int64)v4;
    else
      v10 = 0LL;
  }
  v11 = v6 & 1;
  if ( v10 )
  {
    while ( 1 )
    {
      if ( (int)MiLockTrackerCompare(v8, v10) < 0 )
      {
        v12 = *(_QWORD *)v10;
        if ( v11 )
        {
          if ( !v12 )
            break;
          v12 ^= v10;
        }
        if ( !v12 )
          break;
      }
      else
      {
        v12 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          if ( !v12 )
            goto LABEL_11;
          v12 ^= v10;
        }
        if ( !v12 )
        {
LABEL_11:
          v7 = 1;
          break;
        }
      }
      v10 = v12;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64)v4, v10, v7, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = v9;
  __writecr8(v9);
  return result;
}
