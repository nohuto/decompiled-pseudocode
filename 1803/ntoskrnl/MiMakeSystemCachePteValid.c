/*
 * XREFs of MiMakeSystemCachePteValid @ 0x140048C70
 * Callers:
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiLockWorkingSetOptimal @ 0x140048EC8 (MiLockWorkingSetOptimal.c)
 *     PfSnLogPageFault @ 0x14004B630 (PfSnLogPageFault.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiMakeSystemCachePteValid(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  _QWORD *v7; // rdi
  int v8; // r15d
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r13
  unsigned __int8 v12; // r12
  char v13; // al
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  unsigned __int64 v19; // rbp
  int Wsle; // eax
  __int64 v21; // r8
  __int64 result; // rax
  _QWORD *PrototypePteDirect; // rbx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v28; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v29; // [rsp+A0h] [rbp+18h] BYREF

  v29 = a3;
  v7 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29) >> 12) & 0xFFFFFFFFFLL)
                - 0x58000000000LL);
  v8 = 0;
  v27[0] = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v27);
  v11 = v10 + 48 * ((v9 >> 12) & 0xFFFFFFFFFLL);
  v12 = MiLockPageInline(v11);
  *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v28 = MiLockWorkingSetOptimal(a1, a2, &v28);
  v13 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v13 & 1) != 0 )
  {
    Wsle = 0;
    v19 = 0LL;
    v18 = 0LL;
    goto LABEL_13;
  }
  if ( (v13 & 8) != 0 )
  {
    v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29);
    ValidPte = MiMakeValidPte(a2, (v14 >> 12) & 0xFFFFFFFFFLL, 536870913LL, v15);
  }
  else
  {
    ValidPte = v29;
  }
  v17 = ValidPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_1403CB7D0 & 1) << 8);
  if ( (a4 & 8) != 0 && (unsigned int)MiIsPfnFileOnly(v7) )
    v17 &= 0xFFFFFFFFFFFFFFBDuLL;
  v18 = v7[2];
  v19 = v7[1] | 0x8000000000000000uLL;
  Wsle = MiAllocateWsle(a1, (unsigned __int64 *)a2, v7, 0, v17, 0, 0LL);
  if ( Wsle )
  {
    if ( PfSnNumActiveTraces && (v18 & 0x400) != 0 )
      v8 = 1;
LABEL_13:
    if ( Wsle )
      goto LABEL_15;
  }
  MiLockAndDecrementShareCount(v7, 0LL);
  MiLockAndDecrementShareCount(v11, 0LL);
LABEL_15:
  MiUnlockPageTableInternal(a1, v28);
  result = MiUnlockWorkingSetShared(a1, v12, v21);
  if ( v8 )
  {
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(v18);
    v24 = *PrototypePteDirect;
    v25 = MiReferenceControlAreaFile(*PrototypePteDirect);
    v26 = MiStartingOffset(PrototypePteDirect, v19, 0xFFFFFFFFLL);
    PfSnLogPageFault(v25, v26, 4LL);
    return MiDereferenceControlAreaFile(v24, v25);
  }
  return result;
}
