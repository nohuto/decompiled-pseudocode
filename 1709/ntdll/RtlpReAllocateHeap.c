/*
 * XREFs of RtlpReAllocateHeap @ 0x18003CA00
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18003C770 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpGrowBlockInPlace @ 0x180008C44 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x1800090BC (RtlpCreateSplitBlock.c)
 *     RtlTryEnterCriticalSection @ 0x1800142C0 (RtlTryEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18004A630 (RtlpSecMemFreeVirtualMemory.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x180077C6C (RtlpGetExtraStuffPointer.c)
 *     RtlpUpdateHeapRates @ 0x18007EED4 (RtlpUpdateHeapRates.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpUpdateTagEntry @ 0x1800F0F20 (RtlpUpdateTagEntry.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlpLogHeapReallocateEvent @ 0x1801017F0 (RtlpLogHeapReallocateEvent.c)
 *     RtlDebugReAllocateHeap @ 0x180104040 (RtlDebugReAllocateHeap.c)
 *     RtlpBreakPointHeap @ 0x180104C08 (RtlpBreakPointHeap.c)
 */

char *__fastcall RtlpReAllocateHeap(__int64 a1, int a2, char *a3, SIZE_T a4)
{
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r8
  char *v11; // rdx
  int *v12; // r9
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int16 v15; // r8
  char v16; // cl
  unsigned __int64 v17; // rdx
  size_t v18; // rdi
  PVOID Heap; // rax
  _DWORD *SharedData; // rcx
  __int64 v21; // rcx
  PVOID v22; // rdi
  unsigned int v24; // edi
  __int64 v25; // rax
  int v26; // r10d
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 **v29; // rcx
  _BYTE *v30; // r8
  char v31; // cl
  unsigned __int16 *v32; // r9
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  ULONG v37; // edi
  char v38; // al
  __int64 v39; // rdx
  char *v40; // r9
  char *v41; // r12
  size_t v42; // r8
  char v43; // r9
  int v44; // ecx
  __int64 v45; // rdi
  char v46; // r10
  unsigned __int8 v47; // al
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  unsigned __int8 v50; // dl
  int v51; // r10d
  _WORD *v52; // rcx
  _QWORD *ExtraStuffPointer; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int16 v56; // cx
  int v57; // ecx
  struct _TEB *v58; // rdi
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // r9
  size_t v61; // rax
  __int64 v62; // r10
  unsigned __int64 v63; // r9
  unsigned __int64 v64; // rsi
  unsigned __int8 v65; // al
  struct _TEB *v66; // rdi
  _DWORD *v67; // rcx
  __int64 v68; // rcx
  char *v69; // rdi
  unsigned int v70; // edi
  unsigned __int16 v71; // ax
  struct _TEB *v72; // rdi
  NTSTATUS v73; // ecx
  int v74; // eax
  char v75; // [rsp+40h] [rbp-138h]
  unsigned __int64 v76; // [rsp+48h] [rbp-130h]
  unsigned __int64 v77; // [rsp+48h] [rbp-130h]
  unsigned __int64 v78; // [rsp+50h] [rbp-128h]
  int Size; // [rsp+58h] [rbp-120h]
  size_t Sizea; // [rsp+58h] [rbp-120h]
  unsigned __int64 v81; // [rsp+60h] [rbp-118h]
  PVOID v82; // [rsp+68h] [rbp-110h]
  char *v83; // [rsp+68h] [rbp-110h]
  __int16 v84[4]; // [rsp+78h] [rbp-100h]
  unsigned __int64 v85; // [rsp+80h] [rbp-F8h]
  int v86; // [rsp+88h] [rbp-F0h]
  _BYTE *v87; // [rsp+98h] [rbp-E0h]
  _BYTE *v88; // [rsp+A0h] [rbp-D8h]
  _QWORD *v89; // [rsp+A8h] [rbp-D0h]
  __int64 v90; // [rsp+A8h] [rbp-D0h]
  _WORD *v91; // [rsp+B0h] [rbp-C8h]
  int v92; // [rsp+B8h] [rbp-C0h]
  unsigned __int64 v93; // [rsp+C8h] [rbp-B0h] BYREF
  unsigned __int64 v94; // [rsp+D0h] [rbp-A8h]
  const void *v95[2]; // [rsp+D8h] [rbp-A0h] BYREF
  char *v96; // [rsp+E8h] [rbp-90h]
  unsigned int NtGlobalFlag; // [rsp+F0h] [rbp-88h]
  unsigned int v98; // [rsp+F4h] [rbp-84h]
  unsigned int v99; // [rsp+F8h] [rbp-80h]
  size_t v100; // [rsp+100h] [rbp-78h]
  __int64 v101; // [rsp+108h] [rbp-70h]
  __int64 v102; // [rsp+110h] [rbp-68h]
  __int64 v103; // [rsp+118h] [rbp-60h]
  int v104; // [rsp+120h] [rbp-58h]
  int v105; // [rsp+130h] [rbp-48h]
  _OWORD *v106; // [rsp+138h] [rbp-40h]
  ULONG Flagsa; // [rsp+188h] [rbp+10h]
  char *Src; // [rsp+190h] [rbp+18h]

  Src = a3;
  v8 = 0LL;
  v88 = 0LL;
  v75 = 0;
  v96 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v72 = NtCurrentTeb();
    v73 = 0;
LABEL_205:
    v72->LastErrorValue = RtlNtStatusToDosError(v73);
    return 0LL;
  }
  v9 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  v10 = v9;
  if ( *(_BYTE *)(v9 + 15) == 5 )
  {
    v10 = v9 - 16LL * *(unsigned __int8 *)(v9 + 14);
    v76 = v10;
  }
  else
  {
    v76 = v9;
  }
  if ( *(_BYTE *)(a1 + 386) == 2 )
  {
    if ( *(_QWORD *)(a1 + 376) )
    {
      v11 = (char *)(v10 + 15);
      if ( *(char *)(v10 + 15) < 0 )
      {
        if ( (a2 & 0x10) == 0 )
        {
          v12 = (int *)(v10 + 8);
          v13 = v10 >> 4;
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v10 + 8) ^ a1 ^ (v10 >> 4)) )
            v14 = 0LL;
          else
            v14 = *(_QWORD *)(v10
                            - (((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v10 >> 4)) >> 12));
          v15 = *(_WORD *)(v14 + 36);
          v16 = *v11;
          if ( *v11 == 5 )
          {
            v17 = *(unsigned __int16 *)(v76 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
          }
          else if ( (v16 & 0x40) != 0 )
          {
            v17 = *(unsigned __int16 *)(v76 + 16LL * (v16 & 0x3F) + 12);
          }
          else if ( (v16 & 0x3F) == 0x3F )
          {
            if ( v16 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v74 = *v12;
                v104 = v74;
                if ( (v74 & *(_DWORD *)(a1 + 124)) != 0 )
                  v104 = *(_DWORD *)(a1 + 136) ^ v74;
                v71 = v104;
              }
              else
              {
                v71 = *(_WORD *)v12;
              }
            }
            else
            {
              v70 = RtlpLFHKey ^ *v12 ^ a1 ^ v13;
              if ( !(_WORD)v70 )
                v8 = *(_QWORD *)(v76 - (v70 >> 12));
              v71 = *(_WORD *)(v8 + 36);
            }
            v17 = *(_QWORD *)(v76 + 16LL * v71);
          }
          else
          {
            v17 = v16 & 0x3F;
          }
          v18 = 16LL * v15 - v17;
          Size = 16 * v15 - v17;
          Heap = RtlAllocateHeap((PVOID)a1, a2 & 0xC003FFFF, a4);
          v82 = Heap;
          if ( Heap )
          {
            if ( a4 < v18 )
              v18 = a4;
            memmove(Heap, Src, v18);
            RtlFreeHeap((PVOID)a1, a2 & 0xC003FFFF, Src);
          }
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && *SharedData )
            v21 = (__int64)NtCurrentPeb()->SharedData + 550;
          else
            v21 = 2147353472LL;
          if ( !*(_BYTE *)v21 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
            return (char *)v82;
          v22 = v82;
          if ( v82 )
            RtlpLogHeapReallocateEvent(a1, (_DWORD)v82, (_DWORD)Src, Size, a4, 2);
          return (char *)v22;
        }
        return 0LL;
      }
    }
  }
  if ( v10 == a1 )
  {
    RtlpLogHeapFailure(9, a1, v10, 0, 0LL, 0LL);
    return 0LL;
  }
  v24 = *(_DWORD *)(a1 + 116) | a2;
  Flagsa = v24;
  if ( (v24 & 0x61000000) != 0 && (v24 & 0x10000000) == 0 )
    return (char *)RtlDebugReAllocateHeap(a1);
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
  {
    NtCurrentTeb()->LastStatusValue = -1073741801;
    v72 = NtCurrentTeb();
    v73 = -1073741801;
    goto LABEL_205;
  }
  v25 = a4;
  v26 = 1;
  if ( !a4 )
    v25 = 1LL;
  v27 = *(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v25);
  if ( v27 < 0x20 )
    v27 = 32LL;
  v78 = v27;
  LODWORD(Sizea) = 0;
  if ( (v24 & 1) == 0 )
  {
    if ( RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
    {
      ++*(_DWORD *)(a1 + 584);
      v26 = 1;
    }
    else
    {
      if ( byte_18015F3E8 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v66 = NtCurrentTeb();
        v66->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        goto LABEL_164;
      }
      RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      RtlpUpdateHeapRates(a1, 1LL);
    }
    v75 = 1;
    v24 ^= 1u;
    Flagsa = v24;
  }
  _m_prefetchw((const void *)v9);
  if ( *(_BYTE *)(v9 + 15) == 5 )
    v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
  v77 = v9;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
    {
      RtlpAnalyzeHeapFailure(a1, v9);
      v26 = 1;
    }
  }
  v88 = (_BYTE *)v9;
  v28 = *(unsigned __int16 *)(v9 + 8);
  v29 = *(__int64 ***)(a1 + 312);
  do
  {
    if ( v28 < *((unsigned int *)v29 + 2) )
      break;
    v29 = (__int64 **)*v29;
  }
  while ( v29 );
  if ( (v24 & 0x3C000100) != 0 || *(_QWORD *)(a1 + 328) || (*(_BYTE *)(v9 + 10) & 2) != 0 )
    v78 += 16LL;
  v30 = (_BYTE *)(v9 + 15);
  v87 = (_BYTE *)(v9 + 15);
  v31 = *(_BYTE *)(v9 + 15);
  if ( (v31 & 0x3F) == 0 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v58 = NtCurrentTeb();
    v58->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    goto LABEL_164;
  }
  v32 = (unsigned __int16 *)(v9 + 8);
  v91 = (_WORD *)(v9 + 8);
  if ( v31 == 4 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v86 = *(_DWORD *)v32;
      if ( (*(_DWORD *)v32 & *(_DWORD *)(a1 + 124)) != 0 )
        v86 = *(_DWORD *)v32 ^ *(_DWORD *)(a1 + 136);
      LOWORD(v28) = v86;
      v24 = Flagsa;
    }
    Sizea = *(_QWORD *)(v9 - 48 + 32) - (unsigned __int16)v28;
    v33 = (Sizea + *v32) >> 4;
    v81 = v33;
    v78 = (v78 + 4151) & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
    v33 = *(unsigned __int16 *)(v9 + 8);
    v81 = v33;
    if ( v31 == 5 )
    {
      v34 = *(unsigned __int16 *)(v9 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v31 & 0x40) != 0 )
    {
      v34 = *(unsigned __int16 *)(v9 + 16LL * (v31 & 0x3F) + 12);
    }
    else if ( (v31 & 0x3F) == 0x3F )
    {
      if ( v31 < 0 )
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*v32 ^ a1 ^ (v9 >> 4)) )
          v28 = 0LL;
        else
          v28 = *(_QWORD *)(v9
                          - (((unsigned int)RtlpLFHKey ^ *(_DWORD *)v32 ^ (unsigned int)a1 ^ (unsigned int)(v9 >> 4)) >> 12));
        LOWORD(v28) = *(_WORD *)(v28 + 36);
        v24 = Flagsa;
        v33 = *(unsigned __int16 *)(v9 + 8);
      }
      else if ( *(_DWORD *)(a1 + 124) )
      {
        v57 = *(_DWORD *)v32;
        v105 = v57;
        if ( (v57 & *(_DWORD *)(a1 + 124)) != 0 )
          v105 = v57 ^ *(_DWORD *)(a1 + 136);
        LOWORD(v28) = v105;
        v24 = Flagsa;
      }
      v34 = *(_QWORD *)(v9 + 16LL * (unsigned __int16)v28);
    }
    else
    {
      v34 = *(_BYTE *)(v9 + 15) & 0x3F;
    }
    Sizea = 16 * v33 - v34;
    if ( v33 < *(unsigned __int16 *)(a1 + 400) )
    {
      v50 = *(_BYTE *)((v33 >> 3) + a1 + 402);
      v51 = v26 << (v33 & 7);
      v33 = v81;
      if ( ((unsigned __int8)v51 & v50) == 0 )
      {
        v52 = (_WORD *)(*(_QWORD *)(a1 + 392) + 2 * v81);
        if ( *v52 > 1u )
          --*v52;
      }
      v24 = Flagsa;
    }
  }
  v35 = v78 >> 4;
  v36 = v78 >> 4;
  v85 = v78 >> 4;
  *(_QWORD *)v84 = v78 >> 4;
  if ( v78 >> 4 <= v33 )
  {
    if ( v35 + 1 == v33 )
    {
      v36 = v35 + 1;
      v85 = v35 + 1;
      *(_QWORD *)v84 = v35 + 1;
      v78 += 16LL;
    }
    if ( *v30 == 4 )
    {
      *v32 = v78 - a4;
    }
    else if ( (*(_BYTE *)(v9 + 10) & 2) != 0 )
    {
      v106 = (_OWORD *)(v9 + 16LL * *v32 - 16);
      v90 = 16 * v36 + v9 - 16;
      *(_OWORD *)v90 = *v106;
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) == 0 )
        goto LABEL_80;
      v85 = *(_QWORD *)v84;
      v33 = v81;
      *(_WORD *)(v90 + 2) = RtlpUpdateTagEntry(a1, *(unsigned __int16 *)(v90 + 2), v81, *(_DWORD *)v84, 4);
      LOBYTE(v24) = Flagsa;
      v36 = v59;
      v30 = (_BYTE *)(v9 + 15);
    }
    else
    {
      v98 = NtCurrentPeb()->NtGlobalFlag;
      if ( (v98 & 0x800) == 0 )
      {
LABEL_80:
        LOBYTE(v24) = Flagsa;
        v33 = v81;
        v36 = *(_QWORD *)v84;
        v85 = *(_QWORD *)v84;
        goto LABEL_81;
      }
      v85 = *(_QWORD *)v84;
      *(_BYTE *)(v9 + 11) = RtlpUpdateTagEntry(a1, *(unsigned __int8 *)(v9 + 11), *v32, *(_DWORD *)v84, 4);
      LOBYTE(v24) = Flagsa;
      v33 = v81;
      v36 = v60;
      v30 = (_BYTE *)(v9 + 15);
    }
