/*
 * XREFs of MiCreatePageTablesForPhysicalRange @ 0x140262490
 * Callers:
 *     MiInsertPrivateVad @ 0x1400E4BE4 (MiInsertPrivateVad.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiIncreaseUsedPtesCount @ 0x14003C650 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14003E470 (MiGetUsedPtesHandle.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiCreatePageTablesForPhysicalRange(__int64 a1)
{
  unsigned __int16 *v1; // rsi
  unsigned int v2; // r13d
  ULONG_PTR v3; // r14
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  __int64 v6; // r8
  unsigned __int8 v7; // bl
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 UsedPtesHandle; // rax
  __int64 result; // rax
  unsigned __int8 v12; // [rsp+60h] [rbp+8h]

  v1 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v2 = (*(_DWORD *)(a1 + 48) >> 8) & 0x3F;
  v3 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v4 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
     - 0x97FFFFFFFF8LL;
  v12 = MiLockWorkingSetShared((__int64)v1);
  v7 = v12;
  if ( v3 < v5 )
  {
    v8 = (__int64)(v4 << 25) >> 16;
    do
    {
      MiMakeSystemAddressValid(v3, 0LL, v2, v7, 0);
      v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v4) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      MiLockPageAtDpcInline(v9);
      *(_QWORD *)(v9 + 24) ^= (*(_QWORD *)(v9 + 24) ^ (*(_QWORD *)(v9 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v8 << 25) >> 16);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
      MiUnlockPageTableInternal((__int64)v1, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v4 += 8LL;
      v8 = (__int64)(v4 << 25) >> 16;
      v3 = v8;
      if ( (unsigned int)MiWorkingSetIsContended((__int64)v1) || KeShouldYieldProcessor() )
      {
        v7 = v12;
        result = MiUnlockWorkingSetShared((__int64)v1, v12, v6);
        if ( v8 >= v5 )
          return result;
        MiLockWorkingSetShared((__int64)v1);
      }
      else
      {
        v7 = v12;
      }
    }
    while ( v8 < v5 );
  }
  return MiUnlockWorkingSetShared((__int64)v1, v7, v6);
}
