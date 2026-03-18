/*
 * XREFs of MmDeleteShadowMapping @ 0x14041D938
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140403934 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x140403A28 (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     MiInitializeTbFlushList @ 0x14007F890 (MiInitializeTbFlushList.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400998FC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     KeUnstackDetachProcess @ 0x1400B0360 (KeUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1400B25D0 (KeStackAttachProcess.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14017CABC (MiReadWriteAnyLevelShadowPte.c)
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
  _BYTE v13[192]; // [rsp+50h] [rbp-E8h] BYREF

  PteAddress = MiGetPteAddress(a1);
  v4 = MiGetPteAddress(v3 + v1 - 1);
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v13, 0, 20);
  MiInsertTbFlushEntry((__int64)v13, v9 & 0xFFFFFFFFFFFFF000uLL, v8 >> 12, 0);
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
