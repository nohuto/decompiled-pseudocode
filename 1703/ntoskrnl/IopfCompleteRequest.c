/*
 * XREFs of IopfCompleteRequest @ 0x1400DEE70
 * Callers:
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x1401F56E8 (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x140763120 (IovCompleteRequest.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140011010 (KiWakeOtherQueueWaiters.c)
 *     KiWakeQueueWaiter @ 0x140011680 (KiWakeQueueWaiter.c)
 *     IopDropIrp @ 0x140011708 (IopDropIrp.c)
 *     KiIncrementConcurrencyCount @ 0x14002E710 (KiIncrementConcurrencyCount.c)
 *     IopFreeIrpExtension @ 0x14003AE54 (IopFreeIrpExtension.c)
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14004FB00 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     IopCompleteRequest @ 0x1400DDEE0 (IopCompleteRequest.c)
 *     IofCompleteRequest @ 0x1400DEE40 (IofCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400E1A90 (KiTryUnwaitThread.c)
 *     KeAreInterruptsEnabled @ 0x1400E2B84 (KeAreInterruptsEnabled.c)
 *     KiSignalThread @ 0x1400E2F70 (KiSignalThread.c)
 *     IopDequeueIrpFromThread @ 0x1400ED860 (IopDequeueIrpFromThread.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x1400F11C0 (IopFreeIrp.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     PoDeviceReleaseIrp @ 0x140145650 (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x140145734 (PoDeviceAcquireIrp.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KeIsThreadRunning @ 0x1401FCAFC (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401FEC08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1402535C8 (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140763334 (IovFreeIrpPrivate.c)
 */

