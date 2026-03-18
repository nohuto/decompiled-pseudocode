/*
 * XREFs of MiDeleteKernelStack @ 0x140023CD4
 * Callers:
 *     MiEmptyKernelStackCache @ 0x14003C924 (MiEmptyKernelStackCache.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14010F680 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmDeleteKernelStack @ 0x140110020 (MmDeleteKernelStack.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiDeleteValidSystemPage @ 0x1400C90C0 (MiDeleteValidSystemPage.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteKernelStack(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  __int64 AnyMultiplexedVm; // r14
  __int64 SharedVm; // rbx
  KIRQL v12; // al
  __int64 v13; // rdx
  KIRQL v14; // r15
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v19[11]; // [rsp+20h] [rbp-58h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+90h] [rbp+18h]

  memset(v19, 0, 0x20uLL);
  if ( (a2 & 1) != 0 )
    v4 = 18LL;
  else
    v4 = (unsigned __int8)byte_14036CD9C;
  v5 = (unsigned int)(v4 + 1);
  v6 = (unsigned int)v4;
  v7 = a1 - 8 * v4;
  v8 = 0LL;
  v22 = v7;
  v9 = v7 + 8 * v5;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
  SharedVm = MiGetSharedVm(AnyMultiplexedVm);
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v14 = v12;
  while ( v7 < v9 )
  {
    v21 = MI_READ_PTE_LOCK_FREE(v7);
    if ( (v21 & 1) != 0 )
    {
      if ( !v8 )
        v8 = *(_QWORD *)(qword_14036C8F8
                       + 8 * ((*(_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v21) - 0x57FFFFFFFD8LL) >> 40) & 0x3FFLL));
      MiDeleteValidSystemPage(AnyMultiplexedVm, v7, 0LL, v19);
      ++v19[0];
    }
    v7 += 8LL;
  }
  LOBYTE(v13) = v14;
  MiPreUnlockWorkingSetExclusive(AnyMultiplexedVm, v13);
  v15 = (_DWORD *)MiGetSharedVm(AnyMultiplexedVm);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15, retaddr);
  else
    *v15 = 0;
  __writecr8(v14);
  if ( (ULONG_PTR *)v8 == &MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_14036D138, -v6);
    MiReturnResidentAvailable(v19[0], v16, v17);
  }
  else
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 5824), v19[0]);
  }
  MiReleasePtes(&qword_14036D0A0, v22, (unsigned int)v5);
  return MiReturnCommit(v8, v6 - v19[1]);
}
