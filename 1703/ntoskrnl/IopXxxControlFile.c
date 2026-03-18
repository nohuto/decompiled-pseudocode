/*
 * XREFs of IopXxxControlFile @ 0x14052BAD0
 * Callers:
 *     NtFsControlFile @ 0x14043CC70 (NtFsControlFile.c)
 *     PfpVolumePrefetchMetadata @ 0x140463A54 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140463E10 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchEntireDirectory @ 0x140465B88 (PfpPrefetchEntireDirectory.c)
 *     PfSnPrefetchFileMetadata @ 0x140465D90 (PfSnPrefetchFileMetadata.c)
 *     NtDeviceIoControlFile @ 0x140527FB0 (NtDeviceIoControlFile.c)
 * Callees:
 *     IopIsProcessAppContainer @ 0x140005C2C (IopIsProcessAppContainer.c)
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     IoThreadToProcess @ 0x14002FAA0 (IoThreadToProcess.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140033E50 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IoGetAttachedDevice @ 0x1400815B0 (IoGetAttachedDevice.c)
 *     MmProbeAndLockPages @ 0x1400B3C30 (MmProbeAndLockPages.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     IoSetIoCompletionEx2 @ 0x1400E2780 (IoSetIoCompletionEx2.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MmUpdateMdlTracker @ 0x14020ECE8 (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopCopyOffloadCapable @ 0x14045D540 (IopCopyOffloadCapable.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 *     IopValidateJunctionTarget @ 0x14068AC90 (IopValidateJunctionTarget.c)
 *     ExRaiseAccessViolation @ 0x14071ED40 (ExRaiseAccessViolation.c)
 *     VfFastIoCheckState @ 0x14076804C (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140768104 (VfFastIoSnapState.c)
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
  LOCK_OPERATION v8; // r15d
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v10; // rcx
  ULONG v11; // r14d
  SIZE_T v12; // rsi
  int v13; // edi
  char *v14; // rbx
  _DWORD *v15; // rax
  bool IsProcessAppContainer; // al
  KPROCESSOR_MODE v17; // dl
  struct _KPROCESS *v19; // rax
  int v20; // ecx
  PIRP v21; // rdi
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v23; // r12
  unsigned int v24; // edi
  unsigned __int64 v25; // rax
  __int16 v26; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  bool v32; // zf
  char *v33; // r12
  char *v34; // rcx
  unsigned __int64 v35; // rcx
  void *v36; // rdi
  char v37; // r12
  int v38; // r9d
  __int64 *v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  PVOID v42; // rbx
  int v43; // eax
  int v44; // ecx
  IRP *v45; // rax
  IRP *v46; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  char v48; // dl
  POOL_TYPE v49; // ecx
  struct _IRP *PoolWithTagPriority; // rax
  struct _MDL *Mdl; // rax
  unsigned __int64 v52; // rsi
  __int64 v53; // r14
  SIZE_T v54; // rdx
  struct _IRP *PoolWithQuota_1; // rax
  char GrantedAccess; // cl
  KPROCESSOR_MODE v57; // [rsp+50h] [rbp-E8h]
  char v58; // [rsp+51h] [rbp-E7h]
  bool IsSandboxedToken; // [rsp+52h] [rbp-E6h]
  char v60; // [rsp+53h] [rbp-E5h]
  PVOID Object; // [rsp+58h] [rbp-E0h] BYREF
  bool v62; // [rsp+60h] [rbp-D8h]
  char v63; // [rsp+62h] [rbp-D6h]
  char v64; // [rsp+63h] [rbp-D5h]
  PVOID v65; // [rsp+68h] [rbp-D0h]
  unsigned int v66; // [rsp+70h] [rbp-C8h]
  __int128 v67; // [rsp+78h] [rbp-C0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-B0h]
  int v69; // [rsp+90h] [rbp-A8h]
  PVOID P; // [rsp+98h] [rbp-A0h]
  PIRP Irp; // [rsp+A0h] [rbp-98h]
  PETHREAD Thread; // [rsp+A8h] [rbp-90h]
  __int64 (__fastcall *FastIoDeviceControl)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD); // [rsp+B0h] [rbp-88h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B8h] [rbp-80h] BYREF
  LOCK_OPERATION v75; // [rsp+C0h] [rbp-78h]
  PVOID v76[2]; // [rsp+C8h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-60h] BYREF
  PVOID v78; // [rsp+F8h] [rbp-40h]
  __int64 retaddr; // [rsp+138h] [rbp+0h]
  SIZE_T NumberOfBytes; // [rsp+178h] [rbp+40h] BYREF
  va_list NumberOfBytesa; // [rsp+178h] [rbp+40h]
  char *Address; // [rsp+180h] [rbp+48h]
  __int64 Length; // [rsp+188h] [rbp+50h]
  __int64 v87; // [rsp+190h] [rbp+58h]
  va_list va1; // [rsp+198h] [rbp+60h] BYREF

  va_start(va1, Src);
  va_start(NumberOfBytesa, Src);
  NumberOfBytes = va_arg(va1, _QWORD);
  Address = va_arg(va1, char *);
  Length = va_arg(va1, _QWORD);
  v87 = va_arg(va1, _QWORD);
  v8 = IoReadAccess;
  v65 = 0LL;
  v66 = a6 & 3;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  v57 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a5;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( (a6 & 3) != 0 )
    {
      v11 = Length;
    }
    else if ( Address )
    {
      v11 = Length;
      ProbeForWrite(Address, (unsigned int)Length, 1u);
      PreviousMode = v57;
    }
    else
    {
      v11 = 0;
      LODWORD(Length) = 0;
    }
    if ( (a6 & 3) == 3 )
    {
      v12 = (unsigned int)NumberOfBytes;
    }
    else if ( Src )
    {
      v12 = (unsigned int)NumberOfBytes;
      if ( (_DWORD)NumberOfBytes
        && ((unsigned __int64)&Src[(unsigned int)NumberOfBytes] > 0x7FFFFFFF0000LL
         || &Src[(unsigned int)NumberOfBytes] < Src) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      v12 = 0LL;
      LODWORD(NumberOfBytes) = 0;
    }
  }
  else
  {
    v11 = Length;
    v12 = (unsigned int)NumberOfBytes;
  }
  v13 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, &HandleInformation);
  v14 = (char *)Object;
  v78 = Object;
  if ( v13 >= 0 )
  {
    v15 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v15 )
    {
      if ( (*v15 & 4) != 0 )
      {
        IsProcessAppContainer = IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v14 = (char *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          v13 = -1073739504;
        }
        v12 = (unsigned int)NumberOfBytes;
        v11 = Length;
      }
    }
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( *((_QWORD *)v14 + 22) && (a3.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v14);
    return 3221225485LL;
  }
  v17 = v57;
  if ( v57
    && (unsigned __int16)a6 >> 14
    && (((unsigned __int16)a6 >> 14) & HandleInformation.GrantedAccess) != (unsigned __int16)a6 >> 14 )
  {
    ObfDereferenceObject(v14);
    return 3221225506LL;
  }
  if ( a6 == 606820 || a6 == 623208 )
  {
    v13 = IopCopyOffloadCapable((struct _FILE_OBJECT *)v14, a6);
    if ( v13 < 0 )
      goto LABEL_50;
    v17 = v57;
  }
  if ( !a2 )
    goto LABEL_40;
  v13 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v17, v76, 0LL);
  v65 = v76[0];
  if ( v13 < 0 )
  {
LABEL_50:
    ObfDereferenceObject(v14);
    return (unsigned int)v13;
  }
  KeResetEvent((PRKEVENT)v76[0]);
LABEL_40:
  P = 0LL;
  IsSandboxedToken = 0;
  v60 = 0;
  if ( v57 )
  {
    if ( a6 == 589988 && (unsigned int)v12 >= 4 )
    {
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      v19 = IoThreadToProcess(Thread);
      SeCaptureSubjectContextEx(Thread, v19, &SubjectContext);
      IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, v57);
      v62 = IsSandboxedToken;
      SeReleaseSubjectContext(&SubjectContext);
      if ( IsSandboxedToken )
      {
        v69 = 0;
        v20 = *(_DWORD *)Src;
        v69 = *(_DWORD *)Src;
        if ( v20 == -1610612733 )
        {
          v60 = 1;
          v13 = IopValidateJunctionTarget(Src, v12, (__int64)NumberOfBytesa);
          v12 = (unsigned int)NumberOfBytes;
        }
        if ( v13 < 0 )
        {
          if ( v65 )
            ObfDereferenceObject(v65);
          goto LABEL_50;
        }
      }
    }
  }
  v21 = (PIRP)(v14 + 80);
  Irp = (PIRP)(v14 + 80);
  if ( (*((_DWORD *)v14 + 20) & 2) == 0 )
  {
    v58 = 0;
    v23 = v57;
    if ( v57 )
    {
      v25 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v25 && ((v26 = *(_WORD *)(v25 + 8), v26 == 332) || v26 == 452) )
      {
        v64 = 1;
        a3.QuadPart |= 1uLL;
        Status = (struct _IO_STATUS_BLOCK *)(unsigned int)a5->Status;
        a5 = Status;
        Status->Status = Status->Status;
      }
      else
      {
        v64 = 0;
      }
      v11 = Length;
      v12 = (unsigned int)NumberOfBytes;
      v14 = (char *)Object;
    }
    goto LABEL_70;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    v14 = (char *)Object;
    ObfReferenceObject(Object);
    v23 = v57;
LABEL_62:
    v58 = 1;
    v11 = Length;
    v12 = (unsigned int)NumberOfBytes;
LABEL_70:
    if ( (*(_DWORD *)&v21->Type & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v14 + 1));
    else
      AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)v14);
    DeviceObject = AttachedDevice;
    if ( (_BYTE)v87 )
    {
      if ( !IsSandboxedToken )
      {
        FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
        if ( FastIoDispatch )
        {
          FastIoDeviceControl = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD))FastIoDispatch->FastIoDeviceControl;
          if ( FastIoDeviceControl )
          {
            v32 = v23 == 0;
            v33 = Address;
            if ( !v32 && Address )
            {
              if ( v66 == 1 )
              {
                if ( v11 )
                {
                  v34 = &Address[v11];
                  if ( (unsigned __int64)v34 > 0x7FFFFFFF0000LL || v34 < Address )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
              }
              else if ( v66 == 2 && v11 )
              {
                v35 = (unsigned __int64)Address;
                v29 = (unsigned __int64)&Address[v11 - 1];
                if ( (unsigned __int64)Address > v29 || v29 >= 0x7FFFFFFF0000LL )
                {
                  if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
                    ExRaiseAccessViolation();
                  v11 = Length;
                  v12 = (unsigned int)NumberOfBytes;
                  v14 = (char *)Object;
                }
                else
                {
                  v29 = (v29 & 0xFFFFFFFFFFFFF000uLL) + 4096;
                  do
                  {
                    *(_BYTE *)v35 = *(_BYTE *)v35;
                    v35 = (v35 & 0xFFFFFFFFFFFFF000uLL) + 4096;
                  }
                  while ( v35 != v29 );
                  v11 = Length;
                  v12 = (unsigned int)NumberOfBytes;
                  v14 = (char *)Object;
                }
              }
            }
            if ( a6 == 589856 )
            {
              _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
              v11 = Length;
              v12 = (unsigned int)NumberOfBytes;
              v14 = (char *)Object;
            }
            v67 = 0uLL;
            if ( (MmVerifierData & 0x10) != 0 )
              v36 = (void *)VfFastIoSnapState();
            else
              v36 = 0LL;
            LOBYTE(v29) = 1;
            v37 = FastIoDeviceControl(v14, v29, Src, (unsigned int)v12, v33, v11, a6, &v67, DeviceObject);
            if ( v36 )
              VfFastIoCheckState(v36);
            if ( v37 )
            {
              if ( (a3.LowPart & 1) != 0 )
              {
                HIDWORD(a5->Pointer) = DWORD2(v67);
                a5->Status = v67;
              }
              else
              {
                *(_OWORD *)&a5->Status = v67;
              }
              v38 = v67;
              v39 = (__int64 *)*((_QWORD *)v14 + 22);
              if ( !v39
                || (*((_DWORD *)v14 + 20) & 0x2000000) != 0 && (v67 & 0xC0000000) != 0x80000000
                || (v67 & 0xC0000000) == 0xC0000000 )
              {
                v40 = 0LL;
                v41 = 0LL;
              }
              else
              {
                v40 = *v39;
                v41 = v39[1];
              }
              if ( a2 )
              {
                if ( (*((_DWORD *)v14 + 20) & 0x8000000) == 0 || v40 && (v67 & 0xC0000000) == 0x80000000 )
                  KeSetEvent((PRKEVENT)v65, 0, 0);
                ObfDereferenceObject(v65);
                v38 = v67;
              }
              if ( v58 )
              {
                _InterlockedExchange((volatile __int32 *)v14 + 29, 0);
                v42 = Object;
                if ( *((_DWORD *)Object + 28) )
                  KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
                ObfDereferenceObject(v42);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                v38 = v67;
                v14 = (char *)Object;
              }
              if ( v40 && a4 )
              {
                v43 = IoSetIoCompletionEx2(v40, v41, a4, v38, *((__int64 *)&v67 + 1), 1u, 0LL, 0);
                v44 = v67;
                if ( v43 < 0 )
                  v44 = -1073741670;
                if ( (v44 & 0xC0000000) == 0x80000000 )
                  v44 = 259;
                LODWORD(v67) = v44;
              }
              ObfDereferenceObject(v14);
              return (unsigned int)v67;
            }
            v21 = Irp;
            v23 = v57;
          }
        }
      }
    }
    if ( (*(_DWORD *)&v21->Type & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(v14 + 152));
    LOBYTE(v30) = v58 == 0;
    v45 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, (unsigned __int8)DeviceObject->StackSize, v30, retaddr);
    v46 = v45;
    Irp = v45;
    if ( !v45 )
    {
      IopAllocateIrpCleanup(v14, v65);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 3221225626LL;
    }
    v45->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v14;
    v45->Tail.Overlay.Thread = Thread;
    v45->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v45->RequestorMode = v23;
    v45->PendingReturned = 0;
    v45->Cancel = 0;
    v45->CancelRoutine = 0LL;
    v45->UserEvent = (PKEVENT)v65;
    v45->UserIosb = a5;
    v45->Overlay.AllocationSize = a3;
    v45->Overlay.AsynchronousParameters.UserApcContext = (PVOID)a4;
    CurrentStackLocation = v45->Tail.Overlay.CurrentStackLocation;
    v48 = v87;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = ((_BYTE)v87 != 0) + 13;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v14;
    CurrentStackLocation[-1].Parameters.Read.Length = v11;
    CurrentStackLocation[-1].Parameters.Create.Options = v12;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a6;
    v49 = NonPagedPoolNxCacheAligned;
    if ( !v48 )
      v49 = NonPagedPoolNx;
    v45->MdlAddress = 0LL;
    v45->AssociatedIrp.MasterIrp = 0LL;
    if ( (DeviceObject->Flags & 0x80000) != 0 && !IsSandboxedToken )
      goto LABEL_144;
    if ( !v66 )
    {
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( (_DWORD)v12 || v11 )
      {
        if ( P )
        {
          v45->AssociatedIrp.MasterIrp = (struct _IRP *)P;
        }
        else
        {
          v54 = v11;
          if ( (unsigned int)v12 > v11 )
            v54 = (unsigned int)v12;
          PoolWithQuota_1 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(v49, v54);
          v46->AssociatedIrp.MasterIrp = PoolWithQuota_1;
          if ( Src )
            memmove(PoolWithQuota_1, Src, (unsigned int)v12);
        }
        v46->Flags = 48;
        v46->UserBuffer = Address;
        if ( v11 )
          v46->Flags = 112;
      }
      else
      {
        v45->Flags = 0;
        v45->UserBuffer = 0LL;
      }
      if ( !IopDisableBufferedIoInit && (unsigned int)v12 < v11 )
        memset((char *)v46->AssociatedIrp.MasterIrp + (unsigned int)v12, 0, v11 - (unsigned int)v12);
      goto LABEL_172;
    }
    if ( v66 <= 2 )
    {
      v45->Flags = 0;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( (_DWORD)v12 && Src )
      {
        if ( ViVerifierDriverAddedThunkListHead )
        {
          PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                                 v49,
                                                 v12,
                                                 0x20206F49u,
                                                 (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
          if ( !PoolWithTagPriority )
            RtlRaiseStatus(-1073741670);
        }
        else
        {
          PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithQuotaTag(v49, v12, 0x20206F49u);
        }
        v76[1] = PoolWithTagPriority;
        v46->AssociatedIrp.MasterIrp = PoolWithTagPriority;
        memmove(PoolWithTagPriority, Src, v12);
        v46->Flags = 48;
      }
      if ( v11 )
      {
        Mdl = IoAllocateMdl(Address, v11, 0, 1u, v46);
        v52 = (unsigned __int64)Mdl;
        v46->MdlAddress = Mdl;
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        LOBYTE(v8) = v66 != 1;
        v75 = v8;
        v53 = *(unsigned int *)&CurrentStackLocation[-1].MajorFunction;
        MmProbeAndLockPages(Mdl, v57, v8);
        if ( (MmTrackLockedPages & 1) != 0 )
          MmUpdateMdlTracker(v52, (__int64)DeviceObject->DriverObject->MajorFunction[v53], (__int64)DeviceObject);
      }
      goto LABEL_172;
    }
    if ( v66 == 3 )
    {
LABEL_144:
      v45->Flags = 0;
      v45->UserBuffer = Address;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
    }
LABEL_172:
    GrantedAccess = HandleInformation.GrantedAccess;
    CurrentStackLocation[-1].Flags |= HandleInformation.GrantedAccess & 1;
    CurrentStackLocation[-1].Flags |= 2 * (GrantedAccess & 2);
    if ( !(_BYTE)v87 )
      v46->Flags |= 0x800u;
    if ( a6 == 589856 )
    {
      _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
      v14 = (char *)Object;
    }
    if ( !IsSandboxedToken || v60 || *(_DWORD *)v46->AssociatedIrp.MasterIrp != -1610612733 )
      return IopSynchronousServiceTail(DeviceObject, v46, v57, v58, 2);
    IopExceptionCleanup(v14, v46, v65, 0LL);
    return 3221225485LL;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v23 = v57;
  v14 = (char *)Object;
  v24 = IopAcquireFileObjectLock(Object);
  if ( !v63 )
  {
    v21 = Irp;
    goto LABEL_62;
  }
  if ( v65 )
    ObfDereferenceObject(v65);
  if ( P )
    ExFreePoolWithTag(P, 0);
  ObfDereferenceObject(v14);
  return v24;
}
