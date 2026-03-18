/*
 * XREFs of MiWriteEnclavePte @ 0x1402649B4
 * Callers:
 *     MiAddPagesToEnclave @ 0x140750E84 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140751610 (MiCopyPagesIntoEnclave.c)
 *     MiProtectEnclavePages @ 0x140752874 (MiProtectEnclavePages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 */

__int64 __fastcall MiWriteEnclavePte(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int16 *v6; // rbp
  unsigned __int64 v7; // r14
  unsigned __int8 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8

  v6 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = MiLockWorkingSetShared((__int64)v6);
  MiLockPageTableInternal((__int64)v6, v7, 0LL);
  if ( a3 )
  {
    MiWriteValidPteNewProtection(a1, a2);
  }
  else
  {
    *(_QWORD *)a1 = a2;
    if ( MiPteInShadowRange(a1) )
      MiWritePteShadow(v9, a2, v10);
  }
  MiUnlockPageTableInternal((__int64)v6, v7);
  return MiUnlockWorkingSetShared((__int64)v6, v8, v11);
}
