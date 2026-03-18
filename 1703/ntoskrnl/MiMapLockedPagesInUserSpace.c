/*
 * XREFs of MiMapLockedPagesInUserSpace @ 0x14056C3D8
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     MiUnlockVad @ 0x1400403D0 (MiUnlockVad.c)
 *     MiCheckForConflictingVadExistence @ 0x140064450 (MiCheckForConflictingVadExistence.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400998FC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x1400CE340 (MiLockVad.c)
 *     MiIsPfn @ 0x1400DC8A0 (MiIsPfn.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140123508 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDereferenceIoPages @ 0x140124B9C (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140124F3C (MiReferenceIoPages.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiAdvanceVadHint @ 0x1404345F0 (MiAdvanceVadHint.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiFindEmptyAddressRange @ 0x140513B70 (MiFindEmptyAddressRange.c)
 */

unsigned __int64 MiMapLockedPagesInUserSpace(__int64 a1, __int16 a2, int a3, ...)
{
  unsigned __int64 *v3; // r14
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // r12
  PVOID PoolWithTag; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  unsigned int v9; // eax
  unsigned int v10; // r13d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v12; // rdi
  __int64 Process; // r15
  int EmptyAddressRange; // eax
  __int64 v15; // r11
  NTSTATUS inserted; // ebx
  unsigned __int64 v17; // rsi
  __int64 v18; // r9
  __int64 v19; // r10
  _DWORD *v20; // r11
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdi
  __int64 v24; // r9
  __int64 v25; // [rsp+40h] [rbp-68h]
  unsigned __int64 *v26; // [rsp+48h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  unsigned __int64 v28; // [rsp+58h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp+10h] BYREF
  int v31; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v32; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  __int64 v34; // [rsp+D0h] [rbp+28h]
  va_list va1; // [rsp+D8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v32 = va_arg(va1, _QWORD);
  v34 = va_arg(va1, _QWORD);
  v31 = a3;
  v3 = (unsigned __int64 *)(a1 + 48);
  v4 = (unsigned __int64 *)(a1 + 48);
  v26 = (unsigned __int64 *)(a1 + 48);
  v5 = ((a2 & 0xFFF) + 4095LL + (unsigned __int64)*(unsigned int *)(a1 + 40)) >> 12;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x6C646156u);
  v7 = 0LL;
  v8 = (unsigned __int64)PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  memset(PoolWithTag, 0, 0x88uLL);
  v9 = *(_DWORD *)(v8 + 48) & 0xFFFFFF01;
  v10 = ((int)v34 >> 31) & 0xFFFFFFFD;
  *(_QWORD *)(v8 + 16) = -2LL;
  *(_QWORD *)(v8 + 40) = 0LL;
  v28 = 0LL;
  *(_DWORD *)(v8 + 48) = v9 | (8 * (((_BYTE)v10 + 4) & 0x1F)) | 0x8001;
  CurrentThread = KeGetCurrentThread();
  v12 = v32;
  v27 = (__int64)CurrentThread;
  v30 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( v32 )
  {
    if ( (v32 & 0xFFF) != 0
      || v32 < 0x10000 && !*(_QWORD *)(Process + 1808)
      || (v7 = (v5 << 12) + v32 - 1, v7 <= v32)
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
  if ( !v12 )
  {
    EmptyAddressRange = MiFindEmptyAddressRange(
                          v5 << 12,
                          0x10000uLL,
                          0x7FFFFFFDFFFFuLL,
                          (unsigned __int8)v10 + 4,
                          0,
                          (unsigned __int64 *)va,
                          &v30);
    v15 = 0LL;
    inserted = EmptyAddressRange;
    if ( EmptyAddressRange >= 0 )
    {
      v12 = v32;
      v7 = v32 + (v5 << 12) - 1;
      v4 = v3;
      goto LABEL_7;
    }
LABEL_26:
    UNLOCK_ADDRESS_SPACE(v27, Process);
    if ( v28 )
    {
      v22 = 1LL;
      v23 = (v28 - (unsigned __int64)v3 + 8) >> 3;
      if ( (unsigned __int64)v3 > v28 )
        v23 = 0LL;
      while ( v22 <= v23 )
      {
        if ( !MiIsPfn(*v3) )
          MiDereferenceIoPages(1, v24, 1uLL);
        ++v3;
        ++v22;
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
  v17 = v7 >> 12;
  *(_DWORD *)(v8 + 24) = v12 >> 12;
  *(_BYTE *)(v8 + 32) = v12 >> 44;
  *(_DWORD *)(v8 + 28) = v17;
  *(_BYTE *)(v8 + 33) = BYTE4(v17);
  v25 = v15;
  if ( v5 )
  {
    do
    {
      if ( !MiIsPfn(*v4) )
      {
        inserted = MiReferenceIoPages(1, v19, 1LL, v31, v20, v20);
        if ( inserted < 0 )
          goto LABEL_26;
        v4 = v26;
        v18 = v25;
        v28 = (unsigned __int64)v26;
      }
      ++v4;
      v25 = v18 + 1;
      v26 = v4;
    }
    while ( v18 + 1 < v5 );
  }
  inserted = MiInsertVadCharges(v8, (struct _KPROCESS *)Process);
  if ( inserted < 0 )
    goto LABEL_26;
  MiLockVad(v27, v8);
  MiMapLockedPagesInUserSpaceHelper(v12, (__int64)v3, 0LL, v31, v5, v8, v34);
  MiUnlockVad(v27, v8);
  if ( v30 == 1 )
    MiAdvanceVadHint(v12 >> 12, v17, 0);
  UNLOCK_ADDRESS_SPACE(v27, Process);
  return v12 + *(unsigned int *)(a1 + 44);
}
