/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x140448658
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140009DA8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400A0BBC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiCheckForConflictingVadExistence @ 0x1400A5420 (MiCheckForConflictingVadExistence.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     MiIsPfn @ 0x140101790 (MiIsPfn.c)
 *     MiDereferenceIoPages @ 0x140118C1C (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140118F7C (MiReferenceIoPages.c)
 *     MiSanitizePage @ 0x140119BE4 (MiSanitizePage.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     MiFindEmptyAddressRange @ 0x1404D06B0 (MiFindEmptyAddressRange.c)
 *     MiAdvanceVadHint @ 0x14056D510 (MiAdvanceVadHint.c)
 */

unsigned __int64 MiMapLockedPagesInUserSpace(__int64 a1, __int16 a2, int a3, ...)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // r12
  PVOID PoolWithTag; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned int v9; // eax
  unsigned int v10; // r13d
  char v11; // r13
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v13; // rdi
  __int64 Process; // r15
  int EmptyAddressRange; // eax
  __int64 v16; // r11
  NTSTATUS inserted; // ebx
  unsigned __int64 v18; // rsi
  __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 v22; // rax
  _DWORD *v23; // r11
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  __int64 v26; // r9
  __int64 v27; // [rsp+40h] [rbp-68h]
  unsigned __int64 *v28; // [rsp+48h] [rbp-60h]
  __int64 v29; // [rsp+50h] [rbp-58h]
  unsigned __int64 v30; // [rsp+58h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp+10h] BYREF
  int v33; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v34; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  __int64 v36; // [rsp+D0h] [rbp+28h]
  va_list va1; // [rsp+D8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v34 = va_arg(va1, _QWORD);
  v36 = va_arg(va1, _QWORD);
  v33 = a3;
  v3 = (unsigned __int64 *)(a1 + 48);
  v4 = (unsigned __int64 *)(a1 + 48);
  v28 = (unsigned __int64 *)(a1 + 48);
  v5 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v7 = 0LL;
  v8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  memset(PoolWithTag, 0, 0x88uLL);
  v9 = *(_DWORD *)(v8 + 48) & 0xFFFFFF01;
  v10 = ((int)v36 >> 31) & 0xFFFFFFFD;
  *(_QWORD *)(v8 + 16) = -2LL;
  v11 = v10 + 4;
  *(_QWORD *)(v8 + 40) = 0LL;
  v30 = 0LL;
  *(_DWORD *)(v8 + 48) = v9 | (8 * (v11 & 0x1F)) | 0x8001;
  CurrentThread = KeGetCurrentThread();
  v13 = v34;
  v29 = (__int64)CurrentThread;
  v32 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( v34 )
  {
    if ( (v34 & 0xFFF) != 0
      || v34 < 0x10000 && !*(_QWORD *)(Process + 1808)
      || (v7 = (v5 << 12) + v34 - 1, v7 <= v34)
      || v7 > 0x7FFFFFFDFFFFLL )
    {
      inserted = -1073741503;
      goto LABEL_34;
    }
  }
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    inserted = -1073741558;
    goto LABEL_26;
  }
  if ( !v13 )
  {
    EmptyAddressRange = MiFindEmptyAddressRange(
                          (_DWORD)v5 << 12,
                          0x10000,
                          0,
                          -131073,
                          v11,
                          0,
                          (__int64)va,
                          (__int64)&v32);
    v16 = 0LL;
    inserted = EmptyAddressRange;
    if ( EmptyAddressRange >= 0 )
    {
      v13 = v34;
      v7 = v34 + (v5 << 12) - 1;
      v4 = v3;
      goto LABEL_7;
    }
LABEL_26:
    UNLOCK_ADDRESS_SPACE(v29, Process);
    if ( v30 )
    {
      v24 = 1LL;
      v25 = (v30 - (unsigned __int64)v3 + 8) >> 3;
      if ( (unsigned __int64)v3 > v30 )
        v25 = 0LL;
      while ( v24 <= v25 )
      {
        if ( !MiIsPfn(*v3) )
          MiDereferenceIoPages(1, v26, 1uLL);
        ++v3;
        ++v24;
      }
    }
LABEL_34:
    ExFreePoolWithTag((PVOID)v8, 0);
    RtlRaiseStatus(inserted);
  }
  if ( MiCheckForConflictingVadExistence() )
  {
    inserted = -1073741800;
    goto LABEL_26;
  }
LABEL_7:
  v18 = v7 >> 12;
  *(_DWORD *)(v8 + 24) = v13 >> 12;
  *(_BYTE *)(v8 + 32) = v13 >> 44;
  *(_DWORD *)(v8 + 28) = v18;
  *(_BYTE *)(v8 + 33) = BYTE4(v18);
  v27 = v16;
  if ( v5 )
  {
    do
    {
      if ( !MiIsPfn(*v4) )
      {
        v22 = MiSanitizePage(v20);
        inserted = MiReferenceIoPages(1, v22, 1LL, v33, v23, v23);
        if ( inserted < 0 )
          goto LABEL_26;
        v4 = v28;
        v19 = v27;
        v30 = (unsigned __int64)v28;
      }
      ++v4;
      v27 = v19 + 1;
      v28 = v4;
    }
    while ( v19 + 1 < v5 );
  }
  inserted = MiInsertVadCharges(v8, Process);
  if ( inserted < 0 )
    goto LABEL_26;
  MiLockVad(v29, v8);
  MiMapLockedPagesInUserSpaceHelper(v13, (__int64)v3, 0LL, v33, v5, v8, v36);
  MiUnlockVad(v29, v8);
  if ( v32 == 1 )
    MiAdvanceVadHint(v13 >> 12, v18, 0LL);
  UNLOCK_ADDRESS_SPACE(v29, Process);
  return v13 + *(unsigned int *)(a1 + 44);
}
