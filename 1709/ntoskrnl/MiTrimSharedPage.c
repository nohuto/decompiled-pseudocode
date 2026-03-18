/*
 * XREFs of MiTrimSharedPage @ 0x1400F1EDC
 * Callers:
 *     MiTradePage @ 0x140078860 (MiTradePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x140223474 (MiMarkFileOnlyPfnBad.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiDecrementModifiedWriteCount @ 0x1400EFE28 (MiDecrementModifiedWriteCount.c)
 *     MiTrimSection @ 0x1400F23D8 (MiTrimSection.c)
 *     MiPreventControlAreaDeletion @ 0x1400F3B84 (MiPreventControlAreaDeletion.c)
 *     MiReferencePfBackedSection @ 0x14012AC34 (MiReferencePfBackedSection.c)
 *     MiDecrementSubsection @ 0x14012AE30 (MiDecrementSubsection.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiClusterVadFull @ 0x14022EDF4 (MiClusterVadFull.c)
 */

__int64 __fastcall MiTrimSharedPage(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r14
  __int64 v8; // rdi
  __int64 PrototypePteDirect; // rsi
  __int64 *v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rax
  _QWORD v14[5]; // [rsp+20h] [rbp-30h] BYREF
  int v15; // [rsp+48h] [rbp-8h]
  _QWORD *v16; // [rsp+80h] [rbp+30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+48h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v16 = 0LL;
  v4 = v3 | 0x8000000000000000uLL;
  BugCheckParameter2 = 0LL;
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a2);
    v12 = (__int64 *)MiReferencePfBackedSection(v4);
    PrototypePteDirect = (__int64)v12;
    if ( v12 )
    {
      v8 = *v12;
      if ( (a3 & 0x800000) == 0 || *(int *)(v8 + 56) >= 0 || (unsigned int)MiClusterVadFull(a1, v12) != 1 )
        goto LABEL_5;
      v13 = MiDecrementModifiedWriteCount(v8, 0);
      if ( v13 )
        MiReleaseControlAreaWaiters(v13);
    }
    MiLockPageInline(a1);
    return 0LL;
  }
  v8 = MiPreventControlAreaDeletion(a1, 0LL, &BugCheckParameter2, &v16);
  if ( !v8 )
    return 0LL;
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(a2);
  MiReleaseControlAreaWaiters(v16);
LABEL_5:
  v15 = 0;
  v14[0] = v8;
  v14[1] = v4;
  v14[2] = v4;
  v14[3] = PrototypePteDirect;
  v14[4] = PrototypePteDirect;
  if ( (unsigned int)MiTrimSection(v14, 1LL, a3) || (*(_BYTE *)(a1 + 34) & 7) == 6 )
    MiTrimSection(v14, 1LL, a3);
  if ( BugCheckParameter2 )
    MiDecrementSubsection(BugCheckParameter2);
  v11 = MiDecrementModifiedWriteCount(v8, 0);
  if ( v11 )
    MiReleaseControlAreaWaiters(v11);
  MiLockPageInline(a1);
  return (*(_BYTE *)(a1 + 34) & 7) != 6 ? 2 : 0;
}
