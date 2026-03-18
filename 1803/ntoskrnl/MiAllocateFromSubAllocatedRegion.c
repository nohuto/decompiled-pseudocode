/*
 * XREFs of MiAllocateFromSubAllocatedRegion @ 0x140592B34
 * Callers:
 *     MiAllocateUserStack @ 0x1404E88F4 (MiAllocateUserStack.c)
 *     MiCreatePebOrTeb @ 0x140592AA8 (MiCreatePebOrTeb.c)
 * Callees:
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14000AE70 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14000AE94 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     RtlFindClearBitsAndSetEx @ 0x1400D8720 (RtlFindClearBitsAndSetEx.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400E5518 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiReferenceVad @ 0x140117620 (MiReferenceVad.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x140562CBC (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1405BA858 (MiAllocateNewSubAllocatedRegion.c)
 */

__int64 __fastcall MiAllocateFromSubAllocatedRegion(int a1, __int64 a2, unsigned __int64 *a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r12
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r8
  __int64 Process; // r13
  unsigned __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 *v15; // rdi
  unsigned __int64 ClearBitsAndSet; // rax
  unsigned __int64 v17; // rdx
  int v18; // r8d
  int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  void *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  int NewSubAllocatedRegion; // edi
  __int64 *v30; // rcx
  __int64 **v31; // rax
  __int64 v32; // [rsp+30h] [rbp-68h]
  __int64 v33; // [rsp+38h] [rbp-60h]
  unsigned __int64 v34; // [rsp+40h] [rbp-58h]
  int v35; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v36; // [rsp+A8h] [rbp+10h]
  unsigned __int64 *v37; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v38; // [rsp+B8h] [rbp+20h]

  v37 = a3;
  v36 = a2;
  *a3 = 0LL;
  v4 = 0LL;
  v5 = a1;
  if ( a4 )
    *a4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = 0x100000LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v32 = *(_QWORD *)(Process + 1296) + 48LL;
  if ( a1 != 3 )
    v9 = 4096LL;
  v34 = v9;
  v11 = (~(v9 - 1) & (v9 + a2 - 1)) / v9;
  v38 = v11;
  --CurrentThread->SpecialApcDisable;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    NewSubAllocatedRegion = -1073741558;
LABEL_24:
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, v12, v13);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return (unsigned int)NewSubAllocatedRegion;
  }
  v14 = 16 * (v5 + 13);
  v33 = v32 + v14;
  while ( 1 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    v15 = *(__int64 **)(v14 + v32);
    if ( v15 != (__int64 *)v33 )
    {
      while ( 1 )
      {
        ClearBitsAndSet = RtlFindClearBitsAndSetEx(
                            (unsigned __int64 *)v15 - 2,
                            v38,
                            (unsigned __int64)*((unsigned int *)v15 + 8) >> 2);
        v17 = ClearBitsAndSet;
        if ( ClearBitsAndSet != -1LL )
          break;
        v15 = (__int64 *)*v15;
        if ( v15 == (__int64 *)v33 )
          goto LABEL_11;
      }
      v18 = v38;
      *((_DWORD *)v15 + 6) += v38;
      v19 = v15[4] & 3 | (4 * (ClearBitsAndSet + v18));
      v20 = *((_DWORD *)v15 + 6);
      *((_DWORD *)v15 + 8) = v19;
      if ( v20 >= *((_DWORD *)v15 + 7) )
      {
        v30 = (__int64 *)*v15;
        if ( *(__int64 **)(*v15 + 8) != v15 || (v31 = (__int64 **)v15[1], *v31 != v15) )
          __fastfail(3u);
        *v31 = v30;
        v30[1] = (__int64)v31;
        *v15 = 0LL;
      }
      v4 = v15[2];
      v8 = v17 * v34 + ((*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) << 12);
LABEL_11:
      v11 = v38;
    }
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
    if ( v4 )
      break;
    NewSubAllocatedRegion = MiAllocateNewSubAllocatedRegion((unsigned int)v5, v11);
    if ( NewSubAllocatedRegion < 0 )
      goto LABEL_24;
    v14 = 16 * (v5 + 13);
  }
  MiReferenceVad(v4);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process, v21, v22);
  MiLockVad((__int64)CurrentThread, v4);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( !(unsigned int)MiVadDeleted(v4) )
  {
    v35 = 0;
    v27 = v36;
    if ( (_DWORD)v5 == 3 )
      NewSubAllocatedRegion = 0;
    else
      NewSubAllocatedRegion = MiCommitExistingVad((ULONG_PTR)v24, v8, v36, 4u, &v35);
    if ( NewSubAllocatedRegion < 0 )
    {
      MiFreeToSubAllocatedRegion((_QWORD *)v4, v5, v8, v27);
    }
    else
    {
      MiUnlockAndDereferenceVad((PVOID)v4, v23, v25, v26);
      *v37 = v8;
      if ( a4 )
        *a4 = v4;
    }
    return (unsigned int)NewSubAllocatedRegion;
  }
  MiUnlockAndDereferenceVad(v24, v23, v25, v26);
  return 3221225738LL;
}
