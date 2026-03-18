/*
 * XREFs of RtlpAllocateHeap @ 0x14010DCD4
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x14010DBDC (RtlpAllocateHeapInternal.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     RtlpExtendHeap @ 0x14010CCA8 (RtlpExtendHeap.c)
 *     RtlpCreateSplitBlock @ 0x14010CFC4 (RtlpCreateSplitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x14010E60C (RtlpHeapRemoveListEntry.c)
 *     RtlpFindEntry @ 0x14010E6FC (RtlpFindEntry.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x14017DBC0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14017DC80 (ZwFreeVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x140189680 (RtlCompareMemoryUlong.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlpAnalyzeHeapFailure @ 0x14025B284 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeReserve @ 0x14025B7A4 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x14025BB90 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x14025BE58 (RtlpLogHeapExtendEvent.c)
 *     RtlGetNtGlobalFlags @ 0x140722F40 (RtlGetNtGlobalFlags.c)
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
  __int16 v7; // bx
  char v8; // r13
  _DWORD *v10; // r14
  char v11; // r12
  unsigned __int64 v12; // r15
  __int64 Entry; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r13
  __int64 *v18; // rdi
  __int64 v19; // r9
  __int64 **v20; // rdx
  __int64 *v21; // rcx
  unsigned __int64 v22; // rdi
  char v23; // r13
  char v24; // dl
  __int64 v25; // r9
  __int64 v26; // rdi
  ULONG_PTR v27; // rcx
  char v28; // cl
  unsigned __int8 v29; // al
  __int64 v30; // rdx
  __int64 v31; // rdi
  char v32; // bl
  ULONG_PTR v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r13
  __int64 *v37; // rcx
  __int64 v38; // r9
  __int64 **v39; // rdx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rdi
  SIZE_T v42; // rdi
  SIZE_T v43; // rax
  void *v44; // r8
  unsigned __int64 v45; // rdx
  _QWORD *v46; // rax
  ULONG_PTR v47; // r8
  _DWORD *v48; // rdx
  unsigned __int64 v49; // r8
  __int64 *v50; // rax
  __int64 v52; // rdi
  PVOID v53; // [rsp+48h] [rbp-F0h] BYREF
  int v54; // [rsp+50h] [rbp-E8h]
  NTSTATUS v55; // [rsp+54h] [rbp-E4h]
  int v56; // [rsp+58h] [rbp-E0h]
  ULONG_PTR v57; // [rsp+60h] [rbp-D8h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-D0h] BYREF
  _DWORD *v59; // [rsp+70h] [rbp-C8h]
  __int64 *v60; // [rsp+78h] [rbp-C0h]
  __int64 *v61; // [rsp+80h] [rbp-B8h]
  __int64 v62; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v63; // [rsp+90h] [rbp-A8h]
  ULONG_PTR RegionSize; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-98h]
  unsigned __int64 v66; // [rsp+A8h] [rbp-90h]
  SIZE_T v67; // [rsp+B0h] [rbp-88h]
  __int64 v68; // [rsp+B8h] [rbp-80h]
  __int64 v69; // [rsp+C0h] [rbp-78h]
  _QWORD *v70; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v71; // [rsp+D0h] [rbp-68h]
  __int64 v72; // [rsp+D8h] [rbp-60h]
  __int64 v73; // [rsp+E0h] [rbp-58h]
  __int64 v74; // [rsp+E8h] [rbp-50h]
  ULONG_PTR v75; // [rsp+F0h] [rbp-48h]
  ULONG_PTR v76; // [rsp+F8h] [rbp-40h]
  char v77; // [rsp+148h] [rbp+10h]
  ULONG_PTR v79; // [rsp+158h] [rbp+20h] BYREF

  v79 = a4;
  v77 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v62 = 0LL;
  v54 = 1;
  a5 = 0;
  v10 = 0LL;
  v59 = 0LL;
  v53 = 0LL;
  v56 = 0;
  if ( (a2 & 0x3C010F60) != 0 || a3 >= 0x80000000 )
  {
    v54 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    v52 = a3;
    if ( !a3 )
      v52 = 1LL;
    v6 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v52);
    if ( v6 < 0x20 )
      v6 = 32LL;
    v79 = v6;
    v11 = (a2 >> 4) & 0xE0 | 1;
    if ( (a2 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) )
    {
      v11 = (a2 >> 4) & 0xE0 | 3;
      v6 += 16LL;
      v79 = v6;
    }
    v12 = v6 >> 4;
  }
  else
  {
    v11 = 1;
    v12 = a4 >> 4;
    if ( a4 >> 4 < 2 )
    {
      v6 = a4 + 16;
      v79 = a4 + 16;
      v12 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (RtlGetNtGlobalFlags() & 0x800) == 0 )
    v11 |= 8u;
  if ( (v8 & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    v56 = 0;
    a5 = 1;
    v6 = v79;
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      v79 = v6 + 56;
      v57 = (ExGenRandom(1) & 0xF) << 12;
      BaseAddress = 0LL;
      RegionSize = v79 + 4096 + v57;
      LODWORD(v61) = 4;
      v55 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
      if ( v55 < 0 )
        goto LABEL_108;
      v53 = (char *)BaseAddress + v57;
      v55 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v53, 0LL, &v79, 0x1000u, 4u);
      if ( v55 >= 0 )
      {
        *((_WORD *)v53 + 28) = v79 - v7;
        *((_BYTE *)v53 + 58) = v11 | 2;
        *((_QWORD *)v53 + 4) = v79;
        *((_QWORD *)v53 + 5) = RegionSize;
        *((_BYTE *)v53 + 63) = 4;
        v47 = v79;
        *(_QWORD *)(a1 + 560) += v79;
        if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
        {
          RtlpLogHeapCommit(a1, v53, v47, 9LL);
          v47 = v79;
        }
        if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 )
          RtlpLogHeapExtendEvent(a1, v53, v47, 16LL * *(_QWORD *)(a1 + 192));
        v48 = v53;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v53 + 59) = *((_BYTE *)v53 + 56) ^ *((_BYTE *)v53 + 57) ^ *((_BYTE *)v53 + 58);
          v48[14] ^= *(_DWORD *)(a1 + 136);
          v48 = v53;
        }
        v49 = a1 + 272;
        v50 = *(__int64 **)(a1 + 280);
        if ( *v50 == a1 + 272 )
        {
          *(_QWORD *)v48 = v49;
          *((_QWORD *)v48 + 1) = v50;
          *v50 = (__int64)v48;
          *(_QWORD *)(a1 + 280) = v48;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, v49, 0, *v50);
        }
        v10 = (char *)v53 + 64;
        goto LABEL_107;
      }
      v57 = 0LL;
      v55 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v57, 0x8000u);
      v53 = 0LL;
      ++*(_DWORD *)(a1 + 600);
    }
    else
    {
      v55 = -1073741789;
    }
LABEL_106:
    v10 = 0LL;
LABEL_107:
    v59 = v10;
    goto LABEL_108;
  }
  v71 = a1 + 336;
  Entry = RtlpFindEntry(a1, v12, a3, a4);
  v72 = Entry;
  if ( a1 + 336 == Entry )
  {
LABEL_44:
    v34 = RtlpExtendHeap(a1, v79);
    v14 = v34;
    v65 = v34;
    if ( v34 )
    {
      v35 = v34 + 16;
      v36 = *(_QWORD *)(v34 + 16);
      v37 = *(__int64 **)(v34 + 24);
      v60 = v37;
      v38 = *(_QWORD *)(v36 + 8);
      if ( *v37 != v38 || *v37 != v35 )
      {
        RtlpLogHeapFailure(12, a1, v35, v38, *v37);
        goto LABEL_108;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v34 + 8);
      v39 = *(__int64 ***)(a1 + 312);
      if ( v39 )
      {
        v40 = *(unsigned __int16 *)(v34 + 8);
        while ( 1 )
        {
          v41 = *((unsigned int *)v39 + 2);
          if ( v40 < v41 )
            break;
          if ( !*v39 )
          {
            v40 = (unsigned int)(v41 - 1);
            break;
          }
          v39 = (__int64 **)*v39;
        }
        v66 = v40;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v39, v35, v35, v40, *(unsigned __int16 *)(v34 + 8));
        v37 = v60;
      }
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
      goto LABEL_22;
    }
    v55 = -1073741801;
    goto LABEL_106;
  }
  v14 = Entry - 16;
  v65 = Entry - 16;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
      RtlpAnalyzeHeapFailure(a1);
  }
  v15 = *(unsigned __int16 *)(v14 + 8);
  if ( v15 < v12 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
      *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    goto LABEL_44;
  }
  v16 = v14 + 16;
  v17 = *(_QWORD *)(v14 + 16);
  v18 = *(__int64 **)(v14 + 24);
  v61 = v18;
  v19 = *(_QWORD *)(v17 + 8);
  if ( *v18 != v19 || *v18 != v16 )
  {
    RtlpLogHeapFailure(12, a1, v16, v19, *v18);
    goto LABEL_108;
  }
  *(_QWORD *)(a1 + 192) -= v15;
  v20 = *(__int64 ***)(a1 + 312);
  if ( v20 )
  {
    v21 = (__int64 *)*(unsigned __int16 *)(v14 + 8);
    while ( 1 )
    {
      v22 = *((unsigned int *)v20 + 2);
      if ( (unsigned __int64)v21 < v22 )
        break;
      if ( !*v20 )
      {
        v21 = (__int64 *)(unsigned int)(v22 - 1);
        break;
      }
      v20 = (__int64 **)*v20;
    }
    v60 = v21;
    RtlpHeapRemoveListEntry(a1, (_DWORD)v20, v16, v14 + 16, (_DWORD)v21, *(unsigned __int16 *)(v14 + 8));
    v18 = v61;
  }
  *v18 = v17;
  *(_QWORD *)(v17 + 8) = v18;
LABEL_22:
  v23 = *(_BYTE *)(v14 + 10);
  v24 = v54;
  if ( !v54 && (v23 & 4) != 0 )
  {
    v42 = 16LL * *(unsigned __int16 *)(v14 + 8) - 32;
    v67 = v42;
    if ( (v23 & 2) != 0 && v42 > 4 )
    {
      v42 -= 4LL;
      v67 = v42;
    }
    v43 = RtlCompareMemoryUlong((PVOID)(v14 + 32), v42, 0xFEEEFEEE);
    if ( v43 != v42 )
    {
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v14,
        (const void *)(v14 + v43 + 32));
      if ( (_BYTE)KdDebuggerEnabled )
        __debugbreak();
    }
    v24 = v54;
  }
  v73 = v14;
  v25 = 1LL;
  if ( (*(_BYTE *)(v14 + 10) & 1) != 0 )
  {
    RtlpLogHeapFailure(3, a1, v14, 0, 0LL);
  }
  else
  {
    *(_BYTE *)(v14 + 10) = v11;
    v26 = *(unsigned __int16 *)(v14 + 8) - v12;
    v74 = v26;
    *(_WORD *)(v14 + 8) = v12;
    v27 = v79 - a3;
    v75 = v79 - a3;
    if ( v79 - a3 >= 0x3F )
    {
      *(_QWORD *)(v14 + 16 * v12) = v27;
      *(_BYTE *)(v14 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(v14 + 15) = v27;
    }
    *(_BYTE *)(v14 + 11) = 0;
    if ( !v26 )
      goto LABEL_31;
    if ( v26 == 1 )
    {
      ++*(_WORD *)(v14 + 8);
      v33 = v79 - a3 + 16;
      v76 = v33;
      if ( v33 >= 0x3F )
      {
        *(_QWORD *)(v14 + 16 * (v12 + 1)) = v33;
        *(_BYTE *)(v14 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v14 + 15) = v33;
      }
      goto LABEL_31;
    }
    v28 = v24 ^ 1;
    v29 = *(_BYTE *)(v14 + 14);
    v30 = v29 ? (v14 & 0xFFFFFFFFFFFF0000uLL) + ((1LL - v29) << 16) : a1;
    v68 = v30;
    LOBYTE(v25) = v23;
    if ( RtlpCreateSplitBlock(a1, v30, v14 + 16 * v12, v25, v28, v12, v26) )
    {
LABEL_31:
      v10 = (_DWORD *)(v14 + 16);
      v59 = (_DWORD *)(v14 + 16);
      v31 = 16LL * *(unsigned __int16 *)(v14 + 8);
      v62 = v31;
      if ( (*(_BYTE *)(v14 + 15) & 0x3F) == 0x3F )
      {
        v31 -= 8LL;
        v62 = v31;
      }
      if ( v54 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
          *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        v32 = a5;
        if ( a5 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
          a5 = 0;
          v32 = 0;
        }
        if ( (v77 & 8) != 0 )
          memset(v10, 0, v31 - 8);
        goto LABEL_109;
      }
      if ( (v77 & 8) != 0 )
      {
        memset((void *)(v14 + 16), 0, v31 - 8);
LABEL_80:
        if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
        {
          *(_QWORD *)((char *)v10 + a3) = 0xABABABABABABABABuLL;
          *(_QWORD *)((char *)v10 + a3 + 8) = 0xABABABABABABABABuLL;
          *(_BYTE *)(v14 + 10) |= 4u;
        }
        *(_BYTE *)(v14 + 11) = 0;
        if ( (*(_BYTE *)(v14 + 10) & 2) != 0 )
        {
          if ( *(_BYTE *)(v14 + 15) == 4 )
            v46 = (_QWORD *)(v14 - 32);
          else
            v46 = (_QWORD *)(v14 + 16LL * *(unsigned __int16 *)(v14 + 8) - 16);
          v70 = v46;
          *v46 = 0LL;
          v46[1] = 0LL;
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
          *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_108;
      }
      if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
        goto LABEL_80;
      v44 = (void *)(v14 + 16);
      v69 = v14 + 16;
      v45 = (a3 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v63 = v45;
      if ( !v45 )
        goto LABEL_80;
      if ( ((unsigned __int8)v10 & 4) != 0 )
      {
        *v10 = -1163005939;
        v63 = --v45;
        if ( !v45 )
          goto LABEL_80;
        v44 = (void *)(v14 + 20);
        v69 = v14 + 20;
      }
      memset64(v44, 0xBAADF00DBAADF00DuLL, v45 >> 1);
      if ( (v45 & 1) != 0 )
        *((_DWORD *)v44 + v45 - 1) = -1163005939;
      goto LABEL_80;
    }
  }
LABEL_108:
  v32 = a5;
LABEL_109:
  if ( v32 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 && v10 )
  {
    if ( v53 )
      RtlpHeapLogRangeReserve(a1, (unsigned __int64)v53 & 0xFFFFFFFFFFFF0000uLL, *((_QWORD *)v53 + 5));
  }
  return v10;
}
