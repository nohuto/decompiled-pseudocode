/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x140153D40
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1405ECD70 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteWorkingSetList @ 0x14007040C (MiDeleteWorkingSetList.c)
 *     MiDeletePagablePteRange @ 0x1400726A0 (MiDeletePagablePteRange.c)
 *     MiDrainSystemAccessLog @ 0x14007A2A4 (MiDrainSystemAccessLog.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     MiIncrementPfn @ 0x14016E2F4 (MiIncrementPfn.c)
 */

__int64 __fastcall MiDeleteSessionAddressSpace(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int8 v9; // r14
  __int64 result; // rax
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 3LL;
  do
  {
    v11 = MI_READ_PTE_LOCK_FREE(v4);
    v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
    MiIncrementPfn(48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
  MiDrainSystemAccessLog(a1 + 3008);
  SharedVm = MiGetSharedVm(a1 + 3008);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    MiDeleteWorkingSetList(a1 + 3008);
  MiUnlockWorkingSetExclusive(a1 + 3008, v9);
  result = MiDeletePagablePteRange(
             a1 + 3008,
             0x11u,
             qword_1403CB638,
             qword_1403CB638 + 0x7FFFFFFFFFLL,
             0,
             0,
             (__int64)a2);
  a2[1] -= 3LL;
  a2[3] -= 3LL;
  *a2 -= 3LL;
  return result;
}
