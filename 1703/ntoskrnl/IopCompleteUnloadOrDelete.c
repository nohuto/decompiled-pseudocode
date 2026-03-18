/*
 * XREFs of IopCompleteUnloadOrDelete @ 0x140005A00
 * Callers:
 *     IoDetachDevice @ 0x140005810 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 *     IopDecrementDeviceObjectRef @ 0x1400DBA60 (IopDecrementDeviceObjectRef.c)
 * Callees:
 *     IopDecrementDeviceObjectRefCount @ 0x140005BB8 (IopDecrementDeviceObjectRefCount.c)
 *     IopInsertRemoveDevice @ 0x140066840 (IopInsertRemoveDevice.c)
 *     IopGetDeviceAttachmentBase @ 0x1400720DC (IopGetDeviceAttachmentBase.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400DB970 (IopIncrementDeviceObjectRefCount.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     PnpIsAnyDeviceInUse @ 0x1401321C4 (PnpIsAnyDeviceInUse.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ObMakeTemporaryObject @ 0x140422C60 (ObMakeTemporaryObject.c)
 *     IopLoadUnloadDriver @ 0x14044DA20 (IopLoadUnloadDriver.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404F48A0 (ObDereferenceSecurityDescriptor.c)
 *     PnpChainDereferenceComplete @ 0x14056D18C (PnpChainDereferenceComplete.c)
 *     VfFastIoCheckState @ 0x14076804C (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140768104 (VfFastIoSnapState.c)
 */

char __fastcall IopCompleteUnloadOrDelete(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, KIRQL a3)
{
  char v3; // bl
  __int64 v4; // rsi
  char v7; // r13
  char v8; // r15
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // r13
  void (__fastcall *v14)(__int64, ULONG_PTR); // r13
  void *v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rdx
  int v21; // r8d
  int IsAnyDeviceInUse; // ebx
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  __int16 Object; // [rsp+50h] [rbp-30h] BYREF
  char v25; // [rsp+52h] [rbp-2Eh]
  int v26; // [rsp+54h] [rbp-2Ch]
  _QWORD v27[5]; // [rsp+58h] [rbp-28h] BYREF
  __int64 DeviceAttachmentBase; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 v29; // [rsp+C8h] [rbp+48h]

  v29 = a2;
  v3 = 0;
  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v7 = 0;
  v8 = 1;
  v9 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL);
  if ( (v9 & 4) != 0 )
  {
    DeviceAttachmentBase = IopGetDeviceAttachmentBase(BugCheckParameter2);
    v19 = DeviceAttachmentBase;
    IsAnyDeviceInUse = PnpIsAnyDeviceInUse(&DeviceAttachmentBase, v20, 0LL);
    KeReleaseQueuedSpinLock((unsigned int)(v21 + 10), a3);
    if ( IsAnyDeviceInUse != 1 )
      PnpChainDereferenceComplete(v19, v29);
    return 0;
  }
  else
  {
    if ( (v9 & 2) != 0 )
    {
      if ( (v9 & 1) == 0 || (*(_DWORD *)(v4 + 16) & 1) != 0 )
        v8 = 0;
      v10 = *(_QWORD *)(BugCheckParameter2 + 24);
      DeviceAttachmentBase = v10;
      if ( v10 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 80LL);
        IopIncrementDeviceObjectRefCount(BugCheckParameter2);
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        if ( v13 )
        {
          if ( *(_DWORD *)v13 > 0x68u )
          {
            v14 = *(void (__fastcall **)(__int64, ULONG_PTR))(v13 + 104);
            if ( v14 )
            {
              v15 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
              v14(DeviceAttachmentBase, BugCheckParameter2);
              if ( v15 )
                VfFastIoCheckState(v15);
            }
          }
        }
        a3 = KeAcquireQueuedSpinLock(0xAuLL);
        IopDecrementDeviceObjectRefCount(BugCheckParameter2);
        if ( *(_QWORD *)(BugCheckParameter2 + 24) || *(_DWORD *)(BugCheckParameter2 + 4) )
          goto LABEL_18;
      }
      KeReleaseQueuedSpinLock(0xAuLL, a3);
      v11 = *(_QWORD *)(BugCheckParameter2 + 272);
      if ( v11 )
        ObDereferenceSecurityDescriptor(v11, 1LL);
      IopInsertRemoveDevice(*(_QWORD *)(BugCheckParameter2 + 8), BugCheckParameter2, 0LL);
      ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
      v7 = 1;
      if ( !v8 )
        return 1;
      a3 = KeAcquireQueuedSpinLock(0xAuLL);
      if ( (*(_DWORD *)(v4 + 16) & 1) != 0 )
      {
        v3 = 1;
LABEL_18:
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        return v3;
      }
    }
    v16 = *(_QWORD *)(v4 + 8);
    v17 = v16;
    if ( v16 )
    {
      while ( !*(_DWORD *)(v17 + 4) && !*(_QWORD *)(v17 + 24) && (*(_DWORD *)(*(_QWORD *)(v17 + 312) + 32LL) & 6) == 0 )
      {
        v17 = *(_QWORD *)(v17 + 16);
        if ( !v17 )
          goto LABEL_22;
      }
      v8 = 0;
    }
LABEL_22:
    v18 = *(_DWORD *)(v4 + 16);
    if ( (v18 & 0x80u) != 0 && v16 )
      v8 = 0;
    if ( v8 )
      *(_DWORD *)(v4 + 16) = v18 | 1;
    KeReleaseQueuedSpinLock(0xAuLL, a3);
    if ( v8 )
    {
      Object = 0;
      v27[1] = v27;
      v25 = 6;
      v27[0] = v27;
      v26 = 0;
      v27[2] = v4;
      if ( v29 )
      {
        IopLoadUnloadDriver(&WorkItem);
      }
      else
      {
        WorkItem.List.Flink = 0LL;
        WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
        WorkItem.Parameter = &WorkItem;
        ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
      ObMakeTemporaryObject((PVOID)v4);
      ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
    }
    return v7;
  }
}
