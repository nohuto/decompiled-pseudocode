/*
 * XREFs of MmCreateShadowMapping @ 0x14062B744
 * Callers:
 *     KiShadowProcessorAllocation @ 0x14047C088 (KiShadowProcessorAllocation.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiCleanupPageTablePages @ 0x1400493E0 (MiCleanupPageTablePages.c)
 *     MiInitializeColorBase @ 0x1400494D0 (MiInitializeColorBase.c)
 *     MiGetPageTablePages @ 0x1400716C0 (MiGetPageTablePages.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400E5518 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     MiPageTablesNeeded @ 0x1401763A4 (MiPageTablesNeeded.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiMakeShadowPageTableRange @ 0x14062B8BC (MiMakeShadowPageTableRange.c)
 */

__int64 __fastcall MmCreateShadowMapping(__int64 PteAddress, __int64 a2)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r8
  struct _KTHREAD *CurrentThread; // rsi
  PEPROCESS v10; // rbx
  struct _KPROCESS *Process; // r15
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v16[36]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[48]; // [rsp+160h] [rbp+60h] BYREF
  char v18; // [rsp+190h] [rbp+90h] BYREF

  memset(v16, 0, 0x118uLL);
  v16[3] = &MiSystemPartition;
  v16[6] = 0x10000000CLL;
  v4 = a2 + PteAddress - 1;
  MiInitializeColorBase(PteAddress);
  v5 = MiPageTablesNeeded(PteAddress, v4);
  if ( (int)MiGetPageTablePages((__int64)v16, v5, &v15) < 0 )
    return 0LL;
  v16[2] = v15;
  do
  {
    PteAddress = MiGetPteAddress(PteAddress);
    v6 = MiGetPteAddress(v4);
    *v7 = v6;
    v4 = v6;
    *(v7 - 1) = PteAddress;
  }
  while ( v8 != 1 );
  CurrentThread = KeGetCurrentThread();
  v10 = PsInitialSystemProcess;
  Process = CurrentThread->ApcState.Process;
  if ( Process != PsInitialSystemProcess )
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v17);
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v10);
  MiMakeShadowPageTableRange(PteAddress, v4, (unsigned int)&v18, 3, (__int64)v16);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v10, v12, v13);
  if ( Process != v10 )
    KiUnstackDetachProcess((__int64)v17, 0LL);
  MiCleanupPageTablePages((__int64)v16);
  return 1LL;
}
