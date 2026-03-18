/*
 * XREFs of MiLockVadRange @ 0x140540730
 * Callers:
 *     MmAssignProcessToJob @ 0x1400D43A8 (MmAssignProcessToJob.c)
 *     NtUnlockVirtualMemory @ 0x1400EB680 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x14010ABA8 (NtLockVirtualMemory.c)
 *     MiCloneProcessAddressSpace @ 0x14057A87C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14003D780 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MiWaitForVadDeletion @ 0x14023032C (MiWaitForVadDeletion.c)
 *     MiUnlockVadRangeHelper @ 0x140540634 (MiUnlockVadRangeHelper.c)
 *     MiLockVadRangeHelper @ 0x140540870 (MiLockVadRangeHelper.c)
 */

__int64 __fastcall MiLockVadRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // r12
  __int64 v8; // rax
  char *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v15; // r9d
  __int64 v16; // rax
  PVOID P[2]; // [rsp+40h] [rbp-38h] BYREF
  int v18; // [rsp+80h] [rbp+8h] BYREF
  int v19; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
    return 0LL;
  v7 = 2LL;
  while ( 1 )
  {
    v8 = MiLockVadRangeHelper(a1, a2, a3, 0, (__int64)&v19, (__int64)&v18, (__int64)P);
    v9 = (char *)P[0];
    v10 = v8;
    if ( !P[0] )
      break;
LABEL_22:
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    MiLockVad((__int64)CurrentThread, (__int64)v9);
    MiWaitForVadDeletion((__int64)v9);
    MiUnlockAndDereferenceVad(v9);
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    if ( (*(_DWORD *)(a1 + 772) & 0x20) != 0 )
      return 0LL;
  }
  if ( !v18 )
    return v10;
  if ( v19 == LODWORD(P[0]) )
    goto LABEL_6;
  v15 = 2;
  if ( v8 )
    v15 = 3;
  v16 = MiLockVadRangeHelper(a1, a2, a3, v15, (__int64)&v19, (__int64)&v18, (__int64)P);
  v9 = (char *)P[0];
  if ( P[0] )
  {
    if ( v10 )
      MiUnlockVadRangeHelper(a1, a2, v10, 1);
    goto LABEL_22;
  }
  v10 += v16;
LABEL_6:
  v11 = *(_QWORD *)(a1 + 1296);
  v12 = 0LL;
  do
  {
    v13 = *(_QWORD *)(v12 + v11 + 288);
    if ( v13
      && (a2 == -1LL
       || a2 <= (((*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) << 12) | 0xFFF))
      && (a3 == -1LL
       || a3 >= (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) << 12) )
    {
      if ( v10 )
        ExAcquirePushLockExclusiveEx(v13 + 40, 0LL);
      else
        MiLockVad((__int64)CurrentThread, v13);
      ++v10;
    }
    v12 += 24LL;
    --v7;
  }
  while ( v7 );
  return v10;
}
