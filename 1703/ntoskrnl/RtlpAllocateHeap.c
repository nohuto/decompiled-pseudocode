/*
 * XREFs of RtlpAllocateHeap @ 0x14000F830
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x14000F72C (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlpExtendHeap @ 0x14000E7E4 (RtlpExtendHeap.c)
 *     RtlpCreateSplitBlock @ 0x14000EAF4 (RtlpCreateSplitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x14001022C (RtlpHeapRemoveListEntry.c)
 *     RtlpFindEntry @ 0x14001031C (RtlpFindEntry.c)
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlpLogHeapFailure @ 0x14017D77C (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x14017E240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14017E300 (ZwFreeVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x140189B80 (RtlCompareMemoryUlong.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlpAnalyzeHeapFailure @ 0x140243E68 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x1402443AC (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x140244798 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x140244A60 (RtlpLogHeapExtendEvent.c)
 *     RtlGetNtGlobalFlags @ 0x1406EB030 (RtlGetNtGlobalFlags.c)
 */

_DWORD *__fastcall RtlpAllocateHeap(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        char a5,
        _DWORD *a6)
{
  ULONG_PTR v6; // rdi
  __int16 v7; // si
  char v8; // r13
  char v10; // cl
  _DWORD *v11; // r12
  __int64 v12; // r8
  unsigned __int64 v13; // r14
  __int64 Entry; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 *v19; // r13
  __int64 v20; // r9
  __int64 **v21; // rdx
  __int64 *v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // di
  int v25; // r8d
  __int64 v26; // rdx
  unsigned __int64 v27; // r9
  ULONG_PTR v28; // rcx
  unsigned __int8 v29; // al
  __int64 v30; // rcx
  __int64 v31; // rdi
  ULONG_PTR v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdi
  __int64 *v36; // rcx
  __int64 v37; // r9
  __int64 **v38; // rdx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  SIZE_T v41; // rax
  SIZE_T v42; // rax
  void *v43; // r8
  unsigned __int64 v44; // rdx
  _QWORD *v45; // rax
  ULONG_PTR v46; // r8
  _DWORD *v47; // rdx
  unsigned __int64 v48; // r8
  __int64 *v49; // rax
  __int64 v51; // rdi
  PVOID v52; // [rsp+48h] [rbp-F0h] BYREF
  NTSTATUS v53; // [rsp+50h] [rbp-E8h]
  unsigned __int64 v54; // [rsp+58h] [rbp-E0h]
  ULONG_PTR v55; // [rsp+60h] [rbp-D8h]
  int v56; // [rsp+68h] [rbp-D0h]
  ULONG_PTR v57; // [rsp+70h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-C0h] BYREF
  char *v59; // [rsp+80h] [rbp-B8h]
  __int64 *v60; // [rsp+88h] [rbp-B0h]
  SIZE_T v61; // [rsp+90h] [rbp-A8h]
  __int64 v62; // [rsp+98h] [rbp-A0h]
  unsigned __int64 v63; // [rsp+A0h] [rbp-98h]
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp-90h] BYREF
  int v65; // [rsp+B0h] [rbp-88h]
  __int64 v66; // [rsp+B8h] [rbp-80h]
  unsigned __int64 v67; // [rsp+C0h] [rbp-78h]
  __int64 v68; // [rsp+C8h] [rbp-70h]
  _QWORD *v69; // [rsp+D0h] [rbp-68h]
  unsigned __int64 v70; // [rsp+D8h] [rbp-60h]
  __int64 v71; // [rsp+E0h] [rbp-58h]
  __int64 v72; // [rsp+E8h] [rbp-50h]
  __int64 v73; // [rsp+F0h] [rbp-48h]
  ULONG_PTR v74; // [rsp+F8h] [rbp-40h]
  char v75; // [rsp+148h] [rbp+10h]
  ULONG_PTR v77; // [rsp+158h] [rbp+20h] BYREF

  v77 = a4;
  v75 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v62 = 0LL;
  LODWORD(v55) = 1;
  v10 = 0;
  a5 = 0;
  v11 = 0LL;
  v59 = 0LL;
  v52 = 0LL;
  v56 = 0;
  if ( (a2 & 0x3C010F60) != 0 || a3 >= 0x80000000 )
  {
    LODWORD(v55) = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    v51 = a3;
    if ( !a3 )
      v51 = 1LL;
    v6 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v51);
    if ( v6 < 0x20 )
      v6 = 32LL;
    v77 = v6;
    v12 = a2 >> 4;
    LOBYTE(v12) = v12 & 0xE0 | 1;
    LODWORD(v54) = v12;
    if ( (a2 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) )
    {
      LOBYTE(v12) = v12 | 2;
      LODWORD(v54) = v12;
      v6 += 16LL;
      v77 = v6;
    }
    v13 = v6 >> 4;
  }
  else
  {
    v12 = 1LL;
    LODWORD(v54) = 1;
    v13 = a4 >> 4;
    if ( a4 >> 4 < 2 )
    {
      v6 = a4 + 16;
      v77 = a4 + 16;
      v13 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 )
  {
    if ( (RtlGetNtGlobalFlags() & 0x800) == 0 )
      LOBYTE(v54) = v54 | 8;
    v10 = 0;
  }
  if ( (v8 & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    v56 = 0;
    v10 = 1;
    a5 = 1;
    v6 = v77;
  }
  if ( v13 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      v77 = v6 + 56;
      v57 = (ExGenRandom(1LL) & 0xF) << 12;
      BaseAddress = 0LL;
      RegionSize = v77 + 4096 + v57;
      v65 = 4;
      v53 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
      if ( v53 < 0 )
        goto LABEL_69;
      v52 = (char *)BaseAddress + v57;
      v53 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v52, 0LL, &v77, 0x1000u, 4u);
      if ( v53 >= 0 )
      {
        *((_WORD *)v52 + 28) = v77 - v7;
        *((_BYTE *)v52 + 58) = v54 | 2;
        *((_QWORD *)v52 + 4) = v77;
        *((_QWORD *)v52 + 5) = RegionSize;
        *((_BYTE *)v52 + 63) = 4;
        v46 = v77;
        *(_QWORD *)(a1 + 560) += v77;
        if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
        {
          RtlpLogHeapCommit(a1, v52, v46, 9LL);
          if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
            RtlpLogHeapExtendEvent(a1, v52, v77, 16LL * *(_QWORD *)(a1 + 192));
        }
        v47 = v52;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v52 + 59) = *((_BYTE *)v52 + 56) ^ *((_BYTE *)v52 + 57) ^ *((_BYTE *)v52 + 58);
          v47[14] ^= *(_DWORD *)(a1 + 136);
          v47 = v52;
        }
        v48 = a1 + 272;
        v49 = *(__int64 **)(a1 + 280);
        if ( *v49 == a1 + 272 )
        {
          *(_QWORD *)v47 = v48;
          *((_QWORD *)v47 + 1) = v49;
          *v49 = (__int64)v47;
          *(_QWORD *)(a1 + 280) = v47;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, v48, 0, *v49);
        }
        v11 = (char *)v52 + 64;
        v59 = (char *)v52 + 64;
        v10 = a5;
        goto LABEL_108;
      }
      v57 = 0LL;
      v53 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v57, 0x8000u);
      v52 = 0LL;
      ++*(_DWORD *)(a1 + 600);
      v10 = a5;
    }
    else
    {
      v53 = -1073741789;
    }
    goto LABEL_107;
  }
  v70 = a1 + 336;
  Entry = RtlpFindEntry(a1, v13, v12, a4);
  v71 = Entry;
  if ( a1 + 336 == Entry )
  {
LABEL_45:
    v33 = RtlpExtendHeap(a1, v77);
    v15 = v33;
    v66 = v33;
    if ( v33 )
    {
      v34 = v33 + 16;
      v35 = *(_QWORD *)(v33 + 16);
      v36 = *(__int64 **)(v33 + 24);
      v60 = v36;
      v37 = *(_QWORD *)(v35 + 8);
      if ( *v36 != v37 || *v36 != v34 )
      {
        RtlpLogHeapFailure(12, a1, v34, v37, *v36);
        v10 = a5;
        goto LABEL_108;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v33 + 8);
      v38 = *(__int64 ***)(a1 + 312);
      if ( v38 )
      {
        v39 = *(unsigned __int16 *)(v33 + 8);
        while ( 1 )
        {
          v40 = *((unsigned int *)v38 + 2);
          if ( v39 < v40 )
            break;
          if ( !*v38 )
          {
            v39 = (unsigned int)(v40 - 1);
            break;
          }
          v38 = (__int64 **)*v38;
        }
        v67 = v39;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v38, v34, v34, v39, *(unsigned __int16 *)(v15 + 8));
        v36 = v60;
      }
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
LABEL_22:
      v24 = *(_BYTE *)(v15 + 10);
      v25 = v55;
      if ( !(_DWORD)v55 && (v24 & 4) != 0 )
      {
        v41 = 16LL * *(unsigned __int16 *)(v15 + 8) - 32;
        v61 = v41;
        if ( (v24 & 2) != 0 && v41 > 4 )
        {
          v41 -= 4LL;
          v61 = v41;
        }
        v42 = RtlCompareMemoryUlong((PVOID)(v15 + 32), v41, 0xFEEEFEEE);
        if ( v42 != v61 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v15,
            (const void *)(v15 + v42 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
        v25 = v55;
      }
      v72 = v15;
      if ( (*(_BYTE *)(v15 + 10) & 1) == 0 )
      {
        *(_BYTE *)(v15 + 10) = v54;
        v26 = *(unsigned __int16 *)(v15 + 8) - v13;
        v73 = v26;
        *(_WORD *)(v15 + 8) = v13;
        v27 = a3;
        v28 = v77 - a3;
        v74 = v77 - a3;
        if ( v77 - a3 >= 0x3F )
        {
          *(_QWORD *)(v15 + 16 * v13) = v28;
          *(_BYTE *)(v15 + 15) = 63;
        }
        else
        {
          *(_BYTE *)(v15 + 15) = v28;
        }
        *(_BYTE *)(v15 + 11) = 0;
        if ( v26 )
        {
          if ( v26 != 1 )
          {
            v29 = *(_BYTE *)(v15 + 14);
            if ( v29 )
            {
              v30 = (v15 & 0xFFFFFFFFFFFF0000uLL) + ((1LL - v29) << 16);
              v54 = v30;
            }
            else
            {
              v30 = a1;
              v54 = a1;
            }
            if ( RtlpCreateSplitBlock(a1, v30, v15 + 16 * v13, v24, v25 == 0, v13, v26) )
            {
              v25 = v55;
              v27 = a3;
              goto LABEL_32;
            }
LABEL_69:
            v10 = a5;
            goto LABEL_108;
          }
          ++*(_WORD *)(v15 + 8);
          v32 = v77 - a3 + 16;
          v55 = v32;
          if ( v32 >= 0x3F )
          {
            *(_QWORD *)(v15 + 16 * (v13 + 1)) = v32;
            *(_BYTE *)(v15 + 15) = 63;
          }
          else
          {
            *(_BYTE *)(v15 + 15) = v32;
          }
        }
LABEL_32:
        v11 = (_DWORD *)(v15 + 16);
        v59 = (char *)(v15 + 16);
        v31 = 16LL * *(unsigned __int16 *)(v15 + 8);
        v62 = v31;
        if ( (*(_BYTE *)(v15 + 15) & 0x3F) == 0x3F )
        {
          v31 -= 8LL;
          v62 = v31;
        }
        if ( v25 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
            *(_DWORD *)(v15 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          v10 = a5;
          if ( a5 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
            v10 = 0;
            a5 = 0;
          }
          if ( (v8 & 8) != 0 )
          {
            memset((void *)(v15 + 16), 0, v31 - 8);
            v10 = a5;
          }
          goto LABEL_108;
        }
        if ( (v8 & 8) != 0 )
        {
          memset((void *)(v15 + 16), 0, v31 - 8);
          v27 = a3;
          goto LABEL_82;
        }
        if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        {
          v43 = (void *)(v15 + 16);
          v68 = v15 + 16;
          v44 = (v27 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
          v63 = v44;
          if ( v44 )
          {
            if ( ((unsigned __int8)v11 & 4) != 0 )
            {
              *v11 = -1163005939;
              v63 = --v44;
              if ( !v44 )
                goto LABEL_82;
              v43 = (void *)(v15 + 20);
              v68 = v15 + 20;
            }
            memset64(v43, 0xBAADF00DBAADF00DuLL, v44 >> 1);
            if ( (v44 & 1) != 0 )
              *((_DWORD *)v43 + v44 - 1) = -1163005939;
          }
        }
LABEL_82:
        if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
        {
          *(_QWORD *)((char *)v11 + v27) = 0xABABABABABABABABuLL;
          *(_QWORD *)((char *)v11 + v27 + 8) = 0xABABABABABABABABuLL;
          *(_BYTE *)(v15 + 10) |= 4u;
        }
        *(_BYTE *)(v15 + 11) = 0;
        if ( (*(_BYTE *)(v15 + 10) & 2) != 0 )
        {
          if ( *(_BYTE *)(v15 + 15) == 4 )
            v45 = (_QWORD *)(v15 - 32);
          else
            v45 = (_QWORD *)(v15 + 16LL * *(unsigned __int16 *)(v15 + 8) - 16);
          v69 = v45;
          *v45 = 0LL;
          v45[1] = 0LL;
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
          *(_DWORD *)(v15 + 8) ^= *(_DWORD *)(a1 + 136);
          v10 = a5;
          goto LABEL_108;
        }
        goto LABEL_69;
      }
      RtlpLogHeapFailure(3, a1, v15, 0, 0LL);
      goto LABEL_69;
    }
    v53 = -1073741801;
    v10 = a5;
LABEL_107:
    v11 = 0LL;
    v59 = 0LL;
    goto LABEL_108;
  }
  v15 = Entry - 16;
  v66 = Entry - 16;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v15 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v15 + 11) != (*(_BYTE *)(v15 + 8) ^ (unsigned __int8)(*(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10))) )
      RtlpAnalyzeHeapFailure(a1);
  }
  v16 = *(unsigned __int16 *)(v15 + 8);
  if ( v16 < v13 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v15 + 11) = *(_BYTE *)(v15 + 8) ^ *(_BYTE *)(v15 + 9) ^ *(_BYTE *)(v15 + 10);
      *(_DWORD *)(v15 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    goto LABEL_45;
  }
  v17 = v15 + 16;
  v18 = *(_QWORD *)(v15 + 16);
  v19 = *(__int64 **)(v15 + 24);
  v20 = *(_QWORD *)(v18 + 8);
  if ( *v19 == v20 && *v19 == v17 )
  {
    *(_QWORD *)(a1 + 192) -= v16;
    v21 = *(__int64 ***)(a1 + 312);
    if ( v21 )
    {
      v22 = (__int64 *)*(unsigned __int16 *)(v15 + 8);
      while ( 1 )
      {
        v23 = *((unsigned int *)v21 + 2);
        if ( (unsigned __int64)v22 < v23 )
          break;
        if ( !*v21 )
        {
          v22 = (__int64 *)(unsigned int)(v23 - 1);
          break;
        }
        v21 = (__int64 **)*v21;
      }
      v60 = v22;
      RtlpHeapRemoveListEntry(a1, (_DWORD)v21, v17, v15 + 16, (_DWORD)v22, *(unsigned __int16 *)(v15 + 8));
    }
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    v8 = v75;
    goto LABEL_22;
  }
  RtlpLogHeapFailure(12, a1, v17, v20, *v19);
  v10 = a5;
LABEL_108:
  if ( v10 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 && v11 )
  {
    if ( v52 )
      RtlpHeapLogRangeReserve(a1, (unsigned __int64)v52 & 0xFFFFFFFFFFFF0000uLL, *((_QWORD *)v52 + 5));
  }
  return v11;
}
