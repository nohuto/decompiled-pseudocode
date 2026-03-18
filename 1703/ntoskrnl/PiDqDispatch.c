/*
 * XREFs of PiDqDispatch @ 0x1404B9020
 * Callers:
 *     PiDaDispatch @ 0x14048AD10 (PiDaDispatch.c)
 * Callees:
 *     IoIs32bitProcess @ 0x14004D440 (IoIs32bitProcess.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     wcscmp @ 0x14016BB70 (wcscmp.c)
 *     PiDqIrpQueryGetResult @ 0x1404B80E4 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1404B8CD4 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqQueryRelease @ 0x1404B8DE0 (PiDqQueryRelease.c)
 *     PiDqQueryGetObjectManager @ 0x1404B8F70 (PiDqQueryGetObjectManager.c)
 *     PiDqQueryCreate @ 0x1404B9250 (PiDqQueryCreate.c)
 *     PiDqIrpQueryCreate @ 0x1404B9328 (PiDqIrpQueryCreate.c)
 *     PiDqIrpPropertySet @ 0x1405959E0 (PiDqIrpPropertySet.c)
 */

__int64 __fastcall PiDqDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int Status; // ebx
  PFILE_OBJECT FileObject; // rcx
  UCHAR MajorFunction; // al
  PVOID *p_FsContext2; // r15
  __int64 FsContext2; // rsi
  unsigned int LowPart; // eax
  const wchar_t *Buffer; // rsi
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  IRP *v15; // rbx
  struct _ERESOURCE *ObjectManager; // rbp
  struct _KTHREAD *v17; // rax
  __int64 v18; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  FileObject = CurrentStackLocation->FileObject;
  MajorFunction = CurrentStackLocation->MajorFunction;
  p_FsContext2 = &FileObject->FsContext2;
  FsContext2 = (__int64)FileObject->FsContext2;
  if ( CurrentStackLocation->MajorFunction )
  {
    if ( MajorFunction != 14 )
    {
      if ( MajorFunction == 2 )
      {
        if ( FsContext2 )
        {
          PiDqQueryRelease(FileObject->FsContext2);
          CurrentStackLocation->FileObject->FsContext2 = 0LL;
        }
      }
      else
      {
        if ( MajorFunction != 18 )
          return Status;
        if ( FsContext2 )
        {
          CurrentThread = KeGetCurrentThread();
          v15 = 0LL;
          ObjectManager = 0LL;
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(FsContext2 + 64, 0LL);
          if ( (*(_DWORD *)(FsContext2 + 216) & 4) != 0 )
            ObjectManager = PiDqQueryGetObjectManager(FsContext2);
          ExReleasePushLockEx(FsContext2 + 64, 0LL);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( ObjectManager )
            PiDqObjectManagerUnregisterQuery((__int64)ObjectManager, (__int64 *)FsContext2);
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(FsContext2 + 64, 0LL);
          v18 = *(_QWORD *)(FsContext2 + 176);
          *(_DWORD *)(FsContext2 + 216) |= 8u;
          if ( v18 && _InterlockedExchange64((volatile __int64 *)(v18 + 104), 0LL) )
          {
            v15 = *(IRP **)(FsContext2 + 176);
            *(_QWORD *)(FsContext2 + 176) = 0LL;
          }
          ExReleasePushLockEx(FsContext2 + 64, 0LL);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( v15 )
          {
            v15->IoStatus.Information = 0LL;
            v15->IoStatus.Status = -1073741536;
            IofCompleteRequest(v15, 0);
          }
        }
      }
      Status = 0;
      a2->IoStatus.Status = 0;
      goto LABEL_7;
    }
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart == 4653056 )
      return (unsigned int)PiDqIrpQueryCreate(a2);
    if ( LowPart > 0x470006 )
    {
      if ( LowPart <= 0x470008 )
        return (unsigned int)PiDqIrpQueryGetResult((__int64)a2);
      if ( LowPart == 4653068 )
        return (unsigned int)PiDqIrpPropertySet(a2);
    }
    Status = -1073741637;
    a2->IoStatus.Status = -1073741637;
  }
  else
  {
    Buffer = FileObject->FileName.Buffer;
    Status = 0;
    if ( !wcscmp(L"\\Dev\\Query", Buffer) )
    {
      LOBYTE(v13) = IoIs32bitProcess(a2) == 0;
      Status = PiDqQueryCreate(v13, p_FsContext2);
    }
    else if ( !wcscmp(L"\\Dev\\NoState", Buffer) )
    {
      *p_FsContext2 = 0LL;
    }
    else
    {
      Status = -1073741811;
    }
    a2->IoStatus.Status = Status;
  }
LABEL_7:
  IofCompleteRequest(a2, 0);
  return Status;
}
