/*
 * XREFs of DpiMiracastSendAsyncUserModeRequest @ 0x1C01E20B8
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002FAC0 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0030D64 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C01E1110 (DpiMiracastCbSendUserModeMessage.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     McTemplateK0pqqqq @ 0x1C0020738 (McTemplateK0pqqqq.c)
 */

__int64 __fastcall DpiMiracastSendAsyncUserModeRequest(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size,
        void *a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        PDEVICE_OBJECT DeviceObject,
        IRP **a11)
{
  char v12; // bl
  void *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  NTSTATUS v19; // ebx
  unsigned int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rax
  _QWORD *PoolWithTag; // rax
  __int64 v25; // rcx
  _QWORD *v26; // r14
  __int64 v27; // rax
  PIRP Irp; // rax
  __int64 v29; // rcx
  IRP *v30; // rbx
  __int64 v31; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+28h] [rbp-50h]
  __int64 v37; // [rsp+30h] [rbp-48h]
  __int64 v38; // [rsp+38h] [rbp-40h]
  int v39; // [rsp+90h] [rbp+18h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+C8h] [rbp+50h]
  __int64 v42; // [rsp+D0h] [rbp+58h]

  v39 = a3;
  v12 = 0;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
    McTemplateK0pqqqq((__int64)a1, &EventEnterMiracastSendUserModeRequest, a3, a1[12], 0, Size, a7, 0);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 0;
  if ( a11 )
    *a11 = 0LL;
  if ( (struct _KTHREAD *)a1[11] != KeGetCurrentThread() )
  {
    v12 = 1;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 4);
    a1[11] = KeGetCurrentThread();
  }
  v15 = (void *)a1[22];
  DeviceObjecta = (PDEVICE_OBJECT)a1[23];
  if ( v15 )
    ObfReferenceObject(v15);
  if ( v12 )
  {
    a1[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 4);
  }
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdWarning(v16);
    v19 = -1073741130;
    goto LABEL_36;
  }
  v20 = Size;
  if ( (unsigned int)Size <= a7 )
    v20 = a7;
  v21 = 0xFFFFFFFFLL;
  v22 = v20 + 64;
  if ( v22 >= 0x40 )
    v21 = v22;
  v19 = v22 < 0x40 ? 0xC0000095 : 0;
  if ( v22 < 0x40 )
  {
    v23 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v23 + 24) = v19;
    WdLogEvent5_WdError(v23);
    ObfDereferenceObject(v15);
    goto LABEL_36;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v21, 0x74727044u);
  v26 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v19 = -1073741801;
    v27 = WdLogNewEntry5_WdLowResource(v25);
    *(_QWORD *)(v27 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v27);
LABEL_23:
    ObfDereferenceObject(v15);
    goto LABEL_36;
  }
  *PoolWithTag = v15;
  PoolWithTag[1] = a1[12];
  PoolWithTag[4] = a8;
  PoolWithTag[5] = a9;
  *((_DWORD *)PoolWithTag + 14) = a11 == 0LL;
  Irp = IoAllocateIrp(DeviceObjecta->StackSize, 0);
  v30 = Irp;
  if ( !Irp )
  {
    v19 = -1073741801;
    v31 = WdLogNewEntry5_WdLowResource(v29);
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v31);
    ExFreePoolWithTag(v26, 0);
    goto LABEL_23;
  }
  v42 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
  *(_BYTE *)v42 = 14;
  *(_DWORD *)(v42 + 8) = a7;
  *(_DWORD *)(v42 + 16) = Size;
  *(_DWORD *)(v42 + 24) = v39;
  if ( !a7 )
    a6 = 0LL;
  v30->UserBuffer = a6;
  v26[6] = a6;
  if ( (_DWORD)Size || a7 )
  {
    v30->AssociatedIrp.MasterIrp = (struct _IRP *)(v26 + 8);
    if ( (_DWORD)Size )
      memmove(v26 + 8, a4, (unsigned int)Size);
  }
  *(_QWORD *)(v42 + 48) = v15;
  CurrentStackLocation = v30->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Context = v26;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiMiracastIoCompleteRoutine;
  CurrentStackLocation[-1].Control = -32;
  if ( a11 )
    *a11 = v30;
  v19 = IofCallDriver(DeviceObjecta, v30);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 1;
LABEL_36:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
  {
    LODWORD(v38) = v19;
    LODWORD(v37) = a7;
    LODWORD(v36) = Size;
    LODWORD(v35) = 0;
    McTemplateK0pqqqq(v17, &EventLeaveMiracastSendUserModeRequest, v18, a1[12], v35, v36, v37, v38);
  }
  return (unsigned int)v19;
}
