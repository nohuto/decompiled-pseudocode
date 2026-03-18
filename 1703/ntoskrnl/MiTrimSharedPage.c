/*
 * XREFs of MiTrimSharedPage @ 0x140014134
 * Callers:
 *     MiClaimPhysicalRun @ 0x14010E174 (MiClaimPhysicalRun.c)
 * Callees:
 *     MiTrimSection @ 0x1400144D8 (MiTrimSection.c)
 *     MiDecrementModifiedWriteCount @ 0x1400150EC (MiDecrementModifiedWriteCount.c)
 *     MiDecrementSubsection @ 0x1400151F8 (MiDecrementSubsection.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x140096C90 (MiRemoveUnusedSegment.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiBuildWakeList @ 0x140096DC4 (MiBuildWakeList.c)
 *     MiReleaseControlAreaWaiters @ 0x140097F50 (MiReleaseControlAreaWaiters.c)
 *     MiReferenceSubsection @ 0x140098D38 (MiReferenceSubsection.c)
 *     MiReferencePfBackedSection @ 0x140118534 (MiReferencePfBackedSection.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiClusterVadFull @ 0x140221F98 (MiClusterVadFull.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15
  _QWORD *v5; // r12
  unsigned int v6; // r13d
  __int64 PrototypePteDirect; // rax
  _QWORD *v9; // rsi
  __int64 v11; // rbp
  volatile LONG *v12; // r14
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD v19[5]; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+48h] [rbp-30h]
  unsigned __int8 v21; // [rsp+88h] [rbp+10h]

  v21 = a2;
  v4 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v5 = 0LL;
  v6 = a3;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)a2);
    v17 = (_QWORD *)MiReferencePfBackedSection(v4);
    v9 = v17;
    if ( v17 )
    {
      v11 = *v17;
      if ( (v6 & 0x800000) == 0 || *(_DWORD *)(v11 + 56) < 0x80000000 || (unsigned int)MiClusterVadFull(a1, v17) != 1 )
        goto LABEL_10;
      v18 = MiDecrementModifiedWriteCount(v11, 0LL);
      if ( v18 )
        MiReleaseControlAreaWaiters(v18);
    }
    MiLockPageInline(a1);
    return 0LL;
  }
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16), a2, a3, a4);
  v9 = (_QWORD *)PrototypePteDirect;
  if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 )
    return 0LL;
  v11 = *(_QWORD *)PrototypePteDirect;
  v12 = (volatile LONG *)(*(_QWORD *)PrototypePteDirect + 72LL);
  ExAcquireSpinLockExclusiveAtDpcLevel(v12);
  v13 = *(_DWORD *)(v11 + 56);
  if ( v13 & 1 | ((v13 & 2) != 0) )
  {
LABEL_5:
    ExReleaseSpinLockExclusiveFromDpcLevel(v12);
    return 0LL;
  }
  if ( (v13 & 0x20) == 0 )
  {
    if ( (*((_BYTE *)v9 + 34) & 1) != 0 )
      goto LABEL_5;
    v5 = v9;
    MiReferenceSubsection(v9, 0LL);
  }
  v14 = MiBuildWakeList(v11, 4LL);
  ++*(_DWORD *)(v11 + 76);
  v15 = v14;
  MiRemoveUnusedSegment(v11);
  ExReleaseSpinLockExclusiveFromDpcLevel(v12);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v21);
  MiReleaseControlAreaWaiters(v15);
LABEL_10:
  v20 = 0;
  v19[0] = v11;
  v19[1] = v4;
  v19[2] = v4;
  v19[3] = v9;
  v19[4] = v9;
  if ( (unsigned int)MiTrimSection(v19, 1LL, v6) || (*(_BYTE *)(a1 + 34) & 7) == 6 )
    MiTrimSection(v19, 1LL, v6);
  if ( v5 )
    MiDecrementSubsection(v5);
  v16 = MiDecrementModifiedWriteCount(v11, 0LL);
  if ( v16 )
    MiReleaseControlAreaWaiters(v16);
  MiLockPageInline(a1);
  return (*(_BYTE *)(a1 + 34) & 7) != 6 ? 2 : 0;
}
