/*
 * XREFs of MiAllocateEnclaveVad @ 0x1406E77E0
 * Callers:
 *     MiCreateEnclave @ 0x1406E8210 (MiCreateEnclave.c)
 * Callees:
 *     MiReferenceVad @ 0x14003D48C (MiReferenceVad.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400A0BBC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiCheckForConflictingVadExistence @ 0x1400A5420 (MiCheckForConflictingVadExistence.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1400A5A80 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiInsertPrivateVad @ 0x14010C710 (MiInsertPrivateVad.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1404D0540 (MiSelectUserAddress.c)
 */

__int64 __fastcall MiAllocateEnclaveVad(int a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v7; // rsi
  struct _KPROCESS *Process; // r14
  unsigned __int64 v11; // rdi
  PVOID PoolWithTag; // rax
  __int64 v14; // rbx
  __int64 v15; // r8
  ULONG_PTR v16; // rax
  int v17; // eax
  unsigned __int64 v18; // r10
  int inserted; // edi
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // [rsp+50h] [rbp-38h] BYREF
  int v24; // [rsp+98h] [rbp+10h] BYREF

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
    if ( v11 >= 0x7FFFFFFE0000LL )
      return 3221225485LL;
  }
  if ( a2 >= 0x7FFFFFFE0000LL )
    return 3221225485LL;
  if ( a3 && (a3 > 0x7FFFFFFDFFFFLL || 0x7FFFFFFE0000LL - a3 < a2 || ((v11 - 1) & a3) != 0) )
    return 3221225716LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x45646156u);
  v14 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x60uLL);
  if ( a1 != 16 )
  {
    *(_DWORD *)(v14 + 64) |= 1u;
    v16 = MiReservePtes((__int64)&qword_140389360, 1uLL, v15);
    *(_QWORD *)(v14 + 72) = v16;
    if ( !v16 )
    {
      ExFreePoolWithTag((PVOID)v14, 0);
      return 3221225626LL;
    }
    *(_DWORD *)(v14 + 48) = *(_DWORD *)(v14 + 48) & 0xFFFFFFF8 | 3;
  }
  v17 = *(_DWORD *)(v14 + 48);
  *(_QWORD *)(v14 + 40) = 0LL;
  *(_QWORD *)(v14 + 16) = -2LL;
  *(_DWORD *)(v14 + 48) = v17 & 0xFFFB7F07 | 0x48020;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process);
  if ( !v7 )
  {
    inserted = MiSelectUserAddress(0, a4, a2, v11, 0LL, 6, 0, &v24, &v23);
    if ( inserted < 0 )
      goto LABEL_24;
    v7 = v23;
    v18 = (a2 + v23 - 1) | 0xFFF;
LABEL_29:
    v21 = v18 >> 12;
    v22 = v7 >> 12;
    *(_DWORD *)(v14 + 24) = v22;
    *(_DWORD *)(v14 + 28) = v21;
    *(_BYTE *)(v14 + 32) = BYTE4(v22);
    *(_BYTE *)(v14 + 33) = BYTE4(v21);
    inserted = MiInsertVadCharges(v14, Process);
    if ( inserted >= 0 )
    {
      MiInsertPrivateVad(v14, 0LL, (__int64)Process);
      MiLockVad((__int64)CurrentThread, v14);
      MiReferenceVad(v14);
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)Process);
      *a5 = v14;
      return 0LL;
    }
    goto LABEL_24;
  }
  if ( !MiCheckForConflictingVadExistence() )
    goto LABEL_29;
  inserted = -1073741800;
LABEL_24:
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Process);
  if ( (*(_DWORD *)(v14 + 64) & 1) != 0 )
    MiReleasePtes((__int64)&qword_140389360, *(_QWORD *)(v14 + 72), 1u, v20);
  ExFreePoolWithTag((PVOID)v14, 0);
  return (unsigned int)inserted;
}
