/*
 * XREFs of ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1C0206384
 * Callers:
 *     DpiIndirectCbSendMessage @ 0x1C0206970 (DpiIndirectCbSendMessage.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0041554 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 */

__int64 __fastcall DpiIndirectSendAsyncUserModeRequest(
        struct _FILE_OBJECT *Object,
        PDEVICE_OBJECT DeviceObject,
        __int64 a3,
        void *a4,
        size_t Size,
        void *a6,
        unsigned int a7,
        void (*a8)(void *, struct _IO_STATUS_BLOCK *),
        void *a9,
        bool *a10)
{
  __int64 v13; // rax
  NTSTATUS v14; // ebx
  size_t v15; // rbp
  unsigned int v16; // r15d
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rax
  _QWORD *PoolWithTag; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  void (*v24)(void *, struct _IO_STATUS_BLOCK *); // rax
  __int64 v25; // rcx
  NTSTATUS v26; // edi
  __int64 v27; // rax
  PIRP Irp; // rax
  __int64 v29; // rcx
  IRP *v30; // rdi
  __int64 v31; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  void *v33; // rax
  struct _IO_STACK_LOCATION *v34; // rax
  void *v36; // [rsp+50h] [rbp+8h] BYREF

  v36 = 0LL;
  if ( Object )
  {
    v15 = (unsigned int)Size;
    v16 = a7;
    v17 = Size;
    if ( (unsigned int)Size <= a7 )
      v17 = a7;
    v18 = 0xFFFFFFFFLL;
    v19 = v17 + 56;
    if ( v19 >= 0x38 )
      v18 = v19;
    v14 = v19 < 0x38 ? 0xC0000095 : 0;
    if ( v19 >= 0x38 )
    {
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v18, 0x74727044u);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v36);
      v36 = PoolWithTag;
      a10 = 0LL;
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&a10);
      if ( PoolWithTag )
      {
        v24 = a8;
        *PoolWithTag = Object;
        PoolWithTag[3] = v24;
        PoolWithTag[4] = a9;
        *((_DWORD *)PoolWithTag + 12) = 1;
        v26 = ObReferenceObjectByPointer(Object, 0x10000000u, (POBJECT_TYPE)IoFileObjectType, 0);
        if ( v26 >= 0 )
        {
          Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
          v30 = Irp;
          if ( Irp )
          {
            CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
            v33 = a6;
            if ( !v16 )
              v33 = 0LL;
            CurrentStackLocation[-1].MajorFunction = 14;
            CurrentStackLocation[-1].Parameters.Read.Length = v16;
            CurrentStackLocation[-1].Parameters.Create.Options = v15;
            CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2296832;
            v30->UserBuffer = v33;
            PoolWithTag[5] = v33;
            if ( (_DWORD)v15 || v16 )
            {
              v30->AssociatedIrp.MasterIrp = (struct _IRP *)(PoolWithTag + 7);
              if ( (_DWORD)v15 )
                memmove(PoolWithTag + 7, a4, v15);
            }
            CurrentStackLocation[-1].FileObject = Object;
            v34 = v30->Tail.Overlay.CurrentStackLocation;
            v36 = 0LL;
            v34[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiIndirectIoCompleteRoutine;
            v34[-1].Context = PoolWithTag;
            v34[-1].Control = -32;
            v14 = IofCallDriver(DeviceObject, v30);
          }
          else
          {
            v31 = WdLogNewEntry5_WdLowResource(v29);
            v14 = -1073741801;
            *(_QWORD *)(v31 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v31);
            ObfDereferenceObject(Object);
          }
        }
        else
        {
          v27 = WdLogNewEntry5_WdError(v25);
          WdLogEvent5_WdError(v27);
          v14 = v26;
        }
      }
      else
      {
        v23 = WdLogNewEntry5_WdLowResource(v22);
        v14 = -1073741801;
        *(_QWORD *)(v23 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v23);
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v20 + 24) = v14;
      WdLogEvent5_WdError(v20);
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(0LL, DeviceObject, a3);
    *(_QWORD *)(v13 + 24) = DeviceObject;
    WdLogEvent5_WdWarning(v13);
    v14 = -1073741130;
  }
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v36);
  return (unsigned int)v14;
}
