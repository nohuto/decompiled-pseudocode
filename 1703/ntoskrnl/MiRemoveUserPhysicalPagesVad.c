/*
 * XREFs of MiRemoveUserPhysicalPagesVad @ 0x1406B8B58
 * Callers:
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140020340 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140021C70 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MiInitializeTbFlushList @ 0x14007F890 (MiInitializeTbFlushList.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiRemoveUserPhysicalPagesVad(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  unsigned __int64 PteAddress; // rdi
  __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  __int64 v6; // r9
  ULONG_PTR v7; // r14
  _KPROCESS *v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v10[192]; // [rsp+30h] [rbp-D8h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = (__int64)CurrentThread->ApcState.Process;
  if ( *(_QWORD *)(result + 1600) )
  {
    PteAddress = MiGetPteAddress((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
    v5 = MiGetPteAddress(((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF);
    MiInitializeTbFlushList((__int64)v10, 1, 20);
    --CurrentThread->SpecialApcDisable;
    v7 = v6 + 16;
    ExAcquireAutoExpandPushLockExclusive(v6 + 16, 0LL);
    while ( PteAddress <= v5 )
    {
      v9 = MI_READ_PTE_LOCK_FREE(PteAddress);
      if ( (v9 & 1) != 0 )
      {
        _InterlockedAnd64(
          (volatile signed __int64 *)(48
                                    * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9) >> 12) & 0xFFFFFFFFFLL)
                                    - 0x57FFFFFFFF8LL),
          0LL);
        MiInsertTbFlushEntry((__int64)v10, (__int64)(PteAddress << 25) >> 16, 1LL, 0);
        *(_QWORD *)PteAddress = 0LL;
        if ( MiPteInShadowRange(PteAddress) )
          MiWritePteShadow();
      }
      PteAddress += 8LL;
    }
    MiFlushTbList((__int64)v10, v8);
    ExReleaseAutoExpandPushLockExclusive(v7, 0LL);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
