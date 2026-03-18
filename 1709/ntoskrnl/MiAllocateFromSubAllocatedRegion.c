/*
 * XREFs of MiAllocateFromSubAllocatedRegion @ 0x14050946C
 * Callers:
 *     MiAllocateUserStack @ 0x1404D9354 (MiAllocateUserStack.c)
 *     MiCreatePebOrTeb @ 0x1405093E0 (MiCreatePebOrTeb.c)
 * Callees:
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiReferenceVad @ 0x14003D48C (MiReferenceVad.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiVadDeleted @ 0x14003D4D0 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400A0BBC (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400A1640 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1400A1880 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400A20E0 (UNLOCK_ADDRESS_SPACE.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400C25F0 (RtlFindClearBitsAndSetEx.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14056A41C (MiAllocateNewSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x14056A828 (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MiAllocateFromSubAllocatedRegion(int a1, __int64 a2, unsigned __int64 *a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r8
  __int64 Process; // r13
  __int64 v11; // r14
  __int64 v12; // rdi
  _QWORD *i; // r14
  _QWORD *v14; // rdi
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r14
  int v18; // ecx
  unsigned int v19; // eax
  char *v20; // rcx
  int NewSubAllocatedRegion; // edi
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // [rsp+30h] [rbp-68h]
  unsigned __int64 v27; // [rsp+38h] [rbp-60h]
  __int64 v28; // [rsp+48h] [rbp-50h]
  int v29; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+10h]
  unsigned __int64 *v31; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v32; // [rsp+B8h] [rbp+20h]

  v31 = a3;
  v30 = a2;
  *a3 = 0LL;
  v4 = 0LL;
  v5 = a1;
  if ( a4 )
    *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = 0x100000LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v11 = *(_QWORD *)(Process + 1296) + 40LL;
  v28 = v11;
  if ( a1 != 3 )
    v9 = 4096LL;
  v27 = v9;
  v32 = (~(v9 - 1) & (v9 + a2 - 1)) / v9;
  --CurrentThread->SpecialApcDisable;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    NewSubAllocatedRegion = -1073741558;
LABEL_25:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned int)NewSubAllocatedRegion;
  }
  v12 = 16 * (v5 + 8);
  v26 = (_QWORD *)(v11 + v12);
  while ( 1 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    for ( i = *(_QWORD **)(v12 + v11); ; i = (_QWORD *)*i )
    {
      if ( i == v26 )
      {
        v17 = v32;
        goto LABEL_12;
      }
      v14 = i - 2;
      ClearBitsAndSet = RtlFindClearBitsAndSetEx(i - 2, v32, (unsigned __int64)*((unsigned int *)i + 8) >> 2);
      v16 = ClearBitsAndSet;
      if ( ClearBitsAndSet != -1LL )
        break;
    }
    v17 = v32;
    *((_DWORD *)v14 + 10) += v32;
    v18 = v14[6] & 3 | (4 * (ClearBitsAndSet + v17));
    v19 = *((_DWORD *)v14 + 10);
    *((_DWORD *)v14 + 12) = v18;
    if ( v19 >= *((_DWORD *)v14 + 11) )
    {
      v23 = v14 + 2;
      v24 = v14[2];
      if ( *(_QWORD **)(v24 + 8) != v14 + 2 || (v25 = (_QWORD *)v14[3], (_QWORD *)*v25 != v23) )
        __fastfail(3u);
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      *v23 = 0LL;
    }
    v4 = v14[4];
    v8 = v16 * v27 + ((*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12);
LABEL_12:
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    if ( v4 )
      break;
    NewSubAllocatedRegion = MiAllocateNewSubAllocatedRegion((unsigned int)v5, v17);
    if ( NewSubAllocatedRegion < 0 )
      goto LABEL_25;
    v12 = 16 * (v5 + 8);
    v11 = v28;
  }
  MiReferenceVad(v4);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  MiLockVad((__int64)CurrentThread, v4);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( !(unsigned int)MiVadDeleted(v4) )
  {
    v29 = 0;
    if ( (_DWORD)v5 == 3 )
      NewSubAllocatedRegion = 0;
    else
      NewSubAllocatedRegion = MiCommitExistingVad((ULONG_PTR)v20, v8, v30, 4u, &v29);
    if ( NewSubAllocatedRegion < 0 )
    {
      MiFreeToSubAllocatedRegion((PVOID)v4);
    }
    else
    {
      MiUnlockAndDereferenceVad((char *)v4);
      *v31 = v8;
      if ( a4 )
        *a4 = v4;
    }
    return (unsigned int)NewSubAllocatedRegion;
  }
  MiUnlockAndDereferenceVad(v20);
  return 3221225738LL;
}
