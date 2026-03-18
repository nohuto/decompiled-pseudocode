/*
 * XREFs of MiEncodeProtoFill @ 0x14012459C
 * Callers:
 *     MiInitializePrototypePtes @ 0x14048DF98 (MiInitializePrototypePtes.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // r15
  char *AnyMultiplexedVm; // r14
  LONG *SharedVm; // rdi
  KIRQL v8; // al
  unsigned __int8 v9; // bp
  LONG *v10; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = &v4[a2 >> 12];
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  while ( v4 < v5 )
  {
    *v4 = a3;
    if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(v4, a3);
    ++v4;
  }
  MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v9);
  v10 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
  else
    *v10 = 0;
  result = v9;
  __writecr8(v9);
  return result;
}
