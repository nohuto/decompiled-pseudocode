/*
 * XREFs of RtlCreateHeap @ 0x18000CA40
 * Callers:
 *     sub_18000B7EC @ 0x18000B7EC (sub_18000B7EC.c)
 *     RtlDetectHeapLeaks @ 0x180070460 (RtlDetectHeapLeaks.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     RtlHeapTrkInitialize @ 0x1800F5D20 (RtlHeapTrkInitialize.c)
 *     sub_180100F68 @ 0x180100F68 (sub_180100F68.c)
 * Callees:
 *     sub_1800080CC @ 0x1800080CC (sub_1800080CC.c)
 *     RtlDeleteCriticalSection @ 0x180008D10 (RtlDeleteCriticalSection.c)
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     sub_18000D844 @ 0x18000D844 (sub_18000D844.c)
 *     sub_18000DC18 @ 0x18000DC18 (sub_18000DC18.c)
 *     sub_18000EA74 @ 0x18000EA74 (sub_18000EA74.c)
 *     sub_18000EC70 @ 0x18000EC70 (sub_18000EC70.c)
 *     sub_18000EEA8 @ 0x18000EEA8 (sub_18000EEA8.c)
 *     RtlInitializeCriticalSectionEx @ 0x18000F440 (RtlInitializeCriticalSectionEx.c)
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 *     sub_1800FDD7C @ 0x1800FDD7C (sub_1800FDD7C.c)
 *     sub_1800FDDA8 @ 0x1800FDDA8 (sub_1800FDDA8.c)
 *     sub_1800FDDC0 @ 0x1800FDDC0 (sub_1800FDDC0.c)
 *     sub_1800FF834 @ 0x1800FF834 (sub_1800FF834.c)
 *     sub_1800FF98C @ 0x1800FF98C (sub_1800FF98C.c)
 *     sub_180100F68 @ 0x180100F68 (sub_180100F68.c)
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
  ULONG NtGlobalFlag; // edi
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
  __int64 UserModeGlobalLogger; // rcx
  char *v30; // rsi
  unsigned int v31; // eax
  _DWORD *v32; // r10
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rcx
  _WORD *v41; // rdi
  SIZE_T v43; // r10
  unsigned int v44; // edx
  int v45; // r8d
  int v46; // r9d
  int v47; // edx
  int v48; // r9d
  __int64 v49; // r8
  unsigned int v50; // ecx
  __int64 v51; // rax
  int v52; // eax
  unsigned __int64 v53; // rsi
  unsigned __int16 v54; // ax
  __int64 v55; // r10
  PVOID HeapHandle; // [rsp+40h] [rbp-1B8h] BYREF
  _RTL_CRITICAL_SECTION *v57; // [rsp+48h] [rbp-1B0h]
  unsigned int v58; // [rsp+50h] [rbp-1A8h]
  ULONG_PTR v59; // [rsp+58h] [rbp-1A0h] BYREF
  int v60; // [rsp+60h] [rbp-198h]
  ULONG_PTR v61; // [rsp+68h] [rbp-190h] BYREF
  PVOID v62; // [rsp+70h] [rbp-188h] BYREF
  __int64 v63; // [rsp+78h] [rbp-180h] BYREF
  SIZE_T v64; // [rsp+80h] [rbp-178h]
  PVOID BaseAddress; // [rsp+88h] [rbp-170h] BYREF
  ULONG_PTR RegionSize; // [rsp+90h] [rbp-168h] BYREF
  SIZE_T v67; // [rsp+98h] [rbp-160h]
  PVOID v68; // [rsp+A8h] [rbp-150h]
  PVOID v69; // [rsp+B0h] [rbp-148h]
  PVOID MemoryInformation[3]; // [rsp+B8h] [rbp-140h] BYREF
  ULONG_PTR v71; // [rsp+D0h] [rbp-128h]
  int v72; // [rsp+D8h] [rbp-120h]
  char v73; // [rsp+DCh] [rbp-11Ch]
  char v74[16]; // [rsp+E8h] [rbp-110h] BYREF
  ULONG_PTR v75; // [rsp+F8h] [rbp-100h]
  _OWORD v76[6]; // [rsp+110h] [rbp-E8h] BYREF
  char SystemInformation[40]; // [rsp+170h] [rbp-88h] BYREF
  __int64 v78; // [rsp+198h] [rbp-60h]

  v6 = CommitSize;
  v67 = CommitSize;
  v64 = ReserveSize;
  v8 = Flags;
  v68 = HeapBase;
  v9 = (_RTL_CRITICAL_SECTION *)Lock;
  v57 = (_RTL_CRITICAL_SECTION *)Lock;
  v69 = Lock;
  v10 = Parameters;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v58 = NtGlobalFlag;
  v60 = 0;
  HeapHandle = 0LL;
  v12 = 0LL;
  if ( !dword_1801553F8 || HeapBase || Lock )
    goto LABEL_2;
  v41 = (_WORD *)_guard_dispatch_icall_fptr();
  if ( v41 )
    goto LABEL_96;
  if ( Parameters == (PVOID)-1LL )
  {
    v10 = 0LL;
    NtGlobalFlag = v58;
    v6 = v67;
    ReserveSize = v64;
LABEL_2:
    v13 = v8 & 0xF1FFFFFF;
    if ( ((byte_18015BFBC & 1) != 0 || (v13 & 0x100) != 0) && (v13 & 2) != 0 && !HeapBase )
    {
      if ( !v10 )
        goto LABEL_118;
      if ( v10[1] || v10[2] || v10[6] || (v52 = 1, v10[9]) )
        v52 = 0;
      if ( v52 )
      {
LABEL_118:
        if ( !v57 )
        {
          v43 = v6;
          if ( ReserveSize )
            v43 = ReserveSize;
          v44 = v13 & 1 | 0x80000000;
          if ( (v13 & 4) == 0 )
            v44 = v13 & 1;
          v45 = v44 | 2;
          if ( (v13 & 8) == 0 )
            v45 = v44;
          v46 = v45 | 0x20000000;
          if ( (NtGlobalFlag & 0x1000) == 0 && (v13 & 0x8000000) == 0 )
            v46 = v45;
          v47 = v46 | 0x10000000;
          if ( (NtGlobalFlag & 0x10) == 0 && (v13 & 0x20) == 0 )
            v47 = v46;
          v48 = v47 | 0x40000000;
          if ( (v13 & 0x40000) == 0 )
            v48 = v47;
          v49 = v43;
          if ( v6 <= v43 )
            v49 = v6;
          v50 = v48 | 0x2000000;
          if ( (v13 & 0x10) == 0 )
            v50 = v48;
          v51 = sub_18000A268(v50, v43, v49);
          v41 = (_WORD *)v51;
          if ( v51 )
          {
            sub_18000D844(v51, 0LL, 1LL);
            if ( !v41[18] )
            {
              sub_1800080CC(v41);
              v41 = 0LL;
            }
          }
LABEL_95:
          v9 = v57;
          goto LABEL_96;
        }
      }
    }
    if ( (v13 & 0x100) != 0 )
      goto LABEL_151;
    if ( (v13 & 0x10000000) == 0 )
    {
      if ( dword_18015BFD8 >= 2 )
      {
        if ( (v13 & 0xFFF80C00) == 0 )
          goto LABEL_9;
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
        sub_1800FDDA8(2LL);
      }
      if ( (v13 & 0xFFF80C00) != 0 )
        v13 &= 0x7F3FFu;
    }
LABEL_9:
    memset(v76, 0, sizeof(v76));
    if ( v10 && *(_DWORD *)v10 == 96 )
    {
      v76[0] = *(_OWORD *)v10;
      v76[1] = *((_OWORD *)v10 + 1);
      v76[2] = *((_OWORD *)v10 + 2);
      v76[3] = *((_OWORD *)v10 + 3);
      v76[4] = *((_OWORD *)v10 + 4);
      v76[5] = *((_OWORD *)v10 + 5);
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
    v58 = NtGlobalFlag & 0x1000;
    v19 = v18 | 0x8000000;
    if ( !v58 )
      v19 = v18;
    v20 = NtCurrentPeb();
    if ( !*((_QWORD *)&v76[0] + 1) )
      *((_QWORD *)&v76[0] + 1) = v20->HeapSegmentReserve;
    if ( !*(_QWORD *)&v76[1] )
      *(_QWORD *)&v76[1] = v20->HeapSegmentCommit;
    if ( !*((_QWORD *)&v76[1] + 1) )
      *((_QWORD *)&v76[1] + 1) = v20->HeapDeCommitFreeBlockThreshold;
    if ( !*(_QWORD *)&v76[2] )
      *(_QWORD *)&v76[2] = v20->HeapDeCommitTotalFreeThreshold;
    v21 = qword_18015BFB0;
    if ( !qword_18015BFB0 )
    {
      if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
        goto LABEL_151;
      v21 = v78;
      qword_18015BFB0 = v78;
    }
    if ( !*((_QWORD *)&v76[2] + 1) )
      *((_QWORD *)&v76[2] + 1) = v21 - 69632;
    *(_QWORD *)&Flags = *(_QWORD *)&v76[3];
    if ( (unsigned __int64)(*(_QWORD *)&v76[3] - 1LL) > 0xFEFFF )
      *(_QWORD *)&Flags = 1044480LL;
    *(_QWORD *)&v76[3] = *(_QWORD *)&Flags;
    if ( v67 )
      v22 = (v67 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v22 = 0x2000LL;
    if ( v64 )
      v23 = (v64 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v23 = (v22 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    v59 = v23;
    if ( v22 > v23 )
      v22 = v23;
    v61 = v22;
    if ( (v19 & 2) == 0 || HeapBase )
    {
      v64 = 0LL;
      v24 = v60;
    }
    else
    {
      v64 = 4096LL;
      v24 = 2;
      v60 = 2;
      if ( v23 - 4096 < v22 )
      {
        v23 = (v23 + 69631) & 0xFFFFFFFFFFFF0000uLL;
        v59 = v23;
      }
    }
    if ( !v22 || !v23 )
      goto LABEL_151;
    LOBYTE(Flags) = (v19 & 0x61000000) != 0;
    if ( ((unsigned __int8)Flags & ((v19 & 0x10000000) == 0)) != 0 )
      return (PVOID)sub_180100F68(v19, HeapBase);
    v58 = 672;
    if ( (v19 & 1) != 0 )
    {
      if ( v57 )
        goto LABEL_151;
    }
    else if ( v57 )
    {
      v19 |= 0x80000000;
      v12 = v57;
    }
    else
    {
      v58 = 712;
    }
    if ( HeapBase )
    {
      if ( *((_QWORD *)&v76[4] + 1) )
      {
        *(_QWORD *)&Flags = *((_QWORD *)&v76[3] + 1);
        if ( !*((_QWORD *)&v76[3] + 1)
          || !*(_QWORD *)&v76[4]
          || *((_QWORD *)&v76[3] + 1) > *(_QWORD *)&v76[4]
          || (v19 & 2) != 0 )
        {
          goto LABEL_151;
        }
        v62 = HeapBase;
        v27 = (char *)HeapBase + *((_QWORD *)&v76[3] + 1);
        v59 = *(_QWORD *)&v76[4];
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
        if ( MemoryInformation[0] != HeapBase || v72 == 0x10000 )
          goto LABEL_151;
        v26 = (char *)MemoryInformation[0];
        v62 = MemoryInformation[0];
        if ( v72 == 4096 )
        {
          if ( (v19 & 0x40000) != 0 && (v73 & 0x40) == 0 )
            goto LABEL_151;
          memset(MemoryInformation[0], 0, 0x1000uLL);
          if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, HeapBase, MemoryRegionInformation, v74, 0x20uLL, 0LL) < 0 )
            goto LABEL_151;
          v59 = v75;
          v61 = v71;
          v26 = (char *)v62;
          v27 = (char *)v62 + v71;
        }
        else
        {
          v59 = v71;
          *(_QWORD *)&Flags = v61;
          if ( v61 > v71 )
            *(_QWORD *)&Flags = v71;
          v61 = *(_QWORD *)&Flags;
          if ( *(_QWORD *)&Flags < 0x2000uLL )
            goto LABEL_151;
        }
      }
      v60 = v24 | 1;
      v25 = (char *)HeapBase;
      HeapHandle = HeapBase;
    }
    else
    {
      BaseAddress = 0LL;
      v63 = 0LL;
      if ( *((_QWORD *)&v76[4] + 1) )
        goto LABEL_151;
      v63 = (sub_18000EEA8() & 0x1F) << 16;
      RegionSize = v59 + v63;
      if ( v59 + v63 < v59 )
      {
        RegionSize = v59;
        v63 = 0LL;
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
      v59 = RegionSize;
      if ( v63 )
      {
        sub_18001E5E0(*(_QWORD *)&Flags, &BaseAddress, &v63, 0x8000LL);
        v25 = (char *)BaseAddress + v63;
        HeapHandle = (char *)BaseAddress + v63;
        v59 = RegionSize - v63;
      }
      v26 = v25;
      v62 = v25;
      v27 = v25;
    }
    if ( v26 == v27 )
    {
      if ( ZwAllocateVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &v62,
             0LL,
             &v61,
             0x1000u,
             (v19 & 0x40000) != 0 ? 64 : 4) < 0 )
        goto LABEL_151;
      v28 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FF834(HeapHandle, v62, v61, 1LL);
      v27 += v61;
      v25 = (char *)HeapHandle;
    }
    else
    {
      v28 = 2147353472LL;
    }
    v30 = v25 + 672;
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v53 = (unsigned __int64)(v30 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *((_QWORD *)HeapHandle + 41) = v53;
      v31 = v58 + 2064;
      v30 = (char *)(v53 + 2064);
      v19 |= 0x4000000u;
    }
    else
    {
      v31 = v58;
    }
    v58 = (v31 + 15) & 0xFFFFFFF0;
    *((_WORD *)HeapHandle + 4) = v58 >> 4;
    *((_BYTE *)HeapHandle + 10) = 1;
    *((_BYTE *)HeapHandle + 15) = 1;
    *((_DWORD *)HeapHandle + 38) = -285217025;
    *((_DWORD *)HeapHandle + 28) = v19 & 0xEFFFFFFF;
    *((_DWORD *)HeapHandle + 36) = 0;
    memset((char *)HeapHandle + 536, 0, 0x78uLL);
    sub_18000EC70(HeapHandle);
    *((_DWORD *)HeapHandle + 154) = 1;
    v32 = HeapHandle;
    if ( (*((_DWORD *)HeapHandle + 28) & 0x8000000) != 0 )
    {
      v54 = sub_1800FDD7C(sub_1801005E0);
      *(_DWORD *)(v55 + 144) = v54;
      *((_DWORD *)HeapHandle + 28) &= ~0x40u;
      v32 = HeapHandle;
    }
    v32[29] = v19 & 0x6001007D;
    *((_WORD *)HeapHandle + 105) = (_WORD)v30 - (_WORD)HeapHandle;
    *((_QWORD *)HeapHandle + 27) = 0LL;
    v33 = (char *)HeapHandle + 336;
    *((_QWORD *)HeapHandle + 43) = (char *)HeapHandle + 336;
    *v33 = v33;
    v34 = (char *)HeapHandle + 272;
    *((_QWORD *)HeapHandle + 35) = (char *)HeapHandle + 272;
    *v34 = v34;
    v35 = (char *)HeapHandle + 288;
    *((_QWORD *)HeapHandle + 37) = (char *)HeapHandle + 288;
    *v35 = v35;
    v36 = (char *)HeapHandle + 240;
    *((_QWORD *)HeapHandle + 31) = (char *)HeapHandle + 240;
    *v36 = v36;
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
    if ( (unsigned __int8)sub_18000EA74(HeapHandle, v60, (__int64)v62, v27, (__int64)v62 + v59 - v64) )
    {
      if ( HeapBase )
        memset(v30, 0, 0x80uLL);
      *((_DWORD *)v30 + 2) = 128;
      *((_QWORD *)v30 + 5) = v30 + 56;
      *((_QWORD *)v30 + 4) = (char *)HeapHandle + 336;
      *((_QWORD *)v30 + 6) = v30 + 72;
      sub_18000DC18(HeapHandle, v30);
      *((_WORD *)HeapHandle + 104) = 0;
      *((_QWORD *)HeapHandle + 20) = *((_QWORD *)&v76[0] + 1);
      *((_QWORD *)HeapHandle + 21) = *(_QWORD *)&v76[1];
      *((_QWORD *)HeapHandle + 22) = *((_QWORD *)&v76[1] + 1) >> 4;
      *((_QWORD *)HeapHandle + 23) = *(_QWORD *)&v76[2] >> 4;
      *((_QWORD *)HeapHandle + 25) = *((_QWORD *)&v76[2] + 1);
      *((_DWORD *)HeapHandle + 37) = (unsigned __int64)(*(_QWORD *)&v76[3] + 15LL) >> 4;
      *((_QWORD *)HeapHandle + 45) = qword_18015BFA8 ^ *((_QWORD *)&v76[4] + 1);
      *((_DWORD *)HeapHandle + 164) = 4;
      *((_QWORD *)HeapHandle + 83) = 2088960LL;
      if ( (dword_18015C3B8 & 1) != 0 )
        *((_DWORD *)HeapHandle + 30) = 1;
      *((_QWORD *)HeapHandle + 32) = 31LL;
      *((_QWORD *)HeapHandle + 33) = -16LL;
      v37 = HeapHandle;
      if ( (*((_BYTE *)HeapHandle + 112) & 0x20) != 0 )
      {
        *((_QWORD *)HeapHandle + 32) += 16LL;
        v37 = HeapHandle;
      }
      v37[47] = 0LL;
      *((_WORD *)HeapHandle + 192) = 0;
      *((_BYTE *)HeapHandle + 386) = 0;
      *((_BYTE *)HeapHandle + 387) = 0;
      *((_QWORD *)HeapHandle + 40) = 0LL;
      if ( (v19 & 3) != 2 || (dword_18015C3B8 & 1) != 0 )
      {
LABEL_83:
        sub_18000D844(HeapHandle, 0LL, 1LL);
        if ( *((_WORD *)HeapHandle + 104) )
        {
          if ( RtlGetCurrentServiceSessionId() )
            v38 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          else
            v38 = 2147353472LL;
          if ( *(_BYTE *)v38 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v28 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
            sub_1800FF98C((_DWORD)HeapHandle, v19, v59, v61, *(unsigned __int8 *)v28);
          }
          v39 = 2147353482LL;
          if ( RtlGetCurrentServiceSessionId() )
            v40 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
          else
            v40 = 2147353482LL;
          if ( *(_BYTE *)v40 )
          {
            if ( RtlGetCurrentServiceSessionId() )
              v39 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[5];
            sub_1800FF98C((_DWORD)HeapHandle, v19, v59, v61, *(unsigned __int8 *)v39);
          }
          if ( RtlGetCurrentServiceSessionId() )
            *(_QWORD *)&Flags = &NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
          else
            *(_QWORD *)&Flags = 2147353480LL;
          if ( **(_BYTE **)&Flags )
            sub_1800FDDC0(HeapHandle, v59, v19);
          *((_DWORD *)HeapHandle + 30) &= ~0x80000000;
          *((_QWORD *)HeapHandle + 46) = 0LL;
          v41 = HeapHandle;
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
    v9 = v57;
  }
  v41 = 0LL;
LABEL_96:
  if ( v12 && v12 != v9 )
    RtlDeleteCriticalSection(v12);
  if ( HeapHandle )
  {
    if ( !HeapBase )
    {
      v59 = 0LL;
      sub_18001E5E0(*(_QWORD *)&Flags, &HeapHandle, &v59, 0x8000LL);
    }
  }
  return v41;
}