void __fastcall IopfCompleteRequest(PIRP Irp, unsigned __int8 a2)
{
  CHAR StackCount; // cl
  unsigned __int8 v4; // r15
  unsigned __int64 CurrentLocation; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  char v7; // r14
  int Flink; // r12d
  CHAR v9; // al
  UCHAR *p_Control; // rdi
  struct _LIST_ENTRY *Status; // rax
  UCHAR v12; // al
  unsigned __int8 v13; // r15
  PDEVICE_OBJECT DeviceObject; // rsi
  ULONG Flags; // edx
  __int64 v16; // rsi
  PFILE_OBJECT OriginalFileObject; // rcx
  PVPB Vpb; // rdx
  PVPB v19; // rdx
  PDEVICE_OBJECT v20; // rdx
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  PDEVICE_OBJECT v22; // rcx
  ULONG DeviceType; // eax
  PCHAR v24; // rcx
  ULONG v25; // edi
  PMDL i; // rdi
  ULONG v27; // eax
  unsigned __int64 v28; // rcx
  PFILE_OBJECT v29; // r14
  PETHREAD Thread; // rsi
  volatile signed __int32 *v31; // rdi
  unsigned __int8 v32; // r12
  unsigned __int8 v33; // di
  int v34; // edi
  PKEVENT UserEvent; // rsi
  int v36; // r12d
  LONG SignalState; // eax
  bool v38; // zf
  LIST_ENTRY *p_WaitListHead; // r12
  LIST_ENTRY *v40; // r13
  int ApcEnvironment; // eax
  void (__fastcall *v42)(__int64, __int64, _QWORD *, __int64 *, _QWORD *); // r9
  char v43; // r14
  struct _KPRCB *v44; // r15
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY **p_Blink; // rdx
  KPROCESSOR_MODE ApcMode; // al
  PVOID **v48; // rcx
  PVOID **j; // rax
  PVOID *v50; // rdx
  PVOID *v51; // rcx
  struct _LIST_ENTRY *v52; // rdi
  __int64 v53; // rdx
  __int64 Blink_low; // rcx
  char v55; // al
  int v56; // eax
  __int64 v57; // rcx
  struct _LIST_ENTRY *v58; // rbx
  struct _LIST_ENTRY *v59; // rdx
  struct _LIST_ENTRY *v60; // rcx
  PIO_COMPLETION_CONTEXT CompletionContext; // rax
  __int64 Port; // rdi
  unsigned __int8 CurrentIrql; // al
  _QWORD *v64; // rdx
  _QWORD **v65; // r13
  struct _KPRCB *CurrentPrcb; // r10
  _KTHREAD *CurrentThread; // rsi
  _QWORD *v68; // r15
  _QWORD *v69; // rsi
  __int64 v70; // rcx
  _QWORD *v71; // rax
  __int64 v72; // r14
  char v73; // r8
  char v74; // di
  __int64 v75; // rax
  PFILE_OBJECT v76; // rdx
  PETHREAD v77; // rsi
  unsigned __int8 v78; // r14
  struct _LIST_ENTRY *v79; // rdx
  LIST_ENTRY *p_ThreadListEntry; // rax
  struct _LIST_ENTRY *v81; // rcx
  struct _LIST_ENTRY *v82; // rax
  PDEVICE_OBJECT *v83; // rcx
  int v84; // edx
  struct _LIST_ENTRY *v85; // rcx
  struct _KPRCB *v86; // r13
  char v87; // cl
  __int64 v88; // r8
  PMDL MdlAddress; // rcx
  struct _IRP *MasterIrp; // rsi
  struct _MDL *Next; // rdi
  struct _KPRCB *v92; // rax
  KIRQL v93; // al
  __int64 *v94; // rcx
  KIRQL v95; // si
  PETHREAD v96; // r10
  ULONG_PTR Information; // rax
  LIST_ENTRY *v98; // rdx
  struct _LIST_ENTRY *v99; // rcx
  struct _LIST_ENTRY *v100; // rax
  char v101; // al
  _KTHREAD *v102; // r9
  unsigned __int8 v103; // al
  __int64 v104; // rdx
  __int64 v105; // r9
  struct _KPRCB *v106; // rdx
  __int64 v107; // rcx
  char v108; // al
  int v109; // r10d
  struct _LIST_ENTRY *v110; // r9
  struct _LIST_ENTRY *v111; // rax
  _KTHREAD *v112; // r9
  unsigned __int8 v113; // al
  __int64 v114; // rdx
  __int64 v115; // r9
  struct _KPRCB *v116; // r8
  __int64 v117; // rcx
  char v118; // al
  int v119; // r10d
  struct _LIST_ENTRY *v120; // r9
  struct _LIST_ENTRY *v121; // rax
  unsigned __int8 IsThreadRunning; // al
  __int64 v123; // rdx
  PVOID *v124; // rcx
  _QWORD *v125; // rax
  PVOID *v126; // rcx
  PVOID **v127; // rax
  char v128; // cl
  __int64 v129; // rdx
  __int64 *v130; // rax
  signed __int32 v131[6]; // [rsp+8h] [rbp-100h] BYREF
  struct _KPRCB *v132; // [rsp+48h] [rbp-C0h]
  struct _IO_STACK_LOCATION *v133; // [rsp+50h] [rbp-B8h] BYREF
  CHAR *AuxiliaryBuffer; // [rsp+58h] [rbp-B0h] BYREF
  struct _KPRCB *v135; // [rsp+60h] [rbp-A8h]
  struct _LIST_ENTRY *v136; // [rsp+68h] [rbp-A0h]
  struct _KPRCB *v137; // [rsp+70h] [rbp-98h]
  __int64 v138; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int64 *v139; // [rsp+80h] [rbp-88h]
  unsigned __int8 v140; // [rsp+88h] [rbp-80h]
  int v141; // [rsp+90h] [rbp-78h] BYREF
  int v142; // [rsp+94h] [rbp-74h] BYREF
  int v143; // [rsp+98h] [rbp-70h] BYREF
  _KTHREAD *v144; // [rsp+A0h] [rbp-68h]
  __int64 v145; // [rsp+A8h] [rbp-60h]
  __int64 v146; // [rsp+B0h] [rbp-58h] BYREF
  int v147; // [rsp+B8h] [rbp-50h]
  LIST_ENTRY *v148; // [rsp+C0h] [rbp-48h]
  __int64 v149; // [rsp+C8h] [rbp-40h] BYREF
  char v150[8]; // [rsp+D0h] [rbp-38h] BYREF
  char v151[16]; // [rsp+D8h] [rbp-30h] BYREF
  void *retaddr; // [rsp+130h] [rbp+28h]
  int v153; // [rsp+138h] [rbp+30h]
  __int64 v154; // [rsp+138h] [rbp+30h]
  __int64 v155; // [rsp+138h] [rbp+30h]
  unsigned __int8 v157; // [rsp+140h] [rbp+38h]
  int v158; // [rsp+148h] [rbp+40h] BYREF
  int v159; // [rsp+150h] [rbp+48h] BYREF

  StackCount = Irp->StackCount;
  v4 = a2;
  AuxiliaryBuffer = 0LL;
  CurrentLocation = (unsigned __int8)Irp->CurrentLocation;
  if ( (char)CurrentLocation > (char)(StackCount + 1) || Irp->Type != 6 )
    KeBugCheckEx(0x44u, (ULONG_PTR)Irp, 0x117EuLL, 0LL, 0LL);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (char)CurrentLocation <= StackCount && CurrentStackLocation->MajorFunction == 22 )
  {
    v7 = 1;
    PoDeviceReleaseIrp(Irp, CurrentStackLocation->MinorFunction, CurrentStackLocation->DeviceObject);
  }
  else
  {
    v7 = 0;
  }
  if ( (Irp[1].Size & 0x200) != 0 )
    Flink = (int)Irp[1].ThreadListEntry.Flink;
  else
    Flink = 0;
  v9 = Irp->StackCount;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  if ( Irp->CurrentLocation <= (char)(v9 + 1) )
  {
    p_Control = &CurrentStackLocation->Control;
    while ( 1 )
    {
      Irp->PendingReturned = *p_Control & 1;
      Status = (struct _LIST_ENTRY *)Irp->IoStatus.Status;
      if ( (int)Status >= 0 )
        goto LABEL_11;
      if ( (_DWORD)Status != Flink )
      {
        *p_Control |= 2u;
        Flink = (int)Status;
        HIBYTE(Irp[1].Size) |= 2u;
        Irp[1].ThreadListEntry.Flink = Status;
      }
      if ( Irp->IoStatus.Status >= 0 )
      {
LABEL_11:
        v12 = *p_Control;
        if ( (*p_Control & 0x40) != 0 )
          goto LABEL_12;
      }
      else
      {
        v12 = *p_Control;
        if ( (*p_Control & 0x80u) != 0 )
          goto LABEL_12;
      }
      if ( Irp->Cancel && (v12 & 0x20) != 0 )
      {
LABEL_12:
        v13 = *(p_Control - 2);
        *p_Control = v12 & 2;
        *((_WORD *)p_Control - 1) = 0;
        *(_QWORD *)(p_Control + 5) = 0LL;
        *(_QWORD *)(p_Control + 13) = 0LL;
        *(_QWORD *)(p_Control + 21) = 0LL;
        *(_QWORD *)(p_Control + 45) = 0LL;
        if ( Irp->CurrentLocation == Irp->StackCount + 1 )
          DeviceObject = 0LL;
        else
          DeviceObject = Irp->Tail.Overlay.CurrentStackLocation->DeviceObject;
        if ( v7 )
          PoDeviceAcquireIrp(Irp, v13, DeviceObject);
        if ( (*(unsigned int (__fastcall **)(PDEVICE_OBJECT, PIRP, _QWORD))(p_Control + 53))(
               DeviceObject,
               Irp,
               *(_QWORD *)(p_Control + 61)) == -1073741802 )
          return;
        if ( v7 )
          PoDeviceReleaseIrp(Irp, v13, DeviceObject);
        goto LABEL_25;
      }
      if ( Irp->PendingReturned && Irp->CurrentLocation <= Irp->StackCount )
        Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      *p_Control &= 2u;
      *((_WORD *)p_Control - 1) = 0;
      *(_QWORD *)(p_Control + 5) = 0LL;
      *(_QWORD *)(p_Control + 13) = 0LL;
      *(_QWORD *)(p_Control + 21) = 0LL;
      *(_QWORD *)(p_Control + 45) = 0LL;
LABEL_25:
      ++Irp->CurrentLocation;
      p_Control += 72;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      {
        v4 = a2;
        break;
      }
    }
  }
  Flags = Irp->Flags;
  if ( (Flags & 8) == 0 )
  {
    v16 = 4194817LL;
    if ( Irp->IoStatus.Status == 260 )
    {
      Information = Irp->IoStatus.Information;
      if ( Information > 2 )
      {
        if ( Information - 2684354563u <= 0x16 && _bittest64(&v16, Information - 2684354563u) )
        {
          AuxiliaryBuffer = Irp->Tail.Overlay.AuxiliaryBuffer;
          Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
        }
        else
        {
          Irp->IoStatus.Status = -1073741191;
        }
      }
    }
    if ( v4 )
      goto LABEL_43;
    OriginalFileObject = Irp->Tail.Overlay.OriginalFileObject;
    if ( !OriginalFileObject || (Flags & 0x400) != 0 )
      goto LABEL_43;
    Vpb = OriginalFileObject->Vpb;
    if ( (!Vpb || (v20 = Vpb->DeviceObject) == 0LL)
      && ((OriginalFileObject->Flags & 0x800) != 0
       || (v19 = OriginalFileObject->DeviceObject->Vpb) == 0LL
       || (v20 = v19->DeviceObject) == 0LL) )
    {
      v20 = OriginalFileObject->DeviceObject;
    }
    AttachedDevice = v20->AttachedDevice;
    if ( AttachedDevice )
    {
      CurrentLocation = (unsigned __int64)OriginalFileObject->FileObjectExtension;
      if ( CurrentLocation )
      {
        if ( (void *)CurrentLocation != IopRevocationExtension )
        {
          v83 = *(PDEVICE_OBJECT **)(CurrentLocation + 16);
          if ( v83 )
          {
            v22 = *v83;
            if ( v22 )
            {
              while ( v20 != v22 )
              {
                v20 = v20->AttachedDevice;
                if ( !v20 )
                  goto LABEL_38;
              }
              goto LABEL_40;
            }
          }
        }
      }
      do
      {
LABEL_38:
        v20 = AttachedDevice;
        AttachedDevice = AttachedDevice->AttachedDevice;
      }
      while ( AttachedDevice );
    }
    v22 = v20;
LABEL_40:
    DeviceType = v22->DeviceType;
    if ( DeviceType == 8 || DeviceType == 20 )
      v4 = 1;
LABEL_43:
    v24 = Irp->Tail.Overlay.AuxiliaryBuffer;
    if ( v24 )
    {
      ExFreePoolWithTag(v24, 0);
      Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    }
    v157 = v4;
    if ( (Irp->AllocationFlags & 0x40) != 0 )
      IopFreeIrpExtension((__int64)Irp, -1, 1);
    v25 = Irp->Flags;
    if ( (v25 & 0x402) == 0 )
    {
      for ( i = Irp->MdlAddress; i; i = i->Next )
        MmUnlockPages(i);
      if ( (Irp->Flags & 0x2000) != 0 )
        ObfDereferenceObject(Irp->Tail.Overlay.Thread);
      v27 = Irp->Flags;
      if ( (v27 & 0x800) != 0 && !Irp->PendingReturned )
      {
        if ( Irp->IoStatus.Status == 260 )
        {
          v28 = Irp->IoStatus.Information - 2684354563u;
          if ( v28 <= 0x16 )
          {
            if ( _bittest64(&v16, v28) )
              Irp->Tail.Overlay.AuxiliaryBuffer = AuxiliaryBuffer;
          }
        }
        return;
      }
      v29 = Irp->Tail.Overlay.OriginalFileObject;
      Thread = Irp->Tail.Overlay.Thread;
      v133 = (struct _IO_STACK_LOCATION *)v29;
      if ( (v27 & 0x2000) != 0 )
      {
        v146 = 0LL;
        if ( Irp->PendingReturned
          || (Irp->IoStatus.Status & 0xC0000000) != 0xC0000000
          && ((v29->Flags & 0x2000000) == 0 || Irp->IoStatus.Status < 0) )
        {
          CompletionContext = v29->CompletionContext;
          if ( !CompletionContext )
          {
            IopCompleteRequest(
              (__int64)&Irp->Tail,
              (__int64)v150,
              &v146,
              (__int64 *)&Irp->Tail.Overlay.OriginalFileObject,
              &v146);
            return;
          }
          Port = (__int64)CompletionContext->Port;
          Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)CompletionContext->Key;
          Irp->Tail.Overlay.PacketType = 0;
          v138 = 0LL;
          v139 = (volatile signed __int64 *)(Port + 64);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v140 = CurrentIrql;
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireQueuedSpinLockInstrumented(&v138, Port + 64);
          }
          else
          {
            v64 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(Port + 64), (__int64)&v138);
            if ( v64 )
              KxWaitForLockOwnerShip((__int64)&v138, v64);
          }
          Irp->Flags |= 0x10000u;
          if ( *(_BYTE *)(Port + 72) )
          {
            v74 = 1;
          }
          else
          {
            v153 = (char)v4;
            v65 = (_QWORD **)(Port + 8);
            v145 = KeGetCurrentIrql();
            __writecr8(2uLL);
            CurrentPrcb = KeGetCurrentPrcb();
            v132 = CurrentPrcb;
            CurrentThread = CurrentPrcb->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
              EtwTraceEnqueueWork(CurrentThread, v123, IsThreadRunning);
            }
            if ( v4 && (*(_BYTE *)(Port + 1) & 2) != 0 )
              v153 = 0;
            v159 = 0;
            while ( _interlockedbittestandset((volatile signed __int32 *)Port, 7u) )
            {
              do
                KeYieldProcessorEx(&v159);
              while ( (*(_DWORD *)Port & 0x80u) != 0 );
            }
            v147 = *(_DWORD *)(Port + 4);
            if ( *v65 != v65
              && *(_DWORD *)(Port + 40) < *(_DWORD *)(Port + 44)
              && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)Port || CurrentThread->WaitReason != 15) )
            {
              v68 = *v65;
              do
              {
                v69 = v68;
                v68 = (_QWORD *)*v68;
                if ( *((_BYTE *)v69 + 16) != 3 )
                  break;
                v70 = *v69;
                v71 = (_QWORD *)v69[1];
                if ( *(_QWORD **)(*v69 + 8LL) != v69 || (_QWORD *)*v71 != v69 )
                  __fastfail(3u);
                *v71 = v70;
                *(_QWORD *)(v70 + 8) = v71;
                v72 = v69[3];
                v141 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v72 + 64), 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v141);
                  while ( *(_QWORD *)(v72 + 64) );
                }
                if ( *(_BYTE *)(v72 + 388) == 5 )
                  v73 = KiSignalThread(v132, v72, &Irp->Tail.CompletionKey + 6, v69);
                else
                  v73 = 0;
                *(_QWORD *)(v72 + 64) = 0LL;
                ++*((_BYTE *)v69 + 17);
                if ( v73 )
                  goto LABEL_153;
              }
              while ( v68 != v65 );
            }
            v84 = *(_DWORD *)(Port + 4);
            *(_DWORD *)(Port + 4) = v84 + 1;
            v85 = *(struct _LIST_ENTRY **)(Port + 32);
            if ( v85->Flink != (struct _LIST_ENTRY *)(Port + 24) )
              __fastfail(3u);
            Irp->Tail.Overlay.ListEntry.Flink = (struct _LIST_ENTRY *)(Port + 24);
            Irp->Tail.Overlay.ListEntry.Blink = v85;
            v85->Flink = &Irp->Tail.Overlay.ListEntry;
            *(_QWORD *)(Port + 32) = &Irp->Tail.Overlay.ListEntry;
            if ( !v84 && *v65 != v65 )
              KiWakeOtherQueueWaiters((__int64)v132, Port);
