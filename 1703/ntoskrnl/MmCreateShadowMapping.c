/*
 * XREFs of MmCreateShadowMapping @ 0x14041D7C8
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140403934 (KiShadowProcessorAllocation.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x1400998FC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     KeUnstackDetachProcess @ 0x1400B0360 (KeUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1400B25D0 (KeStackAttachProcess.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiCleanupPageTablePages @ 0x14010AD58 (MiCleanupPageTablePages.c)
 *     MiGetPageTablePages @ 0x14010E79C (MiGetPageTablePages.c)
 *     MiPageTablesNeeded @ 0x1401281E0 (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiMakeShadowPageTableRange @ 0x14041D6E8 (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(unsigned __int64 PteAddress, __int64 a2)
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
  __int64 *v13[7]; // [rsp+30h] [rbp-D8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v15[8]; // [rsp+A0h] [rbp-68h] BYREF

  memset(v13, 0, sizeof(v13));
  v4 = a2 + PteAddress - 1;
  v5 = MiPageTablesNeeded(PteAddress, v4, 1u, 1);
  v13[1] = (__int64 *)&MiSystemPartition;
  v13[4] = (__int64 *)0x10000000CLL;
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
    MiMakeShadowPageTableRange(PteAddress, v4, (__int64)v15, 3, v13);
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v11);
    if ( Process != v11 )
      KeUnstackDetachProcess(&ApcState);
    MiCleanupPageTablePages((__int64)v13);
    return 1LL;
  }
  return result;
}
