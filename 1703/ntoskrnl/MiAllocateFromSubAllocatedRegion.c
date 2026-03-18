/*
 * XREFs of MiAllocateFromSubAllocatedRegion @ 0x1405160A8
 * Callers:
 *     MiAllocateUserStack @ 0x1404A434C (MiAllocateUserStack.c)
 *     MiCreatePebOrTeb @ 0x1405162FC (MiCreatePebOrTeb.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x1400998FC (LOCK_ADDRESS_SPACE.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14009A7F0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14009A810 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14009B6E0 (UNLOCK_ADDRESS_SPACE.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400AE930 (RtlFindClearBitsAndSetEx.c)
 *     MiReferenceVad @ 0x1400CE328 (MiReferenceVad.c)
 *     MiLockVad @ 0x1400CE340 (MiLockVad.c)
 *     MiVadDeleted @ 0x1400CE370 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiCommitExistingVad @ 0x1400CE7C0 (MiCommitExistingVad.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MiFreeToSubAllocatedRegion @ 0x140499C38 (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1404C85E0 (MiAllocateNewSubAllocatedRegion.c)
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
  __int64 v21; // rsi
  int NewSubAllocatedRegion; // edi
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // [rsp+30h] [rbp-68h]
  unsigned __int64 v28; // [rsp+38h] [rbp-60h]
  __int64 v29; // [rsp+48h] [rbp-50h]
  int v30; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+10h]
  unsigned __int64 *v32; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v33; // [rsp+B8h] [rbp+20h]

  v32 = a3;
  v31 = a2;
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
  v29 = v11;
  if ( a1 != 3 )
    v9 = 4096LL;
  v28 = v9;
  v33 = (~(v9 - 1) & (v9 + a2 - 1)) / v9;
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
  v27 = (_QWORD *)(v11 + v12);
  while ( 1 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    for ( i = *(_QWORD **)(v12 + v11); ; i = (_QWORD *)*i )
    {
      if ( i == v27 )
      {
        v17 = v33;
        goto LABEL_12;
      }
      v14 = i - 2;
      ClearBitsAndSet = RtlFindClearBitsAndSetEx(i - 2, v33, (unsigned __int64)*((unsigned int *)i + 8) >> 2);
      v16 = ClearBitsAndSet;
      if ( ClearBitsAndSet != -1LL )
        break;
    }
    v17 = v33;
    *((_DWORD *)v14 + 10) += v33;
    v18 = v14[6] & 3 | (4 * (ClearBitsAndSet + v17));
    v19 = *((_DWORD *)v14 + 10);
    *((_DWORD *)v14 + 12) = v18;
    if ( v19 >= *((_DWORD *)v14 + 11) )
    {
      v24 = v14 + 2;
      v25 = v14[2];
      v26 = (_QWORD *)v14[3];
      if ( *(_QWORD **)(v25 + 8) != v14 + 2 || (_QWORD *)*v26 != v24 )
        __fastfail(3u);
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
      *v24 = 0LL;
    }
    v4 = v14[4];
    v8 = v16 * v28 + ((*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12);
LABEL_12:
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    if ( v4 )
      break;
    NewSubAllocatedRegion = MiAllocateNewSubAllocatedRegion(v5, v17);
    if ( NewSubAllocatedRegion < 0 )
      goto LABEL_25;
    v12 = 16 * (v5 + 8);
    v11 = v29;
  }
  MiReferenceVad(v4);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  MiLockVad((__int64)CurrentThread, v4);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( !(unsigned int)MiVadDeleted(v4) )
  {
    v30 = 0;
    v21 = v31;
    if ( (_DWORD)v5 == 3 )
      NewSubAllocatedRegion = 0;
    else
      NewSubAllocatedRegion = MiCommitExistingVad((ULONG_PTR)v20, v8, v31, 4u, &v30);
    if ( NewSubAllocatedRegion < 0 )
    {
      MiFreeToSubAllocatedRegion(v4, v5, v8, v21);
    }
    else
    {
      MiUnlockAndDereferenceVad((char *)v4);
      *v32 = v8;
      if ( a4 )
        *a4 = v4;
    }
    return (unsigned int)NewSubAllocatedRegion;
  }
  MiUnlockAndDereferenceVad(v20);
  return 3221225738LL;
}
