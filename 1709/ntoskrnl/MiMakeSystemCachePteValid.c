/*
 * XREFs of MiMakeSystemCachePteValid @ 0x14001E6D4
 * Callers:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 * Callees:
 *     PfSnLogPageFault @ 0x140010A60 (PfSnLogPageFault.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiLockAndDecrementShareCount @ 0x1400EACDC (MiLockAndDecrementShareCount.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSystemCachePteValid(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 v7; // rdi
  int v8; // r12d
  __int64 *v9; // rcx
  __int64 PteShadow; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r15
  __int64 SharedVm; // rbx
  KIRQL v15; // al
  KIRQL v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 ValidPte; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rbx
  unsigned __int64 v24; // rbp
  int Wsle; // eax
  _DWORD *v26; // rax
  __int64 result; // rax
  _QWORD *PrototypePteDirect; // rbx
  __int64 v29; // rsi
  __int64 v30; // rdi
  int v31; // eax
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v33; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v34; // [rsp+80h] [rbp+18h] BYREF

  v34 = a3;
  v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v34) - 0x58000000000LL;
  v8 = 0;
  v9 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v9;
  if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v9, *v9);
  v33 = PteShadow;
  v11 = MI_GET_PAGE_FRAME_FROM_PTE(&v33);
  v13 = v12 + 48 * v11;
  SharedVm = MiGetSharedVm(a1);
  v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v16 = v15;
  MiLockPageAtDpcInline(v13);
  v17 = *(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v13 + 24) = v17;
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v18 = *(_QWORD *)a2;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
    LOBYTE(v18) = MiReadPteShadow(a2, *(_QWORD *)a2);
  if ( (v18 & 1) != 0 )
  {
    Wsle = 0;
    v24 = 0LL;
    v23 = 0LL;
    v33 = 0LL;
    goto LABEL_19;
  }
  if ( (v18 & 8) != 0 )
  {
    v19 = MI_GET_PAGE_FRAME_FROM_PTE(&v34);
    ValidPte = MiMakeValidPte(a2, v19, 536870913LL);
  }
  else
  {
    ValidPte = v34;
  }
  v21 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_1403885F8 & 1) << 8);
  v34 = v21;
  if ( (a4 & 8) != 0 && (unsigned int)MiIsPfnFileOnly(v7) )
  {
    v21 &= 0xFFFFFFFFFFFFFFBDuLL;
    v34 = v21;
  }
  v22 = *(_QWORD *)(v7 + 8);
  v23 = *(_QWORD *)(v7 + 16);
  v33 = v23;
  v24 = v22 | 0x8000000000000000uLL;
  Wsle = MiAllocateWsle(a1, a2, v7, 0, v21, 0LL);
  if ( Wsle )
  {
    if ( PfSnNumActiveTraces && (v23 & 0x400) != 0 )
      v8 = 1;
LABEL_19:
    if ( Wsle )
      goto LABEL_21;
  }
  MiLockAndDecrementShareCount(v7, 0LL);
  MiLockAndDecrementShareCount(v13, 0LL);
LABEL_21:
  LOBYTE(v17) = v16;
  MiPreUnlockWorkingSetExclusive(a1, v17);
  v26 = (_DWORD *)MiGetSharedVm(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v26, retaddr);
  else
    *v26 = 0;
  result = v16;
  __writecr8(v16);
  if ( v8 )
  {
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(v23);
    v29 = *PrototypePteDirect;
    v30 = MiReferenceControlAreaFile(*PrototypePteDirect);
    v31 = MiStartingOffset(PrototypePteDirect, v24, 0xFFFFFFFFLL);
    PfSnLogPageFault(v30, v31, 4u);
    return MiDereferenceControlAreaFile(v29, v30);
  }
  return result;
}
