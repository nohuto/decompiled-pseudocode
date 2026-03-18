/*
 * XREFs of MiGetCrossPartitionCharges @ 0x1402376A8
 * Callers:
 *     MiGetSubsectionCharges @ 0x14022DF48 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x1402301C0 (MiGetCrossPartitionCloneCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x140231884 (MiGetCrossPartitionCombineCharges.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiGetCrossPartitionCharges(__int64 a1, int a2, char a3, __int64 a4)
{
  volatile LONG *v4; // r15
  unsigned __int64 *v6; // rdi
  unsigned int v9; // esi
  KIRQL v10; // r12
  unsigned __int64 v11; // rdx
  int v12; // r14d
  unsigned __int64 v13; // rdx

  v4 = (volatile LONG *)(a1 + 1280);
  v6 = (unsigned __int64 *)(32LL * a2 + a1 + 1816);
  v9 = 0;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
  {
    v9 = -1073740640;
LABEL_3:
    ++v6[1];
    goto LABEL_14;
  }
  v11 = *v6 + a4;
  if ( v11 <= *v6 )
  {
    v9 = -1073741523;
    goto LABEL_3;
  }
  v12 = a3 & 1;
  if ( v12 && v6[4] + a4 <= v6[4] )
  {
    ++v6[5];
    v9 = -1073741523;
  }
  else
  {
    *v6 = v11;
    if ( v11 > v6[2] )
      v6[2] = v11;
    if ( v12 )
    {
      v6[4] += a4;
      v13 = v6[4];
      if ( v13 > v6[6] )
        v6[6] = v13;
    }
  }
LABEL_14:
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  __writecr8(v10);
  return v9;
}
