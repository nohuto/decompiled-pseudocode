/*
 * XREFs of MiGetCrossPartitionCharges @ 0x14026F274
 * Callers:
 *     MiGetSubsectionCharges @ 0x140268104 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14026AE50 (MiGetCrossPartitionCloneCharges.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14026BCF0 (MiGetCrossPartitionCombineCharges.c)
 *     MiMapUserLargePages @ 0x140755B60 (MiMapUserLargePages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiGetCrossPartitionCharges(__int64 a1, int a2, char a3, __int64 a4)
{
  volatile LONG *v5; // r12
  unsigned __int64 *v8; // rdi
  unsigned int v10; // esi
  KIRQL v11; // r13
  unsigned __int64 v12; // rdx
  int v13; // r14d
  unsigned __int64 v14; // rdx

  v5 = (volatile LONG *)(a1 + 1280);
  v8 = (unsigned __int64 *)(32LL * a2 + a1 + 1816);
  v10 = 0;
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  if ( (*(_DWORD *)(a1 + 4) & 1) != 0 && a2 )
  {
    v10 = -1073740640;
LABEL_4:
    ++v8[1];
    goto LABEL_15;
  }
  v12 = *v8 + a4;
  if ( v12 <= *v8 )
  {
    v10 = -1073741523;
    goto LABEL_4;
  }
  v13 = a3 & 1;
  if ( v13 && v8[4] + a4 <= v8[4] )
  {
    ++v8[5];
    v10 = -1073741523;
  }
  else
  {
    *v8 = v12;
    if ( v12 > v8[2] )
      v8[2] = v12;
    if ( v13 )
    {
      v8[4] += a4;
      v14 = v8[4];
      if ( v14 > v8[6] )
        v8[6] = v14;
    }
  }
LABEL_15:
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  __writecr8(v11);
  return v10;
}
