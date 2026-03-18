/*
 * XREFs of NtWriteFile @ 0x140505350
 * Callers:
 *     ?SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEAXPEAU_IO_STATUS_BLOCK@@K@Z3@Z @ 0x140272964 (-SmKmIssueFileIo@@YAJPEAU_SMKM_FILE_INFO@@PEAU_SMKM_ISSUE_IO_PARAMS@@PEAT_LARGE_INTEGER@@P6AXPEA.c)
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140082980 (ExSlowReplenishHandleTableEntry.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ObpIncrPointerCountEx @ 0x14008AB18 (ObpIncrPointerCountEx.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     ExLockHandleTableEntry @ 0x1400BD9D4 (ExLockHandleTableEntry.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400FEBE0 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     PsDereferenceSiloContext @ 0x1401262F0 (PsDereferenceSiloContext.c)
 *     ExFastReplenishHandleTableEntry @ 0x14012B3EC (ExFastReplenishHandleTableEntry.c)
 *     IopIsProcessAppContainer @ 0x14012BDD8 (IopIsProcessAppContainer.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     IopExceptionFilter @ 0x1401F5104 (IopExceptionFilter.c)
 *     MmUpdateMdlTracker @ 0x1402165C0 (MmUpdateMdlTracker.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x140283E9C (ExHandleLogBadReference.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x1404B1720 (ExpLookupHandleTableEntry.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14059D508 (ExpBlockOnLockedHandleEntry.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 *     ObpAuditObjectAccess @ 0x1406EF914 (ObpAuditObjectAccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1407A9C74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407A9D54 (VfFastIoSnapState.c)
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
  ULONG_PTR v9; // r13
  struct _KTHREAD *v10; // rsi
  _KPROCESS *Process; // rax
  struct _DEVICE_OBJECT *v12; // rbx
  _QWORD *v13; // rax
  __int64 *v14; // r14
  __int64 v15; // rax
  signed __int64 v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rax
  __int128 v19; // rt0
  unsigned __int8 v20; // tt
  __int64 v21; // rbx
  bool v22; // zf
  struct _FILE_OBJECT *v23; // rsi
  int v24; // edx
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned __int8 v27; // di
  NTSTATUS v28; // ebx
  char v29; // r14
  _DWORD *FileObjectExtension; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  __int64 v32; // rcx
  unsigned __int64 v33; // rax
  ULONG v34; // r13d
  PLARGE_INTEGER v35; // rdi
  ULONG Flags; // ebx
  __int64 v37; // rax
  USHORT SectorSize; // r9
  int v39; // r8d
  __int16 v40; // cx
  struct _IO_STATUS_BLOCK *Status; // rcx
  void *v42; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  ULONG *p_Flags; // r12
  ULONG v45; // eax
  struct _KTHREAD *v46; // rax
  volatile __int32 *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 (__fastcall *FastIoWrite)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v53; // rdi
  char v54; // bl
  struct _KTHREAD *v55; // rax
  struct _KTHREAD *v56; // rcx
  unsigned __int64 v57; // rax
  volatile __int32 *v58; // rbx
  PVOID v59; // rbx
  struct _KTHREAD *v60; // rcx
  char v62; // di
  __int64 v63; // rax
  IRP *Irp; // rdi
  char v65; // dl
  __int64 v66; // r14
  struct _DEVICE_OBJECT *v67; // rcx
  ULONG v68; // eax
  int v69; // r14d
  struct _MDL *Mdl; // rax
  unsigned __int64 v71; // rbx
  unsigned __int8 v72; // r15
  int v73; // eax
  PRKEVENT v74; // rdi
  IRP *v75; // rdi
  int v76; // eax
  PVOID v77; // rbx
  PVOID v78; // rbx
  struct _IRP *PoolWithQuota_1; // rax
  signed __int32 v80[8]; // [rsp+0h] [rbp-108h] BYREF
  char v81; // [rsp+50h] [rbp-B8h]
  PVOID Object; // [rsp+58h] [rbp-B0h]
  LONGLONG QuadPart; // [rsp+60h] [rbp-A8h] BYREF
  char v84; // [rsp+68h] [rbp-A0h]
  char v85; // [rsp+69h] [rbp-9Fh]
  NTSTATUS v86; // [rsp+6Ch] [rbp-9Ch]
  PDEVICE_OBJECT DeviceObject; // [rsp+70h] [rbp-98h]
  __int128 v88; // [rsp+78h] [rbp-90h] BYREF
  PRKEVENT Eventa; // [rsp+88h] [rbp-80h]
  PIRP v90; // [rsp+90h] [rbp-78h]
  ULONG v91; // [rsp+98h] [rbp-70h]
  int v92; // [rsp+9Ch] [rbp-6Ch]
  int v93; // [rsp+A0h] [rbp-68h]
  __int128 v94; // [rsp+A8h] [rbp-60h] BYREF
  PVOID v95; // [rsp+B8h] [rbp-50h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-48h]
  unsigned __int8 v97; // [rsp+110h] [rbp+8h]

  v9 = (ULONG_PTR)FileHandle;
  Eventa = 0LL;
  v91 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  v97 = CurrentThread->gap0[10];
  v10 = CurrentThread;
  if ( (int)FileHandle < 0 )
  {
    if ( !CurrentThread->PreviousMode && (unsigned __int64)FileHandle <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v9 = (unsigned __int64)FileHandle ^ 0xFFFFFFFF80000000uLL;
      v12 = (struct _DEVICE_OBJECT *)ObpKernelHandleTable;
      DeviceObject = (PDEVICE_OBJECT)ObpKernelHandleTable;
      goto LABEL_3;
    }
    return -1073741816;
  }
  Process = CurrentThread->ApcState.Process;
  v12 = (struct _DEVICE_OBJECT *)Process[1].ActiveProcessors.Bitmap[5];
  DeviceObject = v12;
  FileHandle = (HANDLE)HIDWORD(Process[1].DirectoryTableBase);
  if ( ((unsigned int)FileHandle & 0x4000000) == 0 )
    return -1073741816;
LABEL_3:
  --CurrentThread->KernelApcDisable;
  if ( (v9 & 0x3FC) != 0 && (v13 = (_QWORD *)ExpLookupHandleTableEntry((unsigned int *)v12, v9), (v14 = v13) != 0LL) )
  {
    _m_prefetchw(v13);
    v15 = *v13;
LABEL_6:
    *(_QWORD *)&v88 = v15;
    v16 = v14[1];
    v17 = v15;
    *((_QWORD *)&v88 + 1) = v16;
    while ( (v17 & 0x1FFFE) != 0 )
    {
      if ( (v17 & 1) == 0 )
      {
        ExpBlockOnLockedHandleEntry(v12, v14, v17);
        _m_prefetchw(v14);
        v15 = *v14;
        goto LABEL_6;
      }
      *(_QWORD *)&v19 = v17;
      *((_QWORD *)&v19 + 1) = v16;
      v20 = _InterlockedCompareExchange128(v14, v16, v17 - 2, (signed __int64 *)&v19);
      v18 = v19;
      v17 = v19;
      v88 = v19;
      v16 = *((_QWORD *)&v19 + 1);
      v12 = DeviceObject;
      if ( v20 )
      {
        FileHandle = (HANDLE)((unsigned __int64)v18 >> 1);
        if ( (unsigned __int16)((unsigned __int64)v18 >> 1) != 16 )
        {
          v21 = (v18 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
          v90 = (PIRP)v21;
          goto LABEL_12;
        }
        *(_QWORD *)&v88 = ((unsigned int)v17 ^ (2 * (_DWORD)FileHandle - 2)) & 0x1FFFE ^ (unsigned __int64)v17;
        v75 = (IRP *)(((__int64)v88 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        v21 = (__int64)v75;
        v90 = v75;
        ObpIncrPointerCountEx((volatile signed __int64 *)&v75->Type, 32752);
        v76 = ExFastReplenishHandleTableEntry(v14, (unsigned __int64 *)&v88, 32752);
        FileHandle = (HANDLE)v76;
        if ( !v76 )
        {
          LODWORD(v16) = DWORD2(v88);
          v17 = v88;
          goto LABEL_12;
        }
        FileHandle = (HANDLE)(unsigned int)-v76;
        _InterlockedExchangeAdd64((volatile signed __int64 *)&v75->Type, (int)FileHandle);
LABEL_137:
        LODWORD(v16) = DWORD2(v88);
        v17 = v88;
        goto LABEL_138;
      }
    }
    if ( !ExLockHandleTableEntry((__int64)v12, v14) )
      goto LABEL_145;
    v90 = (PIRP)((*v14 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
    v88 = *(_OWORD *)v14;
    v73 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v14);
    ObpIncrPointerCountEx((volatile signed __int64 *)&v90->Type, v73 + 1);
    _InterlockedExchangeAdd64(v14, 1uLL);
    FileHandle = &DeviceObject->Flags;
    _InterlockedOr(v80, 0);
    if ( !*(_QWORD *)FileHandle )
      goto LABEL_137;
    ExfUnblockPushLock((volatile __int64 *)FileHandle, 0LL);
    LODWORD(v16) = DWORD2(v88);
    v17 = v88;
  }
  else
  {
    LODWORD(v16) = DWORD2(v88);
    v17 = v88;
LABEL_145:
    if ( v9 )
    {
      ExHandleLogBadReference((ULONG_PTR)v12, v9, KeGetCurrentThread()->PreviousMode);
      LODWORD(v16) = DWORD2(v88);
      v17 = v88;
    }
    v14 = 0LL;
  }
LABEL_138:
  v21 = (__int64)v90;
LABEL_12:
  v22 = v10->KernelApcDisable++ == -1;
  if ( v22
    && ($B476B70DB57F76B110DA5B9238C3E934 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)FileHandle);
  }
  if ( !v14 )
  {
    v28 = -1073741816;
    v29 = v97;
    v27 = v97;
LABEL_149:
    v23 = 0LL;
    Object = 0LL;
    goto LABEL_28;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v21, 1, 1u, 1953261124);
  v23 = (struct _FILE_OBJECT *)(v21 + 48);
  v92 = 0;
  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v21 + 24) ^ (unsigned __int64)BYTE1(v21)] != IoFileObjectType )
  {
    v28 = -1073741788;
    v29 = v97;
    goto LABEL_167;
  }
  v24 = ~(unsigned __int8)(*(_DWORD *)(v21 + 128) >> 5) & 4 | 2;
  v92 = v24;
  v86 = v16 & 0x1FFFFFF;
  v25 = (v17 >> 17) & 7;
  if ( (v16 & 0x2000000) != 0 )
    LOBYTE(v25) = v25 | 8;
  if ( (v16 & 0x1FFFFFF & (unsigned int)v24) == 0 )
  {
    v28 = -1073741790;
    v29 = v86;
    goto LABEL_167;
  }
  if ( v97 )
  {
    if ( (*(_BYTE *)(v21 + 26) & 0x40) != 0 )
    {
      v26 = v21 - ObpInfoMaskToOffset[*(_BYTE *)(v21 + 26) & 0x7F];
      if ( *(_BYTE *)(*(_QWORD *)v26 + 24LL) )
      {
        if ( *(_QWORD *)(*(_QWORD *)v26 + 16LL) != 1LL )
        {
          LODWORD(v21) = (_DWORD)v90;
          v24 = v92;
          goto LABEL_26;
        }
        v28 = -1073700858;
        v29 = v86;
LABEL_167:
        v27 = v97;
        goto LABEL_168;
      }
    }
  }
LABEL_26:
  v22 = (v25 & 4) == 0;
  v27 = v97;
  if ( !v22 && v97 && !(unsigned __int8)ObpAuditObjectAccess((_DWORD)DeviceObject, v9, (_DWORD)v14, v21, v24) )
  {
    v28 = -1073741816;
    v29 = v86;
LABEL_168:
    PsDereferenceSiloContext(v23);
    goto LABEL_149;
  }
  Object = v23;
  v28 = 0;
  v29 = v86;
  FileObjectExtension = v23->FileObjectExtension;
  if ( FileObjectExtension && (*FileObjectExtension & 4) != 0 )
  {
    if ( IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    {
      ObfDereferenceObject(Object);
      return -1073739504;
    }
    v23 = (struct _FILE_OBJECT *)Object;
  }
LABEL_28:
  if ( v28 < 0 )
    return v28;
  RelatedDeviceObject = IoGetRelatedDeviceObject(v23);
  DeviceObject = RelatedDeviceObject;
  if ( v27 )
  {
    v93 = 0;
    v32 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v32 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v32 = *(_DWORD *)v32;
    v33 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v33 && ((v40 = *(_WORD *)(v33 + 8), v40 == 332) || v40 == 452) )
    {
      v84 = 1;
      v23 = (struct _FILE_OBJECT *)Object;
      if ( (*((_DWORD *)Object + 20) & 2) != 0 )
        goto LABEL_35;
      ApcRoutine = (PIO_APC_ROUTINE)((unsigned __int64)ApcRoutine | 1);
      Status = (struct _IO_STATUS_BLOCK *)(unsigned int)IoStatusBlock->Status;
      IoStatusBlock = Status;
      Status->Status = Status->Status;
    }
    else
    {
      v84 = 0;
    }
    v23 = (struct _FILE_OBJECT *)Object;
LABEL_35:
    v34 = Length;
    if ( Length && ((unsigned __int64)Buffer + Length > 0x7FFFFFFF0000LL || (char *)Buffer + Length < Buffer) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( v23->CompletionContext && ((unsigned __int64)ApcRoutine & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_196;
    v35 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      v23 = (struct _FILE_OBJECT *)Object;
    }
    Flags = v23->Flags;
    if ( (Flags & 8) == 0 )
    {
LABEL_41:
      v37 = (__int64)Key;
      if ( Key )
      {
        if ( (unsigned __int64)Key >= 0x7FFFFFFF0000LL )
          v37 = 0x7FFFFFFF0000LL;
        v91 = *(_DWORD *)v37;
        v23 = (struct _FILE_OBJECT *)Object;
      }
      goto LABEL_75;
    }
    SectorSize = RelatedDeviceObject->SectorSize;
    if ( SectorSize && ((SectorSize - 1) & Length) != 0 )
    {
      v39 = (int)Buffer;
    }
    else
    {
      v39 = (int)Buffer;
      if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)Buffer) == 0 )
        goto LABEL_47;
    }
    if ( SectorSize && Length % SectorSize || (RelatedDeviceObject->AlignmentRequirement & v39) != 0 )
      goto LABEL_196;
LABEL_47:
    if ( ByteOffset
      && QuadPart != -1
      && (QuadPart != -2 || (Flags & 2) == 0)
      && SectorSize
      && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
    {
      goto LABEL_196;
    }
    goto LABEL_41;
  }
  v35 = ByteOffset;
  if ( ByteOffset )
    QuadPart = ByteOffset->QuadPart;
  v34 = Length;
  if ( Key )
    v91 = *Key;
LABEL_75:
  if ( (v29 & 6) == 4 )
    QuadPart = -1LL;
  if ( Event )
  {
    v69 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, v97, &v95, 0LL);
    v42 = v95;
    Eventa = (PRKEVENT)v95;
    if ( v69 < 0 )
    {
      ObfDereferenceObject(v23);
      return v69;
    }
    KeResetEvent((PRKEVENT)v95);
  }
  else
  {
    v42 = Eventa;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  p_Flags = &v23->Flags;
  v45 = v23->Flags;
  if ( (v45 & 2) == 0 )
  {
    if ( !v35 && (v45 & 0x280) == 0 )
    {
      if ( v42 )
        ObfDereferenceObject(v42);
      goto LABEL_196;
    }
    v62 = 0;
    v81 = 0;
    goto LABEL_101;
  }
  v46 = KeGetCurrentThread();
  --v46->KernelApcDisable;
  v47 = (volatile __int32 *)Object;
  if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    v23 = (struct _FILE_OBJECT *)Object;
    ObfReferenceObject(Object);
    goto LABEL_82;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v23 = (struct _FILE_OBJECT *)Object;
  v86 = IopAcquireFileObjectLock(Object);
  if ( !v85 )
  {
LABEL_82:
    v81 = 1;
    if ( !v35 && !(_DWORD)QuadPart || (_DWORD)QuadPart == -2 && HIDWORD(QuadPart) == -1 )
      QuadPart = v23->CurrentByteOffset.QuadPart;
    if ( v23->PrivateCacheMap )
    {
      v94 = 0uLL;
      FastIoWrite = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoWrite;
      if ( QuadPart < 0 && QuadPart != -1 )
      {
        if ( Eventa )
          ObfDereferenceObject(Eventa);
        _InterlockedExchange(v47 + 29, 0);
        v77 = Object;
        if ( *((_DWORD *)Object + 28) )
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
        ObfDereferenceObject(v77);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        ObfDereferenceObject(Object);
        return -1073741811;
      }
      if ( (MmVerifierData & 0x10) != 0 )
        v53 = (void *)VfFastIoSnapState(v49, v48, v50);
      else
        v53 = 0LL;
      LOBYTE(v51) = 1;
      v54 = FastIoWrite(v23, &QuadPart, v34, v51, v91, Buffer, &v94, DeviceObject);
      if ( v53 )
        VfFastIoCheckState(v53, (ULONG_PTR)FastIoWrite);
      if ( v54 && !(_DWORD)v94 )
      {
        v55 = KeGetCurrentThread();
        ++v55->WriteOperationCount;
        __incgsdword(0x2EE0u);
        v56 = KeGetCurrentThread();
        v57 = DWORD2(v94);
        v56->WriteTransferCount += DWORD2(v94);
        __addgsqword(0x2EF0u, v57);
        *(_OWORD *)&IoStatusBlock->Status = v94;
        v58 = (volatile __int32 *)Object;
        if ( Event )
        {
          v74 = Eventa;
          if ( (*((_DWORD *)Object + 20) & 0x8000000) == 0 )
            KeSetEvent(Eventa, 0, 0);
          ObfDereferenceObject(v74);
        }
        _InterlockedExchange(v58 + 29, 0);
        v59 = Object;
        if ( *((_DWORD *)Object + 28) )
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
        ObfDereferenceObject(v59);
        v60 = KeGetCurrentThread();
        v22 = v60->KernelApcDisable++ == -1;
        if ( v22
          && ($B476B70DB57F76B110DA5B9238C3E934 *)v60->ApcState.ApcListHead[0].Flink != &v60->152
          && !v60->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v60);
        }
        ObfDereferenceObject(Object);
        return v94;
      }
    }
    v42 = Eventa;
    v62 = 1;
LABEL_101:
    if ( QuadPart >= 0 || QuadPart == -1 )
    {
      if ( (*p_Flags & 0x4000000) == 0 )
        KeResetEvent(&v23->Event);
      v63 = IopAllocateIrpExReturn();
      Irp = (IRP *)v63;
      v90 = (PIRP)v63;
      if ( v63 )
      {
        *(_QWORD *)(v63 + 192) = v23;
        *(_QWORD *)(v63 + 152) = CurrentThread;
        *(_QWORD *)(v63 + 160) = 0LL;
        v65 = v97;
        *(_WORD *)(v63 + 64) = v97;
        *(_BYTE *)(v63 + 68) = 0;
        *(_QWORD *)(v63 + 104) = 0LL;
        *(_QWORD *)(v63 + 80) = v42;
        *(_QWORD *)(v63 + 72) = IoStatusBlock;
        *(_QWORD *)(v63 + 88) = ApcRoutine;
        *(_QWORD *)(v63 + 96) = ApcContext;
        v66 = *(_QWORD *)(v63 + 184);
        *(_DWORD *)(v66 - 72) = 4;
        *(_QWORD *)(v66 - 24) = v23;
        if ( (*p_Flags & 0x10) != 0 )
          *(_BYTE *)(v66 - 70) = 4;
        *(_QWORD *)(v63 + 24) = 0LL;
        *(_QWORD *)(v63 + 8) = 0LL;
        v67 = DeviceObject;
        v68 = DeviceObject->Flags;
        if ( (v68 & 4) != 0 )
        {
          if ( v34 )
          {
            PoolWithQuota_1 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(NonPagedPoolNxCacheAligned, v34);
            Irp->AssociatedIrp.MasterIrp = PoolWithQuota_1;
            memmove(PoolWithQuota_1, Buffer, v34);
            Irp->Flags = 48;
            v67 = DeviceObject;
            v65 = v97;
          }
          else
          {
            Irp->Flags = 16;
          }
        }
        else
        {
          Irp->Flags = 0;
          if ( (v68 & 0x10) != 0 )
          {
            if ( v34 )
            {
              Mdl = IoAllocateMdl(Buffer, v34, 0, 1u, Irp);
              v71 = (unsigned __int64)Mdl;
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              v72 = *(_BYTE *)(v66 - 72);
              MmProbeAndLockPages(Mdl, v97, IoReadAccess);
              if ( (MmTrackLockedPages & 1) != 0 )
                MmUpdateMdlTracker(v71, (__int64)DeviceObject->DriverObject->MajorFunction[v72], (__int64)DeviceObject);
              v67 = DeviceObject;
              v65 = v97;
            }
          }
          else
          {
            Irp->UserBuffer = Buffer;
          }
        }
        if ( (*p_Flags & 8) != 0 )
          Irp->Flags |= 0xA01u;
        else
          Irp->Flags |= 0xA00u;
        *(_DWORD *)(v66 - 64) = v34;
        *(_DWORD *)(v66 - 56) = v91;
        *(_QWORD *)(v66 - 48) = QuadPart;
        return IopSynchronousServiceTail(v67, Irp, (__int64)v23, 1, v65, v81, 1u);
      }
      else
      {
        IopAllocateIrpCleanup(v23, v42);
        return -1073741670;
      }
    }
    if ( v42 )
      ObfDereferenceObject(v42);
    if ( v62 )
    {
      _InterlockedExchange((volatile __int32 *)&v23->Busy, 0);
      v78 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v78);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v23 = (struct _FILE_OBJECT *)Object;
    }
LABEL_196:
    ObfDereferenceObject(v23);
    return -1073741811;
  }
  if ( Eventa )
    ObfDereferenceObject(Eventa);
  ObfDereferenceObject(v23);
  return v86;
}
