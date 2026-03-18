/*
 * XREFs of MiJumpStackTarget @ 0x140040A00
 * Callers:
 *     MiDoStackCopy @ 0x140034560 (MiDoStackCopy.c)
 * Callees:
 *     MiCopyKstack @ 0x140027EA0 (MiCopyKstack.c)
 *     MiCanStealKernelStack @ 0x14002C25C (MiCanStealKernelStack.c)
 *     MiSwitchKstackPages @ 0x14003BBDC (MiSwitchKstackPages.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(__int64 *a1)
{
  __int64 v1; // r15
  __int64 v3; // rsi
  signed __int32 v4; // eax
  unsigned int v5; // edi
  __int64 v6; // r14
  __int64 AnyMultiplexedVm; // r13
  __int64 SharedVm; // rdi
  KIRQL v9; // al
  KIRQL v10; // r12
  __int64 v11; // r11
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rax
  __int64 v16; // rsi
  signed __int32 v17; // eax
  unsigned int v18; // edi
  volatile signed __int32 *result; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h]
  __int64 v24; // [rsp+78h] [rbp+20h]

  v1 = *a1;
  v3 = a1[2];
  v4 = _InterlockedDecrement((volatile signed __int32 *)v3);
  v5 = ~v4 & 0x80000000;
  if ( (v4 & 0x7FFFFFFF) != 0 )
  {
    v21 = 0;
    while ( (*(_DWORD *)v3 & 0x80000000) != v5 )
      KeYieldProcessorEx(&v21);
  }
  else
  {
    *(_DWORD *)v3 = v5 | *(_DWORD *)(v3 + 4);
    if ( !*(_DWORD *)(v1 + 32) )
    {
      v6 = 48LL * *(_QWORD *)v1 - 0x58000000000LL;
      v23 = 48LL * *(_QWORD *)(v1 + 8) - 0x58000000000LL;
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
      SharedVm = MiGetSharedVm(AnyMultiplexedVm);
      v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      v10 = v9;
      MiLockPageAtDpcInline(v6);
      v24 = *(_QWORD *)(v1 + 40);
      if ( (unsigned int)MiCanStealKernelStack(v6) == 1
        && *(_QWORD *)v6 != -5LL
        && (*(_QWORD *)v6 & 1) != 0
        && v11 == (__int64)(*(_QWORD *)(v6 + 8) << 25) >> 16 )
      {
        if ( *(_QWORD *)(v1 + 48) )
          MiRemoveLockedPageChargeAndDecRef(v6);
        MiCopyKstack(v23, v6, *(_QWORD *)(v1 + 16));
        KeFlushSingleTb(v24, 0LL, 2LL);
        MiSwitchKstackPages(v23, v6);
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
      if ( (unsigned int)MiPteInShadowRange(v12) )
        MiWritePteShadow(v14);
      LOBYTE(v13) = v10;
      MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v13);
      v15 = (_DWORD *)MiGetSharedVm(AnyMultiplexedVm);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
      else
        *v15 = 0;
      __writecr8(v10);
    }
  }
  v16 = a1[2];
  v17 = _InterlockedDecrement((volatile signed __int32 *)v16);
  v18 = ~v17 & 0x80000000;
  if ( (v17 & 0x7FFFFFFF) != 0 )
  {
    v22 = 0;
    while ( (*(_DWORD *)v16 & 0x80000000) != v18 )
      KeYieldProcessorEx(&v22);
  }
  else
  {
    *(_DWORD *)v16 = v18 | *(_DWORD *)(v16 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}
