/*
 * XREFs of PspAllocateThread @ 0x14053F490
 * Callers:
 *     PspCreateThread @ 0x1405410D4 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x140544094 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x1406E3980 (PspCreatePicoThread.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140008FAC (RtlGetExtendedContextLength.c)
 *     KeSelectNodeForAffinity @ 0x14001AC28 (KeSelectNodeForAffinity.c)
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     KeSelectIdealProcessor @ 0x1400654C0 (KeSelectIdealProcessor.c)
 *     PsQueryThreadStartAddress @ 0x14006B8C4 (PsQueryThreadStartAddress.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KeQuerySystemTimeUnsafe @ 0x1401104F8 (KeQuerySystemTimeUnsafe.c)
 *     KeInitializeSemaphore @ 0x140110510 (KeInitializeSemaphore.c)
 *     KeQueryMaximumGroupCount @ 0x140110530 (KeQueryMaximumGroupCount.c)
 *     PoEnergyEstimationEnabled @ 0x140110540 (PoEnergyEstimationEnabled.c)
 *     KeQuerySystemTimePrecise @ 0x140110600 (KeQuerySystemTimePrecise.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     KeInitThread @ 0x140404A30 (KeInitThread.c)
 *     PspWow64InitThread @ 0x1404264E0 (PspWow64InitThread.c)
 *     MmSecureVirtualMemory @ 0x14043F030 (MmSecureVirtualMemory.c)
 *     PspWow64SetupUserStack @ 0x1404452DC (PspWow64SetupUserStack.c)
 *     PspDeleteUserStack @ 0x1404595F0 (PspDeleteUserStack.c)
 *     MmDeleteTeb @ 0x140499B6C (MmDeleteTeb.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     MmCreateTeb @ 0x140516370 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x140516848 (PspSetupUserStack.c)
 *     ExCreateHandleEx @ 0x140517CF0 (ExCreateHandleEx.c)
 *     PspUmsInitThread @ 0x1406E256C (PspUmsInitThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspAllocateThread(
        struct _KPROCESS *BugCheckParameter1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD **a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _QWORD *a10,
        _BYTE *a11,
        __int64 a12)
{
  struct _KTHREAD *CurrentThread; // r10
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rsi
  unsigned int v19; // esi
  bool v20; // r12
  USHORT MaximumGroupCount; // ax
  int v22; // r14d
  size_t v23; // r8
  char *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 Handle; // rax
  int v29; // r8d
  __int16 v30; // dx
  __int16 v31; // cx
  _QWORD *v32; // r12
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 Teb; // r12
  int inited; // eax
  int v39; // eax
  unsigned __int64 v40; // rax
  __int16 v41; // dx
  _BYTE *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  SIZE_T v45; // rcx
  __int64 v46; // rcx
  PVOID PoolWithTag; // rax
  unsigned __int64 v48; // rcx
  __int16 v49; // dx
  SIZE_T v50; // rax
  _OWORD *v51; // r8
  unsigned __int64 v52; // rcx
  __int16 v53; // r9
  void *v54; // rcx
  __int64 v55; // [rsp+20h] [rbp-168h]
  int v56; // [rsp+50h] [rbp-138h]
  int v57; // [rsp+54h] [rbp-134h]
  unsigned int BugCheckParameter2; // [rsp+58h] [rbp-130h]
  volatile signed __int64 *BugCheckParameter2a; // [rsp+58h] [rbp-130h]
  __int16 BugCheckParameter2b; // [rsp+58h] [rbp-130h]
  __int64 v61; // [rsp+60h] [rbp-128h] BYREF
  _QWORD *v62; // [rsp+68h] [rbp-120h]
  PVOID Object; // [rsp+70h] [rbp-118h] BYREF
  _BYTE *v64; // [rsp+78h] [rbp-110h]
  SIZE_T Size; // [rsp+80h] [rbp-108h]
  _QWORD *v66; // [rsp+88h] [rbp-100h]
  _QWORD *v67; // [rsp+90h] [rbp-F8h]
  int v68; // [rsp+98h] [rbp-F0h]
  _DWORD NumberOfBytes[3]; // [rsp+9Ch] [rbp-ECh]
  struct _KTHREAD *v70; // [rsp+A8h] [rbp-E0h]
  struct _KPROCESS *v71; // [rsp+B0h] [rbp-D8h]
  __int64 v72; // [rsp+B8h] [rbp-D0h]
  _QWORD *v73; // [rsp+C0h] [rbp-C8h]
  int v74; // [rsp+C8h] [rbp-C0h]
  int v75; // [rsp+CCh] [rbp-BCh]
  int v76; // [rsp+D0h] [rbp-B8h]
  int v77; // [rsp+D4h] [rbp-B4h]
  __int64 v78; // [rsp+D8h] [rbp-B0h]
  __int64 v79; // [rsp+E0h] [rbp-A8h]
  _QWORD *v80; // [rsp+E8h] [rbp-A0h]
  _BYTE v81[8]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v82; // [rsp+F8h] [rbp-90h]
  __int64 v83; // [rsp+100h] [rbp-88h]
  __int64 v84; // [rsp+108h] [rbp-80h]
  $5BC46E0569261879018906DEC3127961 v85; // [rsp+110h] [rbp-78h] BYREF
  unsigned __int8 v86; // [rsp+1A0h] [rbp+18h]

  v86 = a3;
  v71 = BugCheckParameter1;
  v67 = (_QWORD *)a2;
  v72 = a4;
  v73 = a5;
  Size = (SIZE_T)a6;
  v80 = a10;
  v64 = a11;
  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v70 = CurrentThread;
  v57 = 0;
  if ( a6 )
  {
    v62 = *a6;
    v66 = v62;
  }
  else
  {
    v62 = 0LL;
    v66 = 0LL;
  }
  if ( a4 )
  {
    v16 = 0LL;
    v17 = *(_DWORD *)(a4 + 4);
    v18 = a4 + 320;
    if ( (v17 & 0x1000) == 0 )
      v18 = 0LL;
    if ( (v17 & 0x4000) != 0 )
      v16 = KiProcessorBlock[*(unsigned int *)(a4 + 252)];
    if ( v16 )
    {
      if ( v18 )
      {
        if ( *(unsigned __int8 *)(v16 + 208) != *(_WORD *)(v18 + 8)
          || *(_QWORD *)v18 && (*(_QWORD *)v18 & *(_QWORD *)(v16 + 200)) == 0LL )
        {
          ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
          return 3221225520LL;
        }
      }
      else
      {
        *(_DWORD *)(a4 + 4) = v17 | 0x1000;
        *(_WORD *)(a4 + 328) = *(unsigned __int8 *)(v16 + 208);
        *(_QWORD *)(a4 + 320) = qword_1403E42B8[*(unsigned __int8 *)(v16 + 208)];
      }
      v57 = *(unsigned __int16 *)(*(_QWORD *)(v16 + 192) + 146LL) + 1;
    }
    else if ( v18 && *(_QWORD *)v18 )
    {
      v43 = KeSelectNodeForAffinity(v18);
      v57 = *(unsigned __int16 *)(v43 + 146) + 1;
      *(_DWORD *)(a4 + 4) |= 0x4000u;
      *(_DWORD *)(a4 + 252) = KeSelectIdealProcessor(v43, v18, 0LL);
      a3 = v86;
      CurrentThread = v70;
    }
    if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0
      && (BugCheckParameter1[1].ActiveProcessors.Bitmap[7] || BugCheckParameter1 != CurrentThread->Process) )
    {
      goto LABEL_86;
    }
  }
  *(_DWORD *)(a12 + 384) = 0;
  *(_BYTE *)(a12 + 388) = a3;
  if ( a5 )
  {
    if ( BugCheckParameter1 == PsInitialSystemProcess )
    {
LABEL_86:
      ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
      return 3221225485LL;
    }
    if ( a2 )
    {
      if ( a3 == 1 && (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 )
        v39 = *(_DWORD *)(a2 + 24) & 0x1DF2;
      else
        v39 = *(_DWORD *)(a2 + 24) & 0x11FF2;
      v68 = v39;
      *(_DWORD *)(a12 + 384) = v39;
    }
  }
  else if ( a2 )
  {
    *(_DWORD *)(a12 + 384) = *(_DWORD *)(a2 + 24) & 0x11FF2;
  }
  v19 = 2064;
  v20 = PoEnergyEstimationEnabled();
  if ( v20 )
    v19 = 2264;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  BugCheckParameter2 = 0;
  if ( MaximumGroupCount > 1u )
  {
    BugCheckParameter2 = (v19 + 7) & 0xFFFFFFF8;
    v19 = BugCheckParameter2 + 8 * MaximumGroupCount;
  }
  v22 = ObCreateObjectEx(v86, PsThreadType, a2, v86, v55, v19, 0, v19, &Object, 0LL);
  v56 = v22;
  if ( v22 < 0 )
  {
    ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
    return (unsigned int)v22;
  }
  v23 = v19;
  v24 = (char *)Object;
  memset(Object, 0, v23);
  if ( v20 )
  {
    *((_QWORD *)v24 + 246) = v24 + 2064;
    _interlockedbittestandset((volatile signed __int32 *)v24, 0x15u);
    v24 = (char *)Object;
  }
  if ( BugCheckParameter2 )
  {
    *((_DWORD *)v24 + 434) |= 0x20000u;
    *((_QWORD *)v24 + 248) = &v24[BugCheckParameter2];
  }
  ExInitializePushLock((PKSPIN_LOCK)v24 + 214);
  v67 = v24 + 1592;
  *((_QWORD *)v24 + 199) = BugCheckParameter1[1].Header.WaitListHead.Flink;
  if ( (*a9 & 4) != 0 )
    *((_DWORD *)v24 + 434) |= 4u;
  BugCheckParameter2a = (volatile signed __int64 *)(v24 + 1720);
  *((_QWORD *)v24 + 215) = 0LL;
  *((_DWORD *)v24 + 432) = 7;
  KeInitializeSemaphore((PRKSEMAPHORE)(v24 + 1608), 0, 1);
  *((_QWORD *)v24 + 191) = v24 + 1520;
  *((_QWORD *)v24 + 190) = v24 + 1520;
  *((_QWORD *)v24 + 227) = v24 + 1808;
  *((_QWORD *)v24 + 226) = v24 + 1808;
  *((_QWORD *)v24 + 229) = v24 + 1824;
  *((_QWORD *)v24 + 228) = v24 + 1824;
  *((_QWORD *)v24 + 230) = 0LL;
  *((_QWORD *)v24 + 241) = v24 + 1920;
  *((_QWORD *)v24 + 240) = v24 + 1920;
  *((_QWORD *)v24 + 242) = 0LL;
  *((_QWORD *)v24 + 207) = v24 + 1648;
  *((_QWORD *)v24 + 206) = v24 + 1648;
  *((_QWORD *)v24 + 231) = 0LL;
  *((_QWORD *)v24 + 196) = 0LL;
  *((_QWORD *)v24 + 198) = v24 + 1576;
  *((_QWORD *)v24 + 197) = v24 + 1576;
  *((_QWORD *)v24 + 249) = -3LL;
  if ( KeQuerySystemTimeUnsafe() )
  {
    KeQuerySystemTimePrecise((__int64 *)v24 + 189, v25, v26, v27);
  }
  else
  {
    v24 = (char *)Object;
    *((_QWORD *)Object + 189) = MEMORY[0xFFFFF78000000014];
  }
  *((_QWORD *)v24 + 254) = v24 + 2024;
  *((_QWORD *)v24 + 253) = v24 + 2024;
  *((_QWORD *)v24 + 255) = 0LL;
  *((_QWORD *)v24 + 257) = v24 + 2048;
  *((_QWORD *)v24 + 256) = v24 + 2048;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)BugCheckParameter2a, 0LL);
  Handle = ExCreateHandleEx(PspCidTable, (__int64)v24, 0, 0, 0LL);
  *((_QWORD *)v24 + 200) = Handle;
  if ( !Handle )
  {
    if ( (_InterlockedExchangeAdd64(BugCheckParameter2a, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2a);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2a);
    v22 = -1073741670;
    v56 = -1073741670;
    v24 = (char *)Object;
    goto LABEL_121;
  }
  if ( !a5 )
  {
    Teb = 0LL;
    v61 = 0LL;
    *((_QWORD *)v24 + 194) = a7;
    *((_QWORD *)v24 + 210) = a7;
    inited = KeInitThread(
               (__int64)v24,
               0LL,
               (__int64)PspSystemThreadStartup,
               a7,
               a8,
               0LL,
               0LL,
               (__int64)BugCheckParameter1,
               v57);
    goto LABEL_47;
  }
  v29 = *a9;
  v30 = (16 * (*a9 & 0x40)) | 8;
  if ( (*a9 & 2) == 0 )
    v30 = 16 * (v29 & 0x40);
  v31 = v30 | 0x2000;
  if ( (v29 & 0x80u) == 0 )
    v31 = v30;
  BugCheckParameter2b = v31;
  if ( (v29 & 0x100) != 0 )
    BugCheckParameter2b = v31 | 0x4000;
  if ( !v64 )
  {
    if ( BugCheckParameter1[2].ActiveProcessors.Bitmap[9] )
    {
      v61 = 0LL;
      v44 = a5[31];
      *((_QWORD *)v24 + 194) = v44;
      *((_QWORD *)v24 + 210) = v44;
      v45 = Size;
      *((_QWORD *)v24 + 244) = *(_QWORD *)(Size + 8);
      *((_QWORD *)v24 + 245) = *(_QWORD *)(v45 + 16);
      _interlockedbittestandset((volatile signed __int32 *)v24, 0x1Au);
      v46 = 1048671LL;
      if ( !MEMORY[0xFFFFF780000003D8] )
        v46 = 1048607LL;
      RtlGetExtendedContextLength(v46);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x63537350u);
      v24 = (char *)Object;
      *((_QWORD *)Object + 251) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v22 = -1073741670;
        v56 = -1073741670;
        goto LABEL_121;
      }
      Teb = v61;
    }
    else
    {
      Teb = (__int64)v70->Teb;
      v61 = Teb;
      *((_QWORD *)v24 + 194) = PsQueryThreadStartAddress((__int64)v70, 1);
      *((_QWORD *)v24 + 210) = v70[1].ApcState.ApcListHead[1].Flink;
      *((_DWORD *)v24 + 435) |= 0x10u;
      v48 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
      if ( v48 && ((v49 = *(_WORD *)(v48 + 8), v49 == 332) || v49 == 452) )
      {
        v50 = 14392LL;
        if ( *(_WORD *)(v48 + 8) != 0x8664 )
          v50 = 12288LL;
        Size = v50;
      }
      else
      {
        Size = 6200LL;
      }
      KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v85);
      if ( MmSecureVirtualMemory((PVOID)Teb, Size, 4u) )
      {
        v51 = v67;
        *(_OWORD *)(Teb + 64) = *(_OWORD *)v67;
        *(_OWORD *)(Teb + 2008) = *v51;
        *(_DWORD *)(Teb + 6044) = 0;
        *(_DWORD *)(Teb + 6120) = 0;
        *(_WORD *)(Teb + 6126) &= 0x62Cu;
        *(_WORD *)(Teb + 6126) |= BugCheckParameter2b | 0x40;
        v52 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
        if ( v52 )
        {
          v53 = *(_WORD *)(v52 + 8);
          if ( v53 == 332 || v53 == 452 )
          {
            if ( *(_WORD *)(v52 + 8) == 0x8664 )
            {
              v78 = Teb + 0x2000;
              *(_QWORD *)(Teb + 8256) = *(_QWORD *)v51;
              *(_QWORD *)(Teb + 8264) = *((_QWORD *)v24 + 200);
              *(_QWORD *)(Teb + 10200) = *(_QWORD *)v51;
              *(_QWORD *)(Teb + 10208) = *((_QWORD *)v24 + 200);
              *(_DWORD *)(Teb + 14236) = 0;
              *(_DWORD *)(Teb + 14312) = 0;
              *(_WORD *)(Teb + 14318) &= 0x62Cu;
              *(_WORD *)(Teb + 14318) |= BugCheckParameter2b | 0x40;
            }
            else
            {
              v79 = Teb + 0x2000;
              v74 = *(_DWORD *)v51;
              *(_DWORD *)(Teb + 8224) = v74;
              v75 = *((_DWORD *)v24 + 400);
              *(_DWORD *)(Teb + 8228) = v75;
              v76 = *(_DWORD *)v51;
              *(_DWORD *)(Teb + 9908) = v76;
              v77 = *((_DWORD *)v24 + 400);
              *(_DWORD *)(Teb + 9912) = v77;
              *(_DWORD *)(Teb + 12188) = 0;
              *(_DWORD *)(Teb + 12228) = 0;
              *(_WORD *)(Teb + 12234) &= 0x62Cu;
              *(_WORD *)(Teb + 12234) |= BugCheckParameter2b | 0x40;
            }
          }
        }
      }
      else
      {
        v22 = -1073741503;
        v56 = -1073741503;
      }
      KiUnstackDetachProcess(&v85, 0LL);
      if ( v22 < 0 )
        goto LABEL_121;
    }
    goto LABEL_46;
  }
  v32 = v62;
  if ( !BugCheckParameter1[1].ActiveProcessors.Bitmap[7] )
  {
    v33 = PspSetupUserStack((__int64)BugCheckParameter1, (__int64)a5, v62, (__int64)v64, v57);
LABEL_38:
    v56 = v33;
    v22 = v33;
    goto LABEL_39;
  }
  v81[0] = 0;
  v83 = 0x8000LL;
  v84 = 0x40000LL;
  v82 = 0LL;
  v22 = PspSetupUserStack((__int64)BugCheckParameter1, (__int64)a5, v62, (__int64)v81, v57);
  v56 = v22;
  if ( v22 >= 0 )
  {
    v42 = v64;
    *v64 ^= (*v64 ^ v81[0]) & 2;
    v33 = PspWow64SetupUserStack(BugCheckParameter1, v34, (__int64)v32, (__int64)v42, v57);
    goto LABEL_38;
  }
LABEL_39:
  if ( v22 < 0 )
    goto LABEL_121;
  v35 = a4 && (((*(_DWORD *)(a4 + 4) & 0x8000) != 0) & !_bittest64((const signed __int64 *)&KeFeatureBits, 0x1Cu)) != 0
      ? 0x100000000LL
      : *(_QWORD *)&NumberOfBytes[1];
  v22 = MmCreateTeb(BugCheckParameter1, (unsigned __int64)v32, v67, v35, (unsigned __int64 *)&v61);
  v56 = v22;
  if ( v22 < 0 )
    goto LABEL_121;
  *((_QWORD *)v24 + 194) = a5[31];
  *((_QWORD *)v24 + 210) = a5[16];
  Teb = v61;
  if ( BugCheckParameter1[1].ActiveProcessors.Bitmap[7] )
  {
    v22 = PspWow64InitThread((ULONG_PTR)BugCheckParameter1, (__int64)v62, a5, v61);
    v56 = v22;
    if ( v22 < 0 )
      goto LABEL_121;
  }
  if ( BugCheckParameter2b )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v85);
    *(_WORD *)(Teb + 6126) = BugCheckParameter2b;
    v40 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
    if ( v40 )
    {
      v41 = *(_WORD *)(v40 + 8);
      if ( v41 == 332 || v41 == 452 )
      {
        if ( *(_WORD *)(v40 + 8) == 0x8664 )
        {
          v78 = Teb + 0x2000;
          *(_WORD *)(Teb + 14318) = BugCheckParameter2b;
        }
        else
        {
          v79 = Teb + 0x2000;
          *(_WORD *)(Teb + 12234) = BugCheckParameter2b;
        }
      }
    }
    KiUnstackDetachProcess(&v85, 0LL);
  }
LABEL_46:
  inited = KeInitThread(
             (__int64)v24,
             0LL,
             (__int64)PspUserThreadStartup,
             a7,
             *((_QWORD *)v24 + 194),
             a5,
             Teb,
             (__int64)BugCheckParameter1,
             v57);
LABEL_47:
  v56 = inited;
  v22 = inited;
  if ( inited < 0 )
  {
    if ( !Teb || !v64 )
      goto LABEL_121;
  }
  else if ( !a4
         || (*(_DWORD *)(a4 + 4) & 0x8000) == 0
         || (v22 = PspUmsInitThread(v24, v86, a4, Teb), v56 = v22, v22 >= 0) )
  {
    *v80 = v24;
    return 0LL;
  }
  MmDeleteTeb(BugCheckParameter1, Teb);
LABEL_121:
  if ( v64 && *v64 )
    PspDeleteUserStack(BugCheckParameter1, v34, (__int64)v62, v64);
  v54 = (void *)*((_QWORD *)v24 + 251);
  if ( v54 )
  {
    ExFreePoolWithTag(v54, 0x63537350u);
    *((_QWORD *)v24 + 251) = 0LL;
  }
  if ( *((_QWORD *)v24 + 200) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 215, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v24 + 215);
    KeAbPostRelease((ULONG_PTR)(v24 + 1720));
    v22 = v56;
    v24 = (char *)Object;
  }
  if ( !*((_QWORD *)v24 + 68) )
    ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
  ObfDereferenceObject(v24);
  return (unsigned int)v22;
}
