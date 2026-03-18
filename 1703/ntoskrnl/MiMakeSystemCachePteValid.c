/*
 * XREFs of MiMakeSystemCachePteValid @ 0x140026388
 * Callers:
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     PfSnLogPageFault @ 0x14005F114 (PfSnLogPageFault.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSystemCachePteValid(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v7; // rdi
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r13
  __int64 SharedVm; // rbx
  KIRQL v13; // al
  KIRQL v14; // r12
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 ValidPte; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rbx
  unsigned __int64 v22; // rbp
  int Wsle; // eax
  _DWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 result; // rax
  _QWORD *PrototypePteDirect; // rbx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v34; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v35; // [rsp+80h] [rbp+18h] BYREF

  v35 = a3;
  v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v35) - 0x58000000000LL;
  v8 = 0;
  v34 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = MI_GET_PAGE_FRAME_FROM_PTE(&v34);
  v11 = v10 + 48 * v9;
  SharedVm = MiGetSharedVm(a1);
  v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v14 = v13;
  MiLockPageAtDpcInline(v11);
  *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v15 & 1) != 0 )
  {
    Wsle = 0;
    v22 = 0LL;
    v21 = 0LL;
    v34 = 0LL;
    goto LABEL_13;
  }
  if ( (v15 & 8) != 0 )
  {
    v17 = MI_GET_PAGE_FRAME_FROM_PTE(&v35);
    ValidPte = MiMakeValidPte(a2, v17, 536870913LL);
  }
  else
  {
    ValidPte = v35;
  }
  v19 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_14036C2A8 & 1) << 8);
  v35 = v19;
  if ( (a4 & 8) != 0 && (unsigned int)MiIsPfnFileOnly(v7) )
  {
    v19 &= 0xFFFFFFFFFFFFFFBDuLL;
    v35 = v19;
  }
  v20 = *(_QWORD *)(v7 + 8);
  v21 = *(_QWORD *)(v7 + 16);
  v34 = v21;
  v22 = v20 | 0x8000000000000000uLL;
  Wsle = MiAllocateWsle(a1, a2, v7, 0, v19, 0LL);
  if ( Wsle )
  {
    if ( PfSnNumActiveTraces && (v21 & 0x400) != 0 )
      v8 = 1;
LABEL_13:
    if ( Wsle )
      goto LABEL_15;
  }
  MiLockAndDecrementShareCount(v7, 0LL);
  MiLockAndDecrementShareCount(v11, 0LL);
LABEL_15:
  LOBYTE(v16) = v14;
  MiPreUnlockWorkingSetExclusive(a1, v16);
  v24 = (_DWORD *)MiGetSharedVm(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v24, retaddr);
  else
    *v24 = 0;
  result = v14;
  __writecr8(v14);
  if ( v8 )
  {
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(v21, v25, v26, v27);
    v30 = *PrototypePteDirect;
    v31 = MiReferenceControlAreaFile(*PrototypePteDirect);
    v32 = MiStartingOffset(PrototypePteDirect, v22, 0xFFFFFFFFLL);
    PfSnLogPageFault(v31, v32, 4LL);
    return MiDereferenceControlAreaFile(v30, v31);
  }
  return result;
}
