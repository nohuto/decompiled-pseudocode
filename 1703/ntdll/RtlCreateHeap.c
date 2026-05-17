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
  __int64 *v12; // r13
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
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r14
  __int64 v32; // rcx
  __int64 *v33; // rsi
  unsigned int v34; // eax
  int v35; // r9d
  char *v36; // r10
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  char *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // rdi
  unsigned __int64 v56; // r10
  unsigned int v57; // edx
  int v58; // r8d
  int v59; // r9d
  int v60; // edx
  int v61; // r9d
  __int64 v62; // r8
  unsigned int v63; // ecx
  __int64 v64; // rax
  int v65; // eax
  unsigned __int64 v66; // rsi
  unsigned __int16 v67; // ax
  __int64 v68; // r10
  char *v69; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 *v70; // [rsp+48h] [rbp-1B0h]
  unsigned int v71; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v72; // [rsp+58h] [rbp-1A0h] BYREF
  int v73; // [rsp+60h] [rbp-198h]
  unsigned __int64 v74; // [rsp+68h] [rbp-190h] BYREF
  char *v75; // [rsp+70h] [rbp-188h] BYREF
  __int64 v76; // [rsp+78h] [rbp-180h] BYREF
  __int64 v77; // [rsp+80h] [rbp-178h]
  char *v78; // [rsp+88h] [rbp-170h] BYREF
  unsigned __int64 v79; // [rsp+90h] [rbp-168h] BYREF
  unsigned __int64 v80; // [rsp+98h] [rbp-160h]
  char *v81; // [rsp+A8h] [rbp-150h]
  __int64 v82; // [rsp+B0h] [rbp-148h]
  void *v83; // [rsp+B8h] [rbp-140h] BYREF
  unsigned __int64 v84; // [rsp+D0h] [rbp-128h]
  int v85; // [rsp+D8h] [rbp-120h]
  char v86; // [rsp+DCh] [rbp-11Ch]
  char v87[16]; // [rsp+E8h] [rbp-110h] BYREF
  unsigned __int64 v88; // [rsp+F8h] [rbp-100h]
  _OWORD v89[6]; // [rsp+110h] [rbp-E8h] BYREF
  char v90[40]; // [rsp+170h] [rbp-88h] BYREF
  __int64 v91; // [rsp+198h] [rbp-60h]

  v6 = a4;
  v80 = a4;
  v77 = a3;
  v8 = a1;
  v81 = a2;
  v9 = a5;
  v70 = (__int64 *)a5;
  v82 = a5;
  v10 = a6;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v71 = NtGlobalFlag;
  v73 = 0;
  v69 = 0LL;
  v12 = 0LL;
  if ( !dword_1801553F8 || a2 || a5 )
    goto LABEL_2;
  v54 = _guard_dispatch_icall_fptr();
  if ( v54 )
    goto LABEL_96;
  if ( a6 == -1 )
  {
    v10 = 0LL;
    NtGlobalFlag = v71;
    v6 = v80;
    a3 = v77;
LABEL_2:
    v13 = v8 & 0xF1FFFFFF;
    if ( ((byte_18015BFBC & 1) != 0 || (v13 & 0x100) != 0) && (v13 & 2) != 0 && !a2 )
    {
      if ( !v10 )
        goto LABEL_118;
      if ( *(_QWORD *)(v10 + 8) || *(_QWORD *)(v10 + 16) || *(_QWORD *)(v10 + 48) || (v65 = 1, *(_QWORD *)(v10 + 72)) )
        v65 = 0;
      if ( v65 )
      {
LABEL_118:
        if ( !v70 )
        {
          v56 = v6;
          if ( a3 )
            v56 = a3;
          v57 = v13 & 1 | 0x80000000;
          if ( (v13 & 4) == 0 )
            v57 = v13 & 1;
          v58 = v57 | 2;
          if ( (v13 & 8) == 0 )
            v58 = v57;
          v59 = v58 | 0x20000000;
          if ( (NtGlobalFlag & 0x1000) == 0 && (v13 & 0x8000000) == 0 )
            v59 = v58;
          v60 = v59 | 0x10000000;
          if ( (NtGlobalFlag & 0x10) == 0 && (v13 & 0x20) == 0 )
            v60 = v59;
          v61 = v60 | 0x40000000;
          if ( (v13 & 0x40000) == 0 )
            v61 = v60;
          v62 = v56;
          if ( v6 <= v56 )
            v62 = v6;
          v63 = v61 | 0x2000000;
          if ( (v13 & 0x10) == 0 )
            v63 = v61;
          v64 = sub_18000A268(v63, v56, v62);
          v54 = v64;
          if ( v64 )
          {
            sub_18000D844(v64, 0LL, 1LL);
            if ( !*(_WORD *)(v54 + 36) )
            {
              sub_1800080CC(v54);
              v54 = 0LL;
            }
          }
LABEL_95:
          v9 = (__int64)v70;
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
    memset(v89, 0, sizeof(v89));
    if ( v10 && *(_DWORD *)v10 == 96 )
    {
      v89[0] = *(_OWORD *)v10;
      v89[1] = *(_OWORD *)(v10 + 16);
      v89[2] = *(_OWORD *)(v10 + 32);
      v89[3] = *(_OWORD *)(v10 + 48);
      v89[4] = *(_OWORD *)(v10 + 64);
      v89[5] = *(_OWORD *)(v10 + 80);
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
    v71 = NtGlobalFlag & 0x1000;
    v19 = v18 | 0x8000000;
    if ( !v71 )
      v19 = v18;
    v20 = NtCurrentPeb();
    if ( !*((_QWORD *)&v89[0] + 1) )
      *((_QWORD *)&v89[0] + 1) = v20->HeapSegmentReserve;
    if ( !*(_QWORD *)&v89[1] )
      *(_QWORD *)&v89[1] = v20->HeapSegmentCommit;
    if ( !*((_QWORD *)&v89[1] + 1) )
      *((_QWORD *)&v89[1] + 1) = v20->HeapDeCommitFreeBlockThreshold;
    if ( !*(_QWORD *)&v89[2] )
      *(_QWORD *)&v89[2] = v20->HeapDeCommitTotalFreeThreshold;
    v21 = qword_18015BFB0;
    if ( !qword_18015BFB0 )
    {
      if ( (int)ZwQuerySystemInformation(0LL, v90, 64LL, 0LL) < 0 )
        goto LABEL_151;
      v21 = v91;
      qword_18015BFB0 = v91;
    }
    if ( !*((_QWORD *)&v89[2] + 1) )
      *((_QWORD *)&v89[2] + 1) = v21 - 69632;
    a1 = *(_QWORD *)&v89[3];
    if ( (unsigned __int64)(*(_QWORD *)&v89[3] - 1LL) > 0xFEFFF )
      a1 = 1044480LL;
    *(_QWORD *)&v89[3] = a1;
    if ( v80 )
      v22 = (v80 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v22 = 0x2000LL;
    if ( v77 )
      v23 = (v77 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
    else
      v23 = (v22 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    v72 = v23;
    if ( v22 > v23 )
      v22 = v23;
    v74 = v22;
    if ( (v19 & 2) == 0 || a2 )
    {
      v77 = 0LL;
      v24 = v73;
    }
    else
    {
      v77 = 4096LL;
      v24 = 2;
      v73 = 2;
      if ( v23 - 4096 < v22 )
      {
        v23 = (v23 + 69631) & 0xFFFFFFFFFFFF0000uLL;
        v72 = v23;
      }
    }
    if ( !v22 || !v23 )
      goto LABEL_151;
    LOBYTE(a1) = (v19 & 0x61000000) != 0;
    if ( ((unsigned __int8)a1 & ((v19 & 0x10000000) == 0)) != 0 )
      return sub_180100F68(v19, (_DWORD)a2, v23, v22, (__int64)v70, (__int64)v89);
    v71 = 672;
    if ( (v19 & 1) != 0 )
    {
      if ( v70 )
        goto LABEL_151;
    }
    else if ( v70 )
    {
      v19 |= 0x80000000;
      v12 = v70;
    }
    else
    {
      v71 = 712;
    }
    if ( a2 )
    {
      if ( *((_QWORD *)&v89[4] + 1) )
      {
        a1 = *((_QWORD *)&v89[3] + 1);
        if ( !*((_QWORD *)&v89[3] + 1)
          || !*(_QWORD *)&v89[4]
          || *((_QWORD *)&v89[3] + 1) > *(_QWORD *)&v89[4]
          || (v19 & 2) != 0 )
        {
          goto LABEL_151;
        }
        v75 = a2;
        v27 = &a2[*((_QWORD *)&v89[3] + 1)];
        v72 = *(_QWORD *)&v89[4];
        memset(a2, 0, 0x1000uLL);
        v26 = a2;
      }
      else
      {
        if ( (int)ZwQueryVirtualMemory(-1LL, a2, 0LL, &v83, 48LL, 0LL) < 0 )
          goto LABEL_151;
        v27 = (char *)v83;
        if ( v83 != a2 || v85 == 0x10000 )
          goto LABEL_151;
        v26 = (char *)v83;
        v75 = (char *)v83;
        if ( v85 == 4096 )
        {
          if ( (v19 & 0x40000) != 0 && (v86 & 0x40) == 0 )
            goto LABEL_151;
          memset(v83, 0, 0x1000uLL);
          if ( (int)ZwQueryVirtualMemory(-1LL, a2, 3LL, v87, 32LL, 0LL) < 0 )
            goto LABEL_151;
          v72 = v88;
          v74 = v84;
          v26 = v75;
          v27 = &v75[v84];
        }
        else
        {
          v72 = v84;
          a1 = v74;
          if ( v74 > v84 )
            a1 = v84;
          v74 = a1;
          if ( a1 < 0x2000 )
            goto LABEL_151;
        }
      }
      v73 = v24 | 1;
      v25 = a2;
      v69 = a2;
    }
    else
    {
      v78 = 0LL;
      v76 = 0LL;
      if ( *((_QWORD *)&v89[4] + 1) )
        goto LABEL_151;
      v76 = (sub_18000EEA8() & 0x1F) << 16;
      v79 = v72 + v76;
      if ( v72 + v76 < v72 )
      {
        v79 = v72;
        v76 = 0LL;
      }
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v78, 0LL, &v79, 0x2000, (v19 & 0x40000) != 0 ? 64 : 4) < 0 )
        goto LABEL_151;
      v25 = v78;
      v69 = v78;
      v72 = v79;
      if ( v76 )
      {
        sub_18001E5E0(a1, &v78, &v76, 0x8000LL);
        v25 = &v78[v76];
        v69 = &v78[v76];
        v72 = v79 - v76;
      }
      v26 = v25;
      v75 = v25;
      v27 = v25;
    }
    if ( v26 == v27 )
    {
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v75, 0LL, &v74, 4096, (v19 & 0x40000) != 0 ? 64 : 4) < 0 )
        goto LABEL_151;
      v31 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, v28, v29, v30) )
        v32 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      else
        v32 = 2147353472LL;
      if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FF834(v69, v75, v74, 1LL);
      v27 += v74;
      v25 = v69;
    }
    else
    {
      v31 = 2147353472LL;
    }
    v33 = (__int64 *)(v25 + 672);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v66 = ((unsigned __int64)v33 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *((_QWORD *)v69 + 41) = v66;
      v34 = v71 + 2064;
      v33 = (__int64 *)(v66 + 2064);
      v19 |= 0x4000000u;
    }
    else
    {
      v34 = v71;
    }
    v71 = (v34 + 15) & 0xFFFFFFF0;
    *((_WORD *)v69 + 4) = v71 >> 4;
    v69[10] = 1;
    v69[15] = 1;
    *((_DWORD *)v69 + 38) = -285217025;
    *((_DWORD *)v69 + 28) = v19 & 0xEFFFFFFF;
    *((_DWORD *)v69 + 36) = 0;
    memset(v69 + 536, 0, 0x78uLL);
    sub_18000EC70(v69);
    *((_DWORD *)v69 + 154) = 1;
    v36 = v69;
    if ( (*((_DWORD *)v69 + 28) & 0x8000000) != 0 )
    {
      v67 = sub_1800FDD7C(sub_1801005E0);
      *(_DWORD *)(v68 + 144) = v67;
      *((_DWORD *)v69 + 28) &= ~0x40u;
      v36 = v69;
    }
    *((_DWORD *)v36 + 29) = v19 & 0x6001007D;
    *((_WORD *)v69 + 105) = (_WORD)v33 - (_WORD)v69;
    *((_QWORD *)v69 + 27) = 0LL;
    v37 = v69 + 336;
    *((_QWORD *)v69 + 43) = v69 + 336;
    *v37 = v37;
    v38 = v69 + 272;
    *((_QWORD *)v69 + 35) = v69 + 272;
    *v38 = v38;
    v39 = v69 + 288;
    *((_QWORD *)v69 + 37) = v69 + 288;
    *v39 = v39;
    v40 = v69 + 240;
    *((_QWORD *)v69 + 31) = v69 + 240;
    *v40 = v40;
    if ( !v12 && (v19 & 1) == 0 )
    {
      v12 = v33;
      if ( (int)RtlInitializeCriticalSectionEx(v33, 0LL, 0x10000000LL) < 0 )
      {
        v12 = 0LL;
        goto LABEL_151;
      }
      v33 += 5;
    }
    *((_QWORD *)v69 + 44) = v12;
    *((_DWORD *)v69 + 30) |= 0x80000000;
    if ( (unsigned __int8)sub_18000EA74(
                            (_DWORD)v69,
                            (_DWORD)v69,
                            v71 + 1104,
                            v35,
                            v73,
                            (__int64)v75,
                            (__int64)v27,
                            (__int64)&v75[v72 - v77]) )
    {
      if ( a2 )
        memset(v33, 0, 0x80uLL);
      *((_DWORD *)v33 + 2) = 128;
      v33[5] = (__int64)(v33 + 7);
      v33[4] = (__int64)(v69 + 336);
      v33[6] = (__int64)(v33 + 9);
      sub_18000DC18(v69, v33);
      *((_WORD *)v69 + 104) = 0;
      *((_QWORD *)v69 + 20) = *((_QWORD *)&v89[0] + 1);
      *((_QWORD *)v69 + 21) = *(_QWORD *)&v89[1];
      *((_QWORD *)v69 + 22) = *((_QWORD *)&v89[1] + 1) >> 4;
      *((_QWORD *)v69 + 23) = *(_QWORD *)&v89[2] >> 4;
      *((_QWORD *)v69 + 25) = *((_QWORD *)&v89[2] + 1);
      *((_DWORD *)v69 + 37) = (unsigned __int64)(*(_QWORD *)&v89[3] + 15LL) >> 4;
      *((_QWORD *)v69 + 45) = qword_18015BFA8 ^ *((_QWORD *)&v89[4] + 1);
      *((_DWORD *)v69 + 164) = 4;
      *((_QWORD *)v69 + 83) = 2088960LL;
      if ( (dword_18015C3B8 & 1) != 0 )
        *((_DWORD *)v69 + 30) = 1;
      *((_QWORD *)v69 + 32) = 31LL;
      *((_QWORD *)v69 + 33) = -16LL;
      v41 = v69;
      if ( (v69[112] & 0x20) != 0 )
      {
        *((_QWORD *)v69 + 32) += 16LL;
        v41 = v69;
      }
      *((_QWORD *)v41 + 47) = 0LL;
      *((_WORD *)v69 + 192) = 0;
      v69[386] = 0;
      v69[387] = 0;
      *((_QWORD *)v69 + 40) = 0LL;
      if ( (v19 & 3) != 2 || (dword_18015C3B8 & 1) != 0 )
      {
LABEL_83:
        sub_18000D844(v69, 0LL, 1LL);
        if ( *((_WORD *)v69 + 104) )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, v42, v43, v44) )
            v48 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
          else
            v48 = 2147353472LL;
          if ( *(_BYTE *)v48 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v48, v45, v46, v47) )
              v31 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
            sub_1800FF98C((_DWORD)v69, v19, v72, v74, *(unsigned __int8 *)v31);
          }
          v52 = 2147353482LL;
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v48, v45, v46, v47) )
            v53 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
          else
            v53 = 2147353482LL;
          if ( *(_BYTE *)v53 )
          {
            if ( (unsigned int)RtlGetCurrentServiceSessionId(v53, v49, v50, v51) )
              v52 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
            sub_1800FF98C((_DWORD)v69, v19, v72, v74, *(unsigned __int8 *)v52);
          }
          if ( (unsigned int)RtlGetCurrentServiceSessionId(v53, v49, v50, v51) )
            a1 = (unsigned __int64)NtCurrentPeb()->HotpatchInformation + 558;
          else
            a1 = 2147353480LL;
          if ( *(_BYTE *)a1 )
            sub_1800FDDC0(v69, v72, v19);
          *((_DWORD *)v69 + 30) &= ~0x80000000;
          *((_QWORD *)v69 + 46) = 0LL;
          v54 = (__int64)v69;
          v69 = 0LL;
          v12 = 0LL;
          goto LABEL_95;
        }
        goto LABEL_151;
      }
      *((_QWORD *)v69 + 49) = RtlAllocateHeap(v69, 8388618LL, 256LL);
      a1 = *((_QWORD *)v69 + 49);
      if ( a1 )
      {
        *(_BYTE *)(a1 - 1) = 1;
        *((_WORD *)v69 + 200) = 128;
        goto LABEL_83;
      }
    }
LABEL_151:
    v9 = (__int64)v70;
  }
  v54 = 0LL;
LABEL_96:
  if ( v12 && v12 != (__int64 *)v9 )
    RtlDeleteCriticalSection(v12);
  if ( v69 )
  {
    if ( !a2 )
    {
      v72 = 0LL;
      sub_18001E5E0(a1, &v69, &v72, 0x8000LL);
    }
  }
  return v54;
}
