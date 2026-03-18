/*
 * XREFs of MiCreatePageTablesForPhysicalRange @ 0x1402290E4
 * Callers:
 *     MiInsertPrivateVad @ 0x14010C710 (MiInsertPrivateVad.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     MiIncreaseUsedPtesCount @ 0x1400666F8 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x140228894 (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiCreatePageTablesForPhysicalRange(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // r15d
  ULONG_PTR v5; // rsi
  __int64 v6; // r14
  __int64 result; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 UsedPtesHandle; // rax

  v3 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v4 = (*(_DWORD *)(a1 + 48) >> 8) & 0x3F;
  v5 = ((8 * (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))) & 0x7FFFFFFFF8LL)
     - 0x98000000000LL;
  v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  result = 0xFFFFF68000000008uLL;
  v8 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
     - 0x97FFFFFFFF8LL;
  while ( v5 < v8 )
  {
    MiMakeSystemAddressValid(v5, 0LL, v4, a2, 1);
    v9 = 512 - ((v5 >> 3) & 0x1FF);
    if ( v9 > (__int64)(v8 - v5) >> 3 )
      v9 = (__int64)(v8 - v5) >> 3;
    v10 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v6) - 0x58000000000LL;
    MiLockPageAtDpcInline(v10);
    *(_QWORD *)(v10 + 24) ^= (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    UsedPtesHandle = MiGetUsedPtesHandle(v3);
    result = MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
    v5 += 8 * v9;
    v6 += 8LL;
    v3 += v9 << 12;
  }
  return result;
}
