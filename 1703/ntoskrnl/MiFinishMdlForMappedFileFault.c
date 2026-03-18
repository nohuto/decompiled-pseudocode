/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x140107260
 * Callers:
 *     MiResolveMappedFileFault @ 0x1401060D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiFlowThroughInsertNode @ 0x14003B434 (MiFlowThroughInsertNode.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiAreChargesNeededToLockPage @ 0x1400CB220 (MiAreChargesNeededToLockPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiChargeForLockedPage @ 0x1400CCDF0 (MiChargeForLockedPage.c)
 *     MiStartingOffset @ 0x1400CDBF0 (MiStartingOffset.c)
 *     MiEndingOffsetWithLock @ 0x1400CDD20 (MiEndingOffsetWithLock.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     MiReferenceControlAreaPfn @ 0x140107570 (MiReferenceControlAreaPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  __int64 *v5; // rsi
  __int64 v8; // r14
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // r14
  __int64 v14; // r12
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rax
  char v17; // cl
  char v18; // si
  unsigned int v19; // r8d
  __int64 v20; // rcx
  __int16 result; // ax
  char *v22; // r13
  char v23; // al
  unsigned int v24; // [rsp+60h] [rbp+18h]

  v5 = *(__int64 **)(a1 + 200);
  v8 = (unsigned int)a3;
  v24 = *(_DWORD *)(a1 + 180);
  v10 = *v5;
  MiReferenceControlAreaPfn(*v5, v5, a3);
  v11 = *(_QWORD *)(a1 + 160);
  MiLockPageAtDpcInline(v11);
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v11) || (unsigned int)MiChargeForLockedPage(v12, 1) )
    ++*(_WORD *)(v11 + 32);
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockPageAtDpcInline(v11);
  *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + v8)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v13 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 304) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4);
  v14 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE(v14);
  v15 = MiStartingOffset(v5, v13, a5);
  v16 = MiEndingOffsetWithLock(v5);
  v17 = *(_BYTE *)(a1 + 191);
  if ( (v17 & 1) != 0 )
  {
    v18 = 1;
    *(_BYTE *)(a1 + 191) = v17 & 0xFE;
  }
  else
  {
    v18 = 0;
  }
  if ( (*(_DWORD *)(v10 + 56) & 0x20) != 0 && v15 + v24 > v16 )
    *(_BYTE *)(a1 + 191) |= 1u;
  if ( (a2 & 1) != 0 )
  {
    v22 = (char *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
    v23 = *v22;
    if ( (*v22 == 1 || v23 == 2) && v22 && v23 != 2 )
      *(_BYTE *)(a1 + 189) |= 4u;
  }
  if ( (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) < 2 )
    *(_BYTE *)(a1 + 189) |= 0x40u;
  *(_DWORD *)(a1 + 296) = v19;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_WORD *)(a1 + 266) = 0;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 300) = 0;
  *(_WORD *)(a1 + 264) = 8 * ((((unsigned __int64)v19 + 4095) >> 12) + 6);
  MiLockPageAtDpcInline(v11);
  *(_BYTE *)(v11 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v11);
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v20 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)(v14 - v13) >> 3) + 304) - 0x58000000000LL;
  result = *(_WORD *)(a1 + 266) | 0x42;
  *(_WORD *)(a1 + 266) = result;
  if ( !v18 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 266) = result;
  }
  *(_QWORD *)(a1 + 200) = v10;
  *(_QWORD *)(a1 + 96) = v15;
  *(_QWORD *)(a1 + 232) = v13;
  *(_QWORD *)(a1 + 240) = v20;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
