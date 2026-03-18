/*
 * XREFs of LdrpKrnGetDataTableEntry @ 0x140012970
 * Callers:
 *     LdrpGetImageSize @ 0x1400128E4 (LdrpGetImageSize.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x140013300 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResGetMappingSize @ 0x14042982C (LdrpResGetMappingSize.c)
 * Callees:
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
 */

PVOID *__fastcall LdrpKrnGetDataTableEntry(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *v3; // r14
  __int64 v5; // r8
  PVOID *v6; // rcx
  PVOID v7; // rdx
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v10; // rdx
  struct _KTHREAD *v11; // rsi
  unsigned __int8 v12; // bp
  __int64 FastOwnerEntryForThread; // rax
  ULONG_PTR v14; // rbx
  unsigned __int8 v15; // al
  struct _KTHREAD *v16; // rcx
  ULONG_PTR v17; // r9
  __int64 v18; // rcx
  ULONG_PTR v19; // rbx
  struct _KTHREAD *v20; // r8
  __int16 v21; // ax
  char v22[32]; // [rsp+30h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !CurrentThread )
    return 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite((PERESOURCE)&PsLoadedModuleResource, 1u);
  v6 = (PVOID *)PsLoadedModuleList;
  if ( !PsLoadedModuleList )
    return 0LL;
  while ( 1 )
  {
    v7 = v6[6];
    if ( a1 >= (unsigned __int64)v7 && a1 < (unsigned __int64)v7 + *((unsigned int *)v6 + 16) )
      break;
    v6 = (PVOID *)*v6;
    if ( v6 == &PsLoadedModuleList )
      goto LABEL_9;
  }
  v3 = v6;
LABEL_9:
  if ( (*((_BYTE *)&PsLoadedModuleResource + 26) & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)&PsLoadedModuleResource, 0LL, 0LL);
  v8 = 2LL;
  if ( (*((_BYTE *)&PsLoadedModuleResource + 26) & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v10 = KeGetCurrentThread();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    if ( !CurrentIrql && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( (*((_BYTE *)&PsLoadedModuleResource + 26) & 1) != 0 )
  {
    v11 = KeGetCurrentThread();
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(v8) = 1;
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(v11, &PsLoadedModuleResource, 0LL, v8);
    v14 = FastOwnerEntryForThread;
    if ( !FastOwnerEntryForThread )
      KeBugCheckEx(0xE3u, (ULONG_PTR)&PsLoadedModuleResource, (ULONG_PTR)v11, 0LL, 0LL);
    *(_BYTE *)(FastOwnerEntryForThread + 17) &= ~2u;
    __writecr8(v12);
    if ( (*((_BYTE *)&PsLoadedModuleResource + 26) & 1) == 0 )
      KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)&PsLoadedModuleResource, 0LL, 0LL);
    v15 = KeGetCurrentIrql();
    v16 = KeGetCurrentThread();
    if ( v15 > 2u )
      KeBugCheckEx(0x1C6u, 0LL, v15, 2uLL, 0LL);
    if ( !v15 && (v16->MiscFlags & 0x400) == 0 && !v16->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    v17 = *(_QWORD *)(v14 + 32);
    if ( (struct _KTHREAD *)v17 != v16 )
      KeBugCheckEx(0x1C6u, 9uLL, v14, v17, 0LL);
    if ( *(ULONG_PTR **)(v14 + 24) != &PsLoadedModuleResource )
      KeBugCheckEx(0x1C6u, 8uLL, (ULONG_PTR)&PsLoadedModuleResource, v14, *(_QWORD *)(v14 + 24));
    if ( (*(_BYTE *)(v14 + 17) & 1) != 0 )
      KeBugCheckEx(0x1C6u, 0xAuLL, v14, 0LL, 0LL);
    if ( *((char *)&PsLoadedModuleResource + 26) < 0 )
      ExpReleaseFastResourceExclusive((ULONG_PTR)&PsLoadedModuleResource);
    else
      ExpReleaseFastResourceShared((ULONG_PTR)&PsLoadedModuleResource);
    ExFreePoolWithTag((PVOID)v14, 0);
  }
  else
  {
    v19 = (ULONG_PTR)KeGetCurrentThread();
    LOBYTE(v5) = 2;
    KeFastAcquireInStackQueuedSpinLockAndRaise(&PsLoadedModuleResource + 12, v22, v5);
    v20 = KeGetCurrentThread();
    if ( ((*((_BYTE *)&PsLoadedModuleResource + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer)
      && (v19 & 3) != 3
      && (struct _KTHREAD *)v19 != v20 )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)&PsLoadedModuleResource, (ULONG_PTR)v20, v19, 0LL);
    }
    if ( *((char *)&PsLoadedModuleResource + 26) >= 0 )
      ExpReleaseResourceSharedForThreadLite((ULONG_PTR)&PsLoadedModuleResource, v19);
    else
      ExpReleaseResourceExclusiveForThreadLite((ULONG_PTR)&PsLoadedModuleResource, v19);
  }
  v21 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v21;
  if ( !v21
    && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    if ( KeGetCurrentIrql() )
    {
      LOBYTE(v18) = 1;
      KeGetCurrentThread()->ApcState.KernelApcPending = 1;
      HalRequestSoftwareInterrupt(v18);
    }
    else
    {
      KeGetCurrentIrql();
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
    }
  }
  return v3;
}
