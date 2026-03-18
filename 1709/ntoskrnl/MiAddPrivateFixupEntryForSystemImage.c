/*
 * XREFs of MiAddPrivateFixupEntryForSystemImage @ 0x1401575A0
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140542BF0 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiInitializePrivateFixupBitmap @ 0x140471E40 (MiInitializePrivateFixupBitmap.c)
 *     MiCreateSessionDriverProtos @ 0x1406ED2F8 (MiCreateSessionDriverProtos.c)
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
                 + ((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0)
                 + 2LL),
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
  v7 = ExAcquireSpinLockExclusive(&dword_1403883C8);
  v8 = (_QWORD *)qword_140388388;
  v9 = v7;
  if ( *(__int64 **)qword_140388388 != &qword_140388380 )
    __fastfail(3u);
  v5[1] = qword_140388388;
  *v5 = &qword_140388380;
  *v8 = v5;
  qword_140388388 = (__int64)v5;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403883C8);
  __writecr8(v9);
  return 1LL;
}