LABEL_153:
            _InterlockedAnd((volatile signed __int32 *)Port, 0xFFFFFF7F);
            KiExitDispatcher((_DWORD)v132, 0, 1, v153, v145);
            v74 = 0;
          }
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v138, retaddr);
            goto LABEL_157;
          }
          _m_prefetchw(&v138);
          v75 = v138;
          if ( !v138 )
          {
            if ( (__int64 *)_InterlockedCompareExchange64(v139, 0LL, (signed __int64)&v138) == &v138 )
            {
LABEL_157:
              __writecr8(v140);
              if ( !v74 )
                return;
              v76 = Irp->Tail.Overlay.OriginalFileObject;
LABEL_159:
              IopDropIrp(Irp, (ULONG_PTR)v76);
              return;
            }
            v75 = KxWaitForLockChainValid(&v138);
          }
          v138 = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v75 + 8), 1uLL);
          goto LABEL_157;
        }
      }
      if ( Thread )
      {
        v31 = (volatile signed __int32 *)&Thread[1].WaitBlockFill11[16];
        v32 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(&Thread[1].WaitBlockFill11[16]);
        }
        else
        {
          if ( _interlockedbittestandset64(v31, 0LL) )
            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&Thread[1].WaitBlockFill11[16]);
          v29 = (PFILE_OBJECT)v133;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseSpinLockInstrumented(&Thread[1].WaitBlockFill11[16], retaddr);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)v31, 0LL);
          v29 = (PFILE_OBJECT)v133;
        }
        __writecr8(v32);
      }
      if ( Irp->Cancel )
      {
        v93 = KeAcquireQueuedSpinLock(0xBuLL);
        v94 = (__int64 *)IopDeadIrps;
        v95 = v93;
        v96 = Irp->Tail.Overlay.Thread;
        if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
        {
LABEL_220:
          if ( v96 )
          {
            KeInitializeApc(
              (_DWORD)Irp + 120,
              (_DWORD)v96,
              Irp->ApcEnvironment,
              (unsigned int)IopCompleteRequest,
              (__int64)IopAbortRequest,
              0LL,
              0,
              0LL);
            KeInsertQueueApc((__int64)&Irp->Tail, (__int64)v29, (__int64)AuxiliaryBuffer, v4);
            KeReleaseQueuedSpinLock(0xBuLL, v95);
            return;
          }
        }
        else
        {
          while ( v94 - 4 != (__int64 *)Irp )
          {
            v94 = (__int64 *)*v94;
            if ( v94 == &IopDeadIrps )
              goto LABEL_220;
          }
          v129 = *v94;
          v130 = (__int64 *)v94[1];
          if ( *(__int64 **)(*v94 + 8) != v94 || (__int64 *)*v130 != v94 )
            __fastfail(3u);
          *v130 = v129;
          *(_QWORD *)(v129 + 8) = v130;
          v94[1] = (__int64)v94;
          *v94 = (__int64)v94;
          ObfDereferenceObject(v96);
        }
        KeReleaseQueuedSpinLock(0xBuLL, v95);
        v76 = v29;
        goto LABEL_159;
      }
      if ( Thread == KeGetCurrentThread()
        && !KeGetCurrentThread()->SpecialApcDisable
        && (unsigned __int8)KeAreInterruptsEnabled()
        && !KeGetCurrentIrql()
        && KeGetCurrentThread()->ApcStateIndex != 1 )
      {
        v149 = 1LL;
        v33 = KeGetCurrentIrql();
        __writecr8(1uLL);
        IopCompleteRequest((__int64)&Irp->Tail, (__int64)v151, &v149, (__int64 *)&v133, &AuxiliaryBuffer);
        __writecr8(v33);
        return;
      }
      ApcEnvironment = Irp->ApcEnvironment;
      Irp->Tail.Apc.Type = 18;
      Irp->Tail.Apc.Size = 88;
      if ( ApcEnvironment == 2 )
        LOBYTE(ApcEnvironment) = Thread->ApcStateIndex;
      Irp->Tail.Apc.ApcStateIndex = ApcEnvironment;
      v42 = IopCompleteRequest;
      Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)Thread;
      Irp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
      Irp->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
      Irp->Tail.Overlay.ListEntry.Flink = 0LL;
      *(_WORD *)((char *)&Irp->Tail.CompletionKey + 81) = 0;
      Irp->Tail.Overlay.ListEntry.Blink = 0LL;
      v43 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v44 = KeGetCurrentPrcb();
      v142 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v142);
        while ( Thread->ThreadLock );
      }
      if ( (Thread->MiscFlags & 0x4000) != 0 && !Irp->Tail.Apc.Inserted )
      {
        Blink = Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
        Irp->Tail.Overlay.CurrentStackLocation = v133;
        Irp->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)AuxiliaryBuffer;
        Irp->Tail.Apc.Inserted = 1;
        if ( !Irp->Tail.Apc.ApcStateIndex && BYTE2(Blink[36].Blink) )
        {
          p_Blink = &Blink[37].Blink;
        }
        else
        {
          p_Blink = &Blink[9].Blink;
          Irp->Tail.Apc.ApcStateIndex = BYTE2(Blink[36].Blink);
        }
        ApcMode = Irp->Tail.Apc.ApcMode;
        if ( Irp->Tail.Overlay.ListEntry.Flink )
        {
          if ( ApcMode && (void (__fastcall __noreturn *)())Irp->Tail.Overlay.Thread == KiSchedulerApcTerminate )
          {
            BYTE2(Blink[12].Flink) = 1;
            v124 = &Irp->Tail.Overlay.DriverContext[2];
            CurrentLocation = (unsigned __int64)&p_Blink[2 * ApcMode];
            v125 = *(_QWORD **)CurrentLocation;
            if ( *(_QWORD *)(*(_QWORD *)CurrentLocation + 8LL) != CurrentLocation )
              __fastfail(3u);
            *v124 = v125;
            Irp->Tail.Overlay.DriverContext[3] = (PVOID)CurrentLocation;
            v125[1] = v124;
            *(_QWORD *)CurrentLocation = v124;
          }
          else
          {
            v126 = &Irp->Tail.Overlay.DriverContext[2];
            CurrentLocation = (unsigned __int64)&p_Blink[2 * ApcMode];
            v127 = *(PVOID ***)(CurrentLocation + 8);
            if ( *v127 != (PVOID *)CurrentLocation )
              __fastfail(3u);
            *v126 = (PVOID)CurrentLocation;
            Irp->Tail.Overlay.DriverContext[3] = v127;
            *v127 = v126;
            *(_QWORD *)(CurrentLocation + 8) = v126;
          }
        }
        else
        {
          v48 = (PVOID **)&p_Blink[2 * ApcMode];
          for ( j = (PVOID **)v48[1]; j != v48; j = (PVOID **)j[1] )
          {
            if ( !j[4] )
              break;
          }
          v50 = *j;
          v51 = &Irp->Tail.Overlay.DriverContext[2];
          if ( (*j)[1] != j )
            __fastfail(3u);
          *v51 = v50;
          Irp->Tail.Overlay.DriverContext[3] = j;
          v50[1] = v51;
          *j = v51;
        }
        v52 = Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink;
        v53 = (unsigned __int8)Irp->Tail.Apc.ApcMode;
        Blink_low = BYTE2(v52[36].Blink);
        if ( Irp->Tail.Apc.ApcStateIndex == (_DWORD)Blink_low )
        {
          if ( v52 != (struct _LIST_ENTRY *)v44->CurrentThread )
          {
            if ( (_BYTE)v53 )
            {
              if ( BYTE4(v52[24].Flink) == 5 && HIBYTE(v52[24].Flink) == 1 )
              {
                v128 = (char)v52[7].Flink;
                if ( (unsigned __int8)((v128 & 7) - 3) > 1u
                  && ((HIDWORD(v52[7].Flink) & 0x10) != 0 || BYTE2(v52[12].Flink)) )
                {
                  LOBYTE(v52[7].Flink) = v128 | 0x40;
                  if ( (unsigned __int8)KiSignalThread(v44, v52, 192LL, 0LL) )
                    BYTE2(v52[12].Flink) = 1;
                }
              }
              goto LABEL_126;
            }
            BYTE1(v52[12].Flink) = 1;
            _InterlockedOr(v131, 0);
            v55 = BYTE4(v52[24].Flink);
            if ( v55 != 2 )
            {
              if ( v55 == 5
                && !BYTE6(v52[24].Flink)
                && !HIWORD(v52[30].Flink)
                && (!Irp->Tail.Overlay.ListEntry.Flink || !WORD2(v52[30].Flink) && !LOBYTE(v52[12].Flink)) )
              {
                v56 = (__int64)v52[7].Flink & 7;
                if ( v56 == 1 || v56 == 4 )
                {
                  v57 = (__int64)v52[14].Blink;
                  if ( v57 )
                    KiIncrementConcurrencyCount(v57, (__int64)v52);
                  v58 = v52[44].Blink;
                  if ( v58 )
                  {
                    v143 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)&v58[1425], 0LL) )
                    {
                      do
                        KeYieldProcessorEx(&v143);
                      while ( v58[1425].Flink );
                    }
                    if ( v52[44].Blink )
                    {
                      v59 = v52[13].Blink;
                      v60 = v52[14].Flink;
                      if ( v59->Blink != (struct _LIST_ENTRY *)&v52[13].Blink
                        || v60->Flink != (struct _LIST_ENTRY *)&v52[13].Blink )
                      {
                        __fastfail(3u);
                      }
                      v60->Flink = v59;
                      v59->Blink = v60;
                      v52[44].Blink = 0LL;
                    }
                    _InterlockedAnd64((volatile signed __int64 *)&v58[1425], 0LL);
                  }
                  BYTE4(v52[24].Flink) = 7;
                  v52[13].Blink = (struct _LIST_ENTRY *)v44->DeferredReadyListHead.Next;
                  v44->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)&v52[13].Blink;
                  v52[12].Blink = (struct _LIST_ENTRY *)256;
                }
                LOBYTE(v52[7].Flink) |= 0x20u;
              }
              goto LABEL_126;
            }
            Blink_low = LODWORD(v52[33].Blink);
            LODWORD(Blink_low) = Blink_low & 0x7FFFFFFF;
            if ( KeGetPcr()->Prcb.Number != (_DWORD)Blink_low )
            {
              v92 = KeGetCurrentPrcb();
              LOBYTE(v53) = 1;
              ++v92->SynchCounters.IpiSendSoftwareInterruptCount;
              HalSendSoftwareInterrupt(Blink_low, v53, CurrentLocation, v42);
              goto LABEL_126;
            }
            goto LABEL_214;
          }
          if ( (_BYTE)v53 || HIDWORD(v52[30].Flink) && (Irp->Tail.Overlay.ListEntry.Flink || HIWORD(v52[30].Flink)) )
            goto LABEL_126;
          BYTE1(v52[12].Flink) = 1;
          if ( v43 )
          {
LABEL_214:
            LOBYTE(Blink_low) = 1;
            HalRequestSoftwareInterrupt(Blink_low);
            goto LABEL_126;
          }
          HIDWORD(v52[7].Flink) |= 0x40u;
        }
      }
