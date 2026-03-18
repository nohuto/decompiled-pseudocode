/*
 * XREFs of IopLoadDriverImage @ 0x140031E34
 * Callers:
 *     NtLoadDriver @ 0x14044DA04 (NtLoadDriver.c)
 *     NtLoadHotPatch @ 0x140691A94 (NtLoadHotPatch.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140032020 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopLoadUnloadDriver @ 0x14044DA20 (IopLoadUnloadDriver.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopLoadDriverImage(_OWORD *a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v6; // rax
  int v7; // edx
  void *v8; // rcx
  unsigned __int64 v9; // rdx
  void *PoolWithQuota_0; // rbx
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
    PoolWithQuota_0 = (void *)IopVerifierExAllocatePoolWithQuota_0(v8, LOWORD(Src[0]));
    memmove(PoolWithQuota_0, Src[1], LOWORD(Src[0]));
    Src[1] = PoolWithQuota_0;
  }
  else
  {
    *(_OWORD *)Src = *a1;
    PoolWithQuota_0 = 0LL;
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
  if ( PoolWithQuota_0 )
    ExFreePoolWithTag(PoolWithQuota_0, 0);
  return v19;
}
