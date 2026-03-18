/*
 * XREFs of IopXxxControlFile @ 0x1404AD980
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1404401F8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140440598 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchEntireDirectory @ 0x140441FDC (PfpPrefetchEntireDirectory.c)
 *     PfSnPrefetchFileMetadata @ 0x140443904 (PfSnPrefetchFileMetadata.c)
 *     NtDeviceIoControlFile @ 0x1404AD910 (NtDeviceIoControlFile.c)
 *     NtFsControlFile @ 0x14056F410 (NtFsControlFile.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     IoThreadToProcess @ 0x14006A740 (IoThreadToProcess.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x1400759E0 (IoSetIoCompletionEx2.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     IoGetAttachedDevice @ 0x1400855C0 (IoGetAttachedDevice.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     IopIsProcessAppContainer @ 0x14012BDD8 (IopIsProcessAppContainer.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MmUpdateMdlTracker @ 0x1402165C0 (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContextEx @ 0x1404C5AF0 (SeCaptureSubjectContextEx.c)
 *     RtlIsSandboxedToken @ 0x1404C69F0 (RtlIsSandboxedToken.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopCopyOffloadCapable @ 0x14059E01C (IopCopyOffloadCapable.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     IopValidateJunctionTarget @ 0x1406B68DC (IopValidateJunctionTarget.c)
 *     ExRaiseAccessViolation @ 0x14075EBA0 (ExRaiseAccessViolation.c)
 *     VfFastIoCheckState @ 0x1407A9C74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407A9D54 (VfFastIoSnapState.c)
 */

