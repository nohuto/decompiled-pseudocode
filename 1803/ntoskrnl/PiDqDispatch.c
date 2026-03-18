/*
 * XREFs of PiDqDispatch @ 0x14050B510
 * Callers:
 *     PiDaDispatch @ 0x14050A3B0 (PiDaDispatch.c)
 * Callees:
 *     IoIs32bitProcess @ 0x14006E540 (IoIs32bitProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x1400FA080 (IofCompleteRequest.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     wcscmp @ 0x14018A5F0 (wcscmp.c)
 *     PiDqIrpQueryCreate @ 0x140523298 (PiDqIrpQueryCreate.c)
 *     PiDqIrpQueryGetResult @ 0x140523AD4 (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140573384 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqQueryRelease @ 0x1405733F8 (PiDqQueryRelease.c)
 *     PiDqQueryCreate @ 0x140575044 (PiDqQueryCreate.c)
 *     PiDqQueryGetObjectManager @ 0x140579388 (PiDqQueryGetObjectManager.c)
 *     PiDqIrpPropertySet @ 0x1405C24A0 (PiDqIrpPropertySet.c)
 */

__int64 __fastcall PiDqDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int Status; // ebx
  PFILE_OBJECT FileObject; // rcx
  UCHAR MajorFunction; // al
  PVOID *p_FsContext2; // r15
  IRP **FsContext2; // rsi
  unsigned int LowPart; // eax
  const wchar_t *Buffer; // rsi
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  IRP *v15; // rbx
  __int64 ObjectManager; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  IRP *v22; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  FileObject = CurrentStackLocation->FileObject;
  MajorFunction = CurrentStackLocation->MajorFunction;
  p_FsContext2 = &FileObject->FsContext2;
  FsContext2 = (IRP **)FileObject->FsContext2;
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
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(FsContext2 + 8), 0LL);
          if ( ((_DWORD)FsContext2[27] & 4) != 0 )
            ObjectManager = PiDqQueryGetObjectManager(FsContext2);
          ExReleasePushLockEx((ULONG_PTR)(FsContext2 + 8), 0LL, v17, v18);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( ObjectManager )
            PiDqObjectManagerUnregisterQuery(ObjectManager, FsContext2);
          v19 = KeGetCurrentThread();
          --v19->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)(FsContext2 + 8), 0LL);
          v22 = FsContext2[22];
          *((_DWORD *)FsContext2 + 54) |= 8u;
          if ( v22 && _InterlockedExchange64((volatile __int64 *)&v22->CancelRoutine, 0LL) )
          {
            v15 = FsContext2[22];
            FsContext2[22] = 0LL;
          }
          ExReleasePushLockEx((ULONG_PTR)(FsContext2 + 8), 0LL, v20, v21);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
        return (unsigned int)PiDqIrpQueryGetResult(a2);
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
