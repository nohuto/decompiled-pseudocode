/*
 * XREFs of DpiMiracastSendAsyncUserModeRequest @ 0x1C01FFA78
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C003DBB0 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C003EE7C (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1C01FEAC0 (DpiMiracastCbSendUserModeMessage.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 *     McTemplateK0pqqqq @ 0x1C0042734 (McTemplateK0pqqqq.c)
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
  unsigned int v12; // r13d
  __int64 v13; // rcx
  char v14; // r14
  struct _FILE_OBJECT *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  NTSTATUS v20; // ebx
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v26; // r14
  __int64 v27; // rax
  PIRP Irp; // rax
  __int64 v29; // rcx
  IRP *v30; // rbx
  __int64 v31; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  struct _IO_STACK_LOCATION *v34; // rax
  __int64 v36; // [rsp+20h] [rbp-58h]
  __int64 v37; // [rsp+28h] [rbp-50h]
  __int64 v38; // [rsp+30h] [rbp-48h]
  __int64 v39; // [rsp+38h] [rbp-40h]
  DWORD v40; // [rsp+90h] [rbp+18h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+C8h] [rbp+50h]

  v40 = a3;
  v12 = a7;
  v13 = 0LL;
  v14 = 0;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
  {
    McTemplateK0pqqqq(0LL, &EventEnterMiracastSendUserModeRequest, a3, a1[12], 0, Size, a7, 0);
    v13 = 0LL;
  }
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 0;
  if ( a11 )
    *a11 = 0LL;
  if ( (struct _KTHREAD *)a1[11] != KeGetCurrentThread() )
  {
    v14 = 1;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 4);
    v13 = 0LL;
    a1[11] = KeGetCurrentThread();
  }
  v16 = (struct _FILE_OBJECT *)a1[22];
  DeviceObjecta = (PDEVICE_OBJECT)a1[23];
  if ( v16 )
  {
    ObfReferenceObject(v16);
    v13 = 0LL;
  }
  if ( v14 )
  {
    a1[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 4);
  }
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdWarning(v13, a2, a3);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdWarning(v17);
    v20 = -1073741130;
    goto LABEL_36;
  }
  v21 = Size;
  if ( (unsigned int)Size <= a7 )
    v21 = a7;
  v22 = 0xFFFFFFFFLL;
  v23 = v21 + 64;
  if ( v23 >= 0x40 )
    v22 = v23;
  v20 = v23 < 0x40 ? 0xC0000095 : 0;
  if ( v23 < 0x40 )
  {
    v24 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v24 + 24) = v20;
    WdLogEvent5_WdError(v24);
LABEL_21:
    ObfDereferenceObject(v16);
    goto LABEL_36;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v22, 0x74727044u);
  v26 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v20 = -1073741801;
    v27 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v27 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v27);
    goto LABEL_21;
  }
  *PoolWithTag = v16;
  PoolWithTag[1] = a1[12];
  PoolWithTag[4] = a8;
  PoolWithTag[5] = a9;
  *((_DWORD *)PoolWithTag + 14) = a11 == 0LL;
  Irp = IoAllocateIrp(DeviceObjecta->StackSize, 0);
  v30 = Irp;
  if ( !Irp )
  {
    v20 = -1073741801;
    v31 = WdLogNewEntry5_WdLowResource(v29);
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v31);
    ExFreePoolWithTag(v26, 0);
    goto LABEL_21;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v40;
  if ( !a7 )
    a6 = 0LL;
  CurrentStackLocation[-1].MajorFunction = 14;
  CurrentStackLocation[-1].Parameters.Read.Length = a7;
  CurrentStackLocation[-1].Parameters.Create.Options = Size;
  v30->UserBuffer = a6;
  v26[6] = a6;
  if ( (_DWORD)Size || a7 )
  {
    v30->AssociatedIrp.MasterIrp = (struct _IRP *)(v26 + 8);
    if ( (_DWORD)Size )
      memmove(v26 + 8, a4, (unsigned int)Size);
  }
  CurrentStackLocation[-1].FileObject = v16;
  v34 = v30->Tail.Overlay.CurrentStackLocation;
  v34[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiMiracastIoCompleteRoutine;
  v34[-1].Context = v26;
  v34[-1].Control = -32;
  if ( a11 )
    *a11 = v30;
  v12 = a7;
  v20 = IofCallDriver(DeviceObjecta, v30);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 1;
LABEL_36:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
  {
    LODWORD(v39) = v20;
    LODWORD(v38) = v12;
    LODWORD(v37) = Size;
    LODWORD(v36) = 0;
    McTemplateK0pqqqq(v18, &EventLeaveMiracastSendUserModeRequest, v19, a1[12], v36, v37, v38, v39);
  }
  return (unsigned int)v20;
}
