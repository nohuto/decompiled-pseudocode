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
        __int64 *a6,
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
  __int64 Handle; // rax
  int v26; // r8d
  __int16 v27; // dx
  __int16 v28; // cx
  __int64 v29; // r12
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 Teb; // r12
  int inited; // eax
  int v36; // eax
  unsigned __int64 v37; // rax
  __int16 v38; // dx
  _BYTE *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  SIZE_T v42; // rcx
  ULONG v43; // ecx
  PVOID PoolWithTag; // rax
  unsigned __int64 v45; // rcx
  __int16 v46; // dx
  SIZE_T v47; // rax
  _OWORD *v48; // r8
  unsigned __int64 v49; // rcx
  __int16 v50; // r9
  void *v51; // rcx
  __int64 v52; // [rsp+20h] [rbp-168h]
  int v53; // [rsp+50h] [rbp-138h]
  int v54; // [rsp+54h] [rbp-134h]
  unsigned int BugCheckParameter2; // [rsp+58h] [rbp-130h]
  volatile signed __int64 *BugCheckParameter2a; // [rsp+58h] [rbp-130h]
  __int16 BugCheckParameter2b; // [rsp+58h] [rbp-130h]
  __int64 v58; // [rsp+60h] [rbp-128h] BYREF
  __int64 v59; // [rsp+68h] [rbp-120h]
  PVOID Object; // [rsp+70h] [rbp-118h] BYREF
  _BYTE *v61; // [rsp+78h] [rbp-110h]
  SIZE_T Size; // [rsp+80h] [rbp-108h]
  __int64 v63; // [rsp+88h] [rbp-100h]
  _QWORD *v64; // [rsp+90h] [rbp-F8h]
  int v65; // [rsp+98h] [rbp-F0h]
  ULONG ContextLength; // [rsp+9Ch] [rbp-ECh] BYREF
  __int64 v67; // [rsp+A0h] [rbp-E8h]
  struct _KTHREAD *v68; // [rsp+A8h] [rbp-E0h]
  struct _KPROCESS *v69; // [rsp+B0h] [rbp-D8h]
  __int64 v70; // [rsp+B8h] [rbp-D0h]
  _QWORD *v71; // [rsp+C0h] [rbp-C8h]
  int v72; // [rsp+C8h] [rbp-C0h]
  int v73; // [rsp+CCh] [rbp-BCh]
  int v74; // [rsp+D0h] [rbp-B8h]
  int v75; // [rsp+D4h] [rbp-B4h]
  __int64 v76; // [rsp+D8h] [rbp-B0h]
  __int64 v77; // [rsp+E0h] [rbp-A8h]
  _QWORD *v78; // [rsp+E8h] [rbp-A0h]
  _BYTE v79[8]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-90h]
  __int64 v81; // [rsp+100h] [rbp-88h]
  __int64 v82; // [rsp+108h] [rbp-80h]
  $5BC46E0569261879018906DEC3127961 v83; // [rsp+110h] [rbp-78h] BYREF
  unsigned __int8 v84; // [rsp+1A0h] [rbp+18h]

  v84 = a3;
  v69 = BugCheckParameter1;
  v64 = (_QWORD *)a2;
  v70 = a4;
  v71 = a5;
  Size = (SIZE_T)a6;
  v78 = a10;
  v61 = a11;
  v67 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v68 = CurrentThread;
  v54 = 0;
  if ( a6 )
  {
    v59 = *a6;
    v63 = v59;
  }
  else
  {
    v59 = 0LL;
    v63 = 0LL;
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
      v54 = *(unsigned __int16 *)(*(_QWORD *)(v16 + 192) + 146LL) + 1;
    }
    else if ( v18 && *(_QWORD *)v18 )
    {
      v40 = KeSelectNodeForAffinity(v18);
      v54 = *(unsigned __int16 *)(v40 + 146) + 1;
      *(_DWORD *)(a4 + 4) |= 0x4000u;
      *(_DWORD *)(a4 + 252) = KeSelectIdealProcessor(v40, v18, 0LL);
      a3 = v84;
      CurrentThread = v68;
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
        v36 = *(_DWORD *)(a2 + 24) & 0x1DF2;
      else
        v36 = *(_DWORD *)(a2 + 24) & 0x11FF2;
      v65 = v36;
      *(_DWORD *)(a12 + 384) = v36;
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
  v22 = ObCreateObjectEx(v84, PsThreadType, a2, v84, v52, v19, 0, v19, &Object, 0LL);
  v53 = v22;
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
  v64 = v24 + 1592;
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
    KeQuerySystemTimePrecise((LARGE_INTEGER *)v24 + 189);
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
    v53 = -1073741670;
    v24 = (char *)Object;
    goto LABEL_121;
  }
  if ( !a5 )
  {
    Teb = 0LL;
    v58 = 0LL;
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
               v54);
    goto LABEL_47;
  }
  v26 = *a9;
  v27 = (16 * (*a9 & 0x40)) | 8;
  if ( (*a9 & 2) == 0 )
    v27 = 16 * (v26 & 0x40);
  v28 = v27 | 0x2000;
  if ( (v26 & 0x80u) == 0 )
    v28 = v27;
  BugCheckParameter2b = v28;
  if ( (v26 & 0x100) != 0 )
    BugCheckParameter2b = v28 | 0x4000;
  if ( !v61 )
  {
    if ( BugCheckParameter1[2].ActiveProcessors.Bitmap[9] )
    {
      v58 = 0LL;
      v41 = a5[31];
      *((_QWORD *)v24 + 194) = v41;
      *((_QWORD *)v24 + 210) = v41;
      v42 = Size;
      *((_QWORD *)v24 + 244) = *(_QWORD *)(Size + 8);
      *((_QWORD *)v24 + 245) = *(_QWORD *)(v42 + 16);
      _interlockedbittestandset((volatile signed __int32 *)v24, 0x1Au);
      v43 = 1048671;
      if ( !MEMORY[0xFFFFF780000003D8] )
        v43 = 1048607;
      RtlGetExtendedContextLength(v43, &ContextLength);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, ContextLength, 0x63537350u);
      v24 = (char *)Object;
      *((_QWORD *)Object + 251) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v22 = -1073741670;
        v53 = -1073741670;
        goto LABEL_121;
      }
      Teb = v58;
    }
    else
    {
      Teb = (__int64)v68->Teb;
      v58 = Teb;
      *((_QWORD *)v24 + 194) = PsQueryThreadStartAddress((__int64)v68, 1);
      *((_QWORD *)v24 + 210) = v68[1].ApcState.ApcListHead[1].Flink;
      *((_DWORD *)v24 + 435) |= 0x10u;
      v45 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
      if ( v45 && ((v46 = *(_WORD *)(v45 + 8), v46 == 332) || v46 == 452) )
      {
        v47 = 14392LL;
        if ( *(_WORD *)(v45 + 8) != 0x8664 )
          v47 = 12288LL;
        Size = v47;
      }
      else
      {
        Size = 6200LL;
      }
      KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v83);
      if ( MmSecureVirtualMemory((PVOID)Teb, Size, 4u) )
      {
        v48 = v64;
        *(_OWORD *)(Teb + 64) = *(_OWORD *)v64;
        *(_OWORD *)(Teb + 2008) = *v48;
        *(_DWORD *)(Teb + 6044) = 0;
        *(_DWORD *)(Teb + 6120) = 0;
        *(_WORD *)(Teb + 6126) &= 0x62Cu;
        *(_WORD *)(Teb + 6126) |= BugCheckParameter2b | 0x40;
        v49 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
        if ( v49 )
        {
          v50 = *(_WORD *)(v49 + 8);
          if ( v50 == 332 || v50 == 452 )
          {
            if ( *(_WORD *)(v49 + 8) == 0x8664 )
            {
              v76 = Teb + 0x2000;
              *(_QWORD *)(Teb + 8256) = *(_QWORD *)v48;
              *(_QWORD *)(Teb + 8264) = *((_QWORD *)v24 + 200);
              *(_QWORD *)(Teb + 10200) = *(_QWORD *)v48;
              *(_QWORD *)(Teb + 10208) = *((_QWORD *)v24 + 200);
              *(_DWORD *)(Teb + 14236) = 0;
              *(_DWORD *)(Teb + 14312) = 0;
              *(_WORD *)(Teb + 14318) &= 0x62Cu;
              *(_WORD *)(Teb + 14318) |= BugCheckParameter2b | 0x40;
            }
            else
            {
              v77 = Teb + 0x2000;
              v72 = *(_DWORD *)v48;
              *(_DWORD *)(Teb + 8224) = v72;
              v73 = *((_DWORD *)v24 + 400);
              *(_DWORD *)(Teb + 8228) = v73;
              v74 = *(_DWORD *)v48;
              *(_DWORD *)(Teb + 9908) = v74;
              v75 = *((_DWORD *)v24 + 400);
              *(_DWORD *)(Teb + 9912) = v75;
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
        v53 = -1073741503;
      }
      KiUnstackDetachProcess(&v83, 0LL);
      if ( v22 < 0 )
        goto LABEL_121;
    }
    goto LABEL_46;
  }
  v29 = v59;
  if ( !BugCheckParameter1[1].ActiveProcessors.Bitmap[7] )
  {
    v30 = PspSetupUserStack((__int64)BugCheckParameter1, (__int64)a5, v59, (__int64)v61, v54);
LABEL_38:
    v53 = v30;
    v22 = v30;
    goto LABEL_39;
  }
  v79[0] = 0;
  v81 = 0x8000LL;
  v82 = 0x40000LL;
  v80 = 0LL;
  v22 = PspSetupUserStack((__int64)BugCheckParameter1, (__int64)a5, v59, (__int64)v79, v54);
  v53 = v22;
  if ( v22 >= 0 )
  {
    v39 = v61;
    *v61 ^= (*v61 ^ v79[0]) & 2;
    v30 = PspWow64SetupUserStack(BugCheckParameter1, v31, v29, (__int64)v39, v54);
    goto LABEL_38;
  }
LABEL_39:
  if ( v22 < 0 )
    goto LABEL_121;
  v32 = a4 && (((*(_DWORD *)(a4 + 4) & 0x8000) != 0) & !_bittest64((const signed __int64 *)&KeFeatureBits, 0x1Cu)) != 0
      ? 0x100000000LL
      : v67;
  v22 = MmCreateTeb(BugCheckParameter1, v29, v64, v32, (unsigned __int64 *)&v58);
  v53 = v22;
  if ( v22 < 0 )
    goto LABEL_121;
  *((_QWORD *)v24 + 194) = a5[31];
  *((_QWORD *)v24 + 210) = a5[16];
  Teb = v58;
  if ( BugCheckParameter1[1].ActiveProcessors.Bitmap[7] )
  {
    v22 = PspWow64InitThread((ULONG_PTR)BugCheckParameter1, v59, a5, v58);
    v53 = v22;
    if ( v22 < 0 )
      goto LABEL_121;
  }
  if ( BugCheckParameter2b )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v83);
    *(_WORD *)(Teb + 6126) = BugCheckParameter2b;
    v37 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
    if ( v37 )
    {
      v38 = *(_WORD *)(v37 + 8);
      if ( v38 == 332 || v38 == 452 )
      {
        if ( *(_WORD *)(v37 + 8) == 0x8664 )
        {
          v76 = Teb + 0x2000;
          *(_WORD *)(Teb + 14318) = BugCheckParameter2b;
        }
        else
        {
          v77 = Teb + 0x2000;
          *(_WORD *)(Teb + 12234) = BugCheckParameter2b;
        }
      }
    }
    KiUnstackDetachProcess(&v83, 0LL);
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
             v54);
LABEL_47:
  v53 = inited;
  v22 = inited;
  if ( inited < 0 )
  {
    if ( !Teb || !v61 )
      goto LABEL_121;
  }
  else if ( !a4
         || (*(_DWORD *)(a4 + 4) & 0x8000) == 0
         || (v22 = PspUmsInitThread(v24, v84, a4, Teb), v53 = v22, v22 >= 0) )
  {
    *v78 = v24;
    return 0LL;
  }
  MmDeleteTeb(BugCheckParameter1, Teb);
LABEL_121:
  if ( v61 && *v61 )
    PspDeleteUserStack(BugCheckParameter1, v31, v59, v61);
  v51 = (void *)*((_QWORD *)v24 + 251);
  if ( v51 )
  {
    ExFreePoolWithTag(v51, 0x63537350u);
    *((_QWORD *)v24 + 251) = 0LL;
  }
  if ( *((_QWORD *)v24 + 200) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 215, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v24 + 215);
    KeAbPostRelease((ULONG_PTR)(v24 + 1720));
    v22 = v53;
    v24 = (char *)Object;
  }
  if ( !*((_QWORD *)v24 + 68) )
    ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
  ObfDereferenceObject(v24);
  return (unsigned int)v22;
}
