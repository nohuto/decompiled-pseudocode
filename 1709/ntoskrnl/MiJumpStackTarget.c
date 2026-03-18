/*
 * XREFs of MiJumpStackTarget @ 0x1400D00F0
 * Callers:
 *     MiDoStackCopy @ 0x1400CFFD0 (MiDoStackCopy.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     MiCanStealKernelStack @ 0x1400CE71C (MiCanStealKernelStack.c)
 *     MiGetLeafPfnBuddy @ 0x1400D00B8 (MiGetLeafPfnBuddy.c)
 *     MiSwitchKstackPages @ 0x1400D059C (MiSwitchKstackPages.c)
 *     MiCopyKstack @ 0x1400D0608 (MiCopyKstack.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v3; // rsi
  signed __int32 v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rbp
  char *AnyMultiplexedVm; // r13
  LONG *SharedVm; // rdi
  KIRQL v9; // al
  unsigned __int8 v10; // r12
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rcx
  LONG *v13; // rax
  __int64 v14; // rsi
  signed __int32 v15; // eax
  unsigned int v16; // edi
  volatile signed __int32 *result; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v19; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+18h]

  v1 = *a1;
  v3 = a1[2];
  v4 = _InterlockedDecrement((volatile signed __int32 *)v3);
  v5 = ~v4 & 0x80000000;
  if ( (v4 & 0x7FFFFFFF) != 0 )
  {
    v19 = 0;
    while ( (*(_DWORD *)v3 & 0x80000000) != v5 )
      KeYieldProcessorEx(&v19);
  }
  else
  {
    *(_DWORD *)v3 = v5 | *(_DWORD *)(v3 + 4);
    if ( !*(_DWORD *)(v1 + 32) )
    {
      v6 = 48LL * *(_QWORD *)v1 - 0x58000000000LL;
      v21 = 48LL * *(_QWORD *)(v1 + 8) - 0x58000000000LL;
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
      SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
      v9 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v10 = v9;
      MiLockPageAtDpcInline(v6);
      if ( (unsigned int)MiCanStealKernelStack(v6) == 1
        && ((MiGetLeafPfnBuddy((_QWORD *)v6) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0
        && (v11 = *(_QWORD *)(v1 + 40), v11 == (__int64)(*(_QWORD *)(v6 + 8) << 25) >> 16) )
      {
        if ( *(_QWORD *)(v1 + 48) )
          MiRemoveLockedPageChargeAndDecRef(v6);
        MiCopyKstack(v21, v6, *(_QWORD *)(v1 + 16));
        KeFlushSingleTb(v11, 0, 2u);
        MiSwitchKstackPages(v21, v6);
        *(_QWORD *)(v6 + 40) &= ~0x200000000000000uLL;
        *(_BYTE *)(v6 + 34) &= 0xC7u;
        *(_BYTE *)(v6 + 35) &= ~0x20u;
        *(_DWORD *)(v1 + 32) = 0;
      }
      else
      {
        *(_DWORD *)(v1 + 32) = -1073740748;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v12 = *(_QWORD **)(v1 + 16);
      *v12 = 0LL;
      if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow(v12, 0LL);
      MiPreUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v10);
      v13 = MiGetSharedVm((__int64)AnyMultiplexedVm);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13, retaddr);
      else
        *v13 = 0;
      __writecr8(v10);
    }
  }
  v14 = a1[2];
  v15 = _InterlockedDecrement((volatile signed __int32 *)v14);
  v16 = ~v15 & 0x80000000;
  if ( (v15 & 0x7FFFFFFF) != 0 )
  {
    v20 = 0;
    while ( (*(_DWORD *)v14 & 0x80000000) != v16 )
      KeYieldProcessorEx(&v20);
  }
  else
  {
    *(_DWORD *)v14 = v16 | *(_DWORD *)(v14 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}