LABEL_126:
      Thread->ThreadLock = 0LL;
      KiExitDispatcher((_DWORD)v44, 0, 1, v157, v43);
      return;
    }
    if ( (v25 & 0x440) == 0 )
    {
      IopDequeueIrpFromThread(Irp);
      KeInitializeApc(
        (_DWORD)Irp + 120,
        Irp->Tail.Overlay.Thread,
        Irp->ApcEnvironment,
        (unsigned int)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc((__int64)&Irp->Tail, 0LL, 0LL, v4);
      return;
    }
    *(_OWORD *)&Irp->UserIosb->Status = *(_OWORD *)&Irp->IoStatus.Status;
    v34 = v25 & 0x42;
    if ( v34 )
    {
      v77 = Irp->Tail.Overlay.Thread;
      v78 = 0;
      if ( v77 )
      {
        v78 = KeGetCurrentIrql();
        __writecr8(2uLL);
        KxAcquireSpinLock((PKSPIN_LOCK)&v77[1].WaitBlockFill11[16]);
      }
      v79 = Irp->ThreadListEntry.Flink;
      p_ThreadListEntry = &Irp->ThreadListEntry;
      v81 = Irp->ThreadListEntry.Blink;
      if ( v79->Blink != &Irp->ThreadListEntry || v81->Flink != p_ThreadListEntry )
        __fastfail(3u);
      v81->Flink = v79;
      v79->Blink = v81;
      Irp->ThreadListEntry.Blink = &Irp->ThreadListEntry;
      p_ThreadListEntry->Flink = p_ThreadListEntry;
      if ( v77 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&v77[1].WaitBlockFill11[16], retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)&v77[1].WaitBlockFill11[16], 0LL);
        __writecr8(v78);
      }
    }
    UserEvent = Irp->UserEvent;
    if ( (UserEvent->Header.Type & 0x7F) != 0 )
    {
      v36 = 0;
    }
    else
    {
      if ( UserEvent->Header.SignalState == 1 )
      {
LABEL_86:
        if ( v34 )
        {
          if ( IopDispatchFreeIrp )
            IovFreeIrpPrivate((ULONG_PTR)Irp);
          else
            IopFreeIrp((ULONG_PTR)Irp);
        }
        return;
      }
      v36 = 1;
    }
    v145 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v158 = 0;
    v132 = KeGetCurrentPrcb();
    while ( _interlockedbittestandset(&UserEvent->Header.Lock, 7u) )
    {
      do
        KeYieldProcessorEx(&v158);
      while ( (UserEvent->Header.LockNV & 0x80u) != 0 );
    }
    SignalState = UserEvent->Header.SignalState;
    UserEvent->Header.SignalState = 1;
    if ( SignalState )
    {
LABEL_85:
      _InterlockedAnd(&UserEvent->Header.Lock, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v132, 0, 1, v4, v145);
      goto LABEL_86;
    }
    v38 = v36 == 0;
    p_WaitListHead = &UserEvent->Header.WaitListHead;
    if ( v38 )
    {
      v40 = p_WaitListHead->Flink;
      if ( p_WaitListHead->Flink == p_WaitListHead )
        goto LABEL_85;
      while ( 1 )
      {
        v98 = v40;
        v40 = v40->Flink;
        v136 = v98;
        v99 = v98->Flink;
        v100 = v98->Blink;
        if ( v98->Flink->Blink != v98 || v100->Flink != v98 )
          __fastfail(3u);
        v100->Flink = v99;
        v99->Blink = v100;
        v101 = (char)v98[1].Flink;
        if ( v101 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(v132, v98, WORD1(v98[1].Flink), 0LL) )
          {
            v38 = UserEvent->Header.SignalState-- == 1;
            if ( v38 )
              goto LABEL_85;
          }
        }
        else
        {
          if ( v101 == 2 )
          {
            BYTE1(v98[1].Flink) = 5;
            v154 = (__int64)v98[1].Blink;
            v135 = (struct _KPRCB *)(v154 + 8);
            v98->Flink = 0LL;
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v137 = KeGetCurrentPrcb();
            v102 = v137->CurrentThread;
            v144 = v102;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v103 = KeIsThreadRunning(v102);
              EtwTraceEnqueueWork(v105, v104, v103);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v154);
            v106 = v135;
            v107 = v154;
            if ( *(struct _KPRCB **)&v106->MxCsr == v106
              || *(_DWORD *)(v154 + 40) >= *(_DWORD *)(v154 + 44)
              || v144->Queue == (_DISPATCHER_HEADER *volatile)v154 && v144->WaitReason == 15 )
            {
LABEL_262:
              v109 = *(_DWORD *)(v107 + 4);
              *(_DWORD *)(v107 + 4) = v109 + 1;
              v110 = *(struct _LIST_ENTRY **)(v107 + 32);
              if ( v110->Flink != (struct _LIST_ENTRY *)(v107 + 24) )
                __fastfail(3u);
              v111 = v136;
              v136->Flink = (struct _LIST_ENTRY *)(v107 + 24);
              v111->Blink = v110;
              v110->Flink = v111;
              *(_QWORD *)(v107 + 32) = v111;
              if ( !v109 && *(struct _KPRCB **)&v106->MxCsr != v106 )
              {
                KiWakeOtherQueueWaiters((__int64)v137, v107);
                v107 = v154;
              }
            }
            else
            {
              v108 = KiWakeQueueWaiter((__int64)v137, v154, (__int64)v136);
              v107 = v154;
              if ( !v108 )
              {
                v106 = v135;
                goto LABEL_262;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v107, 0xFFFFFF7F);
            v38 = UserEvent->Header.SignalState-- == 1;
            if ( v38 )
              goto LABEL_85;
            goto LABEL_269;
          }
          KiTryUnwaitThread(v132, v98, 256LL, 0LL);
        }
LABEL_269:
        if ( v40 == p_WaitListHead )
          goto LABEL_85;
      }
    }
    v82 = p_WaitListHead->Flink;
    if ( p_WaitListHead->Flink == p_WaitListHead )
    {
LABEL_174:
      UserEvent->Header.WaitListHead.Blink = &UserEvent->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
      goto LABEL_85;
    }
    v86 = v132;
    while ( 1 )
    {
      v136 = v82;
      v148 = v82->Flink;
      v87 = (char)v82[1].Flink;
      if ( v87 == 1 )
      {
        v88 = WORD1(v82[1].Flink);
      }
      else
      {
        if ( v87 == 2 )
        {
          BYTE1(v82[1].Flink) = 5;
          v155 = (__int64)v82[1].Blink;
          v137 = (struct _KPRCB *)(v155 + 8);
          v82->Flink = 0LL;
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v135 = KeGetCurrentPrcb();
          v112 = v135->CurrentThread;
          v144 = v112;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v113 = KeIsThreadRunning(v112);
            EtwTraceEnqueueWork(v115, v114, v113);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v155);
          v116 = v137;
          v117 = v155;
          if ( *(struct _KPRCB **)&v116->MxCsr == v116
            || *(_DWORD *)(v155 + 40) >= *(_DWORD *)(v155 + 44)
            || v144->Queue == (_DISPATCHER_HEADER *volatile)v155 && v144->WaitReason == 15 )
          {
LABEL_282:
            v119 = *(_DWORD *)(v117 + 4);
            *(_DWORD *)(v117 + 4) = v119 + 1;
            v120 = *(struct _LIST_ENTRY **)(v117 + 32);
            if ( v120->Flink != (struct _LIST_ENTRY *)(v117 + 24) )
              __fastfail(3u);
            v121 = v136;
            v136->Flink = (struct _LIST_ENTRY *)(v117 + 24);
            v121->Blink = v120;
            v120->Flink = v121;
            *(_QWORD *)(v117 + 32) = v121;
            if ( !v119 && *(struct _KPRCB **)&v116->MxCsr != v116 )
            {
              KiWakeOtherQueueWaiters((__int64)v135, v117);
              v117 = v155;
            }
          }
          else
          {
            v118 = KiWakeQueueWaiter((__int64)v135, v155, (__int64)v136);
            v117 = v155;
            if ( !v118 )
            {
              v116 = v137;
              goto LABEL_282;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v117, 0xFFFFFF7F);
          goto LABEL_195;
        }
        v88 = 256LL;
      }
      KiTryUnwaitThread(v86, v82, v88, 0LL);
LABEL_195:
      v82 = v148;
      if ( v148 == p_WaitListHead )
        goto LABEL_174;
    }
  }
  MdlAddress = Irp->MdlAddress;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( MdlAddress )
  {
    do
    {
      Next = MdlAddress->Next;
      IoFreeMdl(MdlAddress);
      MdlAddress = Next;
    }
    while ( Next );
  }
  IoFreeIrp(Irp);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&MasterIrp->AssociatedIrp, 0xFFFFFFFF) == 1 )
    IofCompleteRequest(MasterIrp, v4);
}
