/*
 * XREFs of MiAllocateUserStack @ 0x1404D9354
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     MmAllocateVirtualMemory @ 0x1405763CC (MmAllocateVirtualMemory.c)
 * Callees:
 *     MiRemoveSecureEntry @ 0x140034510 (MiRemoveSecureEntry.c)
 *     MiLockVad @ 0x14003D4A0 (MiLockVad.c)
 *     MiVadDeleted @ 0x14003D4D0 (MiVadDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14003D780 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003DE40 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MiUnlockVad @ 0x1400A5788 (MiUnlockVad.c)
 *     MiInsertVadEvent @ 0x1400A59A0 (MiInsertVadEvent.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedSecureVad @ 0x1400E9550 (MiObtainReferencedSecureVad.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14050946C (MiAllocateFromSubAllocatedRegion.c)
 *     MiFreeRfgControlStack @ 0x1406EDAF0 (MiFreeRfgControlStack.c)
 */

__int64 __fastcall MiAllocateUserStack(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        PVOID a3,
        unsigned __int64 *a4,
        int a5,
        unsigned int a6,
        char a7,
        unsigned int a8,
        int a9,
        unsigned __int64 *a10)
{
  unsigned __int64 *v10; // r12
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR Process; // rdi
  ULONG_PTR v13; // rsi
  __int64 v14; // r13
  __int64 *v15; // r14
  ULONG_PTR v16; // rdi
  int v18; // ebx
  __int64 result; // rax
  __int64 v20; // rax
  _QWORD *PoolWithTag; // rax
  char *v22; // rcx
  int VirtualMemory; // [rsp+50h] [rbp-91h] BYREF
  __int64 v24; // [rsp+58h] [rbp-89h]
  unsigned __int64 *v25; // [rsp+60h] [rbp-81h]
  ULONG_PTR BugCheckParameter1a; // [rsp+68h] [rbp-79h] BYREF
  PVOID P; // [rsp+70h] [rbp-71h]
  char v28; // [rsp+78h] [rbp-69h] BYREF
  _QWORD *v29; // [rsp+80h] [rbp-61h]
  _QWORD *v30; // [rsp+88h] [rbp-59h]
  unsigned __int64 *v31; // [rsp+90h] [rbp-51h]
  ULONG_PTR v32; // [rsp+98h] [rbp-49h]
  ULONG_PTR v33; // [rsp+A0h] [rbp-41h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v34; // [rsp+A8h] [rbp-39h] BYREF

  v10 = 0LL;
  v25 = a4;
  P = a3;
  v24 = (__int64)a2;
  v33 = BugCheckParameter1;
  v31 = a10;
  if ( a10 )
    *a10 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  v32 = Process;
  if ( BugCheckParameter1 == -1LL )
  {
    v13 = Process;
    BugCheckParameter1a = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               BugCheckParameter1,
               8,
               (__int64)PsProcessType,
               a7,
               1834380621,
               &BugCheckParameter1a,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    v13 = BugCheckParameter1a;
    if ( BugCheckParameter1a != Process )
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0, (__int64)&v34);
    a3 = P;
    a2 = (unsigned __int64 *)v24;
    a4 = v25;
  }
  v14 = *(_QWORD *)(v13 + 1296);
  v15 = 0LL;
  v16 = 0LL;
  LODWORD(v24) = 0;
  if ( a10 )
  {
    v10 = (unsigned __int64 *)&v28;
  }
  else if ( (a8 & 0x40000000) != 0 )
  {
    v10 = (unsigned __int64 *)&v28;
    a9 = -2147483647;
  }
  VirtualMemory = MiAllocateVirtualMemory(-1LL, a2, (ULONGLONG)a3, a4, a5, a6, a7, a8, a9, v10);
  v18 = VirtualMemory;
  if ( VirtualMemory >= 0 )
  {
    if ( v10 )
      v15 = (__int64 *)(v13 ^ qword_1403884F0 ^ *v10);
    if ( (a8 & 0x40000000) == 0 )
      goto LABEL_11;
    v20 = MiObtainReferencedSecureVad((ULONG_PTR)v15, &VirtualMemory);
    v16 = v20;
    if ( v20 )
    {
      MiUnlockVad((__int64)CurrentThread, v20);
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v13);
      if ( (*(_DWORD *)(v13 + 772) & 0x20) != 0 )
      {
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v13);
        v18 = -1073741558;
LABEL_33:
        VirtualMemory = v18;
        goto LABEL_45;
      }
      v24 = 1LL;
      _InterlockedAdd((volatile signed __int32 *)(v14 + 136), 1u);
      v13 = BugCheckParameter1a;
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, BugCheckParameter1a);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x70526D4Du);
      P = PoolWithTag;
      if ( !PoolWithTag )
      {
        v18 = -1073741670;
        goto LABEL_33;
      }
      *((_DWORD *)PoolWithTag + 16) = 256;
      v29 = PoolWithTag + 1;
      PoolWithTag[1] = 0LL;
      PoolWithTag[2] = 0LL;
      PoolWithTag[3] = 0LL;
      v30 = PoolWithTag + 2;
      VirtualMemory = MiAllocateFromSubAllocatedRegion(3LL, *v25, PoolWithTag + 1, PoolWithTag + 2);
      v18 = VirtualMemory;
      if ( VirtualMemory >= 0 )
      {
        MiLockVad((__int64)CurrentThread, v16);
        if ( !(unsigned int)MiVadDeleted(v16)
          && (v24
            + (*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32))
            - (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32))) << 12 == *v25 )
        {
          MiInsertVadEvent(v16, P, v24);
          MiUnlockAndDereferenceVad((char *)v16);
          v16 = 0LL;
LABEL_11:
          v18 = 0;
          VirtualMemory = 0;
LABEL_12:
          if ( v31 )
          {
            *v31 = *v10;
            goto LABEL_14;
          }
          if ( !v15 )
            goto LABEL_14;
          goto LABEL_47;
        }
        MiUnlockVad((__int64)CurrentThread, v16);
        v18 = -1073741800;
        VirtualMemory = -1073741800;
      }
      if ( *v29 )
        MiFreeRfgControlStack(*v30, *v29, *v25);
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      v18 = VirtualMemory;
    }
    if ( v18 >= 0 )
      goto LABEL_12;
LABEL_45:
    if ( !v15 )
      goto LABEL_14;
    if ( !v16 )
    {
LABEL_15:
      if ( (_DWORD)v24 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 136), 0xFFFFFFFF) == 1 )
          KeSetEvent(*(PRKEVENT *)(v14 + 160), 0, 0);
        v18 = VirtualMemory;
        v13 = BugCheckParameter1a;
      }
      goto LABEL_16;
    }
LABEL_47:
    MiRemoveSecureEntry(v16, v15);
LABEL_14:
    if ( v16 )
    {
      MiLockVad((__int64)CurrentThread, v16);
      if ( (unsigned int)MiVadDeleted(v16) )
        MiUnlockAndDereferenceVad(v22);
      else
        MiDeleteVad((__int64)v22, 0);
    }
    goto LABEL_15;
  }
LABEL_16:
  if ( v13 != v32 )
    KiUnstackDetachProcess(&v34, 0LL);
  if ( v33 != -1LL )
    ObfDereferenceObjectWithTag((PVOID)v13, 0x6D566D4Du);
  return (unsigned int)v18;
}
