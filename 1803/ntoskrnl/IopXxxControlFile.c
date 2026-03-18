/*
 * XREFs of IopXxxControlFile @ 0x1405A1A20
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x140491BC8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140491FC0 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchEntireDirectory @ 0x1404A08D8 (PfpPrefetchEntireDirectory.c)
 *     NtFsControlFile @ 0x14055ED70 (NtFsControlFile.c)
 *     PfSnPrefetchFileMetadata @ 0x140575E74 (PfSnPrefetchFileMetadata.c)
 *     NtDeviceIoControlFile @ 0x14059FA40 (NtDeviceIoControlFile.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     IoThreadToProcess @ 0x140060570 (IoThreadToProcess.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IoSetIoCompletionEx2 @ 0x1400863C0 (IoSetIoCompletionEx2.c)
 *     ExAllocatePoolWithTagPriority @ 0x140086940 (ExAllocatePoolWithTagPriority.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400D05A8 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     IoGetAttachedDevice @ 0x140107050 (IoGetAttachedDevice.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MmUpdateMdlTracker @ 0x1402542A8 (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     RtlIsSandboxedToken @ 0x1404DD0B0 (RtlIsSandboxedToken.c)
 *     IopCopyOffloadCapable @ 0x140583A90 (IopCopyOffloadCapable.c)
 *     PsIsProcessAppContainer @ 0x14058A3A4 (PsIsProcessAppContainer.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     IopValidateJunctionTarget @ 0x14071B5BC (IopValidateJunctionTarget.c)
 *     ExRaiseAccessViolation @ 0x1407C5920 (ExRaiseAccessViolation.c)
 *     VfFastIoCheckState @ 0x140816D04 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140816DDC (VfFastIoSnapState.c)
 */

