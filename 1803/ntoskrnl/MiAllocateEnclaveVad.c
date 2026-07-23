/*
 * XREFs of MiAllocateEnclaveVad @ 0x1407511B4
 * Callers:
 *     MiCreateEnclave @ 0x140751C18 (MiCreateEnclave.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14003ECB0 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiInsertPrivateVad @ 0x1400E4BE4 (MiInsertPrivateVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400E5518 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MiIsVaRangeAvailable @ 0x1404B5D80 (MiIsVaRangeAvailable.c)
 *     MiSelectUserAddress @ 0x1405935C0 (MiSelectUserAddress.c)
 *     MiAdvanceVadHint @ 0x140594F50 (MiAdvanceVadHint.c)
 *     MiGetUserReservationHighestAddress @ 0x1405BA540 (MiGetUserReservationHighestAddress.c)
 */

__int64 __fastcall MiAllocateEnclaveVad(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v7; // rsi
  struct _KPROCESS *Process; // r14
  unsigned __int64 v11; // rdi
  PVOID PoolWithTag; // rax
  __int64 v13; // rbx
  ULONG_PTR v15; // rax
  PVOID v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  int inserted; // edi
  void *v20; // rcx
  int v21; // eax
  unsigned __int64 UserReservationHighestAddress; // rax
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // [rsp+50h] [rbp-38h] BYREF
  _RTL_BITMAP *v27; // [rsp+98h] [rbp+10h] BYREF

  v27 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = a3;
  Process = CurrentThread->ApcState.Process;
  if ( a2 >= 0xFFFFFFFFFFFFF000uLL || a2 == 0 )
    return 3221225485LL;
  if ( a1 == 16 )
  {
    v11 = 0x200000LL;
  }
  else
  {
    v11 = a2;
    if ( ((a2 - 1) & a2) != 0 )
      v11 = a2 & ~(a2 - 1);
    if ( v11 < 0x10000 )
      v11 = 0x10000LL;
    if ( v11 >= 0x7FFFFFFF0000LL )
      return 3221225485LL;
  }
  if ( a2 >= 0x7FFFFFFF0000LL
    || a3 && (a3 > 0x7FFFFFFEFFFFLL || 0x7FFFFFFF0000LL - a3 < a2 || ((v11 - 1) & a3) != 0 || a4) )
  {
    return 3221225485LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x45646156u);
  v13 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x70uLL);
  if ( a1 != 16 )
  {
    *(_DWORD *)(v13 + 64) |= 1u;
    v15 = MiReservePtes((__int64)&qword_1403CC5E0, 1u);
    *(_QWORD *)(v13 + 80) = v15;
    if ( !v15 )
    {
      ExFreePoolWithTag((PVOID)v13, 0);
      return 3221225626LL;
    }
    if ( a1 == 2 )
    {
      *(_DWORD *)(v13 + 72) |= 1u;
      v16 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6E45694Du);
      *(_QWORD *)(v13 + 88) = v16;
      if ( !v16 )
      {
        inserted = -1073741670;
LABEL_23:
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process, v17, v18);
        if ( (*(_DWORD *)(v13 + 64) & 1) != 0 )
        {
          v20 = *(void **)(v13 + 88);
          if ( v20 )
            ExFreePoolWithTag(v20, 0);
          MiReleasePtes((__int64)&qword_1403CC5E0, *(_QWORD *)(v13 + 80), 1uLL);
        }
        ExFreePoolWithTag((PVOID)v13, 0);
        return (unsigned int)inserted;
      }
    }
    *(_DWORD *)(v13 + 48) = *(_DWORD *)(v13 + 48) & 0xFFFFFFF8 | 3;
  }
  v21 = *(_DWORD *)(v13 + 48);
  *(_QWORD *)(v13 + 40) = 0LL;
  *(_QWORD *)(v13 + 16) = -2LL;
  *(_DWORD *)(v13 + 48) = v21 & 0xFFFEBF07 | 0x14020;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process);
  UserReservationHighestAddress = MiGetUserReservationHighestAddress((__int64)Process, a4);
  if ( v7 )
  {
    v23 = (v7 + a2 - 1) | 0xFFF;
    if ( MiIsVaRangeAvailable((__int64)Process, v7, v23 - v7 + 1, 0LL, UserReservationHighestAddress) )
    {
      inserted = -1073741800;
      goto LABEL_23;
    }
  }
  else
  {
    inserted = MiSelectUserAddress(0, 0LL, UserReservationHighestAddress, a2, v11, 0LL, 6, 0, &v27, (__int64)&v26);
    if ( inserted < 0 )
      goto LABEL_23;
    v7 = v26;
    v23 = (v26 + a2 - 1) | 0xFFF;
  }
  v24 = v7 >> 12;
  v25 = v23 >> 12;
  *(_BYTE *)(v13 + 32) = BYTE4(v24);
  *(_BYTE *)(v13 + 33) = BYTE4(v25);
  *(_DWORD *)(v13 + 24) = v24;
  *(_DWORD *)(v13 + 28) = v25;
  inserted = MiInsertVadCharges(v13, Process);
  if ( inserted < 0 )
    goto LABEL_23;
  MiLockVad((__int64)CurrentThread, v13);
  MiInsertPrivateVad(v13, 0LL, (__int64)Process);
  if ( v27 )
    MiAdvanceVadHint(v24, v25, v27);
  MiReferenceVad(v13);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)Process);
  *a5 = v13;
  return 0LL;
}
