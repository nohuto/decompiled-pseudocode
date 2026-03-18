/*
 * XREFs of MiCreateEnclave @ 0x1406BB47C
 * Callers:
 *     NtCreateEnclave @ 0x1406BBE40 (NtCreateEnclave.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockShared @ 0x14000C2E0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14011C590 (ExAcquireAutoExpandPushLockShared.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetVmPartition @ 0x1402139C8 (MiGetVmPartition.c)
 *     MiGetEnclavePage @ 0x14021C8F8 (MiGetEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x14021CAB0 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x14021CB50 (MiReserveEnclavePages.c)
 *     KeCreateEnclave @ 0x1406ACC60 (KeCreateEnclave.c)
 *     MiAllocateAweInfo @ 0x1406B84C0 (MiAllocateAweInfo.c)
 *     MiAllocateEnclaveVad @ 0x1406BA9FC (MiAllocateEnclaveVad.c)
 */

__int64 __fastcall MiCreateEnclave(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // rsi
  unsigned __int64 v12; // r14
  __int64 result; // rax
  int EnclaveVad; // eax
  _QWORD *v15; // rbx
  int Enclave; // edi
  unsigned __int64 v17; // rbp
  _QWORD *VmPartition; // rax
  __int64 v19; // r8
  _QWORD *v20; // r13
  ULONG_PTR v21; // r12
  __int64 EnclavePage; // rax
  __int64 v23; // r14
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rax
  __int16 v26; // cx
  bool v27; // al
  int v28; // [rsp+20h] [rbp-68h]
  PVOID P[9]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v30; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v31; // [rsp+98h] [rbp+10h]

  v31 = (__int64 *)a2;
  v30 = a1;
  CurrentThread = KeGetCurrentThread();
  P[0] = 0LL;
  Process = CurrentThread->ApcState.Process;
  v12 = Process[1].ActiveProcessors.Bitmap[3];
  if ( !v12 )
  {
    result = MiAllocateAweInfo();
    if ( (int)result < 0 )
      return result;
    v12 = Process[1].ActiveProcessors.Bitmap[3];
  }
  EnclaveVad = MiAllocateEnclaveVad(a4, *a2, a3, (__int64 *)P);
  v15 = P[0];
  Enclave = EnclaveVad;
  if ( EnclaveVad >= 0 )
  {
    *a2 = (*((unsigned int *)P[0] + 6) | ((unsigned __int64)*((unsigned __int8 *)P[0] + 32) << 32)) << 12;
    v17 = ((*((unsigned int *)v15 + 7) | ((unsigned __int64)*((unsigned __int8 *)v15 + 33) << 32)) << 12) | 0xFFF;
    VmPartition = (_QWORD *)MiGetVmPartition((__int64)&Process[1].IdealNode[12]);
    v20 = VmPartition;
    if ( a5 )
      Enclave = MiReserveEnclavePages((__int64)v15, VmPartition, (a5 >> 12) + ((a5 & v19) != 0));
    if ( Enclave >= 0 )
    {
      --CurrentThread->SpecialApcDisable;
      v21 = ExAcquireAutoExpandPushLockShared(v12 + 16, 0LL);
      EnclavePage = MiGetEnclavePage(v20, 0);
      v23 = EnclavePage;
      if ( EnclavePage == -1 )
      {
        Enclave = -1073741801;
      }
      else
      {
        v24 = v15[8];
        MiInitializeEnclavePfn(EnclavePage, v24, 4);
        *(_QWORD *)v24 = MiMakeValidPte(v24, v23, -1610612732);
        if ( MiPteInShadowRange(v24) )
          MiWritePteShadow();
        v25 = Process[1].ActiveProcessors.Bitmap[7];
        v27 = 0;
        if ( v25 )
        {
          v26 = *(_WORD *)(v25 + 8);
          if ( v26 == 332 || v26 == 452 )
            v27 = 1;
        }
        Enclave = KeCreateEnclave((__int64)(v24 << 25) >> 16, *v31, v17 - *v31 + 1, a6, v28, !v27, (int *)&v30, a7);
        if ( Enclave >= 0 )
        {
          if ( (v30 & 2) != 0 )
          {
            *((_DWORD *)v15 + 22) |= 2u;
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)&Process[1].IdealGlobalNode + 144LL));
            v15 = P[0];
          }
          Enclave = 0;
        }
      }
      if ( v21 )
      {
        ExReleaseAutoExpandPushLockShared(v21, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
    }
  }
  if ( v15 )
  {
    if ( Enclave >= 0 )
      MiUnlockAndDereferenceVad((char *)v15);
    else
      MiDeleteVad((__int64)v15, 0);
  }
  return (unsigned int)Enclave;
}
