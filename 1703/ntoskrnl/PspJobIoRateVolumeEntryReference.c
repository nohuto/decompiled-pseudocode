/*
 * XREFs of PspJobIoRateVolumeEntryReference @ 0x1402397BC
 * Callers:
 *     PsIoRateControlReference @ 0x140025910 (PsIoRateControlReference.c)
 * Callees:
 *     PspIoRateEntryIoControlReference @ 0x14002599C (PspIoRateEntryIoControlReference.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 *     PspIoRateEntryVolumeCompare @ 0x1402396A0 (PspIoRateEntryVolumeCompare.c)
 */

signed __int64 __fastcall PspJobIoRateVolumeEntryReference(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbp
  signed __int64 v5; // rdi
  KIRQL v6; // al
  char v7; // si
  KIRQL v8; // r14
  signed __int64 Count; // rbx
  int v10; // esi
  int v11; // eax
  struct _EX_RUNDOWN_REF v12; // rax

  v2 = (volatile LONG *)(a1 + 1440);
  v5 = 0LL;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1440));
  v7 = *(_BYTE *)(a1 + 1456);
  v8 = v6;
  Count = *(_QWORD *)(a1 + 1448);
  v10 = v7 & 1;
  if ( Count )
  {
    do
    {
      v11 = PspIoRateEntryVolumeCompare(a2, Count);
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
    while ( Count );
    if ( Count )
    {
      v5 = Count;
      PspIoRateEntryIoControlReference((struct _EX_RUNDOWN_REF *)Count);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v2);
  __writecr8(v8);
  return v5;
}
