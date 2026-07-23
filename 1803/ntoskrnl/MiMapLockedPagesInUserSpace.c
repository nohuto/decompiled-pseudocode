/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x1405BA250
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x1400E5518 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     MiIsPfn @ 0x140106380 (MiIsPfn.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiLegitimatePageForDriversToMap @ 0x140137038 (MiLegitimatePageForDriversToMap.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140137C60 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDereferenceIoPages @ 0x140139794 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140139BCC (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x14013A248 (MiSanitizePage.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MiIsVaRangeAvailable @ 0x1404B5D80 (MiIsVaRangeAvailable.c)
 *     MiSelectUserAddress @ 0x1405935C0 (MiSelectUserAddress.c)
 *     MiAdvanceVadHint @ 0x140594F50 (MiAdvanceVadHint.c)
 *     MiGetUserReservationHighestAddress @ 0x1405BA540 (MiGetUserReservationHighestAddress.c)
 */

unsigned __int64 MiMapLockedPagesInUserSpace(__int64 a1, __int16 a2, int a3, ...)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 v4; // r12
  unsigned __int64 *v5; // rdi
  PVOID PoolWithTag; // rax
  __int64 v7; // rsi
  unsigned int v8; // eax
  char v9; // cl
  unsigned int v10; // eax
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v12; // rbx
  __int64 Process; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 UserReservationHighestAddress; // rax
  unsigned __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r11
  NTSTATUS inserted; // edi
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r9
  __int64 v23; // r10
  unsigned __int64 *v24; // rdi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r9
  _RTL_BITMAP *v28; // r8
  __int64 v30; // rax
  _DWORD *v31; // r11
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rbx
  __int64 v34; // r9
  unsigned __int64 *v35; // [rsp+50h] [rbp-68h]
  _RTL_BITMAP *v36; // [rsp+58h] [rbp-60h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp-58h]
  unsigned __int64 v38; // [rsp+68h] [rbp-50h]
  char v40; // [rsp+C8h] [rbp+10h]
  __int64 v41; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v43; // [rsp+D8h] [rbp+20h] BYREF
  va_list va; // [rsp+D8h] [rbp+20h]
  __int64 v45; // [rsp+E0h] [rbp+28h]
  va_list va1; // [rsp+E8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v43 = va_arg(va1, _QWORD);
  v45 = va_arg(va1, _QWORD);
  v3 = (unsigned __int64 *)(a1 + 48);
  v35 = (unsigned __int64 *)(a1 + 48);
  v4 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  v5 = (unsigned __int64 *)(a1 + 48);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v7 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  memset(PoolWithTag, 0, 0x88uLL);
  v8 = ((int)v45 >> 31) & 0xFFFFFFFD;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_QWORD *)(v7 + 16) = -2LL;
  v9 = v8 + 4;
  v40 = v8 + 4;
  v10 = *(_DWORD *)(v7 + 48) & 0xFFFFFF01;
  v37 = 0LL;
  *(_DWORD *)(v7 + 48) = v10 | (8 * (v9 & 0x1F)) | 0x4001;
  CurrentThread = KeGetCurrentThread();
  v36 = 0LL;
  v12 = v43;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( (v43 & 0xFFF) != 0 )
  {
    inserted = -1073741503;
    goto LABEL_31;
  }
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_23;
  }
  UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, 0LL);
  if ( !v12 )
  {
    v18 = MiSelectUserAddress(
            0,
            v17,
            UserReservationHighestAddress,
            v4 << 12,
            0x10000LL,
            0LL,
            v40,
            0,
            &v36,
            (__int64)va);
    v19 = 0LL;
    inserted = v18;
    if ( v18 >= 0 )
    {
      v12 = v43;
      v5 = v3;
      goto LABEL_7;
    }
LABEL_23:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, v14, v15);
    if ( v37 )
    {
      v32 = 1LL;
      v33 = (v37 - (unsigned __int64)v3 + 8) >> 3;
      if ( (unsigned __int64)v3 > v37 )
        v33 = 0LL;
      while ( v32 <= v33 )
      {
        if ( !MiIsPfn(*v3) )
          MiDereferenceIoPages(1, v34, 1uLL);
        ++v3;
        ++v32;
      }
    }
LABEL_31:
    ExFreePoolWithTag((PVOID)v7, 0);
    RtlRaiseStatus(inserted);
  }
  if ( !MiIsVaRangeAvailable(Process, v12, v4 << 12, 0LL, UserReservationHighestAddress) )
  {
    inserted = -1073741800;
    goto LABEL_23;
  }
LABEL_7:
  v41 = v19;
  v38 = v12 >> 12;
  *(_DWORD *)(v7 + 24) = v12 >> 12;
  v21 = (v12 + (v4 << 12) - 1) >> 12;
  *(_BYTE *)(v7 + 32) = v12 >> 44;
  *(_DWORD *)(v7 + 28) = v21;
  *(_BYTE *)(v7 + 33) = BYTE4(v21);
  if ( v4 )
  {
    do
    {
      if ( MiIsPfn(*v5) )
      {
        inserted = MiLegitimatePageForDriversToMap(48 * v22 - 0x58000000000LL);
        if ( inserted < 0 )
          goto LABEL_23;
        v24 = v35;
      }
      else
      {
        v30 = MiSanitizePage(v22);
        inserted = MiReferenceIoPages(1, v30, 1LL, a3, v31, v31);
        if ( inserted < 0 )
          goto LABEL_23;
        v24 = v35;
        v23 = v41;
        v37 = (unsigned __int64)v35;
      }
      v5 = v24 + 1;
      v41 = v23 + 1;
      v35 = v5;
    }
    while ( v23 + 1 < v4 );
  }
  inserted = MiInsertVadCharges(v7, (struct _KPROCESS *)Process);
  if ( inserted < 0 )
    goto LABEL_23;
  MiLockVad((__int64)CurrentThread, v7);
  MiMapLockedPagesInUserSpaceHelper(v12, (__int64)v3, 0LL, a3, v4, v7, v45);
  MiUnlockVad((__int64)CurrentThread, v7, v25, v26);
  v28 = v36;
  if ( v36 )
    MiAdvanceVadHint(v38, v21, v36);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, (__int64)v28, v27);
  return v12 + *(unsigned int *)(a1 + 44);
}
