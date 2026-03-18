/*
 * XREFs of MiLockVadRange @ 0x1404C010C
 * Callers:
 *     NtUnlockVirtualMemory @ 0x14004E260 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x14013B8F4 (NtLockVirtualMemory.c)
 *     MmAssignProcessToJob @ 0x140531714 (MmAssignProcessToJob.c)
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 *     MiCoalescePlaceholderAllocations @ 0x14074D2C8 (MiCoalescePlaceholderAllocations.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x1400E5518 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140117300 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     MiWaitForVadDeletion @ 0x14026B614 (MiWaitForVadDeletion.c)
 *     MiUnlockVadRangeHelper @ 0x1404BFFFC (MiUnlockVadRangeHelper.c)
 *     MiLockVadRangeHelper @ 0x1404C0260 (MiLockVadRangeHelper.c)
 */

__int64 __fastcall MiLockVadRange(__int64 a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID v13; // rbp
  __int64 v14; // rbx
  __int64 *v15; // rdi
  __int64 v16; // rdx
  _QWORD *v18; // rax
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  PVOID P[9]; // [rsp+40h] [rbp-48h] BYREF
  int v25; // [rsp+90h] [rbp+8h] BYREF
  int v26; // [rsp+A8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 2LL;
  while ( 1 )
  {
    if ( a4 )
      LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
    else
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
      return 0LL;
    v10 = MiLockVadRangeHelper(a1, (_DWORD)a2, a3, 0, (__int64)&v25, (__int64)&v26, (__int64)P);
    v13 = P[0];
    v14 = v10;
    if ( !P[0] )
      break;
LABEL_29:
    if ( a4 )
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1, v11, v12);
    else
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    MiLockVad((__int64)CurrentThread, (__int64)v13);
    MiWaitForVadDeletion((__int64)v13);
    MiUnlockAndDereferenceVad(v13, v21, v22, v23);
  }
  if ( !v10 )
  {
    v18 = *(_QWORD **)(a1 + 1576);
    if ( v18 )
    {
      do
        v18 = (_QWORD *)*v18;
      while ( v18 );
      return v14;
    }
  }
  if ( !v26 )
    return v14;
  if ( !v25 )
    goto LABEL_9;
  v19 = 2;
  if ( v14 )
    v19 = 3;
  v20 = MiLockVadRangeHelper(a1, (_DWORD)a2, a3, v19, (__int64)&v25, (__int64)&v26, (__int64)P);
  v13 = P[0];
  if ( P[0] )
  {
    if ( v14 )
      MiUnlockVadRangeHelper(a1, a2, v14, 1LL);
    goto LABEL_29;
  }
  v14 += v20;
LABEL_9:
  v15 = (__int64 *)(*(_QWORD *)(a1 + 1296) + 392LL);
  do
  {
    v16 = *v15;
    if ( *v15
      && (a2 == (_QWORD *)-1LL
       || (unsigned __int64)a2 <= (((*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32)) << 12) | 0xFFF))
      && (a3 == -1LL
       || a3 >= (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) << 12) )
    {
      if ( v14 )
        ExAcquirePushLockExclusiveEx(v16 + 40, 0LL);
      else
        MiLockVad((__int64)CurrentThread, v16);
      ++v14;
    }
    v15 += 3;
    --v9;
  }
  while ( v9 );
  return v14;
}
