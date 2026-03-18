/*
 * XREFs of IopLoadDriverImage @ 0x1400157D8
 * Callers:
 *     NtLoadDriver @ 0x14046DF5C (NtLoadDriver.c)
 *     NtLoadHotPatch @ 0x1406BD7D0 (NtLoadHotPatch.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x1400159C4 (IopVerifierExAllocatePoolWithQuota.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     IopLoadUnloadDriver @ 0x14046F260 (IopLoadUnloadDriver.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopLoadDriverImage(_OWORD *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v6; // rax
  int v7; // edx
  void *v8; // rcx
  unsigned __int64 v9; // rdx
  void *PoolWithQuota; // rbx
  void *Src[2]; // [rsp+38h] [rbp-70h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+50h] [rbp-58h] BYREF
  __int16 Object; // [rsp+70h] [rbp-38h] BYREF
  char v15; // [rsp+72h] [rbp-36h]
  int v16; // [rsp+74h] [rbp-34h]
  _QWORD v17[4]; // [rsp+78h] [rbp-30h] BYREF
  char v18; // [rsp+98h] [rbp-10h]
  unsigned int v19; // [rsp+9Ch] [rbp-Ch]

  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( (unsigned __int8)PsIsCurrentThreadInServerSilo() )
      return 0LL;
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a1;
    v7 = *(_DWORD *)v6;
    LODWORD(Src[0]) = v7;
    v8 = *(void **)(v6 + 8);
    Src[1] = v8;
    if ( !(_WORD)v7 )
      return 3221225485LL;
    if ( ((unsigned __int8)v8 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (unsigned __int64)v8 + (unsigned __int16)v7;
    if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)v8 )
      MEMORY[0x7FFFFFFF0000] = 0;
    PoolWithQuota = (void *)IopVerifierExAllocatePoolWithQuota(v8, LOWORD(Src[0]));
    memmove(PoolWithQuota, Src[1], LOWORD(Src[0]));
    Src[1] = PoolWithQuota;
  }
  else
  {
    *(_OWORD *)Src = *a1;
    PoolWithQuota = 0LL;
  }
  Object = 0;
  v15 = 6;
  v16 = 0;
  v17[1] = v17;
  v17[0] = v17;
  v17[2] = 0LL;
  v17[3] = Src;
  v18 = a2;
  if ( CurrentThread->ApcState.Process == PsInitialSystemProcess )
  {
    IopLoadUnloadDriver(&WorkItem);
  }
  else
  {
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
    WorkItem.Parameter = &WorkItem;
    WorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&Object, UserRequest, 0, 0, 0LL);
  }
  if ( PoolWithQuota )
    ExFreePoolWithTag(PoolWithQuota, 0);
  return v19;
}
