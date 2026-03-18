/*
 * XREFs of MiAddPrivateFixupEntryForSystemImage @ 0x140149D98
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1404B1048 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiInitializePrivateFixupBitmap @ 0x1404B7204 (MiInitializePrivateFixupBitmap.c)
 *     MiCreateSessionDriverProtos @ 0x1406BF840 (MiCreateSessionDriverProtos.c)
 */

__int64 __fastcall MiAddPrivateFixupEntryForSystemImage(_DWORD *a1, unsigned __int64 a2)
{
  PVOID PoolWithTag; // rsi
  _QWORD *v5; // rbx
  void *v6; // rcx
  KIRQL v7; // al
  _QWORD *v8; // rcx
  KIRQL v9; // di

  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  8
                * (((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 8LL) >> 6)
                 + ((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0))
                + 16,
                  0x69536D4Du);
  if ( !PoolWithTag )
    return 0LL;
  v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6946694Du);
  v6 = PoolWithTag;
  if ( !v5 )
  {
LABEL_6:
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  MiInitializePrivateFixupBitmap(PoolWithTag, a1);
  v5[5] = PoolWithTag;
  v5[6] = a1;
  v5[2] = a2;
  v5[3] = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) << 12) + a2 - 1;
  v5[4] = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( (unsigned int)MiGetSystemRegionType(a2) == 1
    && (a1[14] & 0x800) == 0
    && !(unsigned int)MiCreateSessionDriverProtos(a1, a2, v5) )
  {
    ExFreePoolWithTag(v5, 0);
    v6 = PoolWithTag;
    goto LABEL_6;
  }
  v7 = ExAcquireSpinLockExclusive(&dword_14036C088);
  v8 = (_QWORD *)qword_14036C048;
  v9 = v7;
  if ( *(__int64 **)qword_14036C048 != &qword_14036C040 )
    __fastfail(3u);
  v5[1] = qword_14036C048;
  *v5 = &qword_14036C040;
  *v8 = v5;
  qword_14036C048 = (__int64)v5;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036C088);
  __writecr8(v9);
  return 1LL;
}