LABEL_81:
    if ( a4 <= Sizea )
      goto LABEL_82;
    if ( (v24 & 8) != 0 )
    {
      memset(&Src[Sizea], 0, a4 - Sizea);
      v36 = v85;
      v30 = (_BYTE *)(v9 + 15);
      goto LABEL_82;
    }
    if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
    {
      v61 = Sizea & 3;
      v100 = v61;
      if ( (Sizea & 3) != 0 )
      {
        v61 = 4 - v61;
        v100 = v61;
      }
      if ( a4 > v61 + Sizea && ((a4 - v61 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      {
        v62 = v61 + Sizea + v9 + 16;
        v101 = v62;
        v63 = ((a4 - v61 - Sizea) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
        v94 = v63;
        if ( v63 )
        {
          if ( (v62 & 4) != 0 )
          {
            *(_DWORD *)v62 = -1163005939;
            v94 = --v63;
            if ( !v63 )
              goto LABEL_82;
            v62 += 4LL;
            v101 = v62;
          }
          memset64((void *)v62, 0xBAADF00DBAADF00DuLL, v63 >> 1);
          if ( (v63 & 1) != 0 )
            *(_DWORD *)(v62 + 4 * v63 - 4) = -1163005939;
        }
      }
    }
LABEL_82:
    if ( (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
    {
      *(_QWORD *)(v9 + a4 + 16) = 0xABABABABABABABABuLL;
      *(_QWORD *)(v9 + a4 + 24) = 0xABABABABABABABABuLL;
    }
    if ( v36 == v33 )
      goto LABEL_91;
    v43 = *(_BYTE *)(v9 + 10) & 0xFE;
    if ( *v30 == 4 )
    {
      v64 = v9 - 48;
      v99 = NtCurrentPeb()->NtGlobalFlag;
      v85 = *(_QWORD *)v84;
      if ( (v99 & 0x800) != 0 )
        *(_WORD *)(v64 + 18) = RtlpUpdateTagEntry(a1, *(unsigned __int16 *)(v64 + 18), v81, *(_DWORD *)v84, 5);
      v95[0] = (const void *)(v64 + v78);
      v93 = 16 * v81 - v78;
      v92 = RtlpSecMemFreeVirtualMemory(v78, v95, &v93, 0x4000LL);
      if ( v92 < 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Unable to release memory at %p for %Ix bytes - Status == %x\n", v95[0], v93, v92);
        RtlpBreakPointHeap();
        v9 = v77;
        v36 = *(_QWORD *)v84;
        goto LABEL_90;
      }
      *(_QWORD *)(v64 + 32) -= v93;
      v9 = v77;
    }
    else
    {
      v44 = (unsigned __int16)*v91 - (unsigned __int16)v36;
      v45 = v44;
      v103 = v44;
      *v91 = v36;
      v46 = (*(_BYTE *)(a1 + 112) & 0x40) != 0;
      v47 = *(_BYTE *)(v9 + 14);
      if ( v47 )
      {
        v48 = (v9 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v47 << 16) + 0x10000;
        v102 = v48;
      }
      else
      {
        v48 = a1;
        v102 = a1;
      }
      RtlpCreateSplitBlock(a1, v48, v9 + 16 * v36, v43, v46, v36, v45);
    }
    v36 = v85;
LABEL_90:
    v30 = v87;
LABEL_91:
    if ( *v30 != 4 )
    {
      v49 = v78 - a4;
      if ( v78 - a4 >= 0x3F )
      {
        *(_QWORD *)(v9 + 16 * v36) = v49;
        *v30 = 63;
      }
      else
      {
        *v30 = v49;
      }
    }
    goto LABEL_164;
  }
  if ( *v30 != 4 && RtlpGrowBlockInPlace(a1, v24, v9, a4, v78 >> 4) )
    goto LABEL_164;
  if ( (v24 & 0x10) == 0 )
  {
    v37 = v24 & 0xC003FFFF;
    Flagsa = v37;
    v38 = *(_BYTE *)(v9 + 10);
    if ( (v38 & 2) != 0 )
    {
      v37 = (16 * (v38 & 0xE0 | 0x10)) | v37 & 0xFFFFF1FF;
      Flagsa = v37;
      v56 = *(_WORD *)(RtlpGetExtraStuffPointer(v9, v36) + 2);
      if ( v56 > 0 )
      {
        v37 |= (unsigned __int16)v56 << 18;
        Flagsa = v37;
      }
    }
    else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
    {
      v65 = *(_BYTE *)(v9 + 11);
      if ( v65 )
      {
        v37 |= v65 << 18;
        Flagsa = v37;
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
      *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    v88 = 0LL;
    v40 = (char *)RtlAllocateHeap((PVOID)a1, v37, a4);
    v83 = v40;
    if ( !v40 )
      goto LABEL_74;
    v41 = v40 - 16;
    _m_prefetchw(v40 - 16);
    if ( *(v40 - 1) == 5 )
      v41 -= 16 * (unsigned __int8)v41[14];
    v95[1] = v41;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_DWORD *)v41 + 2) ^= *(_DWORD *)(a1 + 136);
      if ( v41[11] != ((unsigned __int8)v41[8] ^ (unsigned __int8)(v41[9] ^ v41[10])) )
      {
        RtlpAnalyzeHeapFailure(a1, v41);
        v40 = v83;
      }
    }
    if ( (v41[10] & 2) != 0 )
    {
      ExtraStuffPointer = (_QWORD *)RtlpGetExtraStuffPointer(v41, v39);
      v89 = ExtraStuffPointer;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
        {
          RtlpAnalyzeHeapFailure(a1, v9);
          v40 = v83;
          ExtraStuffPointer = v89;
        }
      }
      if ( (*(_BYTE *)(v9 + 10) & 2) != 0 )
      {
        v54 = RtlpGetExtraStuffPointer(v9, ExtraStuffPointer);
        *(_QWORD *)(v55 + 8) = *(_QWORD *)(v54 + 8);
      }
      else
      {
        *ExtraStuffPointer = 0LL;
        ExtraStuffPointer[1] = 0LL;
      }
      if ( !*(_DWORD *)(a1 + 124) )
        goto LABEL_69;
      *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
      *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v41[11] = v41[8] ^ v41[9] ^ v41[10];
      *((_DWORD *)v41 + 2) ^= *(_DWORD *)(a1 + 136);
    }
LABEL_69:
    v88 = 0LL;
    if ( v75 )
    {
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
      v75 = 0;
      v37 &= ~1u;
      Flagsa = v37;
      v40 = v83;
    }
    if ( a4 < Sizea )
      v42 = a4;
    else
      v42 = Sizea;
    memmove(v40, Src, v42);
    RtlFreeHeap((PVOID)a1, v37, Src);
    v40 = v83;
LABEL_74:
    v96 = Src;
    Src = v40;
    goto LABEL_164;
  }
  Src = 0LL;
LABEL_164:
  if ( v88 && *(_DWORD *)(a1 + 124) )
  {
    v88[11] = v88[8] ^ v88[9] ^ v88[10];
    *((_DWORD *)v88 + 2) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v75 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  v67 = NtCurrentPeb()->SharedData;
  if ( v67 && *v67 )
    v68 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v68 = 2147353472LL;
  if ( !*(_BYTE *)v68 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
    return Src;
  v69 = Src;
  if ( Src && (Flagsa & 0x800000) == 0 )
    RtlpLogHeapReallocateEvent(a1, (_DWORD)Src, (_DWORD)v96, Sizea, a4, 3);
  return v69;
}
