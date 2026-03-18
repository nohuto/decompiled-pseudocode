/*
 * XREFs of MiCreateLargePageVad @ 0x140755658
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 * Callees:
 *     MiInsertVadEvent @ 0x1400E4C88 (MiInsertVadEvent.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140117300 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiChargeFullProcessCommitment @ 0x1405B6870 (MiChargeFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x140753D00 (MiChargeProcessPhysicalPages.c)
 */

__int64 __fastcall MiCreateLargePageVad(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v8; // rdi
  _KPROCESS *Process; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // r14
  int v13; // ebp

  v3 = *(unsigned int *)(a2 + 52);
  CurrentThread = KeGetCurrentThread();
  LODWORD(v3) = v3 & 0x7FFFFFFF;
  v8 = ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | v3;
  Process = CurrentThread->ApcState.Process;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x624C6D4Du);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x48uLL);
  if ( !(unsigned int)MiChargeProcessPhysicalPages(a1, v8) )
  {
    v13 = -1073741523;
LABEL_12:
    ExFreePoolWithTag(v11, 0);
    return (unsigned int)v13;
  }
  if ( a3 )
  {
    *(_DWORD *)(a2 + 52) &= 0x80000000;
    *(_BYTE *)(a2 + 34) = 0;
  }
  else
  {
    if ( Process == (_KPROCESS *)a1 )
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v13 = MiChargeFullProcessCommitment(a1, v8);
    if ( Process == (_KPROCESS *)a1 )
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    if ( v13 < 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1600), -(__int64)v8);
      goto LABEL_12;
    }
  }
  v11[16] = 16;
  MiInsertVadEvent(a2, (__int64 *)v11, 0);
  return 0LL;
}
