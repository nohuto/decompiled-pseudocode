/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x14002AE10
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiEndingOffsetWithLock @ 0x14002B0E0 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x14002C570 (MiStartingOffset.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiChargeForLockedPage @ 0x140032500 (MiChargeForLockedPage.c)
 *     PsGetIoPriorityThread @ 0x140061EF0 (PsGetIoPriorityThread.c)
 *     MiReferenceControlAreaPfn @ 0x140066278 (MiReferenceControlAreaPfn.c)
 *     MiAreChargesNeededToLockPage @ 0x1400780A0 (MiAreChargesNeededToLockPage.c)
 *     MiFlowThroughInsertNode @ 0x1401303B8 (MiFlowThroughInsertNode.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  _QWORD *v5; // rbp
  __int64 v7; // rsi
  __int64 v9; // r12
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // r9
  __int64 *v18; // r14
  __int64 PteShadow; // rax
  __int64 v20; // r12
  unsigned __int64 v21; // rax
  char v22; // cl
  char v23; // bp
  _BYTE *v24; // r15
  __int64 v25; // rcx
  __int16 result; // ax
  unsigned __int64 v27; // [rsp+50h] [rbp+8h]

  v5 = *(_QWORD **)(a1 + 200);
  v7 = *(unsigned int *)(a1 + 180);
  v9 = a3;
  v11 = *v5;
  MiReferenceControlAreaPfn(*v5, v5);
  v12 = *(_QWORD *)(a1 + 160);
  MiLockPageAtDpcInline(v12);
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v12, v13, v14, v15) || (unsigned int)MiChargeForLockedPage(v16, 1LL) )
    ++*(_WORD *)(v12 + 32);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockPageAtDpcInline(v12);
  *(_QWORD *)(v12 + 24) ^= (*(_QWORD *)(v12 + 24) ^ (*(_QWORD *)(v12 + 24) + v9)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v17 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 304) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  v27 = v17;
  if ( a4 )
  {
    MiFlowThroughInsertNode(a1, a4);
    v17 = v27;
  }
  v18 = *(__int64 **)(a1 + 224);
  PteShadow = *v18;
  if ( (unsigned __int64)v18 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v18 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(*(_QWORD *)(a1 + 224), *v18);
  *(_QWORD *)(a1 + 168) = PteShadow;
  v20 = MiStartingOffset(v5, v17, a5);
  v21 = MiEndingOffsetWithLock(v5);
  v22 = *(_BYTE *)(a1 + 191);
  if ( (v22 & 1) != 0 )
  {
    v23 = 1;
    *(_BYTE *)(a1 + 191) = v22 & 0xFE;
  }
  else
  {
    v23 = 0;
  }
  if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 && v20 + v7 > v21 )
  {
    LODWORD(v7) = (v21 - v20 + 511) & 0xFFFFFE00;
    *(_BYTE *)(a1 + 191) |= 1u;
  }
  if ( (a2 & 1) != 0 )
  {
    v24 = (_BYTE *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (unsigned __int8)(*v24 - 1) <= 1u && v24 && *v24 != 2 )
      *(_BYTE *)(a1 + 189) |= 4u;
  }
  if ( (int)PsGetIoPriorityThread(KeGetCurrentThread()) < 2 )
    *(_BYTE *)(a1 + 189) |= 0x40u;
  *(_DWORD *)(a1 + 296) = v7;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_WORD *)(a1 + 266) = 0;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 300) = 0;
  *(_WORD *)(a1 + 264) = 8 * ((((unsigned __int64)(unsigned int)v7 + 4095) >> 12) + 6);
  MiLockPageAtDpcInline(v12);
  *(_BYTE *)(v12 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v12);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v25 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)((__int64)v18 - v27) >> 3) + 304) - 0x58000000000LL;
  result = *(_WORD *)(a1 + 266) | 0x42;
  *(_WORD *)(a1 + 266) = result;
  if ( !v23 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 266) = result;
  }
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 96) = v20;
  *(_QWORD *)(a1 + 232) = v27;
  *(_QWORD *)(a1 + 240) = v25;
  *(_QWORD *)(a1 + 200) = v11;
  return result;
}
