/*
 * XREFs of MiCopyHeaderIfResident @ 0x1400B6F80
 * Callers:
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiCopyPage @ 0x14005A3E0 (MiCopyPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x1400CBF98 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdatePageAttributeStamp @ 0x14012A1B0 (MiUpdatePageAttributeStamp.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, ULONG_PTR a2)
{
  KIRQL v4; // al
  int v5; // edi
  __int64 v6; // rbp
  unsigned __int8 v7; // bl
  __int64 *v8; // rax
  volatile LONG *v9; // rcx
  __int64 *v11; // r14
  __int64 v12; // r12
  __int64 v13; // r15
  char v14; // al
  __int64 PteShadow; // rax
  ULONG_PTR v16; // rax
  __int64 v17; // rsi
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v4 = ExAcquireSpinLockExclusive(&dword_140388100);
  v5 = 0;
  while ( 1 )
  {
    v7 = v4;
    v8 = *(__int64 **)(a1 + 40);
    if ( !v8 || (v6 = *v8) == 0 )
    {
      v9 = &dword_140388100;
LABEL_7:
      ExReleaseSpinLockExclusiveFromDpcLevel(v9);
      __writecr8(v7);
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v6 + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
    __writecr8(v7);
    v4 = ExAcquireSpinLockExclusive(&dword_140388100);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388100);
  if ( (*(_DWORD *)(v6 + 56) & 3) != 0
    || (v11 = *(__int64 **)(v6 + 136)) == 0LL
    || (v12 = MiTryLockLeafAndContainingPagesAtDpc(*(_QWORD *)(v6 + 136), &v18, 0LL)) == 0 )
  {
    v9 = (volatile LONG *)(v6 + 72);
    goto LABEL_7;
  }
  v13 = v18;
  if ( !v18 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    __writecr8(2uLL);
    goto LABEL_15;
  }
  v14 = *(_BYTE *)(v18 + 34);
  if ( (v14 & 0x20) != 0 || (v14 & 0xC0) != 0x40 || (*(_BYTE *)(v18 + 35) & 0x40) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    __writecr8(2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_15:
    MiUnlockProtoPoolPage(v12, v7);
    return 0LL;
  }
  PteShadow = *v11;
  if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v11, *v11);
  v19 = PteShadow;
  if ( (PteShadow & 1) != 0 )
  {
    v16 = MI_GET_PAGE_FRAME_FROM_PTE(&v19);
  }
  else
  {
    v16 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v19);
    v5 = 1;
  }
  v17 = 48 * a2 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    __writecr8(2uLL);
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_15;
  }
  MiCopyPage(a2, v16, 0LL, 4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
  __writecr8(2uLL);
  if ( v5 == 1 )
    MiUpdatePageAttributeStamp(v18);
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(v12, v7);
  return 1LL;
}
