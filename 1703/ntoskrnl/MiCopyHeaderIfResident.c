/*
 * XREFs of MiCopyHeaderIfResident @ 0x14005DFD4
 * Callers:
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 * Callees:
 *     MiUpdatePageAttributeStamp @ 0x140032700 (MiUpdatePageAttributeStamp.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14006ADF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCopyPage @ 0x1400A0320 (MiCopyPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14010A7AC (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  int v5; // esi
  __int64 v6; // rbx
  KIRQL v7; // di
  __int64 *v8; // rax
  volatile LONG *v9; // rcx
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rdx
  char v15; // al
  unsigned __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  v4 = ExAcquireSpinLockExclusive(&dword_14036BE00);
  v5 = 0;
  while ( 1 )
  {
    v7 = v4;
    v8 = *(__int64 **)(a1 + 40);
    if ( !v8 || (v6 = *v8) == 0 )
    {
      v9 = &dword_14036BE00;
LABEL_7:
      ExReleaseSpinLockExclusiveFromDpcLevel(v9);
      __writecr8(v7);
      return 0LL;
    }
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v6 + 72) )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
    __writecr8(v7);
    v4 = ExAcquireSpinLockExclusive(&dword_14036BE00);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BE00);
  if ( (*(_DWORD *)(v6 + 56) & 3) != 0
    || (v11 = *(_QWORD *)(v6 + 136)) == 0
    || (v12 = MiTryLockLeafAndContainingPagesAtDpc(*(_QWORD *)(v6 + 136), &v19, 0LL)) == 0 )
  {
    v9 = (volatile LONG *)(v6 + 72);
    goto LABEL_7;
  }
  v13 = v19;
  if ( !v19 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    __writecr8(2uLL);
    goto LABEL_15;
  }
  v15 = *(_BYTE *)(v19 + 34);
  if ( (v15 & 0x20) != 0 || (v15 & 0xC0) != 0x40 || (*(_BYTE *)(v19 + 35) & 0x40) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    __writecr8(2uLL);
    v14 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_15:
    LOBYTE(v14) = v7;
    MiUnlockProtoPoolPage(v12, v14);
    return 0LL;
  }
  v20 = MI_READ_PTE_LOCK_FREE(v11);
  if ( (v20 & 1) != 0 )
  {
    v16 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v20) >> 12) & 0xFFFFFFFFFLL;
  }
  else
  {
    v16 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v20);
    v5 = 1;
  }
  v17 = 48 * a2 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
    __writecr8(2uLL);
    v14 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_15;
  }
  MiCopyPage(a2, v16, 0LL, 4LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 72));
  __writecr8(2uLL);
  if ( v5 == 1 )
    MiUpdatePageAttributeStamp(v19);
  v18 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v18) = v7;
  MiUnlockProtoPoolPage(v12, v18);
  return 1LL;
}
