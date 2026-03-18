/*
 * XREFs of MmDeleteShadowMapping @ 0x14074F478
 * Callers:
 *     KiShadowProcessorAllocation @ 0x14047C088 (KiShadowProcessorAllocation.c)
 *     KiUnshadowProcessorAllocation @ 0x140484FA8 (KiUnshadowProcessorAllocation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x14003B3A0 (MiInitializeTbFlushList.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400E5518 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x140176218 (MiReadWriteAnyLevelShadowPte.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

_QWORD *__fastcall MmDeleteShadowMapping(unsigned __int64 a1)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *result; // rax
  _BYTE v16[48]; // [rsp+20h] [rbp-118h] BYREF
  _BYTE v17[192]; // [rsp+50h] [rbp-E8h] BYREF

  PteAddress = MiGetPteAddress(a1);
  v4 = MiGetPteAddress(v3 + v1 - 1);
  CurrentThread = KeGetCurrentThread();
  v6 = v4;
  Process = CurrentThread->ApcState.Process;
  MiInitializeTbFlushList((__int64)v17, 0, 20);
  MiInsertTbFlushEntry((__int64)v17, v9 & 0xFFFFFFFFFFFFF000uLL, v8 >> 12, 0);
  v10 = PsInitialSystemProcess;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v16);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v10);
  while ( PteAddress <= v6 )
  {
    MiReadWriteAnyLevelShadowPte(PteAddress, 0, 1, ZeroPte);
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v17, v11, v12);
  result = UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v10, v13, v14);
  if ( Process != v10 )
    return (_QWORD *)KiUnstackDetachProcess((__int64)v16, 0LL);
  return result;
}
