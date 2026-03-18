/*
 * XREFs of MiJumpStackTarget @ 0x140003FD0
 * Callers:
 *     MiDoStackCopy @ 0x140003EE0 (MiDoStackCopy.c)
 * Callees:
 *     MiCopyKstack @ 0x14000265C (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x1400027AC (MiSwitchKstackPages.c)
 *     MiCanStealKernelStack @ 0x140003BA8 (MiCanStealKernelStack.c)
 *     MiGetLeafPfnBuddy @ 0x140003F94 (MiGetLeafPfnBuddy.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

volatile signed __int32 *__fastcall MiJumpStackTarget(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  signed __int32 v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r13
  int CanStealKernelStack; // eax
  unsigned __int64 v12; // rdx
  int v13; // r11d
  unsigned int v14; // r11d
  unsigned __int64 v15; // rbx
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rdi
  signed __int32 v19; // eax
  unsigned int v20; // ebx
  volatile signed __int32 *result; // rax
  char v22; // [rsp+60h] [rbp+8h]
  int v23; // [rsp+68h] [rbp+10h] BYREF
  int v24; // [rsp+70h] [rbp+18h] BYREF

  v1 = *a1;
  v3 = a1[2];
  v4 = _InterlockedDecrement((volatile signed __int32 *)v3);
  v5 = ~v4 & 0x80000000;
  if ( (v4 & 0x7FFFFFFF) != 0 )
  {
    v23 = 0;
    while ( (*(_DWORD *)v3 & 0x80000000) != v5 )
      KeYieldProcessorEx(&v23);
  }
  else
  {
    *(_DWORD *)v3 = v5 | *(_DWORD *)(v3 + 4);
    if ( !*(_DWORD *)(v1 + 32) )
    {
      v6 = 48LL * *(_QWORD *)v1 - 0x58000000000LL;
      v7 = *(_QWORD *)(v1 + 56);
      v8 = 48LL * *(_QWORD *)(v1 + 8) - 0x58000000000LL;
      v9 = 0LL;
      v22 = MiLockWorkingSetShared(v7);
      MiLockPageAtDpcInline(v6);
      v10 = *(_QWORD *)(v1 + 40);
      CanStealKernelStack = MiCanStealKernelStack(v6);
      if ( CanStealKernelStack == v13
        && ((MiGetLeafPfnBuddy((_QWORD *)v6) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0
        && (v12 = 0xFFFFF68000000000uLL, v10 == (__int64)(*(_QWORD *)(v6 + 8) << 25) >> 16)
        && (v15 = *(_QWORD *)(v6 + 8),
            (v9 = (((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & -(__int64)((unsigned int)MiLockPageTableInternal(
                                                                                                 v7,
                                                                                                 ((v15 >> 9) & 0x7FFFFFFFF8LL)
                                                                                               - 0x98000000000LL,
                                                                                                 v14) != 0)) != 0) )
      {
        if ( *(_QWORD *)(v1 + 48) )
          MiRemoveLockedPageChargeAndDecRef(v6);
        MiCopyKstack(v8, v6, *(_QWORD *)(v1 + 16));
        KeFlushSingleTb(v10, 0LL, 2LL);
        MiSwitchKstackPages(v8, v6);
        *(_QWORD *)(v6 + 40) &= ~0x200000000000000uLL;
        *(_BYTE *)(v6 + 34) &= 0xC7u;
        *(_BYTE *)(v6 + 35) &= ~0x20u;
        v16 = 0;
      }
      else
      {
        v16 = -1073740748;
      }
      *(_DWORD *)(v1 + 32) = v16;
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v9 )
        MiUnlockPageTableInternal(v7, v9);
      LOBYTE(v12) = v22;
      MiUnlockWorkingSetShared(v7, v12);
      v17 = *(_QWORD **)(v1 + 16);
      *v17 = ZeroPte;
      if ( (unsigned int)MiPteInShadowRange(v17) )
        MiWritePteShadow();
    }
  }
  v18 = a1[2];
  v19 = _InterlockedDecrement((volatile signed __int32 *)v18);
  v20 = ~v19 & 0x80000000;
  if ( (v19 & 0x7FFFFFFF) != 0 )
  {
    v24 = 0;
    while ( (*(_DWORD *)v18 & 0x80000000) != v20 )
      KeYieldProcessorEx(&v24);
  }
  else
  {
    *(_DWORD *)v18 = v20 | *(_DWORD *)(v18 + 4);
  }
  result = (volatile signed __int32 *)a1[1];
  _InterlockedDecrement(result);
  return result;
}
