/*
 * XREFs of RtlCreateHeap @ 0x1405E2E10
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     RtlpHpLegacyGetEnvHandle @ 0x1400D2610 (RtlpHpLegacyGetEnvHandle.c)
 *     ExDeleteResourceLite @ 0x1400E29B0 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     RtlpHpFixedHeapCreate @ 0x14014B914 (RtlpHpFixedHeapCreate.c)
 *     RtlpHpConvertCreationFlags @ 0x14014BB88 (RtlpHpConvertCreationFlags.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x140170804 (RtlpHeapGenerateRandomValue64.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1401A77C0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1401A7880 (ZwFreeVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1401A7920 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpCreateHeapEncoding @ 0x14028A224 (RtlpCreateHeapEncoding.c)
 *     RtlpInitializeHeapSegment @ 0x14028BAB4 (RtlpInitializeHeapSegment.c)
 *     RtlpHeapExceptionFilter @ 0x1402931AC (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x14029364C (RtlpHeapHandleError.c)
 *     RtlpPopulateListIndex @ 0x140293EC8 (RtlpPopulateListIndex.c)
 */

PVOID __stdcall RtlCreateHeap(
        ULONG Flags,
        PVOID HeapBase,
        SIZE_T ReserveSize,
        SIZE_T CommitSize,
        PVOID Lock,
        PRTL_HEAP_PARAMETERS Parameters)
{
  struct _ERESOURCE *v10; // rcx
  struct _ERESOURCE *v11; // r15
  unsigned __int64 v12; // rdx
  int v13; // r8d
  void *v14; // rdi
  ULONG v16; // ecx
  ULONG v17; // ecx
  int v18; // edx
  int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  SIZE_T v26; // rdx
  SIZE_T v27; // rcx
  int v28; // r12d
  unsigned int v29; // esi
  char *v30; // rdi
  char *v31; // r8
  ULONG_PTR v32; // rcx
  char *v33; // rdx
  __int16 v34; // r12
  struct _ERESOURCE *v35; // r13
  ULONG v36; // ecx
  unsigned __int64 v37; // rax
  __int64 v38; // r9
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // r12
  _DWORD *v44; // rcx
  PVOID v45; // [rsp+40h] [rbp-1D8h] BYREF
  ULONG v46; // [rsp+48h] [rbp-1D0h]
  unsigned __int64 v47; // [rsp+50h] [rbp-1C8h]
  ULONG_PTR v48; // [rsp+58h] [rbp-1C0h] BYREF
  int v49; // [rsp+60h] [rbp-1B8h]
  ULONG_PTR v50; // [rsp+68h] [rbp-1B0h] BYREF
  PVOID v51; // [rsp+70h] [rbp-1A8h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-1A0h] BYREF
  ULONG_PTR v53; // [rsp+80h] [rbp-198h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-190h] BYREF
  __int64 v55; // [rsp+90h] [rbp-188h]
  __int64 v56; // [rsp+98h] [rbp-180h]
  __int64 v57; // [rsp+A0h] [rbp-178h]
  __int64 v58; // [rsp+A8h] [rbp-170h]
  unsigned __int64 v59; // [rsp+B0h] [rbp-168h]
  __int64 v60[2]; // [rsp+C0h] [rbp-158h] BYREF
  _OWORD v61[7]; // [rsp+D0h] [rbp-148h] BYREF
  PVOID MemoryInformation[3]; // [rsp+140h] [rbp-D8h] BYREF
  ULONG_PTR v63; // [rsp+158h] [rbp-C0h]
  int v64; // [rsp+160h] [rbp-B8h]
  char v65; // [rsp+164h] [rbp-B4h]
  _BYTE v66[16]; // [rsp+170h] [rbp-A8h] BYREF
  ULONG_PTR v67; // [rsp+180h] [rbp-98h]
  _BYTE SystemInformation[40]; // [rsp+190h] [rbp-88h] BYREF
  __int64 v69; // [rsp+1B8h] [rbp-60h]

  v10 = (struct _ERESOURCE *)Lock;
  v47 = (unsigned __int64)Lock;
  v55 = (__int64)HeapBase;
  RegionSize = (ULONG_PTR)Lock;
  v46 = NtGlobalFlag;
  v49 = 0;
  v45 = 0LL;
  v11 = 0LL;
  if ( (Flags & 0x100) == 0 )
  {
    if ( (Flags & 0x200) == 0 )
    {
      if ( (Flags & 0x10000000) == 0 )
      {
        v16 = Flags & 0xFFF80C00;
        if ( RtlpHeapErrorHandlerThreshold < 2 )
        {
          if ( v16 )
            Flags &= 0x7F3FFu;
        }
        else if ( v16 )
        {
          DbgPrint("!(CheckedFlags & ~HEAP_CREATE_VALID_MASK)");
          RtlpHeapHandleError();
        }
      }
      memset(&v61[1], 0, 0x60uLL);
      if ( Parameters && Parameters->Length == 96 )
        *(struct _RTL_HEAP_PARAMETERS *)&v61[1] = *Parameters;
      v17 = Flags | 0x20;
      if ( (v46 & 0x10) == 0 )
        v17 = Flags;
      v18 = v17 | 0x40;
      if ( (v46 & 0x20) == 0 )
        v18 = v17;
      v19 = v18 | 0x80;
      if ( (v46 & 0x200000) == 0 )
        v19 = v18;
      v20 = *((_QWORD *)&v61[1] + 1);
      if ( !*((_QWORD *)&v61[1] + 1) )
        v20 = qword_14044B1B0;
      v57 = v20;
      v21 = *(_QWORD *)&v61[2];
      if ( !*(_QWORD *)&v61[2] )
        v21 = qword_14044B1A8;
      v58 = v21;
      v22 = *((_QWORD *)&v61[2] + 1);
      if ( !*((_QWORD *)&v61[2] + 1) )
        v22 = qword_14044B198;
      v59 = v22;
      v23 = *(_QWORD *)&v61[3];
      if ( !*(_QWORD *)&v61[3] )
        v23 = qword_14044B1A0;
      *(_QWORD *)&v61[0] = v23;
      v24 = qword_1403EC848;
      if ( !qword_1403EC848 )
      {
        qword_1403EC850 = 0x10000LL;
        if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
          goto LABEL_15;
        v24 = v69;
        qword_1403EC848 = v69;
      }
      v56 = *((_QWORD *)&v61[3] + 1);
      if ( !*((_QWORD *)&v61[3] + 1) )
        v56 = v24 - qword_1403EC850 - 4096;
      v25 = *(_QWORD *)&v61[4];
      if ( (unsigned __int64)(*(_QWORD *)&v61[4] - 1LL) > 0xFEFFF )
        v25 = 1044480LL;
      v60[0] = v25;
      if ( CommitSize )
        v26 = (CommitSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
      else
        v26 = 0x2000LL;
      v50 = v26;
      if ( ReserveSize )
        v27 = (ReserveSize + 0x1FFF) & 0xFFFFFFFFFFFFE000uLL;
      else
        v27 = (v26 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      v48 = v27;
      if ( v26 > v27 )
      {
        v50 = v27;
        v26 = v27;
      }
      if ( (v19 & 2) == 0 || HeapBase )
      {
        v55 = 0LL;
        v28 = v49;
      }
      else
      {
        v55 = 4096LL;
        v28 = 2;
        v49 = 2;
        if ( v27 - 4096 < v26 )
        {
          v27 = (v27 + 69631) & 0xFFFFFFFFFFFF0000uLL;
          v48 = v27;
        }
      }
      if ( !v26 || !v27 )
        goto LABEL_15;
      v46 = 672;
      v10 = (struct _ERESOURCE *)v47;
      v29 = v19;
      if ( (v19 & 1) != 0 )
      {
        if ( v47 )
          goto LABEL_14;
      }
      else
      {
        v11 = (struct _ERESOURCE *)(v47 & -(__int64)(v47 != 0));
        v29 = v19 | 0x80000000;
        if ( !v47 )
          v29 = v19;
        v46 = v47 != 0 ? 672 : 776;
      }
      if ( HeapBase )
      {
        if ( *((_QWORD *)&v61[5] + 1) )
        {
          if ( !*((_QWORD *)&v61[4] + 1)
            || !*(_QWORD *)&v61[5]
            || *((_QWORD *)&v61[4] + 1) > *(_QWORD *)&v61[5]
            || (v29 & 2) != 0 )
          {
            goto LABEL_15;
          }
          v51 = HeapBase;
          v30 = (char *)HeapBase + *((_QWORD *)&v61[4] + 1);
          v48 = *(_QWORD *)&v61[5];
          memset(HeapBase, 0, 0x1000uLL);
          v31 = (char *)HeapBase;
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
            goto LABEL_15;
          v30 = (char *)MemoryInformation[0];
          if ( MemoryInformation[0] != HeapBase || v64 == 0x10000 )
            goto LABEL_15;
          v31 = (char *)MemoryInformation[0];
          v51 = MemoryInformation[0];
          if ( v64 == 4096 )
          {
            if ( (v29 & 0x40000) != 0 && (v65 & 0x40) == 0 )
              goto LABEL_15;
            memset(MemoryInformation[0], 0, 0x1000uLL);
            if ( ZwQueryVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   HeapBase,
                   MemoryRegionInformation,
                   v66,
                   0x20uLL,
                   0LL) < 0 )
              goto LABEL_15;
            v48 = v67;
            v50 = v63;
            v31 = (char *)v51;
            v30 = (char *)v51 + v63;
          }
          else
          {
            v48 = v63;
            v32 = v50;
            if ( v50 > v63 )
              v32 = v63;
            v50 = v32;
            if ( v32 < 0x2000 )
              goto LABEL_15;
          }
        }
        v49 = v28 | 1;
        v33 = (char *)HeapBase;
        v45 = HeapBase;
        goto LABEL_93;
      }
      BaseAddress = 0LL;
      v53 = 0LL;
      if ( !*((_QWORD *)&v61[5] + 1) )
      {
        v53 = (RtlpHeapGenerateRandomValue64() & 0x1F) << 16;
        RegionSize = v48 + v53;
        if ( v48 + v53 < v48 )
        {
          RegionSize = v48;
          v53 = 0LL;
        }
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) < 0 )
          goto LABEL_15;
        v33 = (char *)BaseAddress;
        v45 = BaseAddress;
        v48 = RegionSize;
        if ( v53 )
        {
          ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v53, 0x8000u);
          v33 = (char *)BaseAddress + v53;
          v45 = (char *)BaseAddress + v53;
          v48 = RegionSize - v53;
        }
        v31 = v33;
        v51 = v33;
        v30 = v33;
LABEL_93:
        if ( v31 != v30 )
          goto LABEL_96;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v51, 0LL, &v50, 0x1000u, 4u) >= 0 )
        {
          v30 += v50;
          v33 = (char *)v45;
LABEL_96:
          v34 = (_WORD)v33 + 672;
          v35 = (struct _ERESOURCE *)(v33 + 672);
          v36 = v46;
          if ( (NtGlobalFlag & 0x800) != 0 )
          {
            v37 = (unsigned __int64)(v33 + 679) & 0xFFFFFFFFFFFFFFF8uLL;
            *((_QWORD *)v33 + 41) = v37;
            v36 += 2064;
            v35 = (struct _ERESOURCE *)(v37 + 2064);
            v29 |= 0x4000000u;
            v34 = v37 + 2064;
            v33 = (char *)v45;
          }
          v46 = (v36 + 15) & 0xFFFFFFF0;
          *((_WORD *)v33 + 4) = v46 >> 4;
          *((_BYTE *)v45 + 10) = 1;
          *((_BYTE *)v45 + 15) = 1;
          *((_DWORD *)v45 + 38) = -285217025;
          *((_DWORD *)v45 + 28) = v29 & 0xEFFFFFFF;
          *((_DWORD *)v45 + 36) = 0;
          memset((char *)v45 + 536, 0, 0x78uLL);
          RtlpCreateHeapEncoding((__int64)v45);
          *((_DWORD *)v45 + 29) = v29 & 0x6001007D;
          *((_WORD *)v45 + 105) = v34 - (_WORD)v45;
          *((_QWORD *)v45 + 27) = 0LL;
          v39 = (char *)v45 + 336;
          *((_QWORD *)v45 + 43) = (char *)v45 + 336;
          *v39 = v39;
          v40 = (char *)v45 + 272;
          *((_QWORD *)v45 + 35) = (char *)v45 + 272;
          *v40 = v40;
          v41 = (char *)v45 + 288;
          *((_QWORD *)v45 + 37) = (char *)v45 + 288;
          *v41 = v41;
          v42 = (char *)v45 + 240;
          *((_QWORD *)v45 + 31) = (char *)v45 + 240;
          *v42 = v42;
          v43 = (__int64)v35;
          if ( !v11 && (v29 & 1) == 0 )
          {
            if ( ExInitializeResourceLite(v35) < 0 )
            {
              v11 = 0LL;
              goto LABEL_15;
            }
            v11 = v35;
            v43 = (__int64)&v35[1];
          }
          *((_QWORD *)v45 + 44) = v11;
          *((_DWORD *)v45 + 30) |= 0x80000000;
          if ( RtlpInitializeHeapSegment(
                 (__int64)v45,
                 (__int64)v45,
                 v46 + 1104,
                 v38,
                 v49,
                 (__int64)v51,
                 v30,
                 (ULONG_PTR)v51 + v48 - v55) )
          {
            if ( HeapBase )
              memset((void *)v43, 0, 0x80uLL);
            *(_DWORD *)(v43 + 8) = 128;
            *(_QWORD *)(v43 + 40) = v43 + 56;
            *(_QWORD *)(v43 + 32) = (char *)v45 + 336;
            *(_QWORD *)(v43 + 48) = v43 + 72;
            RtlpPopulateListIndex((ULONG_PTR)v45, v43);
            *((_WORD *)v45 + 104) = 0;
            *((_QWORD *)v45 + 20) = v57;
            *((_QWORD *)v45 + 21) = v58;
            *((_QWORD *)v45 + 22) = v59 >> 4;
            *((_QWORD *)v45 + 23) = *(_QWORD *)&v61[0] >> 4;
            *((_QWORD *)v45 + 25) = v56;
            *((_DWORD *)v45 + 37) = (unsigned __int64)(v60[0] + 15) >> 4;
            *((_QWORD *)v45 + 45) = RtlpHeapKey ^ *((_QWORD *)&v61[5] + 1);
            *((_DWORD *)v45 + 164) = 4;
            *((_QWORD *)v45 + 83) = 2088960LL;
            *((_QWORD *)v45 + 32) = 31LL;
            *((_QWORD *)v45 + 33) = -16LL;
            v44 = v45;
            if ( (*((_DWORD *)v45 + 28) & 0x20) != 0 )
            {
              *((_QWORD *)v45 + 32) += 16LL;
              v44 = v45;
            }
            v44[30] &= ~0x80000000;
            v14 = v45;
            v45 = 0LL;
            v11 = 0LL;
            goto LABEL_10;
          }
        }
LABEL_15:
        v14 = 0LL;
        goto LABEL_10;
      }
    }
LABEL_14:
    v14 = 0LL;
    goto LABEL_11;
  }
  if ( !HeapBase || Lock || (Flags & 2) != 0 )
    goto LABEL_14;
  RtlpHpConvertCreationFlags(Flags, NtGlobalFlag);
  if ( Parameters->CommitRoutine )
  {
    CommitSize = Parameters->InitialCommit;
    if ( !CommitSize )
      goto LABEL_15;
    ReserveSize = Parameters->InitialReserve;
    if ( !ReserveSize || CommitSize > ReserveSize )
      goto LABEL_15;
  }
  *(_OWORD *)v60 = *RtlpHpLegacyGetEnvHandle(v61);
  v14 = (void *)RtlpHpFixedHeapCreate(HeapBase, v12, ReserveSize, CommitSize, v13, v60);
LABEL_10:
  v10 = (struct _ERESOURCE *)v47;
LABEL_11:
  if ( v11 && v11 != v10 )
    ExDeleteResourceLite(v11);
  if ( v45 && !HeapBase )
  {
    v48 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v45, &v48, 0x8000u);
  }
  return v14;
}
