/*
 * XREFs of PspJobIoRateVolumeEntryReference @ 0x140284AE4
 * Callers:
 *     PsIoRateControlReference @ 0x1400A4348 (PsIoRateControlReference.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     PspIoRateEntryIoControlReference @ 0x1400A4408 (PspIoRateEntryIoControlReference.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockTrackerCompare @ 0x140253D40 (MiLockTrackerCompare.c)
 */

signed __int64 __fastcall PspJobIoRateVolumeEntryReference(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rsi
  KIRQL v5; // al
  __int64 v6; // r8
  KIRQL v7; // bp
  __int64 v8; // rcx
  signed __int64 Count; // rbx
  int v10; // edi
  int v11; // eax
  struct _EX_RUNDOWN_REF v12; // rax

  v2 = (volatile LONG *)(a1 + 1440);
  v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1440));
  v6 = a1 + 1448;
  v7 = v5;
  v8 = *(_QWORD *)(a1 + 1456);
  Count = *(_QWORD *)(a1 + 1448);
  if ( (v8 & 1) != 0 && Count )
    Count ^= v6;
  v10 = v8 & 1;
  while ( Count )
  {
    v11 = MiLockTrackerCompare(a2, Count);
    if ( v11 >= 0 )
    {
      if ( v11 <= 0 )
        break;
      v12.Count = *(_QWORD *)(Count + 8);
    }
    else
    {
      v12.Count = *(_QWORD *)Count;
    }
    if ( v10 && v12.Count )
      Count ^= v12.Count;
    else
      Count = v12.Count;
  }
  if ( Count )
    PspIoRateEntryIoControlReference((struct _EX_RUNDOWN_REF *)Count);
  ExReleaseSpinLockSharedFromDpcLevel(v2);
  __writecr8(v7);
  return Count;
}
