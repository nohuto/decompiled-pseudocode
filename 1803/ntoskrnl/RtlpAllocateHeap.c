/*
 * XREFs of RtlpAllocateHeap @ 0x1402894E0
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x1400AB5EC (RtlpAllocateHeapInternal.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ZwAllocateVirtualMemory @ 0x1401A77C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1401A7880 (ZwFreeVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x1401B32E0 (RtlCompareMemoryUlong.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpCreateSplitBlock @ 0x14028A28C (RtlpCreateSplitBlock.c)
 *     RtlpExtendHeap @ 0x14028B0B0 (RtlpExtendHeap.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x140293310 (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x1402939E8 (RtlpFindEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x140293DD8 (RtlpHeapRemoveListEntry.c)
 *     RtlGetNtGlobalFlags @ 0x1407866E0 (RtlGetNtGlobalFlags.c)
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
  _DWORD *v10; // r15
  char v11; // r12
  unsigned __int64 v12; // r14
  __int64 v14; // rdi
  ULONG_PTR v15; // r14
  __int64 Entry; // rax
  __int64 v17; // rbx
  int v18; // edx
  unsigned __int64 v19; // rcx
  __int64 v20; // r13
  __int64 *v21; // rdi
  __int64 v22; // r9
  __int64 **v23; // rdx
  __int64 *v24; // rcx
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r13
  __int64 *v29; // rcx
  __int64 v30; // r9
  __int64 **v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rdi
  char v34; // r13
  char v35; // dl
  SIZE_T v36; // rdi
  SIZE_T v37; // rax
  int v38; // r9d
  __int64 v39; // rdi
  ULONG_PTR v40; // rcx
  ULONG_PTR v41; // rcx
  char v42; // cl
  unsigned __int8 v43; // al
  unsigned __int64 v44; // rdx
  unsigned __int16 v45; // cx
  __int64 v46; // rdi
  __int16 v47; // dx
  char v48; // bl
  void *v49; // r8
  unsigned __int64 v50; // rdx
  _QWORD *v51; // rax
  int v52; // eax
  _DWORD *v53; // rdx
  unsigned __int64 v54; // r8
  __int64 *v55; // rax
  int v56; // [rsp+44h] [rbp-F4h]
  PVOID v57; // [rsp+48h] [rbp-F0h] BYREF
  NTSTATUS v58; // [rsp+50h] [rbp-E8h]
  int v59; // [rsp+54h] [rbp-E4h]
  int v60; // [rsp+58h] [rbp-E0h]
  ULONG_PTR v61; // [rsp+60h] [rbp-D8h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-D0h] BYREF
  _DWORD *v63; // [rsp+70h] [rbp-C8h]
  __int64 *v64; // [rsp+78h] [rbp-C0h]
  __int64 *v65; // [rsp+80h] [rbp-B8h]
  __int64 v66; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v67; // [rsp+90h] [rbp-A8h]
  ULONG_PTR RegionSize; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+A0h] [rbp-98h]
  unsigned __int64 v70; // [rsp+A8h] [rbp-90h]
  SIZE_T v71; // [rsp+B0h] [rbp-88h]
  unsigned __int64 v72; // [rsp+B8h] [rbp-80h]
  __int64 v73; // [rsp+C0h] [rbp-78h]
  _QWORD *v74; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v75; // [rsp+D0h] [rbp-68h]
  __int64 v76; // [rsp+D8h] [rbp-60h]
  __int64 v77; // [rsp+E0h] [rbp-58h]
  __int64 v78; // [rsp+E8h] [rbp-50h]
  ULONG_PTR v79; // [rsp+F0h] [rbp-48h]
  ULONG_PTR v80; // [rsp+F8h] [rbp-40h]
  char v81; // [rsp+148h] [rbp+10h]
  ULONG_PTR v83; // [rsp+158h] [rbp+20h] BYREF

  v83 = a4;
  v81 = a2;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v66 = 0LL;
  v56 = 1;
  a5 = 0;
  v10 = 0LL;
  v63 = 0LL;
  v57 = 0LL;
  v59 = 0;
  if ( (a2 & 0x3C010F60) != 0 || a3 >= 0x80000000 )
  {
    v56 = 0;
    *a6 = 4;
    if ( a3 > 0x7FFFFFFFFFFFFFFFLL )
      return 0LL;
    v14 = a3;
    if ( !a3 )
      v14 = 1LL;
    v6 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v14);
    if ( v6 < 0x20 )
      v6 = 32LL;
    v83 = v6;
    v11 = (a2 >> 4) & 0xE0 | 1;
    if ( (a2 & 0x3C000100) != 0 || (v15 = v6, *(_QWORD *)(a1 + 328)) )
    {
      v11 = (a2 >> 4) & 0xE0 | 3;
      v15 = v6 + 16;
      v6 = v15;
      v83 = v15;
    }
    v12 = v15 >> 4;
  }
  else
  {
    v11 = 1;
    v12 = a4 >> 4;
    if ( a4 >> 4 < 2 )
    {
      v6 = a4 + 16;
      v83 = a4 + 16;
      v12 = 2LL;
    }
    *a6 = 3;
  }
  if ( (a2 & 0x800000) != 0 && (RtlGetNtGlobalFlags() & 0x800) == 0 )
    v11 |= 8u;
  if ( (v8 & 1) == 0 )
  {
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 352), 1u);
    v59 = 0;
    a5 = 1;
    v6 = v83;
  }
  if ( v12 > *(unsigned int *)(a1 + 148) )
  {
    if ( (*(_DWORD *)(a1 + 112) & 2) != 0 )
    {
      v83 = v6 + 56;
      v52 = ExGenRandom(1);
      v60 = v52 & 0x7FFFFFFF;
      v61 = (unsigned __int64)(v52 & 0xF) << 12;
      BaseAddress = 0LL;
      RegionSize = v83 + 4096 + v61;
      LODWORD(v65) = 4;
      v58 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
      if ( v58 < 0 )
        goto LABEL_116;
      v57 = (char *)BaseAddress + v61;
      v58 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v57, 0LL, &v83, 0x1000u, 4u);
      if ( v58 >= 0 )
      {
        *((_WORD *)v57 + 28) = v83 - v7;
        *((_BYTE *)v57 + 58) = v11 | 2;
        *((_QWORD *)v57 + 4) = v83;
        *((_QWORD *)v57 + 5) = RegionSize;
        *((_BYTE *)v57 + 63) = 4;
        *(_QWORD *)(a1 + 560) += v83;
        v53 = v57;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v57 + 59) = *((_BYTE *)v57 + 56) ^ *((_BYTE *)v57 + 57) ^ *((_BYTE *)v57 + 58);
          v53[14] ^= *(_DWORD *)(a1 + 136);
          v53 = v57;
        }
        v54 = a1 + 272;
        v55 = *(__int64 **)(a1 + 280);
        if ( *v55 == a1 + 272 )
        {
          *(_QWORD *)v53 = v54;
          *((_QWORD *)v53 + 1) = v55;
          *v55 = (__int64)v53;
          *(_QWORD *)(a1 + 280) = v53;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, v54, 0, *v55);
        }
        v10 = (char *)v57 + 64;
        goto LABEL_115;
      }
      v61 = 0LL;
      v58 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v61, 0x8000u);
      v57 = 0LL;
      ++*(_DWORD *)(a1 + 600);
    }
    else
    {
      v58 = -1073741789;
    }
LABEL_114:
    v10 = 0LL;
LABEL_115:
    v63 = v10;
    goto LABEL_116;
  }
  v75 = a1 + 336;
  Entry = RtlpFindEntry(a1, v12);
  v76 = Entry;
  if ( a1 + 336 == Entry )
  {
LABEL_40:
    v26 = RtlpExtendHeap(a1);
    v17 = v26;
    v69 = v26;
    if ( v26 )
    {
      v27 = v26 + 16;
      v28 = *(_QWORD *)(v26 + 16);
      v29 = *(__int64 **)(v26 + 24);
      v64 = v29;
      v30 = *(_QWORD *)(v28 + 8);
      if ( *v29 != v30 || *v29 != v27 )
      {
        RtlpLogHeapFailure(13, a1, v27, v30, *v29);
        goto LABEL_116;
      }
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v26 + 8);
      v31 = *(__int64 ***)(a1 + 312);
      if ( v31 )
      {
        v32 = *(unsigned __int16 *)(v26 + 8);
        while ( 1 )
        {
          v33 = *((unsigned int *)v31 + 2);
          if ( v32 < v33 )
            break;
          if ( !*v31 )
          {
            v32 = (unsigned int)(v33 - 1);
            break;
          }
          v31 = (__int64 **)*v31;
        }
        v70 = v32;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v31, v27, v27, v32, *(unsigned __int16 *)(v26 + 8));
        v29 = v64;
      }
      *v29 = v28;
      *(_QWORD *)(v28 + 8) = v29;
LABEL_50:
      v34 = *(_BYTE *)(v17 + 10);
      v35 = v56;
      if ( !v56 && (v34 & 4) != 0 )
      {
        v36 = 16LL * *(unsigned __int16 *)(v17 + 8) - 32;
        v71 = v36;
        if ( (v34 & 2) != 0 && v36 > 4 )
        {
          v36 -= 4LL;
          v71 = v36;
        }
        v37 = RtlCompareMemoryUlong((PVOID)(v17 + 32), v36, 0xFEEEFEEE);
        if ( v37 != v36 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v17,
            (const void *)(v17 + v37 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
        v35 = 0;
      }
      v77 = v17;
      v38 = 1;
      if ( (*(_BYTE *)(v17 + 10) & 1) != 0 )
      {
        RtlpLogHeapFailure(3, a1, v17, 0, 0LL);
        goto LABEL_116;
      }
      *(_BYTE *)(v17 + 10) = v11;
      v39 = *(unsigned __int16 *)(v17 + 8) - v12;
      v78 = v39;
      *(_WORD *)(v17 + 8) = v12;
      v40 = v83 - a3;
      v79 = v83 - a3;
      if ( v83 - a3 >= 0x3F )
      {
        *(_QWORD *)(v17 + 16 * v12) = v40;
        *(_BYTE *)(v17 + 15) = 63;
      }
      else
      {
        *(_BYTE *)(v17 + 15) = v40;
      }
      *(_BYTE *)(v17 + 11) = 0;
      if ( v39 )
      {
        if ( v39 == 1 )
        {
          ++*(_WORD *)(v17 + 8);
          v41 = v83 - a3 + 16;
          v80 = v41;
          if ( v41 >= 0x3F )
          {
            *(_QWORD *)(v17 + 16 * (v12 + 1)) = v41;
            *(_BYTE *)(v17 + 15) = 63;
          }
          else
          {
            *(_BYTE *)(v17 + 15) = v41;
          }
        }
        else
        {
          v42 = v35 ^ 1;
          v43 = *(_BYTE *)(v17 + 14);
          if ( v43 )
            v44 = (v17 & 0xFFFFFFFFFFFF0000uLL) + ((1LL - v43) << 16);
          else
            v44 = a1;
          v72 = v44;
          LOBYTE(v38) = v34;
          if ( !(unsigned __int8)RtlpCreateSplitBlock(a1, v44, (int)v17 + 16 * (int)v12, v38, v42, v12, v39) )
            goto LABEL_116;
        }
      }
      v10 = (_DWORD *)(v17 + 16);
      v63 = (_DWORD *)(v17 + 16);
      v45 = *(_WORD *)(v17 + 8);
      v46 = 16LL * v45;
      v66 = v46;
      v47 = HIBYTE(v45);
      if ( (*(_BYTE *)(v17 + 15) & 0x3F) == 0x3F )
      {
        v46 -= 8LL;
        v66 = v46;
        LOBYTE(v47) = HIBYTE(v45);
      }
      if ( v56 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v17 + 11) = v47 ^ v45 ^ *(_BYTE *)(v17 + 10);
          *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        v48 = a5;
        if ( a5 )
        {
          ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
          a5 = 0;
          v48 = 0;
        }
        if ( (v81 & 8) != 0 )
          memset(v10, 0, v46 - 8);
        goto LABEL_117;
      }
      if ( (v81 & 8) != 0 )
      {
        memset((void *)(v17 + 16), 0, v46 - 8);
LABEL_92:
        if ( (*(_DWORD *)(a1 + 112) & 0x20) != 0 )
        {
          *(_QWORD *)((char *)v10 + a3) = 0xABABABABABABABABuLL;
          *(_QWORD *)((char *)v10 + a3 + 8) = 0xABABABABABABABABuLL;
          *(_BYTE *)(v17 + 10) |= 4u;
        }
        *(_BYTE *)(v17 + 11) = 0;
        if ( (*(_BYTE *)(v17 + 10) & 2) != 0 )
        {
          if ( *(_BYTE *)(v17 + 15) == 4 )
            v51 = (_QWORD *)(v17 - 32);
          else
            v51 = (_QWORD *)(v17 + 16LL * *(unsigned __int16 *)(v17 + 8) - 16);
          v74 = v51;
          *v51 = 0LL;
          v51[1] = 0LL;
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v17 + 11) = *(_BYTE *)(v17 + 8) ^ *(_BYTE *)(v17 + 9) ^ *(_BYTE *)(v17 + 10);
          *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_116;
      }
      if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
        goto LABEL_92;
      v49 = (void *)(v17 + 16);
      v73 = v17 + 16;
      v50 = (a3 & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
      v67 = v50;
      if ( !v50 )
        goto LABEL_92;
      if ( ((unsigned __int8)v10 & 4) != 0 )
      {
        *v10 = -1163005939;
        v67 = --v50;
        if ( !v50 )
          goto LABEL_92;
        v49 = (void *)(v17 + 20);
        v73 = v17 + 20;
      }
      memset64(v49, 0xBAADF00DBAADF00DuLL, v50 >> 1);
      if ( (v50 & 1) != 0 )
        *((_DWORD *)v49 + v50 - 1) = -1163005939;
      goto LABEL_92;
    }
    v58 = -1073741801;
    goto LABEL_114;
  }
  v17 = Entry - 16;
  v69 = Entry - 16;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v18 = *(_DWORD *)(v17 + 8) ^ *(_DWORD *)(a1 + 136);
    *(_DWORD *)(v17 + 8) = v18;
    if ( *(_BYTE *)(v17 + 11) != ((unsigned __int8)v18 ^ (unsigned __int8)(BYTE1(v18) ^ BYTE2(v18))) )
      RtlpAnalyzeHeapFailure(a1, v17);
  }
  v19 = *(unsigned __int16 *)(v17 + 8);
  if ( v19 < v12 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v17 + 11) = BYTE1(v19) ^ v19 ^ *(_BYTE *)(v17 + 10);
      *(_DWORD *)(v17 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    goto LABEL_40;
  }
  v20 = *(_QWORD *)(v17 + 16);
  v21 = *(__int64 **)(v17 + 24);
  v65 = v21;
  v22 = *(_QWORD *)(v20 + 8);
  if ( *v21 == v22 && *v21 == v17 + 16 )
  {
    *(_QWORD *)(a1 + 192) -= v19;
    v23 = *(__int64 ***)(a1 + 312);
    if ( v23 )
    {
      v24 = (__int64 *)*(unsigned __int16 *)(v17 + 8);
      while ( 1 )
      {
        v25 = *((unsigned int *)v23 + 2);
        if ( (unsigned __int64)v24 < v25 )
          break;
        if ( !*v23 )
        {
          v24 = (__int64 *)(unsigned int)(v25 - 1);
          break;
        }
        v23 = (__int64 **)*v23;
      }
      v64 = v24;
      RtlpHeapRemoveListEntry(a1, (_DWORD)v23, v17 + 16, v17 + 16, (_DWORD)v24, *(unsigned __int16 *)(v17 + 8));
      v21 = v65;
    }
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    goto LABEL_50;
  }
  RtlpLogHeapFailure(13, a1, v17 + 16, v22, *v21);
LABEL_116:
  v48 = a5;
LABEL_117:
  if ( v48 )
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 352));
  return v10;
}
