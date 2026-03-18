/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x1401A6244
 * Callers:
 *     MiWsleFree @ 0x140027A70 (MiWsleFree.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x1401A6760 (MiTransferSoftwarePte.c)
 */

signed __int64 __fastcall MiRewriteTrimPteAsDemandZero(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // r10
  unsigned __int16 v12; // dx
  __int64 v13; // rbx
  __int64 v14; // r9
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rbp
  signed __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // r10

  v6 = a2[2];
  if ( (v6 & 2) != 0 )
  {
    v10 = MiReverseSwizzleInvalidPte(v6, v6, a3, a4);
    v7 = 2LL;
    v8 = HIDWORD(v10);
    v9 = *(_QWORD *)(*(_QWORD *)(qword_1403CBD88 + 8 * ((v11 >> 40) & 0x3FF)) + 8LL * (v12 >> 12) + 6880);
  }
  else
  {
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
  }
  v13 = MiTransferSoftwarePte(a2[2], v9, v8, v7);
  v14 = a2[5];
  v15 = (_QWORD *)(a2[1] | 0x8000000000000000uLL);
  v16 = *((unsigned int *)a2 + 2);
  if ( (v14 & 0x200000000000000LL) != 0 )
  {
    v20 = 48 * (v14 & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v21 = (__int64 *)(MiMapPageInHyperSpaceWorker(v14 & 0xFFFFFFFFFLL, 0LL, 0x80000000, v14 & 0xFFFFFFFFFLL)
                    + 8 * ((v16 >> 3) & 0x1FF));
    *v21 = v13;
    if ( MiPteInShadowRange((unsigned __int64)v21) )
      MiWritePteShadow(v22, v13, v23);
    MiUnmapPageInHyperSpaceWorker(v24, 0x11u, 0x80000000);
    MiLockNestedPageAtDpcInline(v20);
    MiDecrementShareCount(v20);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    *v15 = v13;
    result = MiPteInShadowRange((unsigned __int64)v15);
    if ( (_DWORD)result )
      result = (signed __int64)MiWritePteShadow(v18, v13, v19);
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      return _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 360), 0xFFFFFFFFFFFFFFFFuLL);
  }
  return result;
}
