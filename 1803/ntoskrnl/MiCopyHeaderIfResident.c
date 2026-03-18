/*
 * XREFs of MiCopyHeaderIfResident @ 0x14004D648
 * Callers:
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPage @ 0x14002ED70 (MiCopyPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiTryLockLeafAndContainingPagesAtDpc @ 0x14004FA24 (MiTryLockLeafAndContainingPagesAtDpc.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiUpdatePageAttributeStamp @ 0x1400C95F8 (MiUpdatePageAttributeStamp.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 */

__int64 __fastcall MiCopyHeaderIfResident(__int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rbp
  int v5; // ebx
  KIRQL v6; // di
  __int64 *v7; // rax
  volatile LONG *v8; // rcx
  unsigned __int64 v10; // r15
  ULONG_PTR v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ebx
  unsigned __int64 v22; // rax
  ULONG_PTR v23; // rax
  int v24; // ebx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // [rsp+50h] [rbp+8h] BYREF
  __int64 v29; // [rsp+60h] [rbp+18h] BYREF

  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_1403CB280);
    v7 = *(__int64 **)(a1 + 40);
    if ( !v7 || (v4 = *v7) == 0 )
    {
      v8 = &dword_1403CB280;
LABEL_7:
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
      __writecr8(v6);
      return 0LL;
    }
    v5 = ExTryAcquireSpinLockExclusiveAtDpcLevel(v4 + 72);
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CB280);
    if ( v5 )
      break;
    __writecr8(v6);
  }
  if ( (*(_DWORD *)(v4 + 56) & 3) != 0
    || (v10 = *(_QWORD *)(v4 + 136)) == 0
    || (v11 = MiTryLockLeafAndContainingPagesAtDpc(*(_QWORD *)(v4 + 136), &v28, 0LL)) == 0 )
  {
    v8 = (volatile LONG *)(v4 + 72);
    goto LABEL_7;
  }
  v12 = v28;
  if ( !v28 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    __writecr8(2uLL);
    goto LABEL_15;
  }
  v16 = *(_BYTE *)(v28 + 34);
  if ( (v16 & 0x20) != 0 || (v16 & 0xC0) != 0x40 || (*(_BYTE *)(v28 + 35) & 0x40) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    __writecr8(2uLL);
    v13 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_15:
    LOBYTE(v13) = v6;
    MiUnlockProtoPoolPage(v11, v13, v14, v15);
    return 0LL;
  }
  v17 = MI_READ_PTE_LOCK_FREE(v10);
  v29 = v17;
  v21 = v17 & 1;
  if ( (v17 & 1) != 0 )
    v22 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29);
  else
    v22 = MiReverseSwizzleInvalidPte(v17, v18, v19, v20);
  v23 = (v22 >> 12) & 0xFFFFFFFFFLL;
  v24 = v21 ^ 1;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(48 * a2 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    __writecr8(2uLL);
    v13 = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_15;
  }
  MiCopyPage(a2, v23, 0LL, 4);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  __writecr8(2uLL);
  if ( v24 == 1 )
    MiUpdatePageAttributeStamp(v28);
  v27 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(48 * a2 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v27) = v6;
  MiUnlockProtoPoolPage(v11, v27, v25, v26);
  return 1LL;
}
