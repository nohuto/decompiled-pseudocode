/*
 * XREFs of MiEncodeProtoFill @ 0x14004AAA0
 * Callers:
 *     MiInitializePrototypePtes @ 0x1404BD1E0 (MiInitializePrototypePtes.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // r14
  char *AnyMultiplexedVm; // rbp
  __int64 v8; // r8
  unsigned __int8 v9; // r15
  __int64 v10; // rcx

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0LL;
  v6 = v4 + 8 * (a2 >> 12);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v9 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  if ( v4 >= v6 )
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9, v8);
  do
  {
    if ( v5 )
    {
      if ( (v4 & 0xFFF) != 0 )
        goto LABEL_4;
      MiUnlockPageTableInternal(AnyMultiplexedVm, v5);
    }
    v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(AnyMultiplexedVm, v5, 0LL);
LABEL_4:
    *(_QWORD *)v4 = a3;
    if ( MiPteInShadowRange(v4) )
      MiWritePteShadow(v10, a3);
    v4 += 8LL;
  }
  while ( v4 < v6 );
  if ( v5 )
    MiUnlockPageTableInternal(AnyMultiplexedVm, v5);
  return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v9, v8);
}
