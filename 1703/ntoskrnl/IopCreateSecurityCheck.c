/*
 * XREFs of IopCreateSecurityCheck @ 0x140032804
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 * Callees:
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiDeliverApc @ 0x1400ECA80 (KiDeliverApc.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1400EECB0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeFastAcquireInStackQueuedSpinLockAndRaise @ 0x14011C4D0 (KeFastAcquireInStackQueuedSpinLockAndRaise.c)
 *     ExpReleaseFastResourceShared @ 0x14014DF20 (ExpReleaseFastResourceShared.c)
 *     ExpFindFastOwnerEntryForThread @ 0x14014E814 (ExpFindFastOwnerEntryForThread.c)
 *     ExpReleaseFastResourceExclusive @ 0x14014E868 (ExpReleaseFastResourceExclusive.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeAppendPrivileges @ 0x1404370B0 (SeAppendPrivileges.c)
 *     SeOpenObjectAuditAlarm @ 0x1404F6170 (SeOpenObjectAuditAlarm.c)
 *     SeLockSubjectContext @ 0x1405086C0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140531170 (SeUnlockSubjectContext.c)
 */

char __fastcall IopCreateSecurityCheck(
        __int64 a1,
        void *a2,
        struct _ACCESS_STATE *a3,
        int a4,
        int a5,
        PPRIVILEGE_SET Privileges,
        PACCESS_MASK GrantedAccess,
        PUNICODE_STRING AbsoluteObjectName,
        PUNICODE_STRING ObjectTypeName,
        __int64 a10,
        char a11)
{
  int v11; // ebx
  int v16; // eax
  __int64 v17; // rbp
  PACCESS_MASK v18; // rsi
  BOOLEAN v19; // al
  PPRIVILEGE_SET v20; // r12
  BOOLEAN v21; // cl
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rdx
  struct _KTHREAD *v26; // rdi
  unsigned __int8 v27; // si
  __int64 FastOwnerEntryForThread; // rax
  ULONG_PTR v29; // rbx
  unsigned __int8 v30; // al
  struct _KTHREAD *v31; // rcx
  ULONG_PTR v32; // r9
  __int64 v33; // rcx
  ULONG_PTR v34; // rbx
  struct _KTHREAD *v35; // r8
  __int16 v36; // ax
  _BYTE v38[32]; // [rsp+50h] [rbp-48h] BYREF
  NTSTATUS AccessStatus; // [rsp+B8h] [rbp+20h] BYREF

  v11 = 0;
  if ( a5 != 1 )
  {
    v16 = *(_DWORD *)(a1 + 52);
    if ( (v16 & 0x40001) != 0 || IopRequireDeviceAccessCheck && (v16 & 0x100000) != 0 )
      v11 = 2;
  }
  v17 = a10;
  --*(_WORD *)(a10 + 484);
  ExAcquireResourceSharedLite((PERESOURCE)&IopSecurityResource, 1u);
  SeLockSubjectContext(&a3->SubjectSecurityContext);
  v18 = GrantedAccess;
  v19 = SeAccessCheck(
          *(PSECURITY_DESCRIPTOR *)(a1 + 272),
          &a3->SubjectSecurityContext,
          1u,
          a4 | v11,
          0,
          &Privileges,
          (PGENERIC_MAPPING)((char *)IoFileObjectType + 76),
          1,
          GrantedAccess,
          &AccessStatus);
  v20 = Privileges;
  v21 = v19;
  LOBYTE(a5) = v19;
  if ( Privileges )
  {
    SeAppendPrivileges(a3, Privileges);
    ExFreePoolWithTag(v20, 0);
    v21 = a5;
  }
  if ( v11 && (v11 & a4) == 0 )
    *v18 &= ~v11;
  if ( a11 && v21 )
  {
    a3->PreviouslyGrantedAccess |= *v18;
    a3->RemainingDesiredAccess &= ~(*v18 | 0x2000000);
  }
  if ( a2 )
    SeOpenObjectAuditAlarm(
      ObjectTypeName,
      a2,
      AbsoluteObjectName,
      *(PSECURITY_DESCRIPTOR *)(a1 + 272),
      a3,
      0,
      v21,
      1,
      &a3->GenerateOnClose);
  SeUnlockSubjectContext(&a3->SubjectSecurityContext);
  if ( (*((_BYTE *)&IopSecurityResource + 26) & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)&IopSecurityResource, 0LL, 0LL);
  if ( (*((_BYTE *)&IopSecurityResource + 26) & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( (*((_BYTE *)&IopSecurityResource + 26) & 1) != 0 )
  {
    v26 = KeGetCurrentThread();
    v27 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v23) = 1;
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(v26, &IopSecurityResource, 0LL, v23);
    v29 = FastOwnerEntryForThread;
    if ( !FastOwnerEntryForThread )
      KeBugCheckEx(0xE3u, (ULONG_PTR)&IopSecurityResource, (ULONG_PTR)v26, 0LL, 0LL);
    *(_BYTE *)(FastOwnerEntryForThread + 17) &= ~2u;
    __writecr8(v27);
    if ( (*((_BYTE *)&IopSecurityResource + 26) & 1) == 0 )
      KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)&IopSecurityResource, 0LL, 0LL);
    v30 = KeGetCurrentIrql();
    v31 = KeGetCurrentThread();
    if ( v30 > 2u )
      KeBugCheckEx(0x1C6u, 0LL, v30, 2uLL, 0LL);
    if ( !v30 && (v31->MiscFlags & 0x400) == 0 && !v31->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    v32 = *(_QWORD *)(v29 + 32);
    if ( (struct _KTHREAD *)v32 != v31 )
      KeBugCheckEx(0x1C6u, 9uLL, v29, v32, 0LL);
    if ( *(ULONG_PTR **)(v29 + 24) != &IopSecurityResource )
      KeBugCheckEx(0x1C6u, 8uLL, (ULONG_PTR)&IopSecurityResource, v29, *(_QWORD *)(v29 + 24));
    if ( (*(_BYTE *)(v29 + 17) & 1) != 0 )
      KeBugCheckEx(0x1C6u, 0xAuLL, v29, 0LL, 0LL);
    if ( *((char *)&IopSecurityResource + 26) < 0 )
      ExpReleaseFastResourceExclusive((ULONG_PTR)&IopSecurityResource);
    else
      ExpReleaseFastResourceShared((ULONG_PTR)&IopSecurityResource);
    ExFreePoolWithTag((PVOID)v29, 0);
  }
  else
  {
    v34 = (ULONG_PTR)KeGetCurrentThread();
    LOBYTE(v22) = 2;
    KeFastAcquireInStackQueuedSpinLockAndRaise(&IopSecurityResource + 12, v38, v22);
    v35 = KeGetCurrentThread();
    if ( ((*((_BYTE *)&IopSecurityResource + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && (v34 & 3) != 3
      && (struct _KTHREAD *)v34 != v35 )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)&IopSecurityResource, (ULONG_PTR)v35, v34, 0LL);
    }
    if ( *((char *)&IopSecurityResource + 26) >= 0 )
      ExpReleaseResourceSharedForThreadLite((ULONG_PTR)&IopSecurityResource, v34);
    else
      ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)&IopSecurityResource, v34);
  }
  v36 = *(_WORD *)(v17 + 484) + 1;
  *(_WORD *)(v17 + 484) = v36;
  if ( !v36 && *(_QWORD *)(v17 + 152) != v17 + 152 && !*(_WORD *)(v17 + 486) )
  {
    if ( KeGetCurrentIrql() )
    {
      LOBYTE(v33) = 1;
      KeGetCurrentThread()->ApcState.KernelApcPending = 1;
      HalRequestSoftwareInterrupt(v33);
    }
    else
    {
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
    }
  }
  return a5;
}