__int64 IopXxxControlFile(
        HANDLE Handle,
        void *a2,
        LARGE_INTEGER a3,
        __int64 a4,
        struct _IO_STATUS_BLOCK *a5,
        unsigned int a6,
        char *Src,
        ...)
{
  void *v8; // rsi
  int v10; // r12d
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v12; // rcx
  ULONG v13; // eax
  NTSTATUS v14; // ebx
  char *v15; // rdi
  _DWORD *v16; // rax
  PIRP v17; // rbx
  unsigned __int64 v18; // rax
  __int16 v19; // cx
  struct _IO_STATUS_BLOCK *Status; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  unsigned __int64 v22; // rdx
  struct _DEVICE_OBJECT *v23; // r13
  unsigned __int64 FastIoDispatch; // rcx
  char *v25; // r8
  ULONG v26; // ebx
  char v27; // bl
  IRP *v28; // rax
  IRP *v29; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v31; // dl
  ULONG v32; // r11d
  ULONG v33; // r9d
  POOL_TYPE v34; // r10d
  struct _IRP *PoolWithQuotaTag; // rax
  struct _KTHREAD *Mdl; // rax
  char v37; // cl
  struct _KTHREAD *CurrentThread; // rax
  int v40; // r9d
  __int64 *v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rsi
  ULONG v44; // eax
  struct _IRP *PoolWithTagPriority; // rax
  int v46; // ecx
  PVOID v47; // rdi
  unsigned int v48; // r13d
  bool IsProcessAppContainer; // al
  struct _KPROCESS *v50; // rax
  char IsSandboxedToken; // [rsp+50h] [rbp-D8h]
  ULONG NumberOfBytes; // [rsp+54h] [rbp-D4h]
  ULONG NumberOfBytes_4; // [rsp+58h] [rbp-D0h]
  char v54; // [rsp+5Ch] [rbp-CCh]
  PVOID Object; // [rsp+60h] [rbp-C8h] BYREF
  KPROCESSOR_MODE v56; // [rsp+68h] [rbp-C0h]
  char v57; // [rsp+69h] [rbp-BFh]
  char v58; // [rsp+6Bh] [rbp-BDh]
  PVOID v59; // [rsp+70h] [rbp-B8h]
  __int128 v60; // [rsp+78h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-A0h]
  int v62; // [rsp+90h] [rbp-98h]
  PVOID P; // [rsp+98h] [rbp-90h]
  PETHREAD Thread; // [rsp+A0h] [rbp-88h]
  PIRP Irp; // [rsp+A8h] [rbp-80h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B0h] [rbp-78h] BYREF
  PVOID v67[3]; // [rsp+B8h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-58h] BYREF
  char v72; // [rsp+158h] [rbp+30h]
  __int64 v73; // [rsp+168h] [rbp+40h] BYREF
  va_list va; // [rsp+168h] [rbp+40h]
  char *Address; // [rsp+170h] [rbp+48h]
  SIZE_T Length; // [rsp+178h] [rbp+50h]
  __int64 v77; // [rsp+180h] [rbp+58h]
  va_list va1; // [rsp+188h] [rbp+60h] BYREF

  va_start(va1, Src);
  va_start(va, Src);
  v73 = va_arg(va1, _QWORD);
  Address = va_arg(va1, char *);
  Length = va_arg(va1, _QWORD);
  v77 = va_arg(va1, _QWORD);
  v8 = 0LL;
  v59 = 0LL;
  v10 = a6 & 3;
  LODWORD(BugCheckParameter2) = v10;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  v56 = PreviousMode;
  if ( !PreviousMode )
  {
    NumberOfBytes_4 = Length;
    NumberOfBytes = v73;
    goto LABEL_19;
  }
  v12 = (__int64)a5;
  if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
    v12 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  if ( (a6 & 3) != 0 )
  {
    v13 = Length;
LABEL_6:
    NumberOfBytes_4 = v13;
    goto LABEL_7;
  }
  if ( !Address )
  {
    v13 = 0;
    LODWORD(Length) = 0;
    goto LABEL_6;
  }
  NumberOfBytes_4 = Length;
  ProbeForWrite(Address, (unsigned int)Length, 1u);
LABEL_7:
  if ( v10 == 3 )
  {
    NumberOfBytes = v73;
  }
  else if ( Src )
  {
    NumberOfBytes = v73;
    if ( (_DWORD)v73 && ((unsigned __int64)&Src[(unsigned int)v73] > 0x7FFFFFFF0000LL || &Src[(unsigned int)v73] < Src) )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  else
  {
    NumberOfBytes = 0;
    LODWORD(v73) = 0;
  }
LABEL_19:
  v14 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, &HandleInformation);
  v15 = (char *)Object;
  if ( v14 >= 0 )
  {
    v16 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v16 )
    {
      if ( (*v16 & 4) != 0 )
      {
        IsProcessAppContainer = IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v15 = (char *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          v14 = -1073739504;
        }
        NumberOfBytes_4 = Length;
        NumberOfBytes = v73;
      }
    }
  }
  if ( v14 < 0 )
    return (unsigned int)v14;
  if ( *((_QWORD *)v15 + 22) && (a3.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v15);
    return 3221225485LL;
  }
  if ( PreviousMode
    && (unsigned __int16)a6 >> 14
    && (((unsigned __int16)a6 >> 14) & HandleInformation.GrantedAccess) != (unsigned __int16)a6 >> 14 )
  {
    ObfDereferenceObject(v15);
    return 3221225506LL;
  }
  if ( a6 == 623208 || a6 == 606820 )
  {
    v14 = IopCopyOffloadCapable(v15, a6);
    if ( v14 < 0 )
    {
LABEL_172:
      ObfDereferenceObject(v15);
      return (unsigned int)v14;
    }
  }
  if ( a2 )
  {
    v14 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, v67, 0LL);
    v59 = v67[0];
    if ( v14 < 0 )
      goto LABEL_172;
    KeResetEvent((PRKEVENT)v67[0]);
  }
  P = 0LL;
  IsSandboxedToken = 0;
  v54 = 0;
  if ( PreviousMode )
  {
    if ( a6 == 589988 && NumberOfBytes >= 4 )
    {
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      v50 = IoThreadToProcess(Thread);
      SeCaptureSubjectContextEx(Thread, v50, &SubjectContext);
      IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
      v57 = IsSandboxedToken;
      SeReleaseSubjectContext(&SubjectContext);
      if ( IsSandboxedToken )
      {
        v62 = 0;
        v62 = *(_DWORD *)Src;
        if ( v62 == -1610612733 )
        {
          v54 = 1;
          v14 = IopValidateJunctionTarget(Src, NumberOfBytes, (__int64)va);
          NumberOfBytes = v73;
        }
        if ( v14 < 0 )
        {
          if ( v59 )
            ObfDereferenceObject(v59);
          goto LABEL_172;
        }
      }
    }
  }
  v17 = (PIRP)(v15 + 80);
  Irp = (PIRP)(v15 + 80);
  if ( (*((_DWORD *)v15 + 20) & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      KeLeaveCriticalRegion();
      v15 = (char *)Object;
      v48 = IopAcquireFileObjectLock(Object);
      if ( v58 )
      {
        if ( v59 )
          ObfDereferenceObject(v59);
        if ( P )
          ExFreePoolWithTag(P, 0);
        ObfDereferenceObject(v15);
        return v48;
      }
    }
    else
    {
      v15 = (char *)Object;
      ObfReferenceObject(Object);
    }
    v72 = 1;
    NumberOfBytes_4 = Length;
    NumberOfBytes = v73;
  }
  else
  {
    v72 = 0;
    if ( PreviousMode )
    {
      v18 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v18 )
      {
        v19 = *(_WORD *)(v18 + 8);
        if ( v19 == 332 || v19 == 452 )
        {
          a3.QuadPart |= 1uLL;
          Status = (struct _IO_STATUS_BLOCK *)(unsigned int)a5->Status;
          a5 = Status;
          Status->Status = Status->Status;
        }
      }
      NumberOfBytes_4 = Length;
      NumberOfBytes = v73;
      v15 = (char *)Object;
    }
  }
  if ( (*(_DWORD *)&v17->Type & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v15 + 1));
  else
    AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)v15);
  v23 = AttachedDevice;
  if ( (_BYTE)v77 )
  {
    if ( !IsSandboxedToken )
    {
      FastIoDispatch = (unsigned __int64)AttachedDevice->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        BugCheckParameter2 = *(_QWORD *)(FastIoDispatch + 80);
        if ( BugCheckParameter2 )
        {
          v25 = Address;
          if ( PreviousMode && Address )
          {
            if ( v10 == 1 )
            {
              if ( NumberOfBytes_4 )
              {
                FastIoDispatch = (unsigned __int64)&Address[NumberOfBytes_4];
                if ( FastIoDispatch > 0x7FFFFFFF0000LL || FastIoDispatch < (unsigned __int64)Address )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
            }
            else if ( v10 == 2 && NumberOfBytes_4 )
            {
              FastIoDispatch = (unsigned __int64)Address;
              v22 = (unsigned __int64)&Address[NumberOfBytes_4 - 1];
              if ( (unsigned __int64)Address > v22 || v22 >= 0x7FFFFFFF0000LL )
              {
                FastIoDispatch = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
                if ( (*(_BYTE *)(FastIoDispatch + 720) & 1) == 0 )
                  ExRaiseAccessViolation();
                NumberOfBytes_4 = Length;
                NumberOfBytes = v73;
                v15 = (char *)Object;
              }
              else
              {
                v22 = (v22 & 0xFFFFFFFFFFFFF000uLL) + 4096;
                do
                {
                  *(_BYTE *)FastIoDispatch = *(_BYTE *)FastIoDispatch;
                  FastIoDispatch = (FastIoDispatch & 0xFFFFFFFFFFFFF000uLL) + 4096;
                }
                while ( FastIoDispatch != v22 );
                NumberOfBytes_4 = Length;
                NumberOfBytes = v73;
                v15 = (char *)Object;
              }
            }
          }
          if ( a6 == 589856 )
          {
            _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
            v26 = Length;
            NumberOfBytes_4 = Length;
            NumberOfBytes = v73;
            v15 = (char *)Object;
          }
          else
          {
            v26 = NumberOfBytes_4;
          }
          v60 = 0uLL;
          if ( (MmVerifierData & 0x10) != 0 )
          {
            v8 = (void *)VfFastIoSnapState(FastIoDispatch, v22, v25);
            v25 = Address;
          }
          LOBYTE(v22) = 1;
          v27 = ((__int64 (__fastcall *)(char *, unsigned __int64, char *, _QWORD, char *, ULONG, unsigned int, __int128 *, struct _DEVICE_OBJECT *))BugCheckParameter2)(
                  v15,
                  v22,
                  Src,
                  NumberOfBytes,
                  v25,
                  v26,
                  a6,
                  &v60,
                  v23);
          if ( v8 )
            VfFastIoCheckState(v8, BugCheckParameter2);
          if ( v27 )
          {
            if ( (a3.LowPart & 1) != 0 )
            {
              HIDWORD(a5->Pointer) = DWORD2(v60);
              a5->Status = v60;
            }
            else
            {
              *(_OWORD *)&a5->Status = v60;
            }
            v40 = v60;
            v41 = (__int64 *)*((_QWORD *)v15 + 22);
            if ( !v41
              || (*((_DWORD *)v15 + 20) & 0x2000000) != 0 && (v60 & 0xC0000000) != 0x80000000
              || (v60 & 0xC0000000) == 0xC0000000 )
            {
              v42 = 0LL;
              v43 = 0LL;
            }
            else
            {
              v42 = *v41;
              v43 = v41[1];
            }
            if ( a2 )
            {
              if ( (*((_DWORD *)v15 + 20) & 0x8000000) == 0 || v42 && (v60 & 0xC0000000) == 0x80000000 )
                KeSetEvent((PRKEVENT)v59, 0, 0);
              ObfDereferenceObject(v59);
              v40 = v60;
            }
            if ( v72 )
            {
              _InterlockedExchange((volatile __int32 *)v15 + 29, 0);
              v47 = Object;
              if ( *((_DWORD *)Object + 28) )
                KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
              ObfDereferenceObject(v47);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v40 = v60;
              v15 = (char *)Object;
            }
            if ( v42 && a4 )
            {
              if ( (int)IoSetIoCompletionEx2(v42, v43, a4, v40, *((__int64 *)&v60 + 1), 1u, 0LL, 0) < 0 )
              {
                v46 = -1073741670;
                LODWORD(v60) = -1073741670;
              }
              else
              {
                v46 = v60;
              }
              if ( (v46 & 0xC0000000) == 0x80000000 )
                LODWORD(v60) = 259;
            }
            ObfDereferenceObject(v15);
            return (unsigned int)v60;
          }
          v17 = Irp;
        }
      }
    }
  }
  if ( (*(_DWORD *)&v17->Type & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)(v15 + 152));
  v28 = (IRP *)IopAllocateIrpExReturn();
  v29 = v28;
  Irp = v28;
  if ( v28 )
  {
    v28->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v15;
    v28->Tail.Overlay.Thread = Thread;
    v28->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v28->RequestorMode = PreviousMode;
    v28->PendingReturned = 0;
    v28->Cancel = 0;
    v28->CancelRoutine = 0LL;
    v28->UserEvent = (PKEVENT)v59;
    v28->UserIosb = a5;
    v28->Overlay.AllocationSize = a3;
    v28->Overlay.AsynchronousParameters.UserApcContext = (PVOID)a4;
    CurrentStackLocation = v28->Tail.Overlay.CurrentStackLocation;
    v31 = v77;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = ((_BYTE)v77 != 0) + 13;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v15;
    v32 = NumberOfBytes_4;
    CurrentStackLocation[-1].Parameters.Read.Length = NumberOfBytes_4;
    v33 = NumberOfBytes;
    CurrentStackLocation[-1].Parameters.Create.Options = NumberOfBytes;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a6;
    v34 = NonPagedPoolNxCacheAligned;
    if ( !v31 )
      v34 = NonPagedPoolNx;
    v28->MdlAddress = 0LL;
    v28->AssociatedIrp.MasterIrp = 0LL;
    if ( (v23->Flags & 0x80000) == 0 || IsSandboxedToken )
    {
      if ( v10 == 2 )
        goto LABEL_60;
    }
    else
    {
      v10 = 3;
    }
    if ( !v10 )
    {
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( NumberOfBytes || NumberOfBytes_4 )
      {
        if ( P )
        {
          v28->AssociatedIrp.MasterIrp = (struct _IRP *)P;
        }
        else
        {
          if ( NumberOfBytes > NumberOfBytes_4 )
            v44 = NumberOfBytes;
          else
            v44 = NumberOfBytes_4;
          if ( ViVerifierDriverAddedThunkListHead )
          {
            PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                                   v34,
                                                   v44,
                                                   0x20206F49u,
                                                   (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
            if ( !PoolWithTagPriority )
              RtlRaiseStatus(-1073741670);
          }
          else
          {
            PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithQuotaTag(v34, v44, 0x20206F49u);
          }
          v67[1] = PoolWithTagPriority;
          v29->AssociatedIrp.MasterIrp = PoolWithTagPriority;
          if ( Src )
            memmove(PoolWithTagPriority, Src, NumberOfBytes);
          v33 = NumberOfBytes;
          v32 = NumberOfBytes_4;
        }
        v29->Flags = 48;
        v29->UserBuffer = Address;
        if ( v32 )
          v29->Flags = 112;
      }
      else
      {
        v28->Flags = 0;
        v28->UserBuffer = 0LL;
      }
      if ( v33 < v32 && !IopDisableBufferedIoInit )
        memset((char *)v29->AssociatedIrp.MasterIrp + v33, 0, v32 - v33);
      goto LABEL_73;
    }
    if ( v10 != 1 )
    {
      if ( v10 == 3 )
      {
        v28->Flags = 0;
        v28->UserBuffer = Address;
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
      }
LABEL_73:
      CurrentStackLocation[-1].Flags |= HandleInformation.GrantedAccess & 1 | (unsigned __int8)(2
                                                                                              * (HandleInformation.GrantedAccess & 2));
      v37 = v77;
      if ( !(_BYTE)v77 )
        v29->Flags |= 0x800u;
      if ( a6 == 589856 )
      {
        _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
        v15 = (char *)Object;
      }
      if ( !IsSandboxedToken || v54 || *(_DWORD *)v29->AssociatedIrp.MasterIrp != -1610612733 )
        return IopSynchronousServiceTail(v23, v29, (__int64)v15, v37 == 0, PreviousMode, v72, 2u);
      IopExceptionCleanup(v15, v29, v59, 0LL);
      return 3221225485LL;
    }
LABEL_60:
    v28->Flags = 0;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    if ( NumberOfBytes && Src )
    {
      if ( ViVerifierDriverAddedThunkListHead )
      {
        PoolWithQuotaTag = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                            v34,
                                            NumberOfBytes,
                                            0x20206F49u,
                                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        if ( !PoolWithQuotaTag )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        PoolWithQuotaTag = (struct _IRP *)ExAllocatePoolWithQuotaTag(v34, NumberOfBytes, 0x20206F49u);
      }
      v67[2] = PoolWithQuotaTag;
      v29->AssociatedIrp.MasterIrp = PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, Src, NumberOfBytes);
      v29->Flags = 48;
      v32 = NumberOfBytes_4;
    }
    if ( v32 )
    {
      Mdl = (struct _KTHREAD *)IoAllocateMdl(Address, v32, 0, 1u, v29);
      Thread = Mdl;
      v29->MdlAddress = (PMDL)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      LODWORD(BugCheckParameter2) = *(_DWORD *)&CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockPages((PMDL)Mdl, PreviousMode, (LOCK_OPERATION)(v10 != 1));
      if ( (MmTrackLockedPages & 1) != 0 )
        MmUpdateMdlTracker(
          (unsigned __int64)Thread,
          (__int64)v23->DriverObject->MajorFunction[(unsigned int)BugCheckParameter2],
          (__int64)v23);
    }
    goto LABEL_73;
  }
  IopAllocateIrpCleanup(v15, v59);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 3221225626LL;
}
