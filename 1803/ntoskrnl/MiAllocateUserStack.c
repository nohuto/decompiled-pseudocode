/*
 * XREFs of MiAllocateUserStack @ 0x1404E88F4
 * Callers:
 *     MiAllocateVirtualMemoryCommon @ 0x1404E8560 (MiAllocateVirtualMemoryCommon.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiObtainReferencedSecureVad @ 0x1400E45B0 (MiObtainReferencedSecureVad.c)
 *     MiRemoveSecureEntry @ 0x1400E46F0 (MiRemoveSecureEntry.c)
 *     MiInsertVadEvent @ 0x1400E4C88 (MiInsertVadEvent.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140117300 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x1401175E0 (MiVadDeleted.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402506AC (MiDecrementVadsBeingDeleted.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140592B34 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiFreeRfgControlStack @ 0x140756F80 (MiFreeRfgControlStack.c)
 */

__int64 __fastcall MiAllocateUserStack(__int64 a1, __int64 a2)
{
  __int64 *v2; // r12
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v4; // ebx
  __int64 v5; // r14
  _KPROCESS *Process; // rsi
  __int64 v9; // r13
  int v10; // edi
  _QWORD *v11; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *PoolWithTag; // rax
  __int64 *v21; // r14
  __int64 v22; // rdx
  unsigned int *v23; // rcx
  int VirtualMemory; // [rsp+20h] [rbp-88h] BYREF
  _KPROCESS *v25; // [rsp+28h] [rbp-80h]
  __int64 v26; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v27[48]; // [rsp+38h] [rbp-70h] BYREF

  v26 = 0LL;
  v2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 80);
  Process = CurrentThread->ApcState.Process;
  v25 = Process;
  if ( (_KPROCESS *)v5 != Process )
    KiStackAttachProcess((_KPROCESS *)v5, 0, (__int64)v27);
  v9 = *(_QWORD *)(v5 + 1296);
  if ( (*(_DWORD *)(a1 + 52) & 0x40000000) != 0 && !*(_QWORD *)(a1 + 72) )
  {
    *(_DWORD *)(a1 + 68) = -2147483647;
    *(_QWORD *)(a1 + 72) = &v26;
  }
  VirtualMemory = MiAllocateVirtualMemory(a1, 0LL, a2);
  v10 = VirtualMemory;
  if ( VirtualMemory >= 0 )
  {
    v11 = *(_QWORD **)(a1 + 72);
    if ( v11 )
      v2 = (__int64 *)(v5 ^ qword_1403CB688 ^ *v11);
    if ( (*(_DWORD *)(a1 + 52) & 0x40000000) == 0 )
    {
      v10 = 0;
      goto LABEL_9;
    }
    v13 = MiObtainReferencedSecureVad((ULONG_PTR)v2, &VirtualMemory);
    v16 = v13;
    if ( !v13 )
    {
      v10 = VirtualMemory;
LABEL_38:
      Process = v25;
      goto LABEL_9;
    }
    MiUnlockVad((__int64)CurrentThread, v13, v14, v15);
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v5);
    if ( (*(_DWORD *)(v5 + 772) & 0x20) != 0 )
    {
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v5);
      v10 = -1073741558;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 224));
      v4 = 1;
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v5);
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x70526D4Du);
      v21 = PoolWithTag;
      if ( PoolWithTag )
      {
        *((_DWORD *)PoolWithTag + 16) = 256;
        PoolWithTag[1] = 0LL;
        PoolWithTag[2] = 0LL;
        PoolWithTag[3] = 0LL;
        v10 = MiAllocateFromSubAllocatedRegion(3LL, *(_QWORD *)(a1 + 24), PoolWithTag + 1, PoolWithTag + 2);
        if ( v10 >= 0 )
        {
          MiLockVad((__int64)CurrentThread, v16);
          v4 = 3;
          if ( !(unsigned int)MiVadDeleted(v16)
            && ((*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32))
              - (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32))
              + 1) << 12 == *(_QWORD *)(a1 + 24) )
          {
            MiInsertVadEvent(v16, v21, 1);
            v10 = 0;
            goto LABEL_29;
          }
          v10 = -1073741800;
        }
        v22 = v21[1];
        if ( v22 )
          MiFreeRfgControlStack(v21[2], v22, *(_QWORD *)(a1 + 24));
        ExFreePoolWithTag(v21, 0);
        goto LABEL_29;
      }
      v10 = -1073741670;
    }
LABEL_29:
    if ( v4 < 2 )
      MiLockVad((__int64)CurrentThread, v16);
    if ( v26 )
    {
      MiRemoveSecureEntry(v16, v2);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
    if ( v10 >= 0 || (unsigned int)MiVadDeleted(v16) )
      MiUnlockAndDereferenceVad((PVOID)v16, v17, v18, v19);
    else
      MiDeleteVad(v23, 0LL, 0);
    goto LABEL_38;
  }
LABEL_9:
  if ( (v4 & 1) != 0 )
    MiDecrementVadsBeingDeleted(v9 + 48);
  if ( *(_KPROCESS **)(a1 + 80) != Process )
    KiUnstackDetachProcess((__int64)v27, 0LL);
  return (unsigned int)v10;
}
