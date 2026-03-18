/*
 * XREFs of MiCreateHardwareEnclave @ 0x1406E8318
 * Callers:
 *     MiCreateEnclave @ 0x1406E8210 (MiCreateEnclave.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140101100 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1401038D0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiGetVmPartition @ 0x140120738 (MiGetVmPartition.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetEnclavePage @ 0x140229730 (MiGetEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x1402298F0 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x140229A18 (MiReserveEnclavePages.c)
 *     KeCreateEnclave @ 0x1406D7F48 (KeCreateEnclave.c)
 */

__int64 __fastcall MiCreateHardwareEnclave(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  unsigned __int64 v8; // rbp
  __int64 v9; // r12
  unsigned __int64 v10; // r14
  _QWORD *VmPartition; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // r10
  _QWORD *v14; // rsi
  int Enclave; // ebx
  ULONG_PTR v16; // rbp
  __int64 EnclavePage; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int16 v21; // cx
  char v22; // cl
  int v24; // [rsp+20h] [rbp-58h]
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF
  __int64 v26; // [rsp+98h] [rbp+20h]

  v26 = a4;
  v25 = a1;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v8 = Process[1].ActiveProcessors.Bitmap[3];
  v9 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  v10 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF;
  VmPartition = (_QWORD *)MiGetVmPartition((__int64)&Process[1].IdealNode[12]);
  v14 = VmPartition;
  if ( !v13 || (Enclave = MiReserveEnclavePages(a2, VmPartition, (v13 >> 12) + ((v13 & v12) != 0)), Enclave >= 0) )
  {
    --CurrentThread->SpecialApcDisable;
    v16 = ExAcquireAutoExpandPushLockShared(v8 + 16, 0LL);
    EnclavePage = MiGetEnclavePage(v14, 0);
    v18 = EnclavePage;
    if ( EnclavePage == -1 )
    {
      Enclave = -1073741801;
    }
    else
    {
      v19 = *(_QWORD *)(a2 + 72);
      MiInitializeEnclavePfn(EnclavePage, v19, 4);
      *(_QWORD *)v19 = MiMakeValidPte(v19, v18, -1610612732);
      if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      v20 = Process[1].ActiveProcessors.Bitmap[7];
      v22 = 1;
      if ( v20 )
      {
        v21 = *(_WORD *)(v20 + 8);
        if ( v21 == 332 || v21 == 452 )
          v22 = 0;
      }
      Enclave = KeCreateEnclave((__int64)(v19 << 25) >> 16, v9, v10 - v9 + 1, v26, v24, v22, (int *)&v25, a5);
      if ( Enclave >= 0 )
      {
        if ( (v25 & 2) != 0 )
        {
          *(_DWORD *)(a2 + 64) |= 4u;
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&Process[1].IdealGlobalNode + 144LL));
        }
        Enclave = 0;
      }
    }
    if ( v16 )
    {
      ExReleaseAutoExpandPushLockShared(v16, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return (unsigned int)Enclave;
}
