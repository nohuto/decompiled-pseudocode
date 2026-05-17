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

__int64 __fastcall RtlCreateHeap(
        unsigned __int64 a1,
        char *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // r11
  int v8; // r14d
  __int64 v9; // r12
  __int64 v10; // rsi
  unsigned int NtGlobalFlag; // edi
  void *v12; // r13
  unsigned int v13; // r14d
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  unsigned int v19; // edi
  struct _PEB *v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  int v24; // esi
  char *v25; // rsi
  char *v26; // rdx
  char *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // r14
  __int64 v30; // rcx
  char *v31; // rsi
  unsigned int v32; // eax
  int v33; // r9d
  char *v34; // r10
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  char *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rdi
  unsigned __int64 v48; // r10
  unsigned int v49; // edx
  int v50; // r8d
  int v51; // r9d
  int v52; // edx
  int v53; // r9d
  __int64 v54; // r8
  unsigned int v55; // ecx
  __int64 v56; // rax
  int v57; // eax
  unsigned __int64 v58; // rsi
  unsigned __int16 HeapInterceptorIndex; // ax
  __int64 v60; // r10
  char *v61; // [rsp+40h] [rbp-1B8h] BYREF
  void *v62; // [rsp+48h] [rbp-1B0h]
  unsigned int v63; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v64; // [rsp+58h] [rbp-1A0h] BYREF
  int v65; // [rsp+60h] [rbp-198h]
  unsigned __int64 v66; // [rsp+68h] [rbp-190h] BYREF
  char *v67; // [rsp+70h] [rbp-188h] BYREF
  __int64 v68; // [rsp+78h] [rbp-180h] BYREF
  __int64 v69; // [rsp+80h] [rbp-178h]
  char *v70; // [rsp+88h] [rbp-170h] BYREF
  unsigned __int64 v71; // [rsp+90h] [rbp-168h] BYREF
  unsigned __int64 v72; // [rsp+98h] [rbp-160h]
  char *v73; // [rsp+A8h] [rbp-150h]
  __int64 v74; // [rsp+B0h] [rbp-148h]
  void *v75; // [rsp+B8h] [rbp-140h] BYREF
  unsigned __int64 v76; // [rsp+D0h] [rbp-128h]
  int v77; // [rsp+D8h] [rbp-120h]
  char v78; // [rsp+DCh] [rbp-11Ch]
  char v79[16]; // [rsp+E8h] [rbp-110h] BYREF
  unsigned __int64 v80; // [rsp+F8h] [rbp-100h]
  _OWORD v81[6]; // [rsp+110h] [rbp-E8h] BYREF
  char SystemInformation[40]; // [rsp+170h] [rbp-88h] BYREF
  __int64 v83; // [rsp+198h] [rbp-60h]

  v6 = a4;
  v72 = a4;
  v69 = a3;
  v8 = a1;
  v73 = a2;
  v9 = a5;
  v62 = (void *)a5;
  v74 = a5;
  v10 = a6;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v63 = NtGlobalFlag;
  v65 = 0;
  v61 = 0LL;
  v12 = 0LL;
  if ( !dword_1801593E8 || a2 || a5 )
    goto LABEL_2;
  v46 = _guard_dispatch_icall_fptr();
  if ( v46 )
    goto LABEL_96;
  if ( a6 == -1 )
  {
    v10 = 0LL;
    NtGlobalFlag = v63;
    v6 = v72;
    a3 = v69;
LABEL_2:
    v13 = v8 & 0xF1FFFFFF;
    if ( ((RtlpHpHeapFeatures & 1) != 0 || (v13 & 0x100) != 0) && (v13 & 2) != 0 && !a2 )
    {
      if ( !v10 )
        goto LABEL_118;
      if ( *(_QWORD *)(v10 + 8) || *(_QWORD *)(v10 + 16) || *(_QWORD *)(v10 + 48) || (v57 = 1, *(_QWORD *)(v10 + 72)) )
        v57 = 0;
      if ( v57 )
      {
LABEL_118:
        if ( !v62 )
        {
          v48 = v6;
          if ( a3 )
            v48 = a3;
          v49 = v13 & 1 | 0x80000000;
          if ( (v13 & 4) == 0 )
            v49 = v13 & 1;
          v50 = v49 | 2;
          if ( (v13 & 8) == 0 )
            v50 = v49;
          v51 = v50 | 0x20000000;
          if ( (NtGlobalFlag & 0x1000) == 0 && (v13 & 0x8000000) == 0 )
            v51 = v50;
          v52 = v51 | 0x10000000;
          if ( (NtGlobalFlag & 0x10) == 0 && (v13 & 0x20) == 0 )
            v52 = v51;
          v53 = v52 | 0x40000000;
          if ( (v13 & 0x40000) == 0 )
            v53 = v52;
          v54 = v48;
          if ( v6 <= v48 )
            v54 = v6;
          v55 = v53 | 0x2000000;
          if ( (v13 & 0x10) == 0 )
            v55 = v53;
          v56 = RtlpHpHeapCreate(v55, v48, v54);
          v46 = v56;
          if ( v56 )
          {
            RtlpMoveHeapBetweenLists(v56, 0LL, 1LL);
            if ( !*(_WORD *)(v46 + 60) )
            {
              RtlpHpHeapDestroy(v46);
              v46 = 0LL;
            }
          }
LABEL_95:
          v9 = (__int64)v62;
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
    memset(v81, 0, sizeof(v81));
    if ( v10 && *(_DWORD *)v10 == 96 )
    {
      v81[0] = *(_OWORD *)v10;
      v81[1] = *(_OWORD *)(v10 + 16);
      v81[2] = *(_OWORD *)(v10 + 32);
      v81[3] = *(_OWORD *)(v10 + 48);
      v81[4] = *(_OWORD *)(v10 + 64);
      v81[5] = *(_OWORD *)(v10 + 80);
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
    v63 = NtGlobalFlag & 0x1000;
    v19 = v18 | 0x8000000;
    if ( !v63 )
      v19 = v18;
    v20 = NtCurrentPeb();
    if ( !*((_QWORD *)&v81[0] + 1) )
      *((_QWORD *)&v81[0] + 1) = v20->HeapSegmentReserve;
    if ( !*(_QWORD *)&v81[1] )
      *(_QWORD *)&v81[1] = v20->HeapSegmentCommit;
    if ( !*((_QWORD *)&v81[1] + 1) )
      *((_QWORD *)&v81[1] + 1) = v20->HeapDeCommitFreeBlockThreshold;
    if ( !*(_QWORD *)&v81[2] )
      *(_QWORD *)&v81[2] = v20->HeapDeCommitTotalFreeThreshold;
    v21 = qword_180160058;
    if ( !qword_180160058 )
    {
      qword_180160060 = 0x10000LL;
      if ( NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
        goto LABEL_151;
      v21 = v83;
      qword_180160058 = v83;
    }
    if ( !*((_QWORD *)&v81[2] + 1) )
      *((_QWORD *)&v81[2] + 1) = v21 - qword_180160060 - 4096;
    a1 = *(_QWORD *)&v81[3];
    if ( (unsigned __int64)(*(_QWORD *)&v81[3] - 1LL) > 0xFEFFF )
      a1 = 1044480LL;
    *(_QWORD *)&v81[3] = a1;
    if ( v72 )
      v22 = (v72 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v22 = 0x2000LL;
    if ( v69 )
      v23 = (v69 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v23 = (v22 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    v64 = v23;
    if ( v22 > v23 )
      v22 = v23;
    v66 = v22;
    if ( (v19 & 2) == 0 || a2 )
    {
      v69 = 0LL;
      v24 = v65;
    }
    else
    {
      v69 = 4096LL;
      v24 = 2;
      v65 = 2;
      if ( v23 - 4096 < v22 )
      {
        v23 = (v23 + 69631) & 0xFFFFFFFFFFFF0000uLL;
        v64 = v23;
      }
    }
    if ( !v22 || !v23 )
      goto LABEL_151;
    if ( (v19 & 0x61000000) != 0 && (v19 & 0x10000000) == 0 )
      return RtlDebugCreateHeap(v19, (_DWORD)a2, v23, v22, (__int64)v62, (__int64)v81);
    v63 = 672;
    if ( (v19 & 1) != 0 )
    {
      if ( v62 )
        goto LABEL_151;
    }
    else if ( v62 )
    {
      v19 |= 0x80000000;
      v12 = v62;
    }
    else
    {
      v63 = 712;
    }
    if ( a2 )
    {
      if ( *((_QWORD *)&v81[4] + 1) )
      {
        a1 = *((_QWORD *)&v81[3] + 1);
        if ( !*((_QWORD *)&v81[3] + 1)
          || !*(_QWORD *)&v81[4]
          || *((_QWORD *)&v81[3] + 1) > *(_QWORD *)&v81[4]
          || (v19 & 2) != 0 )
        {
          goto LABEL_151;
        }
        v67 = a2;
        v27 = &a2[*((_QWORD *)&v81[3] + 1)];
        v64 = *(_QWORD *)&v81[4];
        memset(a2, 0, 0x1000uLL);
        v26 = a2;
      }
      else
      {
        if ( (int)ZwQueryVirtualMemory(-1LL, a2, 0LL, &v75, 48LL, 0LL) < 0 )
          goto LABEL_151;
        v27 = (char *)v75;
        if ( v75 != a2 || v77 == 0x10000 )
          goto LABEL_151;
        v26 = (char *)v75;
        v67 = (char *)v75;
        if ( v77 == 4096 )
        {
          if ( (v19 & 0x40000) != 0 && (v78 & 0x40) == 0 )
            goto LABEL_151;
          memset(v75, 0, 0x1000uLL);
          if ( (int)ZwQueryVirtualMemory(-1LL, a2, 3LL, v79, 32LL, 0LL) < 0 )
            goto LABEL_151;
          v64 = v80;
          v66 = v76;
          v26 = v67;
          v27 = &v67[v76];
        }
        else
        {
          v64 = v76;
          a1 = v66;
          if ( v66 > v76 )
            a1 = v76;
          v66 = a1;
          if ( a1 < 0x2000 )
            goto LABEL_151;
        }
      }
      v65 = v24 | 1;
      v25 = a2;
      v61 = a2;
    }
    else
    {
      v70 = 0LL;
      v68 = 0LL;
      if ( *((_QWORD *)&v81[4] + 1) )
        goto LABEL_151;
      v68 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
      v71 = v64 + v68;
      if ( v64 + v68 < v64 )
      {
        v71 = v64;
        v68 = 0LL;
      }
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v70, 0LL, &v71, 0x2000, (v19 & 0x40000) != 0 ? 64 : 4) < 0 )
        goto LABEL_151;
      v25 = v70;
      v61 = v70;
      v64 = v71;
      if ( v68 )
      {
        RtlpSecMemFreeVirtualMemory(a1, &v70, &v68, 0x8000LL);
        v25 = &v70[v68];
        v61 = &v70[v68];
        v64 = v71 - v68;
      }
      v26 = v25;
      v67 = v25;
      v27 = v25;
    }
    if ( v26 == v27 )
    {
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v67, 0LL, &v66, 4096, (v19 & 0x40000) != 0 ? 64 : 4) < 0 )
        goto LABEL_151;
      v29 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, v28) )
        v30 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v30 = 2147353472LL;
      if ( *(_BYTE *)v30 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapCommit(v61, v67, v66, 1LL);
      v27 += v66;
      v25 = v61;
    }
    else
    {
      v29 = 2147353472LL;
    }
    v31 = v25 + 672;
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v58 = (unsigned __int64)(v31 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *((_QWORD *)v61 + 41) = v58;
      v32 = v63 + 2064;
      v31 = (char *)(v58 + 2064);
      v19 |= 0x4000000u;
    }
    else
    {
      v32 = v63;
    }
    v63 = (v32 + 15) & 0xFFFFFFF0;
    *((_WORD *)v61 + 4) = v63 >> 4;
    v61[10] = 1;
    v61[15] = 1;
    *((_DWORD *)v61 + 38) = -285217025;
    *((_DWORD *)v61 + 28) = v19 & 0xEFFFFFFF;
    *((_DWORD *)v61 + 36) = 0;
    memset(v61 + 536, 0, 0x78uLL);
    RtlpCreateHeapEncoding(v61);
    *((_DWORD *)v61 + 154) = 1;
    v34 = v61;
    if ( (*((_DWORD *)v61 + 28) & 0x8000000) != 0 )
    {
      HeapInterceptorIndex = RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
      *(_DWORD *)(v60 + 144) = HeapInterceptorIndex;
      *((_DWORD *)v61 + 28) &= ~0x40u;
      v34 = v61;
    }
    *((_DWORD *)v34 + 29) = v19 & 0x6001007D;
    *((_WORD *)v61 + 105) = (_WORD)v31 - (_WORD)v61;
    *((_QWORD *)v61 + 27) = 0LL;
    v35 = v61 + 336;
    *((_QWORD *)v61 + 43) = v61 + 336;
    *v35 = v35;
    v36 = v61 + 272;
    *((_QWORD *)v61 + 35) = v61 + 272;
    *v36 = v36;
    v37 = v61 + 288;
    *((_QWORD *)v61 + 37) = v61 + 288;
    *v37 = v37;
    v38 = v61 + 240;
    *((_QWORD *)v61 + 31) = v61 + 240;
    *v38 = v38;
    if ( !v12 && (v19 & 1) == 0 )
    {
      v12 = v31;
      if ( (int)RtlInitializeCriticalSectionEx(v31, 0LL, 0x10000000LL) < 0 )
      {
        v12 = 0LL;
        goto LABEL_151;
      }
      v31 += 40;
    }
    *((_QWORD *)v61 + 44) = v12;
    *((_DWORD *)v61 + 30) |= 0x80000000;
    if ( (unsigned __int8)RtlpInitializeHeapSegment(
                            (_DWORD)v61,
                            (_DWORD)v61,
                            v63 + 1104,
                            v33,
                            v65,
                            (__int64)v67,
                            (__int64)v27,
                            (__int64)&v67[v64 - v69]) )
    {
      if ( a2 )
        memset(v31, 0, 0x80uLL);
      *((_DWORD *)v31 + 2) = 128;
      *((_QWORD *)v31 + 5) = v31 + 56;
      *((_QWORD *)v31 + 4) = v61 + 336;
      *((_QWORD *)v31 + 6) = v31 + 72;
      RtlpPopulateListIndex(v61, v31);
      *((_WORD *)v61 + 104) = 0;
      *((_QWORD *)v61 + 20) = *((_QWORD *)&v81[0] + 1);
      *((_QWORD *)v61 + 21) = *(_QWORD *)&v81[1];
      *((_QWORD *)v61 + 22) = *((_QWORD *)&v81[1] + 1) >> 4;
      *((_QWORD *)v61 + 23) = *(_QWORD *)&v81[2] >> 4;
      *((_QWORD *)v61 + 25) = *((_QWORD *)&v81[2] + 1);
      *((_DWORD *)v61 + 37) = (unsigned __int64)(*(_QWORD *)&v81[3] + 15LL) >> 4;
      *((_QWORD *)v61 + 45) = RtlpHeapKey ^ *((_QWORD *)&v81[4] + 1);
      *((_DWORD *)v61 + 164) = 4;
      *((_QWORD *)v61 + 83) = 2088960LL;
      if ( (RtlpDisableHeapLookaside & 1) != 0 )
        *((_DWORD *)v61 + 30) = 1;
      *((_QWORD *)v61 + 32) = 31LL;
      *((_QWORD *)v61 + 33) = -16LL;
      v39 = v61;
      if ( (v61[112] & 0x20) != 0 )
      {
        *((_QWORD *)v61 + 32) += 16LL;
        v39 = v61;
      }
      *((_QWORD *)v39 + 47) = 0LL;
      *((_WORD *)v61 + 192) = 0;
      v61[386] = 0;
      v61[387] = 0;
      *((_QWORD *)v61 + 40) = 0LL;
      if ( (v19 & 3) != 2 || (RtlpDisableHeapLookaside & 1) != 0 )
      {
LABEL_83:
        RtlpMoveHeapBetweenLists(v61, 0LL, 1LL);
        if ( *((_WORD *)v61 + 104) )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, v40) )
            v42 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v42 = 2147353472LL;
          if ( *(_BYTE *)v42 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v42, v41) )
              v29 = (__int64)NtCurrentPeb()->SharedData + 550;
            RtlpLogHeapCreateEvent((_DWORD)v61, v19, v64, v66, *(unsigned __int8 *)v29);
          }
          v44 = 2147353482LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v42, v41) )
            v45 = (__int64)NtCurrentPeb()->SharedData + 560;
          else
            v45 = 2147353482LL;
          if ( *(_BYTE *)v45 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v45, v43) )
              v44 = (__int64)NtCurrentPeb()->SharedData + 560;
            RtlpLogHeapCreateEvent((_DWORD)v61, v19, v64, v66, *(unsigned __int8 *)v44);
          }
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v45, v43) )
            a1 = (unsigned __int64)NtCurrentPeb()->SharedData + 558;
          else
            a1 = 2147353480LL;
          if ( *(_BYTE *)a1 )
            RtlpHeapLogRangeCreate(v61, v64, v19);
          *((_DWORD *)v61 + 30) &= ~0x80000000;
          *((_QWORD *)v61 + 46) = 0LL;
          v46 = (__int64)v61;
          v61 = 0LL;
          v12 = 0LL;
          goto LABEL_95;
        }
        goto LABEL_151;
      }
      *((_QWORD *)v61 + 49) = RtlAllocateHeap(v61, 8388618LL, 256LL);
      a1 = *((_QWORD *)v61 + 49);
      if ( a1 )
      {
        *(_BYTE *)(a1 - 1) = 1;
        *((_WORD *)v61 + 200) = 128;
        goto LABEL_83;
      }
    }
LABEL_151:
    v9 = (__int64)v62;
  }
  v46 = 0LL;
LABEL_96:
  if ( v12 && v12 != (void *)v9 )
    RtlDeleteCriticalSection(v12);
  if ( v61 )
  {
    if ( !a2 )
    {
      v64 = 0LL;
      RtlpSecMemFreeVirtualMemory(a1, &v61, &v64, 0x8000LL);
    }
  }
  return v46;
}
