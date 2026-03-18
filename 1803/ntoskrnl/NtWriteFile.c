/*
 * XREFs of NtWriteFile @ 0x1404D10C0
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x1402A6C90 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     ExLockHandleTableEntry @ 0x14003EC38 (ExLockHandleTableEntry.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     PsDereferenceSiloContext @ 0x1400C5610 (PsDereferenceSiloContext.c)
 *     ExFastReplenishHandleTableEntry @ 0x1400CAFEC (ExFastReplenishHandleTableEntry.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400D05A8 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     ObpIncrPointerCountEx @ 0x1400EB080 (ObpIncrPointerCountEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ExSlowReplenishHandleTableEntry @ 0x1400FE940 (ExSlowReplenishHandleTableEntry.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     IopExceptionFilter @ 0x140232634 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x1402542A8 (MmUpdateMdlTracker.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x1402B8000 (ExHandleLogBadReference.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14054D4C4 (ExpBlockOnLockedHandleEntry.c)
 *     PsIsProcessAppContainer @ 0x14058A3A4 (PsIsProcessAppContainer.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x1405A4D70 (ExpLookupHandleTableEntry.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     ObpAuditObjectAccess @ 0x140758D94 (ObpAuditObjectAccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x140816D04 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140816DDC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  ULONG_PTR v9; // rbx
  unsigned __int8 v10; // al
  struct _KTHREAD *v11; // rdi
  _KPROCESS *Process; // rax
  ULONG_PTR v13; // r13
  _QWORD *v14; // rax
  __int64 *v15; // r14
  __int64 v16; // rax
  signed __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rax
  __int128 v20; // rt0
  unsigned __int8 v21; // tt
  volatile signed __int64 *v22; // rbx
  bool v23; // zf
  struct _FILE_OBJECT *v24; // rdi
  int v25; // edx
  int v26; // r13d
  __int64 v27; // rsi
  char v28; // r8
  char v29; // r8
  KPROCESSOR_MODE v30; // si
  char *v31; // rcx
  NTSTATUS v32; // ebx
  _DWORD *FileObjectExtension; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r11
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  ULONG v37; // r14d
  PVOID v38; // r12
  PLARGE_INTEGER v39; // rbx
  ULONG Flags; // ecx
  __int64 v41; // rax
  USHORT SectorSize; // r9
  int v43; // r8d
  unsigned int v44; // edx
  unsigned int v45; // r10d
  __int16 v46; // cx
  struct _IO_STATUS_BLOCK *Status; // rcx
  void *v48; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  ULONG *p_Flags; // rcx
  ULONG v51; // eax
  struct _KTHREAD *v52; // rax
  volatile __int32 *v53; // rsi
  __int64 v54; // r9
  char v55; // dl
  __int64 (__fastcall *FastIoWrite)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r13
  void *v57; // rsi
  char v58; // bl
  struct _KTHREAD *v59; // rax
  struct _KTHREAD *v60; // rcx
  unsigned __int64 v61; // rax
  volatile __int32 *v62; // rbx
  PVOID v63; // rbx
  struct _KTHREAD *v64; // rcx
  void *v66; // rbx
  __int64 v67; // rax
  IRP *Irp; // rsi
  char v69; // dl
  __int64 v70; // r13
  PDEVICE_OBJECT v71; // rbx
  ULONG v72; // eax
  int v73; // r13d
  struct _MDL *Mdl; // rax
  unsigned __int64 v75; // r15
  unsigned __int8 v76; // r12
  PRKEVENT v77; // rdi
  int v78; // eax
  int v79; // ecx
  _KPROCESS *v80; // rcx
  PVOID v82; // rbx
  PVOID v83; // rbx
  struct _IRP *PoolWithQuota_1; // rax
  int v85; // eax
  signed __int32 v86[8]; // [rsp+0h] [rbp-118h] BYREF
  unsigned __int8 v87; // [rsp+50h] [rbp-C8h]
  PVOID Object; // [rsp+58h] [rbp-C0h]
  LONGLONG QuadPart; // [rsp+60h] [rbp-B8h] BYREF
  char v90; // [rsp+68h] [rbp-B0h]
  char v91[7]; // [rsp+69h] [rbp-AFh] BYREF
  __int128 v92; // [rsp+70h] [rbp-A8h] BYREF
  PRKEVENT Eventa; // [rsp+80h] [rbp-98h]
  ULONG v94; // [rsp+88h] [rbp-90h]
  volatile signed __int64 *v95; // [rsp+90h] [rbp-88h]
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp-80h]
  ULONG *v97; // [rsp+A0h] [rbp-78h]
  int v98; // [rsp+A8h] [rbp-70h]
  int v99; // [rsp+ACh] [rbp-6Ch]
  PVOID v100; // [rsp+B0h] [rbp-68h]
  __int128 v101; // [rsp+B8h] [rbp-60h] BYREF
  PVOID v102; // [rsp+C8h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-48h]
  __int64 retaddr; // [rsp+118h] [rbp+0h]
  unsigned __int64 v105; // [rsp+120h] [rbp+8h]
  char v106; // [rsp+120h] [rbp+8h]
  NTSTATUS v107; // [rsp+120h] [rbp+8h]

  v105 = (unsigned __int64)FileHandle;
  v9 = (ULONG_PTR)FileHandle;
  Eventa = 0LL;
  v94 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = CurrentThread->gap0[10];
  v87 = v10;
  v11 = CurrentThread;
  if ( (int)FileHandle < 0 )
  {
    if ( !v10 && (unsigned __int64)FileHandle <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v9 = (unsigned __int64)FileHandle ^ 0xFFFFFFFF80000000uLL;
      v105 = (unsigned __int64)FileHandle ^ 0xFFFFFFFF80000000uLL;
      v13 = ObpKernelHandleTable;
      v97 = (ULONG *)ObpKernelHandleTable;
      goto LABEL_3;
    }
    return -1073741816;
  }
  Process = CurrentThread->ApcState.Process;
  v13 = Process[1].ActiveProcessors.Bitmap[5];
  v97 = (ULONG *)v13;
  if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    return -1073741816;
LABEL_3:
  --CurrentThread->KernelApcDisable;
  if ( (v9 & 0x3FC) != 0 && (v14 = (_QWORD *)ExpLookupHandleTableEntry(v13, v9), (v15 = v14) != 0LL) )
  {
    _m_prefetchw(v14);
    v16 = *v14;
LABEL_6:
    *(_QWORD *)&v92 = v16;
    v17 = v15[1];
    v18 = v16;
    *((_QWORD *)&v92 + 1) = v17;
    while ( (v18 & 0x1FFFE) != 0 )
    {
      if ( (v18 & 1) == 0 )
      {
        ExpBlockOnLockedHandleEntry(v13, v15, v18);
        _m_prefetchw(v15);
        v16 = *v15;
        goto LABEL_6;
      }
      *(_QWORD *)&v20 = v18;
      *((_QWORD *)&v20 + 1) = v17;
      v21 = _InterlockedCompareExchange128(v15, v17, v18 - 2, (signed __int64 *)&v20);
      v19 = v20;
      v18 = v20;
      v92 = v20;
      v17 = *((_QWORD *)&v20 + 1);
      if ( v21 )
      {
        if ( (unsigned __int16)((unsigned __int64)v19 >> 1) != 16 )
        {
          v22 = (volatile signed __int64 *)((v19 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
          v95 = v22;
          goto LABEL_12;
        }
        *(_QWORD *)&v92 = v19 ^ ((unsigned int)v19 ^ (2 * (unsigned int)((unsigned __int64)v19 >> 1) - 2)) & 0x1FFFE;
        v22 = (volatile signed __int64 *)(((__int64)v92 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        v95 = v22;
        ObpIncrPointerCountEx(v22, 32752);
        v79 = ExFastReplenishHandleTableEntry(v15, (unsigned __int64 *)&v92, 32752);
        if ( v79 )
        {
          _InterlockedExchangeAdd64(v22, -v79);
          goto LABEL_136;
        }
        LODWORD(v17) = DWORD2(v92);
        v18 = v92;
        goto LABEL_12;
      }
    }
    if ( !ExLockHandleTableEntry(v13, v15) )
    {
      v9 = v105;
      goto LABEL_141;
    }
    v95 = (volatile signed __int64 *)((*v15 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
    v92 = *(_OWORD *)v15;
    v78 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v15);
    ObpIncrPointerCountEx(v95, v78 + 1);
    _InterlockedExchangeAdd64(v15, 1uLL);
    _InterlockedOr(v86, 0);
    if ( !*(_QWORD *)(v13 + 48) )
    {
LABEL_136:
      LODWORD(v17) = DWORD2(v92);
      v18 = v92;
      goto LABEL_137;
    }
    ExfUnblockPushLock((volatile __int64 *)(v13 + 48), 0LL);
    LODWORD(v17) = DWORD2(v92);
    v18 = v92;
  }
  else
  {
    LODWORD(v17) = DWORD2(v92);
    v18 = v92;
LABEL_141:
    if ( v9 )
    {
      ExHandleLogBadReference(v13, v9, KeGetCurrentThread()->PreviousMode);
      LODWORD(v17) = DWORD2(v92);
      v18 = v92;
    }
    v15 = 0LL;
  }
LABEL_137:
  v22 = v95;
LABEL_12:
  v23 = v11->KernelApcDisable++ == -1;
  if ( v23
    && ($005F0E83B22994B61E86C72E0CE43C71 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( !v15 )
  {
    v32 = -1073741816;
    LOBYTE(v26) = v105;
    v30 = v87;
LABEL_145:
    v24 = 0LL;
    Object = 0LL;
    goto LABEL_29;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((__int64)v22, 1, 1u, 1953261124);
  v24 = (struct _FILE_OBJECT *)(v22 + 6);
  v98 = 0;
  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v22 + 24) ^ (unsigned __int64)BYTE1(v22)] != IoFileObjectType )
  {
    v32 = -1073741788;
    LOBYTE(v26) = v105;
    v30 = v87;
    goto LABEL_168;
  }
  v25 = ~(unsigned __int8)(*((_DWORD *)v22 + 32) >> 5) & 4 | 2;
  v98 = v25;
  v26 = v17 & 0x1FFFFFF;
  v27 = (v18 >> 17) & 7;
  v28 = v27 | 8;
  if ( (v17 & 0x2000000) == 0 )
    v28 = v27;
  v29 = v28 & 7;
  v30 = v87;
  if ( (v26 & v25) == 0 )
  {
    v32 = -1073741790;
    goto LABEL_168;
  }
  if ( v87 )
  {
    if ( (*((_BYTE *)v22 + 26) & 0x40) != 0 )
    {
      v31 = (char *)v22 - ObpInfoMaskToOffset[*((_BYTE *)v22 + 26) & 0x7F];
      if ( *(_BYTE *)(*(_QWORD *)v31 + 24LL) )
      {
        if ( *(_QWORD *)(*(_QWORD *)v31 + 16LL) == 1LL )
        {
          v32 = -1073700858;
LABEL_168:
          PsDereferenceSiloContext(v24);
          goto LABEL_145;
        }
        LODWORD(v22) = (_DWORD)v95;
        v25 = v98;
      }
    }
  }
  if ( (v29 & 4) != 0 && v87 && !(unsigned __int8)ObpAuditObjectAccess((_DWORD)v97, v105, (_DWORD)v15, (_DWORD)v22, v25) )
  {
    v32 = -1073741816;
    goto LABEL_168;
  }
  v32 = 0;
  FileObjectExtension = v24->FileObjectExtension;
  if ( FileObjectExtension && (*FileObjectExtension & 4) != 0 )
  {
    v80 = KeGetCurrentThread()->ApcState.Process;
    Object = v24;
    if ( (unsigned __int8)PsIsProcessAppContainer(v80) )
    {
      ObfDereferenceObject(v24);
      return -1073739504;
    }
  }
  else
  {
    Object = v24;
  }
LABEL_29:
  if ( v32 < 0 )
    return v32;
  RelatedDeviceObject = IoGetRelatedDeviceObject(v24);
  DeviceObject = RelatedDeviceObject;
  if ( v30 )
  {
    v99 = 0;
    v35 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v35 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v35 = *(_DWORD *)v35;
    v36 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v36 && ((v46 = *(_WORD *)(v36 + 8), v46 == 332) || v46 == 452) )
    {
      v90 = 1;
      v24 = (struct _FILE_OBJECT *)Object;
      if ( (*((_DWORD *)Object + 20) & 2) != 0 )
        goto LABEL_36;
      ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
      IoStatusBlock = Status;
      Status->Status = Status->Status;
    }
    else
    {
      v90 = 0;
    }
    v24 = (struct _FILE_OBJECT *)Object;
LABEL_36:
    v37 = Length;
    v38 = Buffer;
    if ( Length && ((unsigned __int64)Buffer + Length > 0x7FFFFFFF0000LL || (char *)Buffer + Length < Buffer) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( v24->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_192;
    v39 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v24 = (struct _FILE_OBJECT *)Object;
    }
    Flags = v24->Flags;
    if ( (Flags & 8) == 0 )
    {
LABEL_42:
      v41 = (__int64)Key;
      if ( Key )
      {
        if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
          v41 = 0x7FFFFFFF0000LL;
        v94 = *(_DWORD *)v41;
        v24 = (struct _FILE_OBJECT *)Object;
      }
      goto LABEL_74;
    }
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( SectorSize )
    {
      v43 = SectorSize;
      v44 = SectorSize;
      v45 = SectorSize;
      if ( ((SectorSize - 1) & Length) != 0 )
      {
LABEL_61:
        if ( SectorSize && Length % v45 || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) != 0 )
          goto LABEL_192;
LABEL_51:
        if ( ByteOffset
          && QuadPart != -1
          && (QuadPart != -2 || (Flags & 2) == 0)
          && SectorSize
          && ((v43 - 1) & (unsigned int)QuadPart) != 0 )
        {
          goto LABEL_192;
        }
        goto LABEL_42;
      }
    }
    else
    {
      v43 = 0;
      v44 = 0;
    }
    v45 = v44;
    if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) == 0 )
      goto LABEL_51;
    goto LABEL_61;
  }
  v39 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  v37 = Length;
  v38 = Buffer;
  if ( Key )
    v94 = *Key;
LABEL_74:
  if ( (v26 & 6) == 4 )
    QuadPart = -1LL;
  if ( Event )
  {
    v73 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, v30, &v102, 0LL);
    v48 = v102;
    v100 = v102;
    Eventa = (PRKEVENT)v102;
    if ( v73 < 0 )
    {
      ObfDereferenceObject(v24);
      return v73;
    }
    KeResetEvent((PRKEVENT)v102);
    RelatedDeviceObject = DeviceObject;
  }
  else
  {
    v48 = Eventa;
    v100 = Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  p_Flags = &v24->Flags;
  v97 = &v24->Flags;
  v51 = v24->Flags;
  if ( (v51 & 2) == 0 )
  {
    if ( !v39 && (v51 & 0x280) == 0 )
    {
      if ( v48 )
        ObfDereferenceObject(v48);
      goto LABEL_192;
    }
    v55 = 0;
    v106 = 0;
    v66 = v100;
    goto LABEL_100;
  }
  v52 = KeGetCurrentThread();
  --v52->KernelApcDisable;
  v53 = (volatile __int32 *)Object;
  if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    v24 = (struct _FILE_OBJECT *)Object;
    ObfReferenceObject(Object);
    goto LABEL_81;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v24 = (struct _FILE_OBJECT *)Object;
  v107 = IopAcquireFileObjectLock((char *)Object, v87, (*v97 & 4) != 0, v91);
  if ( !v91[0] )
  {
LABEL_81:
    v55 = 1;
    v106 = 1;
    if ( !v39 && !(_DWORD)QuadPart || (_DWORD)QuadPart == -2 && HIDWORD(QuadPart) == -1 )
      QuadPart = v24->CurrentByteOffset.QuadPart;
    if ( v24->PrivateCacheMap )
    {
      v101 = 0uLL;
      FastIoWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoWrite;
      if ( QuadPart < 0 && QuadPart != -1 )
      {
        if ( Eventa )
          ObfDereferenceObject(Eventa);
        _InterlockedExchange(v53 + 29, 0);
        v82 = Object;
        if ( *((_DWORD *)Object + 28) )
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
        ObfDereferenceObject(v82);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        return -1073741811;
      }
      if ( (MmVerifierData & 0x10) != 0 )
        v57 = (void *)VfFastIoSnapState();
      else
        v57 = 0LL;
      LOBYTE(v54) = 1;
      v58 = FastIoWrite(v24, &QuadPart, v37, v54, v94, v38, &v101, DeviceObject);
      if ( v57 )
        VfFastIoCheckState(v57, (ULONG_PTR)FastIoWrite);
      if ( v58 && !(_DWORD)v101 )
      {
        v59 = KeGetCurrentThread();
        ++v59->WriteOperationCount;
        __incgsdword(0x2EE0u);
        v60 = KeGetCurrentThread();
        v61 = DWORD2(v101);
        v60->WriteTransferCount += DWORD2(v101);
        __addgsqword(0x2EF0u, v61);
        *(_OWORD *)&IoStatusBlock->Status = v101;
        v62 = (volatile __int32 *)Object;
        if ( Event )
        {
          v77 = Eventa;
          if ( (*((_DWORD *)Object + 20) & 0x8000000) == 0 )
            KeSetEvent(Eventa, 0, 0);
          ObfDereferenceObject(v77);
        }
        _InterlockedExchange(v62 + 29, 0);
        v63 = Object;
        if ( *((_DWORD *)Object + 28) )
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
        ObfDereferenceObject(v63);
        v64 = KeGetCurrentThread();
        v23 = v64->KernelApcDisable++ == -1;
        if ( v23
          && ($005F0E83B22994B61E86C72E0CE43C71 *)v64->ApcState.ApcListHead[0].Flink != &v64->152
          && !v64->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfDereferenceObject(Object);
        return v101;
      }
      v66 = Eventa;
      p_Flags = v97;
      v55 = 1;
      RelatedDeviceObject = DeviceObject;
    }
    else
    {
      v66 = Eventa;
      p_Flags = v97;
      RelatedDeviceObject = DeviceObject;
    }
LABEL_100:
    if ( QuadPart >= 0 || QuadPart == -1 )
    {
      if ( (*p_Flags & 0x4000000) == 0 )
      {
        KeResetEvent(&v24->Event);
        v55 = v106;
        RelatedDeviceObject = DeviceObject;
      }
      v67 = IopAllocateIrpExReturn(
              (__int64)RelatedDeviceObject,
              (unsigned __int8)RelatedDeviceObject->StackSize,
              (unsigned __int8)v55 ^ 1u,
              retaddr);
      Irp = (IRP *)v67;
      v100 = (PVOID)v67;
      if ( v67 )
      {
        *(_QWORD *)(v67 + 192) = v24;
        *(_QWORD *)(v67 + 152) = CurrentThread;
        *(_QWORD *)(v67 + 160) = 0LL;
        v69 = v87;
        *(_WORD *)(v67 + 64) = v87;
        *(_BYTE *)(v67 + 68) = 0;
        *(_QWORD *)(v67 + 104) = 0LL;
        *(_QWORD *)(v67 + 80) = v66;
        *(_QWORD *)(v67 + 72) = IoStatusBlock;
        *(_QWORD *)(v67 + 88) = ApcRoutine;
        *(_QWORD *)(v67 + 96) = ApcContext;
        v70 = *(_QWORD *)(v67 + 184);
        *(_DWORD *)(v70 - 72) = 4;
        *(_QWORD *)(v70 - 24) = v24;
        if ( (*v97 & 0x10) != 0 )
          *(_BYTE *)(v70 - 70) = 4;
        *(_QWORD *)(v67 + 24) = 0LL;
        *(_QWORD *)(v67 + 8) = 0LL;
        v71 = DeviceObject;
        v72 = DeviceObject->Flags;
        if ( (v72 & 4) != 0 )
        {
          if ( v37 )
          {
            PoolWithQuota_1 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNxCacheAligned, v37);
            Irp->AssociatedIrp.MasterIrp = PoolWithQuota_1;
            memmove(PoolWithQuota_1, v38, v37);
            v85 = 48;
            v71 = DeviceObject;
            v69 = v87;
          }
          else
          {
            v85 = 16;
          }
          Irp->Flags = v85;
        }
        else
        {
          Irp->Flags = 0;
          if ( (v72 & 0x10) != 0 )
          {
            if ( v37 )
            {
              Mdl = IoAllocateMdl(v38, v37, 0, 1u, Irp);
              v75 = (unsigned __int64)Mdl;
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              v76 = *(_BYTE *)(v70 - 72);
              MmProbeAndLockPages(Mdl, v87, IoReadAccess);
              if ( (MmTrackLockedPages & 1) != 0 )
                MmUpdateMdlTracker(v75, (__int64)v71->DriverObject->MajorFunction[v76], (__int64)v71);
              v69 = v87;
            }
          }
          else
          {
            Irp->UserBuffer = v38;
          }
        }
        Irp->Flags |= (v24->Flags & 8 | 0x5000) >> 3;
        *(_DWORD *)(v70 - 64) = v37;
        *(_DWORD *)(v70 - 56) = v94;
        *(_QWORD *)(v70 - 48) = QuadPart;
        return IopSynchronousServiceTail(v71, Irp, v69, v106, 1);
      }
      else
      {
        IopAllocateIrpCleanup(v24, v66);
        return -1073741670;
      }
    }
    if ( v66 )
    {
      ObfDereferenceObject(v66);
      v55 = v106;
    }
    if ( v55 )
    {
      _InterlockedExchange((volatile __int32 *)&v24->Busy, 0);
      v83 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v83);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v24 = (struct _FILE_OBJECT *)Object;
    }
LABEL_192:
    ObfDereferenceObject(v24);
    return -1073741811;
  }
  if ( Eventa )
    ObfDereferenceObject(Eventa);
  ObfDereferenceObject(v24);
  return v107;
}
