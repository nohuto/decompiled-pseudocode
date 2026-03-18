/*
 * XREFs of MiFinishMdlForMappedFileFault @ 0x140057A28
 * Callers:
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiReferenceControlAreaPfn @ 0x1400579A8 (MiReferenceControlAreaPfn.c)
 *     MiObtainProtoReference @ 0x140057FC0 (MiObtainProtoReference.c)
 *     MiFlowThroughInsertNode @ 0x1400D2638 (MiFlowThroughInsertNode.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     PsGetIoPriorityThread @ 0x1401281D0 (PsGetIoPriorityThread.c)
 *     MiEndingOffsetWithLock @ 0x140128880 (MiEndingOffsetWithLock.c)
 *     MiStartingOffset @ 0x140129FF0 (MiStartingOffset.c)
 */

__int16 __fastcall MiFinishMdlForMappedFileFault(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 *v5; // r15
  __int64 v7; // rsi
  __int64 v9; // rbx
  ULONG_PTR v11; // r13
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbp
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  char v16; // cl
  char v17; // cl
  char *v18; // r14
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int16 result; // ax
  char v25; // al
  __int64 v26; // [rsp+60h] [rbp+8h]
  char v27; // [rsp+70h] [rbp+18h]

  v5 = *(__int64 **)(a1 + 200);
  v7 = *(unsigned int *)(a1 + 180);
  v9 = a3;
  v26 = *v5;
  MiReferenceControlAreaPfn(*v5, (__int64)v5, a3);
  v11 = *(_QWORD *)(a1 + 160);
  MiObtainProtoReference(v11, 0LL);
  MiLockPageAtDpcInline(v11);
  *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + v9)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v12 = *(_QWORD *)(48LL * *(_QWORD *)(a1 + 312) - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( a4 )
    MiFlowThroughInsertNode(a1, a4);
  v13 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 168) = MI_READ_PTE_LOCK_FREE(v13);
  v14 = MiStartingOffset(v5, v12, a5);
  v15 = MiEndingOffsetWithLock(v5);
  v16 = *(_BYTE *)(a1 + 191);
  if ( (v16 & 1) != 0 )
  {
    v16 &= ~1u;
    v27 = 1;
    *(_BYTE *)(a1 + 191) = v16;
  }
  else
  {
    v27 = 0;
  }
  if ( (*(_DWORD *)(v26 + 56) & 0x20) != 0 && v14 + v7 > v15 )
  {
    v7 = ((_DWORD)v15 - (_DWORD)v14 + 511) & 0xFFFFFE00;
    *(_BYTE *)(a1 + 191) = v16 | 1;
  }
  v17 = a2;
  v18 = (char *)(a2 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v17 & 1) != 0 )
  {
    v25 = *v18;
    if ( *v18 == 1 || (v25 = *v18, *v18 == 2) )
    {
      if ( v18 && v25 != 2 )
        *(_BYTE *)(a1 + 189) |= 4u;
    }
  }
  if ( (int)PsGetIoPriorityThread(KeGetCurrentThread()) < 2 )
    *(_BYTE *)(a1 + 189) |= 0x40u;
  *(_DWORD *)(a1 + 304) = v7;
  *(_WORD *)(a1 + 272) = 8 * (((unsigned __int64)(v7 + 4095) >> 12) + 6);
  *(_QWORD *)(a1 + 264) = v19;
  *(_WORD *)(a1 + 274) = v19;
  *(_QWORD *)(a1 + 296) = v19;
  *(_DWORD *)(a1 + 308) = v19;
  MiLockPageAtDpcInline(v11);
  *(_BYTE *)(v11 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(v11, v20, v21, v22);
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v23 = 48LL * *(_QWORD *)(a1 + 8 * ((__int64)(v13 - v12) >> 3) + 312) - 0x58000000000LL;
  result = *(_WORD *)(a1 + 274) | 0x42;
  *(_WORD *)(a1 + 274) = result;
  if ( !v27 )
  {
    result |= 0x4000u;
    *(_WORD *)(a1 + 274) = result;
  }
  *(_QWORD *)(a1 + 96) = v14;
  *(_QWORD *)(a1 + 232) = v12;
  *(_QWORD *)(a1 + 240) = v23;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = v26;
  return result;
}
