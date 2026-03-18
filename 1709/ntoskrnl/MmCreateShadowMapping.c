/*
 * XREFs of MmCreateShadowMapping @ 0x14043D3A4
 * Callers:
 *     KiShadowProcessorAllocation @ 0x14042391C (KiShadowProcessorAllocation.c)
 * Callees:
 *     MiGetPageTablePages @ 0x140027ECC (MiGetPageTablePages.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400A0BBC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     KeUnstackDetachProcess @ 0x1400BD880 (KeUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1400BD8C0 (KeStackAttachProcess.c)
 *     MiCleanupPageTablePages @ 0x1400C3F04 (MiCleanupPageTablePages.c)
 *     MiPageTablesNeeded @ 0x1400C4984 (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiMakeShadowPageTableRange @ 0x14043D2B4 (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(__int64 PteAddress, __int64 a2)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rsi
  PEPROCESS v11; // rbx
  struct _KPROCESS *Process; // r14
  _QWORD v13[10]; // [rsp+30h] [rbp-E8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v15[8]; // [rsp+B0h] [rbp-68h] BYREF

  memset(v13, 0, 0x48uLL);
  v4 = a2 + PteAddress - 1;
  v5 = MiPageTablesNeeded(PteAddress, v4, 1u, 1);
  v13[3] = &MiSystemPartition;
  v13[6] = 0x10000000CLL;
  result = MiGetPageTablePages((__int64)v13, PteAddress, v5);
  if ( (_DWORD)result )
  {
    do
    {
      PteAddress = MiGetPteAddress(PteAddress);
      v7 = MiGetPteAddress(v4);
      *v8 = v7;
      v4 = v7;
      *(v8 - 1) = PteAddress;
    }
    while ( v9 != 1 );
    CurrentThread = KeGetCurrentThread();
    v11 = PsInitialSystemProcess;
    Process = CurrentThread->ApcState.Process;
    if ( Process != PsInitialSystemProcess )
      KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v11);
    MiMakeShadowPageTableRange(PteAddress, v4, (__int64)v15, 3, (__int64)v13);
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v11);
    if ( Process != v11 )
      KeUnstackDetachProcess(&ApcState);
    MiCleanupPageTablePages((__int64)v13);
    return 1LL;
  }
  return result;
}
