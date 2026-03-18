/*
 * XREFs of MmDeleteShadowMapping @ 0x14043D51C
 * Callers:
 *     KiShadowProcessorAllocation @ 0x14042391C (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x140423A10 (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400A0BBC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiInitializeTbFlushList @ 0x1400A5D30 (MiInitializeTbFlushList.c)
 *     KeUnstackDetachProcess @ 0x1400BD880 (KeUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1400BD8C0 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14017C214 (MiReadWriteAnyLevelShadowPte.c)
 */

void __fastcall MmDeleteShadowMapping(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 PteAddress; // rbx
  __int64 v3; // r10
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v6; // rbp
  struct _KPROCESS *Process; // r14
  unsigned __int64 v8; // r11
  __int64 v9; // r10
  PEPROCESS v10; // rdi
  _KPROCESS *v11; // rdx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-118h] BYREF
  int v13[48]; // [rsp+50h] [rbp-E8h] BYREF

  PteAddress = MiGetPteAddress(a1);
  v4 = MiGetPteAddress(v3 + v1 - 1);
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v13, 0, 20);
  MiInsertTbFlushEntry(v13, v9 & 0xFFFFFFFFFFFFF000uLL, v8 >> 12, 0);
  v10 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v10);
  while ( PteAddress <= v6 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0, 1, ZeroPte);
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v13, v11);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v10);
  if ( Process != v10 )
    KeUnstackDetachProcess(&ApcState);
}
