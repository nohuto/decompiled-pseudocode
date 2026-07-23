/*
 * XREFs of PspAllocateThread @ 0x140493710
 * Callers:
 *     PspCreateThread @ 0x140492B18 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x14071A240 (PspCreatePicoThread.c)
 * Callees:
 *     KeSelectIdealProcessor @ 0x140019804 (KeSelectIdealProcessor.c)
 *     KeQuerySystemTimePrecise @ 0x140025920 (KeQuerySystemTimePrecise.c)
 *     PoEnergyEstimationEnabled @ 0x140025A00 (PoEnergyEstimationEnabled.c)
 *     KeQueryMaximumGroupCount @ 0x140025A20 (KeQueryMaximumGroupCount.c)
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     KeInitializeSemaphore @ 0x140025A40 (KeInitializeSemaphore.c)
 *     KeQuerySystemTimeUnsafe @ 0x140025A60 (KeQuerySystemTimeUnsafe.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     RtlGetExtendedContextLength @ 0x1400DAFAC (RtlGetExtendedContextLength.c)
 *     KeSelectNodeForAffinity @ 0x140128DE0 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     KeInitThread @ 0x140424040 (KeInitThread.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ExCreateHandleEx @ 0x140507F60 (ExCreateHandleEx.c)
 *     PspSetupUserStack @ 0x140508E04 (PspSetupUserStack.c)
 *     MmCreateTeb @ 0x1405091B0 (MmCreateTeb.c)
 *     MmDeleteTeb @ 0x14056A768 (MmDeleteTeb.c)
 *     MmSecureVirtualMemory @ 0x1405795A0 (MmSecureVirtualMemory.c)
 *     PspWow64SetupUserStack @ 0x14058D4A4 (PspWow64SetupUserStack.c)
 *     PspWow64InitThread @ 0x14058EEAC (PspWow64InitThread.c)
 *     PspDeleteUserStack @ 0x1405979E8 (PspDeleteUserStack.c)
 *     PspUmsInitThread @ 0x1407189C0 (PspUmsInitThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspAllocateThread(
        struct _KPROCESS *BugCheckParameter1,
        int *a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _QWORD *a10,
        _BYTE *a11,
        __int64 a12)
{
  unsigned __int8 v13; // r9
  struct _KTHREAD *CurrentThread; // r10
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rdi
  unsigned int v20; // edi
  char v21; // r12
  unsigned int MaximumGroupCount; // ecx
  int Teb; // esi
  size_t v24; // r8
  char *v25; // rdi
  __int64 v26; // rax
  __int64 Handle; // rax
  int v28; // edx
  __int16 v29; // cx
  __int16 v30; // r12
  int v31; // eax
  __int64 v32; // rdx
  PVOID v33; // r12
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 (__fastcall *v36)(void (__fastcall *)(__int64), __int64); // r8
  int v38; // ecx
  _WORD *v39; // rax
  unsigned __int64 v40; // rcx
  __int16 v41; // dx
  __int64 v42; // rax
  int v43; // ecx
  volatile signed __int64 *v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // rcx
  ULONG v47; // ecx
  PVOID PoolWithTag; // rax
  SIZE_T v49; // rdx
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  __int16 v52; // cx
  _OWORD *v53; // rdx
  char *v54; // rcx
  unsigned __int64 v55; // r9
  __int16 v56; // r8
  char *v57; // rcx
  int *v58; // r8
  __int64 v59; // r12
  _BYTE *v60; // r13
  void *v61; // rcx
  signed __int32 v62[8]; // [rsp+0h] [rbp-188h] BYREF
  __int64 v63; // [rsp+20h] [rbp-168h]
  _OWORD *v64; // [rsp+28h] [rbp-160h]
  PVOID v65; // [rsp+30h] [rbp-158h]
  struct _KPROCESS *v66; // [rsp+38h] [rbp-150h]
  PVOID *p_Object; // [rsp+40h] [rbp-148h]
  __int64 v68; // [rsp+48h] [rbp-140h]
  int inited; // [rsp+50h] [rbp-138h]
  int v70; // [rsp+54h] [rbp-134h]
  __int64 v71; // [rsp+58h] [rbp-130h]
  _BYTE *v72; // [rsp+60h] [rbp-128h]
  PVOID Object; // [rsp+68h] [rbp-120h] BYREF
  PVOID Address; // [rsp+70h] [rbp-118h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-110h]
  SIZE_T Size; // [rsp+80h] [rbp-108h]
  __int64 v77; // [rsp+88h] [rbp-100h]
  __int64 v78; // [rsp+90h] [rbp-F8h]
  int *v79; // [rsp+98h] [rbp-F0h]
  ULONG ContextLength; // [rsp+A0h] [rbp-E8h] BYREF
  struct _KPROCESS *v81; // [rsp+A8h] [rbp-E0h]
  __int64 v82; // [rsp+B0h] [rbp-D8h]
  __int64 v83; // [rsp+B8h] [rbp-D0h]
  _QWORD *v84; // [rsp+C0h] [rbp-C8h]
  _OWORD *v85; // [rsp+C8h] [rbp-C0h]
  int v86; // [rsp+D0h] [rbp-B8h]
  int v87; // [rsp+D4h] [rbp-B4h]
  int v88; // [rsp+D8h] [rbp-B0h]
  int v89; // [rsp+DCh] [rbp-ACh]
  char *v90; // [rsp+E8h] [rbp-A0h]
  _QWORD *v91; // [rsp+F0h] [rbp-98h]
  _BYTE v92[8]; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v93; // [rsp+100h] [rbp-88h]
  __int64 v94; // [rsp+108h] [rbp-80h]
  __int64 v95; // [rsp+110h] [rbp-78h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v96; // [rsp+118h] [rbp-70h] BYREF

  v13 = a3;
  v81 = BugCheckParameter1;
  v79 = a2;
  v82 = a4;
  v83 = a5;
  v84 = a6;
  v91 = a10;
  v72 = a11;
  v77 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Size = (SIZE_T)CurrentThread;
  v70 = 0;
  if ( a6 )
  {
    v71 = *a6;
    v78 = v71;
  }
  else
  {
    v71 = 0LL;
    v78 = 0LL;
  }
  if ( a4 )
  {
    v17 = 0LL;
    v18 = *(_DWORD *)(a4 + 4);
    v19 = a4 + 320;
    if ( (v18 & 0x1000) == 0 )
      v19 = 0LL;
    if ( (v18 & 0x4000) != 0 )
      v17 = KiProcessorBlock[*(unsigned int *)(a4 + 252)];
    if ( v17 )
    {
      if ( v19 )
      {
        if ( *(unsigned __int8 *)(v17 + 208) != *(_WORD *)(v19 + 8)
          || *(_QWORD *)v19 && (*(_QWORD *)v19 & *(_QWORD *)(v17 + 200)) == 0LL )
        {
          ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
          return 3221225520LL;
        }
      }
      else
      {
        *(_DWORD *)(a4 + 4) = v18 | 0x1000;
        *(_WORD *)(a4 + 328) = *(unsigned __int8 *)(v17 + 208);
        *(_QWORD *)(a4 + 320) = qword_140401408[*(unsigned __int8 *)(v17 + 208)];
      }
      v70 = *(unsigned __int16 *)(*(_QWORD *)(v17 + 192) + 146LL) + 1;
    }
    else if ( v19 && *(_QWORD *)v19 )
    {
      v42 = KeSelectNodeForAffinity(v19);
      v70 = *(unsigned __int16 *)(v42 + 146) + 1;
      *(_DWORD *)(a4 + 4) |= 0x4000u;
      *(_DWORD *)(a4 + 252) = KeSelectIdealProcessor(v42, v19, 0LL);
      v13 = a3;
      CurrentThread = (struct _KTHREAD *)Size;
    }
    if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0
      && (BugCheckParameter1[1].ActiveProcessors.Bitmap[7] || BugCheckParameter1 != CurrentThread->Process) )
    {
      goto LABEL_80;
    }
  }
  *(_DWORD *)(a12 + 384) = 0;
  *(_BYTE *)(a12 + 388) = v13;
  if ( a5 )
  {
    if ( BugCheckParameter1 == PsInitialSystemProcess )
    {
LABEL_80:
      ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
      return 3221225485LL;
    }
    if ( a2 )
    {
      if ( v13 == 1 && ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v13 )
        v38 = 7666;
      else
        v38 = 73714;
      *(_DWORD *)(a12 + 384) = a2[6] & v38;
      inited = 0;
    }
  }
  else if ( a2 )
  {
    *(_DWORD *)(a12 + 384) = a2[6] & 0x11FF2;
  }
  v20 = 2072;
  v21 = PoEnergyEstimationEnabled();
  if ( v21 )
    v20 = 2272;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(BugCheckParameter2) = 0;
  if ( MaximumGroupCount > 1 )
  {
    LODWORD(BugCheckParameter2) = (v20 + 7) & 0xFFFFFFF8;
    v20 = BugCheckParameter2 + 8 * MaximumGroupCount;
  }
  v68 = 0LL;
  p_Object = &Object;
  LODWORD(v66) = v20;
  LODWORD(v65) = 0;
  LODWORD(v64) = v20;
  Teb = ObCreateObjectEx(a3, (_DWORD)PsThreadType, (_DWORD)a2, a3);
  inited = Teb;
  if ( Teb < 0 )
  {
    ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
    return (unsigned int)Teb;
  }
  v24 = v20;
  v25 = (char *)Object;
  memset(Object, 0, v24);
  if ( v21 )
  {
    *((_QWORD *)v25 + 247) = v25 + 2072;
    _interlockedbittestandset((volatile signed __int32 *)v25, 0x15u);
    Teb = inited;
    v25 = (char *)Object;
  }
  v26 = (unsigned int)BugCheckParameter2;
  if ( (_DWORD)BugCheckParameter2 )
  {
    *((_DWORD *)v25 + 436) |= 0x20000u;
    *((_QWORD *)v25 + 249) = &v25[v26];
  }
  ExInitializePushLock((PKSPIN_LOCK)v25 + 215);
  v85 = v25 + 1592;
  *((_QWORD *)v25 + 199) = BugCheckParameter1[1].Header.WaitListHead.Flink;
  if ( (*a9 & 4) != 0 )
    *((_DWORD *)v25 + 436) |= 4u;
  BugCheckParameter2 = (ULONG_PTR)(v25 + 1728);
  *((_QWORD *)v25 + 216) = 0LL;
  *((_DWORD *)v25 + 434) = 7;
  KeInitializeSemaphore((PRKSEMAPHORE)(v25 + 1608), 0, 1);
  *((_QWORD *)v25 + 192) = v25 + 1528;
  *((_QWORD *)v25 + 191) = v25 + 1528;
  *((_QWORD *)v25 + 228) = v25 + 1816;
  *((_QWORD *)v25 + 227) = v25 + 1816;
  *((_QWORD *)v25 + 230) = v25 + 1832;
  *((_QWORD *)v25 + 229) = v25 + 1832;
  *((_QWORD *)v25 + 231) = 0LL;
  *((_QWORD *)v25 + 242) = v25 + 1928;
  *((_QWORD *)v25 + 241) = v25 + 1928;
  *((_QWORD *)v25 + 243) = 0LL;
  *((_QWORD *)v25 + 207) = v25 + 1648;
  *((_QWORD *)v25 + 206) = v25 + 1648;
  *((_QWORD *)v25 + 232) = 0LL;
  *((_QWORD *)v25 + 196) = 0LL;
  *((_QWORD *)v25 + 198) = v25 + 1576;
  *((_QWORD *)v25 + 197) = v25 + 1576;
  *((_QWORD *)v25 + 250) = -3LL;
  if ( KeQuerySystemTimeUnsafe() )
  {
    KeQuerySystemTimePrecise((_QWORD *)v25 + 190);
  }
  else
  {
    v25 = (char *)Object;
    *((_QWORD *)Object + 190) = MEMORY[0xFFFFF78000000014];
    Teb = inited;
  }
  *((_QWORD *)v25 + 255) = v25 + 2032;
  *((_QWORD *)v25 + 254) = v25 + 2032;
  *((_QWORD *)v25 + 256) = 0LL;
  *((_QWORD *)v25 + 258) = v25 + 2056;
  *((_QWORD *)v25 + 257) = v25 + 2056;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  Handle = ExCreateHandleEx(*(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5), (_DWORD)v25, 0, 0, 0LL);
  v79 = (int *)(v25 + 1600);
  *((_QWORD *)v25 + 200) = Handle;
  if ( !Handle )
  {
    v44 = (volatile signed __int64 *)BugCheckParameter2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v44);
    KeAbPostRelease((ULONG_PTR)v44);
    Teb = -1073741670;
    inited = -1073741670;
    v25 = (char *)Object;
    goto LABEL_118;
  }
  if ( !a5 )
  {
    v33 = 0LL;
    Address = 0LL;
    v35 = a7;
    *((_QWORD *)v25 + 194) = a7;
    *((_QWORD *)v25 + 210) = a7;
    LODWORD(p_Object) = v70;
    v66 = BugCheckParameter1;
    v65 = 0LL;
    v64 = 0LL;
    v34 = a8;
    v36 = PspSystemThreadStartup;
    goto LABEL_44;
  }
  v28 = *a9;
  v29 = 16 * (*a9 & 0x40);
  if ( (*a9 & 2) != 0 )
    v29 |= 8u;
  v30 = v29 | 0x2000;
  if ( (v28 & 0x80u) == 0 )
    v30 = v29;
  if ( (v28 & 0x100) != 0 )
    v30 |= 0x4000u;
  if ( v72 )
  {
    LODWORD(v63) = v70;
    if ( BugCheckParameter1[1].ActiveProcessors.Bitmap[7] )
    {
      v92[0] = 0;
      v94 = 0x8000LL;
      v95 = 0x40000LL;
      v93 = 0LL;
      Teb = PspSetupUserStack(
              BugCheckParameter1,
              a5,
              v71,
              v92,
              v63,
              (_DWORD)v64,
              (_DWORD)v65,
              (_DWORD)v66,
              p_Object,
              v68);
      inited = Teb;
      if ( Teb < 0 )
      {
LABEL_39:
        if ( Teb < 0
          || (Teb = MmCreateTeb((ULONG_PTR)BugCheckParameter1, (__int64)&Address), inited = Teb, Teb < 0)
          || (*((_QWORD *)v25 + 194) = *(_QWORD *)(a5 + 248),
              *((_QWORD *)v25 + 210) = *(_QWORD *)(a5 + 128),
              BugCheckParameter1[1].ActiveProcessors.Bitmap[7])
          && (Teb = PspWow64InitThread((ULONG_PTR)BugCheckParameter1), inited = Teb, Teb < 0) )
        {
          v59 = v71;
          goto LABEL_119;
        }
        if ( v30 )
        {
          KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v96);
          v39 = Address;
          *((_WORD *)Address + 3063) = v30;
          v40 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
          if ( v40 )
          {
            v41 = *(_WORD *)(v40 + 8);
            if ( v41 == 332 || v41 == 452 )
            {
              v90 = (char *)(v39 + 4096);
              v39[6117] = v30;
            }
          }
          inited = 0;
          KiUnstackDetachProcess(&v96, 0LL);
        }
        goto LABEL_43;
      }
      v43 = (int)v72;
      *v72 ^= (v92[0] ^ *v72) & 2;
      v31 = PspWow64SetupUserStack((_DWORD)BugCheckParameter1, v32, v71, v43, v70);
    }
    else
    {
      v31 = PspSetupUserStack(
              BugCheckParameter1,
              a5,
              v71,
              v72,
              v63,
              (_DWORD)v64,
              (_DWORD)v65,
              (_DWORD)v66,
              p_Object,
              v68);
    }
    inited = v31;
    Teb = v31;
    goto LABEL_39;
  }
  if ( !BugCheckParameter1[2].ActiveProcessors.Bitmap[9] )
  {
    v49 = Size;
    Address = *(PVOID *)(Size + 240);
    if ( (*(_DWORD *)(Size + 116) & 0x400) != 0 )
    {
      v50 = *(_QWORD *)(Size + 1680);
    }
    else
    {
      if ( (*(_DWORD *)(Size + 1752) & 8) != 0
        || (v50 = *(_QWORD *)(Size + 1552), _InterlockedOr(v62, 0), (*(_DWORD *)(v49 + 1752) & 8) != 0) )
      {
        v50 = 0LL;
      }
      Teb = inited;
      v25 = (char *)Object;
    }
    *((_QWORD *)v25 + 194) = v50;
    *((_QWORD *)v25 + 210) = *(_QWORD *)(v49 + 1680);
    *((_DWORD *)v25 + 437) |= 0x10u;
    v51 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
    if ( v51 && ((v52 = *(_WORD *)(v51 + 8), v52 == 332) || v52 == 452) )
      Size = 12288LL;
    else
      Size = 6200LL;
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v96);
    if ( MmSecureVirtualMemory(Address, Size, 4u) )
    {
      v53 = v85;
      v54 = (char *)Address;
      *((_OWORD *)Address + 4) = *v85;
      *(_OWORD *)(v54 + 2008) = *v53;
      *((_DWORD *)v54 + 1511) = 0;
      *((_DWORD *)v54 + 1530) = 0;
      *((_WORD *)v54 + 3063) &= 0x62Cu;
      *((_WORD *)v54 + 3063) |= v30 | 0x40;
      v55 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
      if ( v55 )
      {
        v56 = *(_WORD *)(v55 + 8);
        if ( v56 == 332 || v56 == 452 )
        {
          v57 = v54 + 0x2000;
          v90 = v57;
          v86 = *(_DWORD *)v53;
          *((_DWORD *)v57 + 8) = v86;
          v58 = v79;
          v87 = *v79;
          *((_DWORD *)v57 + 9) = v87;
          v88 = *(_DWORD *)v53;
          *((_DWORD *)v57 + 429) = v88;
          v89 = *v58;
          *((_DWORD *)v57 + 430) = v89;
          *((_DWORD *)v57 + 999) = 0;
          *((_DWORD *)v57 + 1009) = 0;
          *((_WORD *)v57 + 2021) &= 0x62Cu;
          *((_WORD *)v57 + 2021) |= v30 | 0x40;
        }
      }
      v59 = v71;
    }
    else
    {
      Teb = -1073741503;
      inited = -1073741503;
      v59 = v71;
    }
    KiUnstackDetachProcess(&v96, 0LL);
    if ( Teb < 0 )
      goto LABEL_119;
    goto LABEL_43;
  }
  Address = 0LL;
  v45 = *(_QWORD *)(a5 + 248);
  *((_QWORD *)v25 + 194) = v45;
  *((_QWORD *)v25 + 210) = v45;
  v46 = v84;
  *((_QWORD *)v25 + 245) = v84[1];
  *((_QWORD *)v25 + 246) = v46[2];
  _interlockedbittestandset((volatile signed __int32 *)v25, 0x1Au);
  v47 = 1048671;
  if ( !MEMORY[0xFFFFF780000003D8] )
    v47 = 1048607;
  RtlGetExtendedContextLength(v47, &ContextLength);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ContextLength, 0x63537350u);
  v25 = (char *)Object;
  *((_QWORD *)Object + 252) = PoolWithTag;
  if ( PoolWithTag )
  {
LABEL_43:
    LODWORD(p_Object) = v70;
    v66 = BugCheckParameter1;
    v33 = Address;
    v65 = Address;
    v64 = (_OWORD *)a5;
    v34 = *((_QWORD *)v25 + 194);
    v35 = a7;
    v36 = (__int64 (__fastcall *)(void (__fastcall *)(__int64), __int64))PspUserThreadStartup;
LABEL_44:
    inited = KeInitThread(
               (unsigned __int64)v25,
               0LL,
               (__int64)v36,
               v35,
               v34,
               v64,
               (__int64)v65,
               (__int64)v66,
               (int)p_Object);
    Teb = inited;
    if ( inited < 0 )
    {
      v60 = v72;
      if ( v33 && v72 )
        MmDeleteTeb((ULONG_PTR)BugCheckParameter1);
      v59 = v71;
      goto LABEL_120;
    }
    if ( !a4
      || (*(_DWORD *)(a4 + 4) & 0x8000) == 0
      || (Teb = PspUmsInitThread(v25, a3, a4, v33), inited = Teb, Teb >= 0) )
    {
      *v91 = v25;
      return 0LL;
    }
    MmDeleteTeb((ULONG_PTR)BugCheckParameter1);
    goto LABEL_118;
  }
  Teb = -1073741670;
  inited = -1073741670;
LABEL_118:
  v59 = v71;
LABEL_119:
  v60 = v72;
LABEL_120:
  if ( v60 && *v60 )
    PspDeleteUserStack(BugCheckParameter1, v32, v59, v60);
  v61 = (void *)*((_QWORD *)v25 + 252);
  if ( v61 )
  {
    ExFreePoolWithTag(v61, 0x63537350u);
    *((_QWORD *)v25 + 252) = 0LL;
  }
  if ( *((_QWORD *)v25 + 200) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 216, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v25 + 216);
    KeAbPostRelease((ULONG_PTR)(v25 + 1728));
    Teb = inited;
    v25 = (char *)Object;
  }
  if ( !*((_QWORD *)v25 + 68) )
    ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
  ObfDereferenceObject(v25);
  return (unsigned int)Teb;
}