__int64 IopXxxControlFile(
        HANDLE Handle,
        void *a2,
        LARGE_INTEGER a3,
        __int64 a4,
        struct _IO_STATUS_BLOCK *a5,
        int a6,
        char *Src,
        ...)
{
  void *v8; // rsi
  int v10; // r12d
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v12; // rcx
  ULONG v13; // eax
  int v14; // ebx
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
  char v31; // cl
  ULONG v32; // r11d
  ULONG v33; // r9d
  POOL_TYPE v34; // r10d
  struct _IRP *PoolWithTagPriority; // rax
  struct _KTHREAD *Mdl; // rax
  char v37; // cl
  struct _KTHREAD *CurrentThread; // rax
  int v40; // r9d
  __int64 *v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rsi
  SIZE_T v44; // rdx
  struct _IRP *PoolWithQuota_1; // rax
  int v46; // ecx
  PVOID v47; // rdi
  unsigned int v48; // r13d
  bool IsProcessAppContainer; // al
  struct _KPROCESS *v50; // rax
  bool IsSandboxedToken; // [rsp+50h] [rbp-D8h]
  ULONG NumberOfBytes; // [rsp+54h] [rbp-D4h]
  ULONG NumberOfBytes_4; // [rsp+58h] [rbp-D0h]
  char v54; // [rsp+5Ch] [rbp-CCh]
  PVOID Object; // [rsp+60h] [rbp-C8h] BYREF
  KPROCESSOR_MODE v56; // [rsp+68h] [rbp-C0h]
  bool v57; // [rsp+69h] [rbp-BFh]
  char v58[5]; // [rsp+6Bh] [rbp-BDh] BYREF
  PVOID v59; // [rsp+70h] [rbp-B8h]
  __int128 v60; // [rsp+78h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-A0h]
  int v62; // [rsp+90h] [rbp-98h]
  PVOID P; // [rsp+98h] [rbp-90h]
  PETHREAD Thread; // [rsp+A0h] [rbp-88h]
  PIRP Irp; // [rsp+A8h] [rbp-80h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B0h] [rbp-78h] BYREF
  PVOID v67[2]; // [rsp+B8h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-60h] BYREF
  __int64 retaddr; // [rsp+128h] [rbp+0h]
  char v73; // [rsp+158h] [rbp+30h]
  __int64 v74; // [rsp+168h] [rbp+40h] BYREF
  va_list va; // [rsp+168h] [rbp+40h]
  char *Address; // [rsp+170h] [rbp+48h]
  SIZE_T Length; // [rsp+178h] [rbp+50h]
  __int64 v78; // [rsp+180h] [rbp+58h]
  va_list va1; // [rsp+188h] [rbp+60h] BYREF

  va_start(va1, Src);
  va_start(va, Src);
  v74 = va_arg(va1, _QWORD);
  Address = va_arg(va1, char *);
  Length = va_arg(va1, _QWORD);
  v78 = va_arg(va1, _QWORD);
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
    NumberOfBytes = v74;
    goto LABEL_18;
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
    NumberOfBytes = v74;
  }
  else if ( Src )
  {
    NumberOfBytes = v74;
    if ( (_DWORD)v74 && ((unsigned __int64)&Src[(unsigned int)v74] > 0x7FFFFFFF0000LL || &Src[(unsigned int)v74] < Src) )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  else
  {
    NumberOfBytes = 0;
    LODWORD(v74) = 0;
  }
LABEL_18:
  v14 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, &HandleInformation);
  v15 = (char *)Object;
  if ( v14 >= 0 )
  {
    v16 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v16 )
    {
      if ( (*v16 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v15 = (char *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          v14 = -1073739504;
        }
        NumberOfBytes_4 = Length;
        NumberOfBytes = v74;
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
  if ( a6 == 606820 || a6 == 623208 )
  {
    v14 = IopCopyOffloadCapable((struct _FILE_OBJECT *)v15, a6);
    if ( v14 < 0 )
    {
LABEL_164:
      ObfDereferenceObject(v15);
      return (unsigned int)v14;
    }
  }
  if ( a2 )
  {
    v14 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, v67, 0LL);
    v59 = v67[0];
    if ( v14 < 0 )
      goto LABEL_164;
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
      IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, PreviousMode);
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
          NumberOfBytes = v74;
        }
        if ( v14 < 0 )
        {
          if ( v59 )
            ObfDereferenceObject(v59);
          goto LABEL_164;
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
      v48 = IopAcquireFileObjectLock((char *)Object, PreviousMode, (*(_DWORD *)&v17->Type & 4) != 0, v58);
      if ( v58[0] )
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
    v73 = 1;
    NumberOfBytes_4 = Length;
    NumberOfBytes = v74;
  }
  else
  {
    v73 = 0;
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
      NumberOfBytes = v74;
      v15 = (char *)Object;
    }
  }
  if ( (*(_DWORD *)&v17->Type & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v15 + 1));
  else
    AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)v15);
  v23 = AttachedDevice;
  if ( (_BYTE)v78 )
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
                NumberOfBytes = v74;
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
                NumberOfBytes = v74;
                v15 = (char *)Object;
              }
            }
          }
          if ( a6 == 589856 )
          {
            _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
            v26 = Length;
            NumberOfBytes_4 = Length;
            NumberOfBytes = v74;
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
          v27 = ((__int64 (__fastcall *)(char *, unsigned __int64, char *, _QWORD, char *, ULONG, int, __int128 *, struct _DEVICE_OBJECT *))BugCheckParameter2)(
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
            if ( v73 )
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
  v28 = (IRP *)IopAllocateIrpExReturn((__int64)v23, (unsigned __int8)v23->StackSize, (unsigned __int8)v73 ^ 1u, retaddr);
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
    v31 = v78;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = ((_BYTE)v78 != 0) + 13;
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
        goto LABEL_59;
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
          v44 = NumberOfBytes_4;
          if ( NumberOfBytes > NumberOfBytes_4 )
            v44 = NumberOfBytes;
          PoolWithQuota_1 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(v34, v44);
          v29->AssociatedIrp.MasterIrp = PoolWithQuota_1;
          if ( Src )
            memmove(PoolWithQuota_1, Src, NumberOfBytes);
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
      goto LABEL_71;
    }
    if ( v10 != 1 )
    {
      if ( v10 == 3 )
      {
        v28->Flags = 0;
        v28->UserBuffer = Address;
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
      }
LABEL_71:
      CurrentStackLocation[-1].Flags |= HandleInformation.GrantedAccess & 1 | (unsigned __int8)(2
                                                                                              * (HandleInformation.GrantedAccess & 2));
      v37 = v78;
      if ( !(_BYTE)v78 )
        v29->Flags |= 0x800u;
      if ( a6 == 589856 )
      {
        _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
        v15 = (char *)Object;
      }
      if ( !IsSandboxedToken || v54 || *(_DWORD *)v29->AssociatedIrp.MasterIrp != -1610612733 )
        return IopSynchronousServiceTail(v23, v29, (__int64)v15, v37 == 0, PreviousMode, v73, 2u);
      IopExceptionCleanup(v15, v29, v59, 0LL);
      return 3221225485LL;
    }
LABEL_59:
    v28->Flags = 0;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    if ( NumberOfBytes && Src )
    {
      if ( ViVerifierDriverAddedThunkListHead )
      {
        PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                               v34,
                                               NumberOfBytes,
                                               0x20206F49u,
                                               (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
        if ( !PoolWithTagPriority )
          RtlRaiseStatus(-1073741670);
      }
      else
      {
        PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithQuotaTag(v34, NumberOfBytes, 0x20206F49u);
      }
      v67[1] = PoolWithTagPriority;
      v29->AssociatedIrp.MasterIrp = PoolWithTagPriority;
      memmove(PoolWithTagPriority, Src, NumberOfBytes);
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
    goto LABEL_71;
  }
  IopAllocateIrpCleanup(v15, v59);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 3221225626LL;
}
