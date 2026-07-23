/*
 * XREFs of RtlCreateHeap @ 0x180007E70
 * Callers:
 *     CsrpConnectToServer @ 0x18000699C (CsrpConnectToServer.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005ED9C (LdrEnsureMrdataHeapExists.c)
 *     RtlDetectHeapLeaks @ 0x180076800 (RtlDetectHeapLeaks.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     RtlHeapTrkInitialize @ 0x1800F6B90 (RtlHeapTrkInitialize.c)
 *     RtlDebugCreateHeap @ 0x180103588 (RtlDebugCreateHeap.c)
 * Callees:
 *     RtlpHpHeapCreate @ 0x180003E00 (RtlpHpHeapCreate.c)
 *     RtlpPopulateListIndex @ 0x180008AC0 (RtlpPopulateListIndex.c)
 *     RtlpInitializeHeapSegment @ 0x1800098E8 (RtlpInitializeHeapSegment.c)
 *     RtlInitializeCriticalSectionEx @ 0x180009D10 (RtlInitializeCriticalSectionEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x18004944C (RtlpHeapGenerateRandomValue64.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18004A630 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpMoveHeapBetweenLists @ 0x18004C75C (RtlpMoveHeapBetweenLists.c)
 *     RtlpCreateHeapEncoding @ 0x18004D170 (RtlpCreateHeapEncoding.c)
 *     RtlDeleteCriticalSection @ 0x180061480 (RtlDeleteCriticalSection.c)
 *     RtlpHpHeapDestroy @ 0x1800615DC (RtlpHpHeapDestroy.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     NtQuerySystemInformation @ 0x1800A0780 (NtQuerySystemInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlpGetHeapInterceptorIndex @ 0x1800FF8BC (RtlpGetHeapInterceptorIndex.c)
 *     RtlpHeapHandleError @ 0x1800FF958 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeCreate @ 0x1800FF970 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCommit @ 0x1801013E4 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapCreateEvent @ 0x18010153C (RtlpLogHeapCreateEvent.c)
 *     RtlDebugCreateHeap @ 0x180103588 (RtlDebugCreateHeap.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __cdecl RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PVOID Parameters)
{
  SIZE_T v6; // r11
  ULONG v8; // r14d
  _RTL_CRITICAL_SECTION *v9; // r12
  _QWORD *v10; // rsi
  unsigned int NtGlobalFlag; // edi
  _RTL_CRITICAL_SECTION *v12; // r13
  unsigned int v13; // r14d
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // edi
  struct _PEB *v20; // rcx
  __int64 v21; // rax
  ULONG_PTR v22; // r9
  unsigned __int64 v23; // r8
  int v24; // esi
  char *v25; // rsi
  char *v26; // rdx
  char *v27; // r12
  __int64 v28; // r14
  __int64 v29; // rcx
  char *v30; // rsi
  unsigned int v31; // eax
  int v32; // r9d
  _DWORD *v33; // r10
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // rcx
  _WORD *v42; // rdi
  SIZE_T v44; // r10
  unsigned int v45; // edx
  int v46; // r8d
  int v47; // r9d
  int v48; // edx
  int v49; // r9d
  __int64 v50; // r8
  unsigned int v51; // ecx
  _DWORD *v52; // rax
  int v53; // eax
  unsigned __int64 v54; // rsi
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v56; // r10
  PVOID HeapHandle; // [rsp+40h] [rbp-1B8h] BYREF
  _RTL_CRITICAL_SECTION *v58; // [rsp+48h] [rbp-1B0h]
  unsigned int v59; // [rsp+50h] [rbp-1A8h]
  ULONG_PTR v60; // [rsp+58h] [rbp-1A0h] BYREF
  int v61; // [rsp+60h] [rbp-198h]
  ULONG_PTR v62; // [rsp+68h] [rbp-190h] BYREF
  PVOID v63; // [rsp+70h] [rbp-188h] BYREF
  __int64 v64; // [rsp+78h] [rbp-180h] BYREF
  SIZE_T v65; // [rsp+80h] [rbp-178h]
  PVOID BaseAddress; // [rsp+88h] [rbp-170h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-168h] BYREF
  SIZE_T v68; // [rsp+98h] [rbp-160h]
  PVOID v69; // [rsp+A8h] [rbp-150h]
  PVOID v70; // [rsp+B0h] [rbp-148h]
  PVOID MemoryInformation[3]; // [rsp+B8h] [rbp-140h] BYREF
  ULONG_PTR v72; // [rsp+D0h] [rbp-128h]
  int v73; // [rsp+D8h] [rbp-120h]
  char v74; // [rsp+DCh] [rbp-11Ch]
  char v75[16]; // [rsp+E8h] [rbp-110h] BYREF
  ULONG_PTR v76; // [rsp+F8h] [rbp-100h]
  _OWORD v77[6]; // [rsp+110h] [rbp-E8h] BYREF
  char SystemInformation[40]; // [rsp+170h] [rbp-88h] BYREF
  __int64 v79; // [rsp+198h] [rbp-60h]

  v6 = CommitSize;
  v68 = CommitSize;
  v65 = ReserveSize;
  v8 = Flags;
  v69 = HeapBase;
  v9 = (_RTL_CRITICAL_SECTION *)Lock;
  v58 = (_RTL_CRITICAL_SECTION *)Lock;
  v70 = Lock;
  v10 = Parameters;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v59 = NtGlobalFlag;
  v61 = 0;
  HeapHandle = 0LL;
  v12 = 0LL;
  if ( !dword_1801593E8 || HeapBase || Lock )
    goto LABEL_2;
  v42 = (_WORD *)_guard_dispatch_icall_fptr();
  if ( v42 )
    goto LABEL_96;
  if ( Parameters == (PVOID)-1LL )
  {
    v10 = 0LL;
    NtGlobalFlag = v59;
    v6 = v68;
    ReserveSize = v65;
LABEL_2:
    v13 = v8 & 0xF1FFFFFF;
    if ( ((RtlpHpHeapFeatures & 1) != 0 || (v13 & 0x100) != 0) && (v13 & 2) != 0 && !HeapBase )
    {
      if ( !v10 )
        goto LABEL_118;
      if ( v10[1] || v10[2] || v10[6] || (v53 = 1, v10[9]) )
        v53 = 0;
      if ( v53 )
      {
LABEL_118:
        if ( !v58 )
        {
          v44 = v6;
          if ( ReserveSize )
            v44 = ReserveSize;
          v45 = v13 & 1 | 0x80000000;
          if ( (v13 & 4) == 0 )
            v45 = v13 & 1;
          v46 = v45 | 2;
          if ( (v13 & 8) == 0 )
            v46 = v45;
          v47 = v46 | 0x20000000;
          if ( (NtGlobalFlag & 0x1000) == 0 && (v13 & 0x8000000) == 0 )
            v47 = v46;
          v48 = v47 | 0x10000000;
          if ( (NtGlobalFlag & 0x10) == 0 && (v13 & 0x20) == 0 )
            v48 = v47;
          v49 = v48 | 0x40000000;
          if ( (v13 & 0x40000) == 0 )
            v49 = v48;
          v50 = v44;
          if ( v6 <= v44 )
            v50 = v6;
          v51 = v49 | 0x2000000;
          if ( (v13 & 0x10) == 0 )
            v51 = v49;
          v52 = RtlpHpHeapCreate(v51, v44, v50);
          v42 = v52;
          if ( v52 )
          {
            RtlpMoveHeapBetweenLists(v52, 0LL, 1LL);
            if ( !v42[30] )
            {
              RtlpHpHeapDestroy(v42);
              v42 = 0LL;
            }
          }
LABEL_95:
          v9 = v58;
          goto LABEL_96;
        }
      }
    }
    if ( (v13 & 0x100) != 0 )
      goto LABEL_151;
    if ( (v13 & 0x10000000) == 0 )
    {
      if ( RtlpHeapErrorHandlerThreshold >= 2 )
      {
        if ( (v13 & 0xFFF80C00) == 0 )
          goto LABEL_9;
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
        RtlpHeapHandleError(2LL);
      }
      if ( (v13 & 0xFFF80C00) != 0 )
        v13 &= 0x7F3FFu;
    }
LABEL_9:
    memset(v77, 0, sizeof(v77));
    if ( v10 && *(_DWORD *)v10 == 96 )
    {
      v77[0] = *(_OWORD *)v10;
      v77[1] = *((_OWORD *)v10 + 1);
      v77[2] = *((_OWORD *)v10 + 2);
      v77[3] = *((_OWORD *)v10 + 3);
      v77[4] = *((_OWORD *)v10 + 4);
      v77[5] = *((_OWORD *)v10 + 5);
    }
    v14 = v13 | 0x20;
    if ( (NtGlobalFlag & 0x10) == 0 )
      v14 = v13;
    v15 = v14 | 0x40;
    if ( (NtGlobalFlag & 0x20) == 0 )
      v15 = v14;
    v16 = v15 | 0x80;
    if ( (NtGlobalFlag & 0x200000) == 0 )
      v16 = v15;
    v17 = v16 | 0x40000000;
    if ( (NtGlobalFlag & 0x40) == 0 )
      v17 = v16;
    v18 = v17 | 0x20000000;
    if ( (NtGlobalFlag & 0x80) == 0 )
      v18 = v17;
    v59 = NtGlobalFlag & 0x1000;
    v19 = v18 | 0x8000000;
    if ( !v59 )
      v19 = v18;
    v20 = NtCurrentPeb();
    if ( !*((_QWORD *)&v77[0] + 1) )
      *((_QWORD *)&v77[0] + 1) = v20->HeapSegmentReserve;
    if ( !*(_QWORD *)&v77[1] )
      *(_QWORD *)&v77[1] = v20->HeapSegmentCommit;
    if ( !*((_QWORD *)&v77[1] + 1) )
      *((_QWORD *)&v77[1] + 1) = v20->HeapDeCommitFreeBlockThreshold;
    if ( !*(_QWORD *)&v77[2] )
      *(_QWORD *)&v77[2] = v20->HeapDeCommitTotalFreeThreshold;
    v21 = qword_180160058;
    if ( !qword_180160058 )
    {
      qword_180160060 = 0x10000LL;
      if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
        goto LABEL_151;
      v21 = v79;
      qword_180160058 = v79;
    }
    if ( !*((_QWORD *)&v77[2] + 1) )
      *((_QWORD *)&v77[2] + 1) = v21 - qword_180160060 - 4096;
    *(_QWORD *)&Flags = *(_QWORD *)&v77[3];
    if ( (unsigned __int64)(*(_QWORD *)&v77[3] - 1LL) > 0xFEFFF )
      *(_QWORD *)&Flags = 1044480LL;
    *(_QWORD *)&v77[3] = *(_QWORD *)&Flags;
    if ( v68 )
      v22 = (v68 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v22 = 0x2000LL;
    if ( v65 )
      v23 = (v65 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v23 = (v22 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    v60 = v23;
    if ( v22 > v23 )
      v22 = v23;
    v62 = v22;
    if ( (v19 & 2) == 0 || HeapBase )
    {
      v65 = 0LL;
      v24 = v61;
    }
    else
    {
      v65 = 4096LL;
      v24 = 2;
      v61 = 2;
      if ( v23 - 4096 < v22 )
      {
        v23 = (v23 + 69631) & 0xFFFFFFFFFFFF0000uLL;
        v60 = v23;
      }
    }
    if ( !v22 || !v23 )
      goto LABEL_151;
    if ( (v19 & 0x61000000) != 0 && (v19 & 0x10000000) == 0 )
      return (PVOID)RtlDebugCreateHeap(v19, HeapBase);
    v59 = 672;
    if ( (v19 & 1) != 0 )
    {
      if ( v58 )
        goto LABEL_151;
    }
    else if ( v58 )
    {
      v19 |= 0x80000000;
      v12 = v58;
    }
    else
    {
      v59 = 712;
    }
    if ( HeapBase )
    {
      if ( *((_QWORD *)&v77[4] + 1) )
      {
        *(_QWORD *)&Flags = *((_QWORD *)&v77[3] + 1);
        if ( !*((_QWORD *)&v77[3] + 1)
          || !*(_QWORD *)&v77[4]
          || *((_QWORD *)&v77[3] + 1) > *(_QWORD *)&v77[4]
          || (v19 & 2) != 0 )
        {
          goto LABEL_151;
        }
        v63 = HeapBase;
        v27 = (char *)HeapBase + *((_QWORD *)&v77[3] + 1);
        v60 = *(_QWORD *)&v77[4];
        memset(HeapBase, 0, 0x1000uLL);
        v26 = (char *)HeapBase;
      }
      else
      {
        if ( ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               HeapBase,
               MemoryBasicInformation,
               MemoryInformation,
               0x30uLL,
               0LL) < 0 )
          goto LABEL_151;
        v27 = (char *)MemoryInformation[0];
        if ( MemoryInformation[0] != HeapBase || v73 == 0x10000 )
          goto LABEL_151;
        v26 = (char *)MemoryInformation[0];
        v63 = MemoryInformation[0];
        if ( v73 == 4096 )
        {
          if ( (v19 & 0x40000) != 0 && (v74 & 0x40) == 0 )
            goto LABEL_151;
          memset(MemoryInformation[0], 0, 0x1000uLL);
          if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, v75, 0x20uLL, 0LL) < 0 )
            goto LABEL_151;
          v60 = v76;
          v62 = v72;
          v26 = (char *)v63;
          v27 = (char *)v63 + v72;
        }
        else
        {
          v60 = v72;
          *(_QWORD *)&Flags = v62;
          if ( v62 > v72 )
            *(_QWORD *)&Flags = v72;
          v62 = *(_QWORD *)&Flags;
          if ( *(_QWORD *)&Flags < 0x2000uLL )
            goto LABEL_151;
        }
      }
      v61 = v24 | 1;
      v25 = (char *)HeapBase;
      HeapHandle = HeapBase;
    }
    else
    {
      BaseAddress = 0LL;
      v64 = 0LL;
      if ( *((_QWORD *)&v77[4] + 1) )
        goto LABEL_151;
      v64 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
      RegionSize = v60 + v64;
      if ( v60 + v64 < v60 )
      {
        RegionSize = v60;
        v64 = 0LL;
      }
      if ( ZwAllocateVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             0LL,
             &RegionSize,
             0x2000u,
             (v19 & 0x40000) != 0 ? 64 : 4) < 0 )
        goto LABEL_151;
      v25 = (char *)BaseAddress;
      HeapHandle = BaseAddress;
      v60 = RegionSize;
      if ( v64 )
      {
        RtlpSecMemFreeVirtualMemory(*(_QWORD *)&Flags, &BaseAddress, &v64, 0x8000LL);
        v25 = (char *)BaseAddress + v64;
        HeapHandle = (char *)BaseAddress + v64;
        v60 = RegionSize - v64;
      }
      v26 = v25;
      v63 = v25;
      v27 = v25;
    }
    if ( v26 == v27 )
    {
      if ( ZwAllocateVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &v63,
             0LL,
             &v62,
             0x1000u,
             (v19 & 0x40000) != 0 ? 64 : 4) < 0 )
        goto LABEL_151;
      v28 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        v29 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v29 = 2147353472LL;
      if ( *(_BYTE *)v29 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(HeapHandle, v63, v62, 1LL);
      v27 += v62;
      v25 = (char *)HeapHandle;
    }
    else
    {
      v28 = 2147353472LL;
    }
    v30 = v25 + 672;
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v54 = (unsigned __int64)(v30 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *((_QWORD *)HeapHandle + 41) = v54;
      v31 = v59 + 2064;
      v30 = (char *)(v54 + 2064);
      v19 |= 0x4000000u;
    }
    else
    {
      v31 = v59;
    }
    v59 = (v31 + 15) & 0xFFFFFFF0;
    *((_WORD *)HeapHandle + 4) = v59 >> 4;
    *((_BYTE *)HeapHandle + 10) = 1;
    *((_BYTE *)HeapHandle + 15) = 1;
    *((_DWORD *)HeapHandle + 38) = -285217025;
    *((_DWORD *)HeapHandle + 28) = v19 & 0xEFFFFFFF;
    *((_DWORD *)HeapHandle + 36) = 0;
    memset((char *)HeapHandle + 536, 0, 0x78uLL);
    RtlpCreateHeapEncoding(HeapHandle);
    *((_DWORD *)HeapHandle + 154) = 1;
    v33 = HeapHandle;
    if ( (*((_DWORD *)HeapHandle + 28) & 0x8000000) != 0 )
    {
      HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
      *(_DWORD *)(v56 + 144) = HeapInterceptorIndex;
      *((_DWORD *)HeapHandle + 28) &= ~0x40u;
      v33 = HeapHandle;
    }
    v33[29] = v19 & 0x6001007D;
    *((_WORD *)HeapHandle + 105) = (_WORD)v30 - (_WORD)HeapHandle;
    *((_QWORD *)HeapHandle + 27) = 0LL;
    v34 = (char *)HeapHandle + 336;
    *((_QWORD *)HeapHandle + 43) = (char *)HeapHandle + 336;
    *v34 = v34;
    v35 = (char *)HeapHandle + 272;
    *((_QWORD *)HeapHandle + 35) = (char *)HeapHandle + 272;
    *v35 = v35;
    v36 = (char *)HeapHandle + 288;
    *((_QWORD *)HeapHandle + 37) = (char *)HeapHandle + 288;
    *v36 = v36;
    v37 = (char *)HeapHandle + 240;
    *((_QWORD *)HeapHandle + 31) = (char *)HeapHandle + 240;
    *v37 = v37;
    if ( !v12 && (v19 & 1) == 0 )
    {
      v12 = (_RTL_CRITICAL_SECTION *)v30;
      if ( RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)v30, 0, 0x10000000u) < 0 )
      {
        v12 = 0LL;
        goto LABEL_151;
      }
      v30 += 40;
    }
    *((_QWORD *)HeapHandle + 44) = v12;
    *((_DWORD *)HeapHandle + 30) |= 0x80000000;
    if ( (unsigned __int8)RtlpInitializeHeapSegment(
                            (int)HeapHandle,
                            (int)HeapHandle,
                            v59 + 1104,
                            v32,
                            v61,
                            (__int64)v63,
                            v27,
                            (__int64)v63 + v60 - v65) )
    {
      if ( HeapBase )
        memset(v30, 0, 0x80uLL);
      *((_DWORD *)v30 + 2) = 128;
      *((_QWORD *)v30 + 5) = v30 + 56;
      *((_QWORD *)v30 + 4) = (char *)HeapHandle + 336;
      *((_QWORD *)v30 + 6) = v30 + 72;
      RtlpPopulateListIndex(HeapHandle, v30);
      *((_WORD *)HeapHandle + 104) = 0;
      *((_QWORD *)HeapHandle + 20) = *((_QWORD *)&v77[0] + 1);
      *((_QWORD *)HeapHandle + 21) = *(_QWORD *)&v77[1];
      *((_QWORD *)HeapHandle + 22) = *((_QWORD *)&v77[1] + 1) >> 4;
      *((_QWORD *)HeapHandle + 23) = *(_QWORD *)&v77[2] >> 4;
      *((_QWORD *)HeapHandle + 25) = *((_QWORD *)&v77[2] + 1);
      *((_DWORD *)HeapHandle + 37) = (unsigned __int64)(*(_QWORD *)&v77[3] + 15LL) >> 4;
      *((_QWORD *)HeapHandle + 45) = RtlpHeapKey ^ *((_QWORD *)&v77[4] + 1);
      *((_DWORD *)HeapHandle + 164) = 4;
      *((_QWORD *)HeapHandle + 83) = 2088960LL;
      if ( (RtlpDisableHeapLookaside & 1) != 0 )
        *((_DWORD *)HeapHandle + 30) = 1;
      *((_QWORD *)HeapHandle + 32) = 31LL;
      *((_QWORD *)HeapHandle + 33) = -16LL;
      v38 = HeapHandle;
      if ( (*((_BYTE *)HeapHandle + 112) & 0x20) != 0 )
      {
        *((_QWORD *)HeapHandle + 32) += 16LL;
        v38 = HeapHandle;
      }
      v38[47] = 0LL;
      *((_WORD *)HeapHandle + 192) = 0;
      *((_BYTE *)HeapHandle + 386) = 0;
      *((_BYTE *)HeapHandle + 387) = 0;
      *((_QWORD *)HeapHandle + 40) = 0LL;
      if ( (v19 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
      {
LABEL_83:
        RtlpMoveHeapBetweenLists(HeapHandle, 0LL, 1LL);
        if ( *((_WORD *)HeapHandle + 104) )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v39 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v39 = 2147353472LL;
          if ( *(_BYTE *)v39 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v28 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v19, v60, v62, *(unsigned __int8 *)v28);
          }
          v40 = 2147353482LL;
          if ( RtlGetCurrentServiceSessionId() )
            v41 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v41 = 2147353482LL;
          if ( *(_BYTE *)v41 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v40 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapCreateEvent((_DWORD)HeapHandle, v19, v60, v62, *(unsigned __int8 *)v40);
          }
          if ( RtlGetCurrentServiceSessionId() )
            *(_QWORD *)&Flags = (char *)NtCurrentPeb()->SharedData + 558;
          else
            *(_QWORD *)&Flags = 2147353480LL;
          if ( **(_BYTE **)&Flags )
            RtlpHeapLogRangeCreate(HeapHandle, v60, v19);
          *((_DWORD *)HeapHandle + 30) &= ~0x80000000;
          *((_QWORD *)HeapHandle + 46) = 0LL;
          v42 = HeapHandle;
          HeapHandle = 0LL;
          v12 = 0LL;
          goto LABEL_95;
        }
        goto LABEL_151;
      }
      *((_QWORD *)HeapHandle + 49) = RtlAllocateHeap(HeapHandle, 0x80000Au, 0x100uLL);
      *(_QWORD *)&Flags = *((_QWORD *)HeapHandle + 49);
      if ( *(_QWORD *)&Flags )
      {
        *(_BYTE *)(*(_QWORD *)&Flags - 1LL) = 1;
        *((_WORD *)HeapHandle + 200) = 128;
        goto LABEL_83;
      }
    }
LABEL_151:
    v9 = v58;
  }
  v42 = 0LL;
LABEL_96:
  if ( v12 && v12 != v9 )
    RtlDeleteCriticalSection(v12);
  if ( HeapHandle )
  {
    if ( !HeapBase )
    {
      v60 = 0LL;
      RtlpSecMemFreeVirtualMemory(*(_QWORD *)&Flags, &HeapHandle, &v60, 0x8000LL);
    }
  }
  return v42;
}
