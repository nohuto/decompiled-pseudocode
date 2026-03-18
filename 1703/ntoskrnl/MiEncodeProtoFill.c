/*
 * XREFs of MiEncodeProtoFill @ 0x140119844
 * Callers:
 *     MiInitializePrototypePtes @ 0x14054AFA8 (MiInitializePrototypePtes.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiEncodeProtoFill(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // r15
  char *AnyMultiplexedVm; // r14
  LONG *SharedVm; // rdi
  KIRQL v8; // al
  unsigned __int8 v9; // bp
  __int64 v10; // rcx
  LONG *v11; // rax
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
    if ( (unsigned int)MiPteInShadowRange(v4) )
      MiWritePteShadow(v10);
    ++v4;
  }
  MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v9);
  v11 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
  else
    *v11 = 0;
  result = v9;
  __writecr8(v9);
  return result;
}
