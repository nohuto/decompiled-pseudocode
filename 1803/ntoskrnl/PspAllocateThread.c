/*
 * XREFs of PspAllocateThread @ 0x1405B8EE8
 * Callers:
 *     PspCreateThread @ 0x1404B98F8 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x1404F200C (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x14077DCF0 (PspCreatePicoThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeInitializeSemaphore @ 0x14005C7F0 (KeInitializeSemaphore.c)
 *     PoEnergyEstimationEnabled @ 0x140060580 (PoEnergyEstimationEnabled.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeSelectIdealProcessor @ 0x14006B868 (KeSelectIdealProcessor.c)
 *     PsQueryThreadStartAddress @ 0x14006D11C (PsQueryThreadStartAddress.c)
 *     ExInitializePushLock @ 0x1400BA070 (ExInitializePushLock.c)
 *     KeSelectNodeForAffinity @ 0x1400CCDDC (KeSelectNodeForAffinity.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     RtlGetExtendedContextLength @ 0x140131758 (RtlGetExtendedContextLength.c)
 *     KeQuerySystemTimeUnsafe @ 0x140132974 (KeQuerySystemTimeUnsafe.c)
 *     KeSchedulerAssistThreadFlagEnabled @ 0x140132988 (KeSchedulerAssistThreadFlagEnabled.c)
 *     KeQueryMaximumGroupCount @ 0x1401329A0 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x140132A60 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     KeInitThread @ 0x140470370 (KeInitThread.c)
 *     ExCreateHandleEx @ 0x1404B7560 (ExCreateHandleEx.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     MmSecureVirtualMemoryEx @ 0x140557158 (MmSecureVirtualMemoryEx.c)
 *     MmDeleteTeb @ 0x140562BFC (MmDeleteTeb.c)
 *     PspWow64InitThread @ 0x140563200 (PspWow64InitThread.c)
 *     PspWow64SetupUserStack @ 0x140575B6C (PspWow64SetupUserStack.c)
 *     PspDeleteUserStack @ 0x140580B4C (PspDeleteUserStack.c)
 *     MmCreateTeb @ 0x140592878 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1405B9C34 (PspSetupUserStack.c)
 *     PspUmsInitThread @ 0x14077C98C (PspUmsInitThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspAllocateThread(
        struct _KPROCESS *BugCheckParameter1,
        ULONG_PTR a2,
        unsigned __int8 a3,
        __int64 a4,
        _OWORD *a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _QWORD *a10,
        char *a11,
        __int64 a12)
{
  unsigned __int8 v13; // r11
  _OWORD *v16; // r9
  struct _KTHREAD *CurrentThread; // r10
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r8d
  _QWORD *v22; // rbx
  int v23; // esi
  __int64 v24; // rax
  int v25; // esi
  unsigned int MaximumGroupCount; // ecx
  char *v28; // r14
  __int64 v29; // rax
  __int64 Handle; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  volatile signed __int64 *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // r8d
  __int16 v39; // dx
  __int16 v40; // cx
  __int16 v41; // ax
  __int64 v42; // r12
  char *v43; // rcx
  int v44; // eax
  __int64 v45; // rax
  _QWORD *v46; // rcx
  __int64 Teb; // rbx
  unsigned __int64 v48; // rcx
  __int16 v49; // dx
  int v50; // r12d
  __int64 v51; // rax
  __int64 v52; // rcx
  PVOID PoolWithTag; // rax
  unsigned __int64 v54; // r8
  __int16 v55; // dx
  _OWORD *v56; // r8
  unsigned __int64 v57; // r9
  __int16 v58; // cx
  int inited; // eax
  void *v60; // rcx
  __int64 v61; // [rsp+20h] [rbp-168h]
  int v62; // [rsp+50h] [rbp-138h]
  int v63; // [rsp+54h] [rbp-134h]
  char v64; // [rsp+58h] [rbp-130h]
  __int16 v65; // [rsp+58h] [rbp-130h]
  PVOID Object; // [rsp+60h] [rbp-128h] BYREF
  __int64 v67; // [rsp+68h] [rbp-120h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-118h]
  _OWORD *v69; // [rsp+78h] [rbp-110h]
  char *v70; // [rsp+80h] [rbp-108h]
  __int64 v71; // [rsp+88h] [rbp-100h]
  size_t Size; // [rsp+90h] [rbp-F8h]
  __int64 v73; // [rsp+98h] [rbp-F0h]
  __int64 v74; // [rsp+A0h] [rbp-E8h]
  __int64 v75; // [rsp+A8h] [rbp-E0h]
  ULONG ContextLength; // [rsp+B0h] [rbp-D8h] BYREF
  struct _KTHREAD *v77; // [rsp+B8h] [rbp-D0h]
  struct _KPROCESS *v78; // [rsp+C0h] [rbp-C8h]
  __int64 v79; // [rsp+C8h] [rbp-C0h]
  int v80; // [rsp+D0h] [rbp-B8h]
  int v81; // [rsp+D4h] [rbp-B4h]
  int v82; // [rsp+D8h] [rbp-B0h]
  int v83; // [rsp+DCh] [rbp-ACh]
  __int64 v84; // [rsp+E8h] [rbp-A0h]
  _QWORD *v85; // [rsp+F0h] [rbp-98h]
  _BYTE v86[8]; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v87; // [rsp+100h] [rbp-88h]
  __int64 v88; // [rsp+108h] [rbp-80h]
  __int64 v89; // [rsp+110h] [rbp-78h]
  _BYTE v90[48]; // [rsp+118h] [rbp-70h] BYREF

  v13 = a3;
  v78 = BugCheckParameter1;
  BugCheckParameter2 = a2;
  v79 = a4;
  v16 = a5;
  v69 = a5;
  v73 = (__int64)a6;
  v85 = a10;
  v70 = a11;
  v74 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v77 = CurrentThread;
  v18 = 0;
  v63 = 0;
  if ( a6 )
    v19 = *a6;
  else
    v19 = 0LL;
  v75 = v19;
  v71 = v19;
  if ( a4 )
  {
    v20 = 0LL;
    v21 = *(_DWORD *)(a4 + 4);
    v22 = (_QWORD *)((a4 + 320) & -(__int64)((v21 & 0x1000) != 0));
    if ( (v21 & 0x4000) != 0 )
      v20 = KiProcessorBlock[*(unsigned int *)(a4 + 252)];
    if ( v20 )
    {
      if ( v22 )
      {
        if ( *(unsigned __int8 *)(v20 + 208) != *(_WORD *)(((a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0))
                                                         + 8)
          || *v22 && (*v22 & *(_QWORD *)(v20 + 200)) == 0LL )
        {
          v23 = -1073741776;
LABEL_36:
          ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
          return (unsigned int)v23;
        }
      }
      else
      {
        *(_DWORD *)(a4 + 4) = v21 | 0x1000;
        *(_WORD *)(a4 + 328) = *(unsigned __int8 *)(v20 + 208);
        *(_QWORD *)(a4 + 320) = qword_14044C5D8[*(unsigned __int8 *)(v20 + 208)];
      }
      v18 = *(unsigned __int16 *)(*(_QWORD *)(v20 + 192) + 146LL) + 1;
      v63 = v18;
    }
    else if ( v22 && *v22 )
    {
      v24 = KeSelectNodeForAffinity((a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0));
      v63 = *(unsigned __int16 *)(v24 + 146) + 1;
      *(_DWORD *)(a4 + 4) |= 0x4000u;
      *(_DWORD *)(a4 + 252) = KeSelectIdealProcessor(v24, (__int64)v22, 0LL);
      v18 = v63;
      v16 = v69;
      CurrentThread = v77;
      v13 = a3;
    }
    else
    {
      v18 = 0;
    }
    if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0
      && (BugCheckParameter1[1].ActiveProcessors.Bitmap[7] || BugCheckParameter1 != CurrentThread->Process) )
    {
LABEL_22:
      v23 = -1073741811;
      goto LABEL_36;
    }
  }
  *(_DWORD *)(a12 + 384) = 0;
  *(_BYTE *)(a12 + 388) = v13;
  if ( v16 )
  {
    if ( BugCheckParameter1 == PsInitialSystemProcess )
      goto LABEL_22;
    if ( a2 )
    {
      if ( v13 == 1 && (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_DWORD *)(a12 + 384) = *(_DWORD *)(a2 + 24) & (v13 != 0 ? 7666 : 73714);
    }
  }
  else if ( a2 )
  {
    *(_DWORD *)(a12 + 384) = *(_DWORD *)(a2 + 24) & 0x11FF2;
  }
  v25 = 2072;
  v64 = PoEnergyEstimationEnabled();
  if ( v64 )
    v25 = 2272;
  LODWORD(Size) = v25;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(BugCheckParameter2) = 0;
  if ( MaximumGroupCount > 1 )
  {
    LODWORD(BugCheckParameter2) = (v25 + 7) & 0xFFFFFFF8;
    v25 = BugCheckParameter2 + 8 * MaximumGroupCount;
    LODWORD(Size) = v25;
  }
  v23 = ObCreateObjectEx(a3, PsThreadType, a2, a3, v61, v25, 0, v25, &Object, 0LL);
  v62 = v23;
  if ( v23 < 0 )
    goto LABEL_36;
  v28 = (char *)Object;
  memset(Object, 0, (unsigned int)Size);
  if ( v64 )
  {
    *((_QWORD *)v28 + 247) = v28 + 2072;
    _interlockedbittestandset((volatile signed __int32 *)v28, 0x15u);
    v28 = (char *)Object;
  }
  if ( (unsigned int)KeSchedulerAssistThreadFlagEnabled() )
  {
    _interlockedbittestandset((volatile signed __int32 *)v28, 0x16u);
    v28 = (char *)Object;
  }
  v29 = (unsigned int)BugCheckParameter2;
  if ( (_DWORD)BugCheckParameter2 )
  {
    *((_DWORD *)v28 + 436) |= 0x20000u;
    *((_QWORD *)v28 + 249) = &v28[v29];
  }
  ExInitializePushLock((PKSPIN_LOCK)v28 + 215);
  Size = (size_t)(v28 + 1592);
  *((_QWORD *)v28 + 199) = BugCheckParameter1[1].Header.WaitListHead.Flink;
  if ( (*a9 & 4) != 0 )
    *((_DWORD *)v28 + 436) |= 4u;
  BugCheckParameter2 = (ULONG_PTR)(v28 + 1728);
  *((_QWORD *)v28 + 216) = 0LL;
  *((_DWORD *)v28 + 434) = 7;
  KeInitializeSemaphore((PRKSEMAPHORE)(v28 + 1608), 0, 1);
  *((_QWORD *)v28 + 192) = v28 + 1528;
  *((_QWORD *)v28 + 191) = v28 + 1528;
  *((_QWORD *)v28 + 228) = v28 + 1816;
  *((_QWORD *)v28 + 227) = v28 + 1816;
  *((_QWORD *)v28 + 230) = v28 + 1832;
  *((_QWORD *)v28 + 229) = v28 + 1832;
  *((_QWORD *)v28 + 231) = 0LL;
  *((_QWORD *)v28 + 242) = v28 + 1928;
  *((_QWORD *)v28 + 241) = v28 + 1928;
  *((_QWORD *)v28 + 243) = 0LL;
  *((_QWORD *)v28 + 207) = v28 + 1648;
  *((_QWORD *)v28 + 206) = v28 + 1648;
  *((_QWORD *)v28 + 232) = 0LL;
  *((_QWORD *)v28 + 196) = 0LL;
  *((_QWORD *)v28 + 198) = v28 + 1576;
  *((_QWORD *)v28 + 197) = v28 + 1576;
  *((_QWORD *)v28 + 250) = -3LL;
  if ( KeQuerySystemTimeUnsafe() )
  {
    KeQuerySystemTimePrecise((LARGE_INTEGER *)v28 + 190);
  }
  else
  {
    v28 = (char *)Object;
    *((_QWORD *)Object + 190) = MEMORY[0xFFFFF78000000014];
  }
  *((_QWORD *)v28 + 255) = v28 + 2032;
  *((_QWORD *)v28 + 254) = v28 + 2032;
  *((_QWORD *)v28 + 256) = 0LL;
  *((_QWORD *)v28 + 258) = v28 + 2056;
  *((_QWORD *)v28 + 257) = v28 + 2056;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  Handle = ExCreateHandleEx(*(__int64 *)((char *)&Mm64BitPhysicalAddress + 6), (__int64)v28, 0, 0, 0LL);
  *((_QWORD *)v28 + 200) = Handle;
  if ( !Handle )
  {
    v34 = (volatile signed __int64 *)BugCheckParameter2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v34, v31, v32, v33);
    KeAbPostRelease((ULONG_PTR)v34);
    v23 = -1073741670;
    v62 = -1073741670;
    v28 = (char *)Object;
    goto LABEL_108;
  }
  if ( v69 )
  {
    v38 = *a9;
    v39 = (16 * (*a9 & 0x40)) | 8;
    if ( (*a9 & 2) == 0 )
      v39 = 16 * (v38 & 0x40);
    v40 = v39 | 0x2000;
    if ( (v38 & 0x80u) == 0 )
      v40 = v39;
    v41 = v40 | 0x4000;
    if ( (v38 & 0x100) == 0 )
      v41 = v40;
    v65 = v41;
    if ( !v70 )
    {
      if ( !BugCheckParameter1[2].ActiveProcessors.Bitmap[9] )
      {
        Teb = (__int64)v77->Teb;
        v67 = Teb;
        *((_QWORD *)v28 + 194) = PsQueryThreadStartAddress((__int64)v77, 1);
        *((_QWORD *)v28 + 210) = v77[1].ApcState.ApcListHead[0].Blink;
        *((_DWORD *)v28 + 437) |= 0x10u;
        v54 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
        if ( v54 && ((v55 = *(_WORD *)(v54 + 8), v55 == 332) || v55 == 452) )
          v73 = 12288LL;
        else
          v73 = 6200LL;
        KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v90);
        if ( MmSecureVirtualMemoryEx(Teb, v73, 4, 0) )
        {
          v56 = (_OWORD *)Size;
          *(_OWORD *)(Teb + 64) = *(_OWORD *)Size;
          *(_OWORD *)(Teb + 2008) = *v56;
          *(_DWORD *)(Teb + 6044) = 0;
          *(_DWORD *)(Teb + 6120) = 0;
          *(_WORD *)(Teb + 6126) &= 0x62Cu;
          *(_WORD *)(Teb + 6126) |= v65 | 0x40;
          v57 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
          if ( v57 )
          {
            v58 = *(_WORD *)(v57 + 8);
            if ( v58 == 332 || v58 == 452 )
            {
              v84 = Teb + 0x2000;
              v80 = *(_DWORD *)v56;
              *(_DWORD *)(Teb + 8224) = v80;
              v81 = *((_DWORD *)v28 + 400);
              *(_DWORD *)(Teb + 8228) = v81;
              v82 = *(_DWORD *)v56;
              *(_DWORD *)(Teb + 9908) = v82;
              v83 = *((_DWORD *)v28 + 400);
              *(_DWORD *)(Teb + 9912) = v83;
              *(_DWORD *)(Teb + 12188) = 0;
              *(_DWORD *)(Teb + 12228) = 0;
              *(_WORD *)(Teb + 12234) &= 0x62Cu;
              *(_WORD *)(Teb + 12234) |= v65 | 0x40;
            }
          }
          v50 = v63;
        }
        else
        {
          v23 = -1073741503;
          v62 = -1073741503;
          v50 = v63;
        }
LABEL_97:
        KiUnstackDetachProcess((__int64)v90, 0LL);
        if ( v23 < 0 )
          goto LABEL_108;
        goto LABEL_98;
      }
      v67 = 0LL;
      v51 = *((_QWORD *)v69 + 31);
      *((_QWORD *)v28 + 194) = v51;
      *((_QWORD *)v28 + 210) = v51;
      v52 = v73;
      *((_QWORD *)v28 + 245) = *(_QWORD *)(v73 + 8);
      *((_QWORD *)v28 + 246) = *(_QWORD *)(v52 + 16);
      _interlockedbittestandset((volatile signed __int32 *)v28, 0x1Au);
      RtlGetExtendedContextLength(MEMORY[0xFFFFF780000003D8] != 0LL ? 1048671 : 1048607, &ContextLength);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ContextLength, 0x63537350u);
      v28 = (char *)Object;
      *((_QWORD *)Object + 252) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v23 = -1073741670;
        v62 = -1073741670;
        goto LABEL_108;
      }
      Teb = v67;
LABEL_84:
      v50 = v63;
LABEL_98:
      inited = KeInitThread(
                 (unsigned __int64)v28,
                 0LL,
                 (__int64)PspUserThreadStartup,
                 a7,
                 *((_QWORD *)v28 + 194),
                 v69,
                 Teb,
                 (__int64)BugCheckParameter1,
                 v50);
      goto LABEL_100;
    }
    v42 = v71;
    if ( BugCheckParameter1[1].ActiveProcessors.Bitmap[7] )
    {
      v86[0] = 0;
      v88 = 0x8000LL;
      v89 = 0x40000LL;
      v87 = 0LL;
      v23 = PspSetupUserStack(BugCheckParameter1, v69, v71, v86, v18);
      v62 = v23;
      if ( v23 < 0 )
      {
LABEL_66:
        if ( v23 < 0 )
          goto LABEL_108;
        v45 = v74;
        if ( a4 && (*(_DWORD *)(a4 + 4) & 0x8000) != 0 && (KeFeatureBits & 0x10000000) == 0 )
          v45 = 0x100000000LL;
        v23 = MmCreateTeb(BugCheckParameter1, v42, (_QWORD *)Size, v45, &v67);
        v62 = v23;
        if ( v23 < 0 )
          goto LABEL_108;
        v46 = v69;
        *((_QWORD *)v28 + 194) = *((_QWORD *)v69 + 31);
        *((_QWORD *)v28 + 210) = v46[16];
        Teb = v67;
        if ( BugCheckParameter1[1].ActiveProcessors.Bitmap[7] )
        {
          v23 = PspWow64InitThread(BugCheckParameter1, v42, v46, v67);
          v62 = v23;
          if ( v23 < 0 )
            goto LABEL_108;
        }
        if ( v65 )
        {
          KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v90);
          *(_WORD *)(Teb + 6126) = v65;
          v48 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
          if ( v48 )
          {
            v49 = *(_WORD *)(v48 + 8);
            if ( v49 == 332 || v49 == 452 )
            {
              v84 = Teb + 0x2000;
              *(_WORD *)(Teb + 12234) = v65;
            }
          }
          v23 = 0;
          v62 = 0;
          v50 = v63;
          goto LABEL_97;
        }
        goto LABEL_84;
      }
      v43 = v70;
      *v70 ^= (v86[0] ^ *v70) & 2;
      v44 = PspWow64SetupUserStack(BugCheckParameter1, v35, v42, v43, v18);
    }
    else
    {
      v44 = PspSetupUserStack(BugCheckParameter1, v69, v71, v70, v18);
    }
    v62 = v44;
    v23 = v44;
    goto LABEL_66;
  }
  Teb = 0LL;
  v67 = 0LL;
  *((_QWORD *)v28 + 194) = a7;
  *((_QWORD *)v28 + 210) = a7;
  inited = KeInitThread(
             (unsigned __int64)v28,
             0LL,
             (__int64)PspSystemThreadStartup,
             a7,
             a8,
             0LL,
             0LL,
             (__int64)BugCheckParameter1,
             v63);
LABEL_100:
  v62 = inited;
  v23 = inited;
  if ( inited < 0 )
  {
    if ( !Teb || !v70 )
      goto LABEL_108;
    goto LABEL_107;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0 )
    {
      LOBYTE(v35) = a3;
      v23 = PspUmsInitThread(v28, v35, a4, Teb);
      v62 = v23;
      if ( v23 < 0 )
      {
LABEL_107:
        MmDeleteTeb(BugCheckParameter1, Teb);
LABEL_108:
        if ( v70 && *v70 )
          PspDeleteUserStack(BugCheckParameter1, v35, v71, v70);
        v60 = (void *)*((_QWORD *)v28 + 252);
        if ( v60 )
        {
          ExFreePoolWithTag(v60, 0x63537350u);
          *((_QWORD *)v28 + 252) = 0LL;
        }
        if ( *((_QWORD *)v28 + 200) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v28 + 216, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v28 + 216, v35, v36, v37);
          KeAbPostRelease((ULONG_PTR)(v28 + 1728));
          v23 = v62;
          v28 = (char *)Object;
        }
        if ( !*((_QWORD *)v28 + 68) )
          ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
        ObfDereferenceObject(v28);
        return (unsigned int)v23;
      }
    }
  }
  *v85 = v28;
  return 0LL;
}
