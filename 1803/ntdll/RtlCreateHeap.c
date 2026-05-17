/*
 * XREFs of RtlCreateHeap @ 0x18005AA80
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180048460 (RtlDetectHeapLeaks.c)
 *     sub_18005996C @ 0x18005996C (sub_18005996C.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     RtlHeapTrkInitialize @ 0x1800F3000 (RtlHeapTrkInitialize.c)
 *     sub_1800FFB1C @ 0x1800FFB1C (sub_1800FFB1C.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlDeleteCriticalSection @ 0x180029D90 (RtlDeleteCriticalSection.c)
 *     sub_18002A46C @ 0x18002A46C (sub_18002A46C.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 *     sub_18005C4D8 @ 0x18005C4D8 (sub_18005C4D8.c)
 *     sub_18005C6E0 @ 0x18005C6E0 (sub_18005C6E0.c)
 *     sub_18005C774 @ 0x18005C774 (sub_18005C774.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005C890 (RtlInitializeCriticalSectionEx.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 *     sub_18005F8D0 @ 0x18005F8D0 (sub_18005F8D0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800FC34C @ 0x1800FC34C (sub_1800FC34C.c)
 *     sub_1800FC3E4 @ 0x1800FC3E4 (sub_1800FC3E4.c)
 *     sub_1800FC3FC @ 0x1800FC3FC (sub_1800FC3FC.c)
 *     sub_1800FE0A4 @ 0x1800FE0A4 (sub_1800FE0A4.c)
 *     sub_1800FE1FC @ 0x1800FE1FC (sub_1800FE1FC.c)
 *     sub_1800FFB1C @ 0x1800FFB1C (sub_1800FFB1C.c)
 *     sub_18010220C @ 0x18010220C (sub_18010220C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

__int64 __fastcall RtlCreateHeap(
        int a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rsi
  unsigned int v9; // r15d
  _DWORD *v10; // rdi
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // esi
  struct _PEB *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned int v21; // edi
  unsigned __int64 v22; // rdx
  int v23; // esi
  __int64 v24; // rcx
  unsigned __int64 *v25; // rdx
  unsigned __int64 *v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rcx
  char *v29; // r13
  unsigned int v30; // eax
  __int64 v31; // r10
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 *v42; // rcx
  unsigned int v44; // eax
  int v45; // ecx
  unsigned __int64 v46; // r10
  unsigned int v47; // edx
  int v48; // r8d
  int v49; // r9d
  int v50; // edx
  unsigned int v51; // r9d
  unsigned __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  int v56; // eax
  unsigned __int64 v57; // rcx
  unsigned __int16 v58; // ax
  __int64 v59; // r10
  unsigned __int64 *v60; // [rsp+40h] [rbp-238h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-230h]
  unsigned int NtGlobalFlag; // [rsp+50h] [rbp-228h]
  __int64 v63; // [rsp+58h] [rbp-220h]
  unsigned __int64 *v64; // [rsp+60h] [rbp-218h] BYREF
  unsigned __int64 *v65; // [rsp+68h] [rbp-210h]
  int v66; // [rsp+70h] [rbp-208h]
  unsigned __int64 v67; // [rsp+78h] [rbp-200h] BYREF
  unsigned __int64 *v68; // [rsp+80h] [rbp-1F8h] BYREF
  unsigned __int64 v69; // [rsp+88h] [rbp-1F0h]
  __int64 v70; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v71; // [rsp+98h] [rbp-1E0h] BYREF
  unsigned __int64 *v72; // [rsp+A0h] [rbp-1D8h] BYREF
  __int128 v73; // [rsp+B0h] [rbp-1C8h]
  char *v74; // [rsp+C8h] [rbp-1B0h]
  __int64 v75; // [rsp+D0h] [rbp-1A8h]
  void *v76; // [rsp+D8h] [rbp-1A0h] BYREF
  unsigned __int64 v77; // [rsp+F0h] [rbp-188h]
  int v78; // [rsp+F8h] [rbp-180h]
  char v79; // [rsp+FCh] [rbp-17Ch]
  __int128 v80; // [rsp+110h] [rbp-168h] BYREF
  char v81[16]; // [rsp+120h] [rbp-158h] BYREF
  unsigned __int64 *v82; // [rsp+130h] [rbp-148h]
  _OWORD v83[6]; // [rsp+140h] [rbp-138h] BYREF
  _BYTE v84[80]; // [rsp+1A0h] [rbp-D8h] BYREF
  char v85[40]; // [rsp+1F0h] [rbp-88h] BYREF
  __int64 v86; // [rsp+218h] [rbp-60h]

  v69 = a4;
  v65 = a3;
  v61 = a5;
  v74 = (char *)a2;
  v75 = a5;
  v8 = a6;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  v66 = 0;
  v60 = 0LL;
  v63 = 0LL;
  if ( dword_1801563E8 && !a2 && !a5 )
  {
    v10 = (_DWORD *)_guard_dispatch_icall_fptr();
    if ( v10 )
      goto LABEL_152;
    if ( a6 != -1 )
      goto LABEL_165;
    v8 = 0LL;
    a4 = v69;
    a3 = v65;
  }
  v9 = a1 & 0xF1FFFFFF;
  v10 = 0LL;
  if ( (v9 & 0x100) != 0 )
  {
    if ( (v9 & 2) != 0 && !a2 && !a3 && !a4 && !a5 )
    {
      if ( !v8 )
      {
        v10 = v84;
        goto LABEL_4;
      }
      v10 = (_DWORD *)v8;
      if ( (unsigned int)sub_18010220C(v8) )
        goto LABEL_4;
LABEL_165:
      v22 = 0LL;
      goto LABEL_166;
    }
LABEL_152:
    v22 = a5;
LABEL_96:
    v42 = 0LL;
    goto LABEL_97;
  }
  if ( (byte_18015D028 & 1) != 0 && (v9 & 2) != 0 && !a2 )
  {
    if ( !v8 )
      goto LABEL_119;
    if ( *(_QWORD *)(v8 + 8) || *(_QWORD *)(v8 + 16) || *(_QWORD *)(v8 + 48) || (v56 = 1, *(_QWORD *)(v8 + 72)) )
      v56 = 0;
    if ( v56 )
    {
LABEL_119:
      v10 = v84;
      if ( a5 )
        v10 = 0LL;
    }
  }
LABEL_4:
  if ( v10 )
  {
    if ( v10 == (_DWORD *)v84 )
    {
      memset(v10, 0, 0x50uLL);
      *v10 = 5242881;
      v10[3] = 1;
      v10[4] = -1;
      v44 = 1;
      v45 = -1;
    }
    else
    {
      v44 = v10[3];
      v45 = v10[4];
    }
    v73 = xmmword_18015A790;
    _BitScanReverse(&v44, v44);
    BYTE1(v73) = v44;
    if ( v45 != -1 )
      BYTE2(v73) = v10[4] + 1;
    *((_QWORD *)&v73 + 1) = *((_QWORD *)v10 + 3);
    v46 = v69;
    if ( v65 )
      v46 = (unsigned __int64)v65;
    v47 = v9 & 1 | 0x80000000;
    if ( (v9 & 4) == 0 )
      v47 = v9 & 1;
    v48 = v47 | 2;
    if ( (v9 & 8) == 0 )
      v48 = v47;
    v49 = v48 | 0x20000000;
    if ( (NtGlobalFlag & 0x1000) == 0 && (v9 & 0x8000000) == 0 )
      v49 = v48;
    v50 = v49 | 0x10000000;
    if ( (NtGlobalFlag & 0x10) == 0 && (v9 & 0x20) == 0 )
      v50 = v49;
    v51 = v50 | 0x40000000;
    if ( (v9 & 0x40000) == 0 )
      v51 = v50;
    v80 = v73;
    v52 = v46;
    if ( v69 <= v46 )
      v52 = v69;
    v53 = v51;
    LODWORD(v53) = v51 | 0x2000000;
    if ( (v9 & 0x10) == 0 )
      v53 = v51;
    v54 = sub_18005D87C(v53, v46, v52, &v80);
    v10 = (_DWORD *)v54;
    if ( v54 )
    {
      sub_18002A46C(v54, 0, 1, 0);
      if ( !*((_WORD *)v10 + 30) )
      {
        sub_18005F8D0(v10);
        v10 = 0LL;
      }
    }
    goto LABEL_152;
  }
  if ( (v9 & 0x10000000) == 0 )
  {
    if ( dword_18015D450 >= 2 )
    {
      if ( (v9 & 0xFFF80C00) == 0 )
        goto LABEL_9;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
      sub_1800FC3E4(2LL);
    }
    if ( (v9 & 0xFFF80C00) != 0 )
      v9 &= 0x7F3FFu;
  }
LABEL_9:
  memset(v83, 0, sizeof(v83));
  if ( v8 && *(_DWORD *)v8 == 96 )
  {
    v83[0] = *(_OWORD *)v8;
    v83[1] = *(_OWORD *)(v8 + 16);
    v83[2] = *(_OWORD *)(v8 + 32);
    v83[3] = *(_OWORD *)(v8 + 48);
    v83[4] = *(_OWORD *)(v8 + 64);
    v83[5] = *(_OWORD *)(v8 + 80);
  }
  v11 = v9 | 0x20;
  if ( (NtGlobalFlag & 0x10) == 0 )
    v11 = v9;
  v12 = v11 | 0x40;
  if ( (NtGlobalFlag & 0x20) == 0 )
    v12 = v11;
  v13 = v12 | 0x80;
  if ( (NtGlobalFlag & 0x200000) == 0 )
    v13 = v12;
  v14 = v13 | 0x40000000;
  if ( (NtGlobalFlag & 0x40) == 0 )
    v14 = v13;
  v15 = v14 | 0x20000000;
  if ( (NtGlobalFlag & 0x80) == 0 )
    v15 = v14;
  v16 = v15 | 0x8000000;
  if ( (NtGlobalFlag & 0x1000) == 0 )
    v16 = v15;
  v17 = NtCurrentPeb();
  if ( !*((_QWORD *)&v83[0] + 1) )
    *((_QWORD *)&v83[0] + 1) = v17->HeapSegmentReserve;
  if ( !*(_QWORD *)&v83[1] )
    *(_QWORD *)&v83[1] = v17->HeapSegmentCommit;
  if ( !*((_QWORD *)&v83[1] + 1) )
    *((_QWORD *)&v83[1] + 1) = v17->HeapDeCommitFreeBlockThreshold;
  if ( !*(_QWORD *)&v83[2] )
    *(_QWORD *)&v83[2] = v17->HeapDeCommitTotalFreeThreshold;
  v18 = qword_18015D018;
  if ( !qword_18015D018 )
  {
    qword_18015D020 = 0x10000LL;
    if ( (int)ZwQuerySystemInformation(0LL, v85, 64LL) < 0 )
    {
LABEL_159:
      v22 = v61;
LABEL_166:
      v10 = 0LL;
      goto LABEL_96;
    }
    v18 = v86;
    qword_18015D018 = v86;
  }
  if ( !*((_QWORD *)&v83[2] + 1) )
    *((_QWORD *)&v83[2] + 1) = v18 - qword_18015D020 - 4096;
  v19 = *(_QWORD *)&v83[3];
  if ( (unsigned __int64)(*(_QWORD *)&v83[3] - 1LL) > 0xFEFFF )
    v19 = 1044480LL;
  *(_QWORD *)&v83[3] = v19;
  if ( v69 )
    a4 = (v69 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
  else
    a4 = 0x2000LL;
  v67 = a4;
  if ( v65 )
    a3 = (unsigned __int64 *)(((unsigned __int64)v65 + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL);
  else
    a3 = (unsigned __int64 *)((a4 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL);
  v64 = a3;
  v20 = a4;
  if ( a4 > (unsigned __int64)a3 )
  {
    a4 = (unsigned __int64)a3;
    v67 = (unsigned __int64)a3;
    v20 = (unsigned __int64)a3;
  }
  if ( (v16 & 2) == 0 || a2 )
  {
    v69 = 0LL;
  }
  else
  {
    v69 = 4096LL;
    v66 = 2;
    if ( (unsigned __int64)(a3 - 512) < v20 )
    {
      a3 = (unsigned __int64 *)(((unsigned __int64)a3 + 69631) & 0xFFFFFFFFFFFF0000uLL);
      v64 = a3;
    }
  }
  if ( !v20 || !a3 )
    goto LABEL_159;
  if ( (v16 & 0x61000000) != 0 && (v16 & 0x10000000) == 0 )
    return sub_1800FFB1C(v16, (_DWORD)a2, (_DWORD)a3, a4, a5, (__int64)v83);
  NtGlobalFlag = 672;
  v21 = v16;
  v22 = v61;
  if ( (v16 & 1) != 0 )
  {
    if ( a5 )
      goto LABEL_166;
  }
  else
  {
    v63 = v61 & -(__int64)(a5 != 0);
    v21 = v16 | 0x80000000;
    if ( !v61 )
      v21 = v16;
    NtGlobalFlag = v61 != 0 ? 672 : 712;
  }
  if ( a2 )
  {
    if ( *((_QWORD *)&v83[4] + 1) )
    {
      if ( !*((_QWORD *)&v83[3] + 1)
        || !*(_QWORD *)&v83[4]
        || *((_QWORD *)&v83[3] + 1) > *(_QWORD *)&v83[4]
        || (v21 & 2) != 0 )
      {
        goto LABEL_192;
      }
      v68 = a2;
      v26 = (unsigned __int64 *)((char *)a2 + *((_QWORD *)&v83[3] + 1));
      v64 = *(unsigned __int64 **)&v83[4];
      memset(a2, 0, 0x1000uLL);
      a3 = a2;
    }
    else
    {
      if ( (int)ZwQueryVirtualMemory(-1LL, a2, 0LL, &v76, 48LL, 0LL) < 0 )
        goto LABEL_193;
      v26 = (unsigned __int64 *)v76;
      if ( v76 != a2 || v78 == 0x10000 )
        goto LABEL_193;
      a3 = (unsigned __int64 *)v76;
      v68 = (unsigned __int64 *)v76;
      if ( v78 == 4096 )
      {
        if ( (v21 & 0x40000) != 0 && (v79 & 0x40) == 0 )
          goto LABEL_193;
        memset(v76, 0, 0x1000uLL);
        if ( (int)ZwQueryVirtualMemory(-1LL, a2, 3LL, v81, 32LL, 0LL) < 0 )
          goto LABEL_193;
        v64 = v82;
        v67 = v77;
        a3 = v68;
        v26 = (unsigned __int64 *)((char *)v68 + v77);
      }
      else
      {
        v64 = (unsigned __int64 *)v77;
        v55 = v67;
        if ( v67 > v77 )
          v55 = v77;
        v67 = v55;
        if ( v55 < 0x2000 )
          goto LABEL_193;
      }
    }
    v66 |= 1u;
    v25 = a2;
    v60 = a2;
    v23 = v21 & 0x40000;
    goto LABEL_60;
  }
  v71 = 0LL;
  v70 = 0LL;
  if ( *((_QWORD *)&v83[4] + 1) )
  {
LABEL_192:
    v10 = 0LL;
    v42 = (__int64 *)v63;
    goto LABEL_97;
  }
  v70 = (sub_18005C774(v20, v61, a3, a4) & 0x1F) << 16;
  v72 = (unsigned __int64 *)((char *)v64 + v70);
  if ( (unsigned __int64 *)((char *)v64 + v70) < v64 )
  {
    v72 = v64;
    v70 = 0LL;
  }
  v23 = v21 & 0x40000;
  if ( (int)ZwAllocateVirtualMemory(-1LL, &v71, 0LL, &v72, 0x2000, (v21 & 0x40000) != 0 ? 64 : 4) < 0 )
    goto LABEL_193;
  v25 = (unsigned __int64 *)v71;
  v60 = (unsigned __int64 *)v71;
  v64 = v72;
  if ( v70 )
  {
    sub_18005CD8C(v24, &v71, &v70, 0x8000LL);
    v25 = (unsigned __int64 *)(v70 + v71);
    v60 = (unsigned __int64 *)(v70 + v71);
    v64 = (unsigned __int64 *)((char *)v72 - v70);
  }
  a3 = v25;
  v68 = v25;
  v26 = v25;
LABEL_60:
  if ( a3 == v26 )
  {
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v68, 0LL, &v67, 4096, v23 != 0 ? 64 : 4) < 0 )
      goto LABEL_193;
    v27 = 2147353472LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v28 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
    else
      v28 = 2147353472LL;
    if ( *(_BYTE *)v28 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_1800FE0A4(v60, v68, v67, 1LL);
    v26 = (unsigned __int64 *)((char *)v26 + v67);
    v25 = v60;
  }
  else
  {
    v27 = 2147353472LL;
  }
  v65 = v25 + 84;
  v29 = (char *)(v25 + 84);
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    v57 = ((unsigned __int64)v25 + 679) & 0xFFFFFFFFFFFFFFF8uLL;
    v60[41] = v57;
    v30 = NtGlobalFlag + 2064;
    v29 = (char *)(v57 + 2064);
    v21 |= 0x4000000u;
    LOWORD(v65) = v57 + 2064;
  }
  else
  {
    v30 = NtGlobalFlag;
  }
  NtGlobalFlag = (v30 + 15) & 0xFFFFFFF0;
  *((_WORD *)v60 + 4) = NtGlobalFlag >> 4;
  *((_BYTE *)v60 + 10) = 1;
  *((_BYTE *)v60 + 15) = 1;
  *((_DWORD *)v60 + 38) = -285217025;
  *((_DWORD *)v60 + 28) = v21 & 0xEFFFFFFF;
  *((_DWORD *)v60 + 36) = 0;
  memset(v60 + 67, 0, 0x78uLL);
  sub_18005C6E0(v60);
  *((_DWORD *)v60 + 154) = 1;
  v31 = (__int64)v60;
  if ( (v60[14] & 0x8000000) != 0 )
  {
    v58 = sub_1800FC34C(sub_1800FF100);
    *(_DWORD *)(v59 + 144) = v58;
    *((_DWORD *)v60 + 28) &= ~0x40u;
    v31 = (__int64)v60;
  }
  *(_DWORD *)(v31 + 116) = v21 & 0x6001007D;
  *((_WORD *)v60 + 105) = (_WORD)v65 - (_WORD)v60;
  v60[27] = 0LL;
  v32 = v60 + 42;
  v60[43] = (unsigned __int64)(v60 + 42);
  *v32 = v32;
  v33 = v60 + 34;
  v60[35] = (unsigned __int64)(v60 + 34);
  *v33 = v33;
  v34 = v60 + 36;
  v60[37] = (unsigned __int64)(v60 + 36);
  *v34 = v34;
  v35 = v60 + 30;
  v60[31] = (unsigned __int64)(v60 + 30);
  *v35 = v35;
  if ( !v63 && (v21 & 1) == 0 )
  {
    if ( (int)RtlInitializeCriticalSectionEx(v29, 0LL, 0x10000000LL) >= 0 )
    {
      v63 = (__int64)v29;
      v29 += 40;
      goto LABEL_74;
    }
    goto LABEL_159;
  }
LABEL_74:
  v60[44] = v63;
  *((_DWORD *)v60 + 30) |= 0x80000000;
  if ( (unsigned __int8)sub_18005C4D8(
                          (_DWORD)v60,
                          (_DWORD)v60,
                          NtGlobalFlag + 1104,
                          a4,
                          v66,
                          (__int64)v68,
                          (__int64)v26,
                          (__int64)v68 + (_QWORD)v64 - v69) )
  {
    if ( a2 )
      memset(v29, 0, 0x80uLL);
    *((_DWORD *)v29 + 2) = 128;
    *((_QWORD *)v29 + 5) = v29 + 56;
    *((_QWORD *)v29 + 4) = v60 + 42;
    *((_QWORD *)v29 + 6) = v29 + 72;
    sub_18005B7B4(v60, v29);
    *((_WORD *)v60 + 104) = 0;
    v60[20] = *((_QWORD *)&v83[0] + 1);
    v60[21] = *(_QWORD *)&v83[1];
    v60[22] = *((_QWORD *)&v83[1] + 1) >> 4;
    v60[23] = *(_QWORD *)&v83[2] >> 4;
    v60[25] = *((_QWORD *)&v83[2] + 1);
    *((_DWORD *)v60 + 37) = (unsigned __int64)(*(_QWORD *)&v83[3] + 15LL) >> 4;
    v60[45] = qword_18015D758 ^ *((_QWORD *)&v83[4] + 1);
    *((_DWORD *)v60 + 164) = 4;
    v60[83] = 2088960LL;
    if ( (dword_18015D42C & 1) != 0 )
      *((_DWORD *)v60 + 30) = 1;
    v60[32] = 31LL;
    v60[33] = -16LL;
    v36 = (__int64)v60;
    if ( (v60[14] & 0x20) != 0 )
    {
      v60[32] += 16LL;
      v36 = (__int64)v60;
    }
    *(_QWORD *)(v36 + 376) = 0LL;
    *((_WORD *)v60 + 192) = 0;
    *((_BYTE *)v60 + 386) = 0;
    *((_BYTE *)v60 + 387) = 0;
    v60[40] = 0LL;
    if ( (v21 & 3) != 2 || (dword_18015D42C & 1) != 0 )
    {
LABEL_84:
      sub_18002A46C((__int64)v60, 0, 1, 0);
      if ( *((_WORD *)v60 + 104) )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v38 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v38 = 2147353472LL;
        if ( *(_BYTE *)v38 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v27 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
          sub_1800FE1FC((_DWORD)v60, v21, (_DWORD)v64, v67, *(unsigned __int8 *)v27);
        }
        v39 = 2147353482LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v40 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
        else
          v40 = 2147353482LL;
        if ( *(_BYTE *)v40 )
        {
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v39 = (__int64)NtCurrentPeb()->HotpatchInformation + 560;
          sub_1800FE1FC((_DWORD)v60, v21, (_DWORD)v64, v67, *(unsigned __int8 *)v39);
        }
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v41 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
        else
          v41 = 2147353480LL;
        if ( *(_BYTE *)v41 )
          sub_1800FC3FC(v60, v64, v21);
        *((_DWORD *)v60 + 30) &= ~0x80000000;
        v60[46] = 0LL;
        v10 = v60;
        v60 = 0LL;
        v22 = v61;
        goto LABEL_96;
      }
      goto LABEL_193;
    }
    v60[49] = RtlAllocateHeap((__int64)v60, 0x80000Au, 256LL);
    v37 = v60[49];
    if ( v37 )
    {
      *(_BYTE *)(v37 - 1) = 1;
      *((_WORD *)v60 + 200) = 128;
      goto LABEL_84;
    }
  }
LABEL_193:
  v10 = 0LL;
  v42 = (__int64 *)v63;
  v22 = v61;
LABEL_97:
  if ( v42 && v42 != (__int64 *)v22 )
    RtlDeleteCriticalSection(v42, v22, a3, a4);
  if ( v60 )
  {
    if ( !a2 )
    {
      v64 = 0LL;
      sub_18005CD8C(v42, &v60, &v64, 0x8000LL);
    }
  }
  return (__int64)v10;
}
