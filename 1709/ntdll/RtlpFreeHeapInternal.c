/*
 * XREFs of RtlpFreeHeapInternal @ 0x18003E860
 * Callers:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18003F2E0 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpIsSubSegmentReuseable @ 0x180014FA0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpFreeUserBlock @ 0x180015054 (RtlpFreeUserBlock.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800383A4 (RtlpHpSegPageRangeShrink.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpHpVsContextFree @ 0x18003E180 (RtlpHpVsContextFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180040530 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSizeHeap @ 0x180045DE0 (RtlpHpSizeHeap.c)
 *     RtlpHpExtrasGet @ 0x180049278 (RtlpHpExtrasGet.c)
 *     RtlpGetHeapProtection @ 0x18004B238 (RtlpGetHeapProtection.c)
 *     RtlpLfhBucketUsageUpdate @ 0x18004C518 (RtlpLfhBucketUsageUpdate.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x18006F490 (RtlpHpLargeFree.c)
 *     RtlpProbeUserBufferSafe @ 0x180077930 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3B50 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A3B90 (RtlpInterlockedFlushSList.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE04 (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180100A6C (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x1801016FC (RtlpLogHeapFreeEvent.c)
 *     RtlpHpSizeHeapInternal @ 0x180103004 (RtlpHpSizeHeapInternal.c)
 *     RtlpGetReservedBlockSize @ 0x180106330 (RtlpGetReservedBlockSize.c)
 *     RtlpValidateLFHBlock @ 0x18010674C (RtlpValidateLFHBlock.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x1801088E8 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpFreeHeapInternal(__int64 a1, unsigned __int64 a2, int a3, __int64 *a4, _WORD *a5)
{
  __int64 v5; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v10; // r13
  int v11; // edx
  int v12; // r8d
  int v13; // ecx
  int v14; // edx
  __int64 v15; // rcx
  unsigned int v16; // ebp
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned __int64 v21; // rdx
  __int64 DescriptorValidateSafe; // rbx
  unsigned __int64 v23; // rdx
  unsigned int v24; // ebp
  __int64 v25; // r9
  _DWORD *SharedData; // rcx
  __int64 v27; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned __int8 v36; // al
  __int64 v37; // rax
  int v38; // r8d
  __int64 v39; // rax
  struct _TEB *v40; // rbx
  __int64 v41; // rax
  struct _TEB *v42; // rbx
  unsigned __int8 v43; // cl
  __int64 v44; // rax
  unsigned __int16 v45; // ax
  int v46; // eax
  __int64 v47; // rdx
  int v48; // eax
  unsigned __int16 v49; // ax
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rbx
  unsigned int v55; // ecx
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  signed __int32 v61; // ebx
  unsigned __int64 v62; // rcx
  _QWORD *v63; // rax
  int v64; // r8d
  unsigned int v65; // edx
  signed __int64 *v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // r8
  int v71; // eax
  __int64 v72; // r9
  signed __int64 v73; // rdx
  __int64 *v74; // r13
  __int64 **v75; // rbx
  __int64 v76; // rcx
  _QWORD **v77; // rdx
  __int64 v78; // rax
  __int64 v79; // r13
  __int64 v80; // rbx
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v82; // rcx
  ULONG HeapProtection; // eax
  int v84; // edx
  signed __int64 v85; // rax
  signed __int32 v86; // eax
  int v87; // ecx
  __int64 v88; // rax
  signed __int32 v89; // eax
  __int64 v90; // r8
  __int64 v91; // rax
  volatile signed __int32 *v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rcx
  unsigned int v95; // [rsp+30h] [rbp-68h] BYREF
  ULONG OldProtect; // [rsp+34h] [rbp-64h] BYREF
  unsigned __int64 v97; // [rsp+38h] [rbp-60h]
  __int64 v98; // [rsp+40h] [rbp-58h]
  int v99; // [rsp+48h] [rbp-50h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-40h] BYREF
  int v102; // [rsp+68h] [rbp-30h]
  signed __int64 v103; // [rsp+A0h] [rbp+8h]

  v5 = 0LL;
  v8 = a2;
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      goto LABEL_75;
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v10 = RtlpProbeUserBufferSafe(a1, a2);
    }
    else if ( (a2 & 0xF) != 0 )
    {
      RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
    }
    else
    {
      v10 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
        v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
      if ( (*(_BYTE *)(v10 + 15) & 0x3F) == 0 )
      {
        RtlpLogHeapFailure(8, a1, v10, 0, 0LL, 0LL);
        v10 = 0LL;
      }
    }
    if ( v10 )
    {
      if ( *(_BYTE *)(v8 - 1) != 5 )
        goto LABEL_74;
      if ( *(char *)(v10 + 15) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v43 = ((unsigned __int16)(*(_WORD *)(a1 + 136) ^ *(_WORD *)(v10 + 8)) >> 8) ^ ((unsigned int)(*(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v10 + 8)) >> 16);
          v102 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v10 + 8);
          if ( HIBYTE(v102) != ((unsigned __int8)v102 ^ v43) )
            goto LABEL_156;
        }
      }
      else if ( !(unsigned __int8)RtlpValidateLFHBlock(a1, v10) )
      {
LABEL_156:
        RtlpLogHeapFailure(3, a1, v10, v8, 0LL, 0LL);
        goto LABEL_131;
      }
      if ( *(char *)(v10 + 15) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v46 = *(_DWORD *)(v10 + 8);
          v99 = v46;
          if ( (v46 & *(_DWORD *)(a1 + 124)) != 0 )
            v99 = *(_DWORD *)(a1 + 136) ^ v46;
          v45 = v99;
        }
        else
        {
          v45 = *(_WORD *)(v10 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v10 + 8) ^ a1 ^ (v10 >> 4)) )
          v44 = 0LL;
        else
          v44 = *(_QWORD *)(v10
                          - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)a1 ^ (unsigned int)(v10 >> 4)) >> 12));
        v45 = *(_WORD *)(v44 + 36);
      }
      v47 = v45;
      if ( *(_BYTE *)(v10 + 15) == 4 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v48 = *(_DWORD *)(v10 + 8);
          v99 = v48;
          if ( (v48 & *(_DWORD *)(a1 + 124)) != 0 )
            v99 = *(_DWORD *)(a1 + 136) ^ v48;
          v49 = v99;
        }
        else
        {
          v49 = *(_WORD *)(v10 + 8);
        }
        v50 = v47 + *(_QWORD *)(v10 - 16) - v49;
      }
      else
      {
        v50 = 16LL * v45;
      }
      if ( v50 + v10 < v8 )
        goto LABEL_156;
      if ( (a3 & 0x3C000102) != 0
        || (*(_BYTE *)(v8 - 1) != 5 ? (v51 = 0LL) : (v51 = v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14)),
            (int)RtlpCallInterceptRoutine(*(_DWORD *)(v8 - 8), a1, v8, 3, v51) >= 0) )
      {
LABEL_74:
        if ( *(char *)(v10 + 15) < 0 )
        {
          v24 = 1;
          if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4))
            || (v5 = *(_QWORD *)(v10
                               - ((unsigned __int64)((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12))) == 0 )
          {
            RtlpLogHeapFailure(3, a1, v10, 0, v5, v5);
          }
          else
          {
            _m_prefetchw((const void *)v5);
            v52 = (unsigned __int16)(*(_DWORD *)(v10 + 12) >> 8);
            v53 = *(_QWORD *)v5;
            v98 = *(_QWORD *)(v5 + 8);
            v97 = v52;
            v54 = *(_QWORD *)(*(_QWORD *)v53 + 24LL);
            v55 = RtlpLFHKey ^ v54 ^ v98 ^ *(_DWORD *)(v98 + 24);
            if ( v98 + (unsigned int)v52 * HIWORD(v55) + (unsigned __int16)v55 == v10 )
            {
              if ( RtlGetCurrentServiceSessionId() )
                v57 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v57 = 2147353472LL;
              if ( *(_BYTE *)v57 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v54 + 24), v10 + 16, 2LL, v56);
              v58 = 0LL;
              v59 = 0x8000LL;
              if ( MEMORY[0x7FFE036A] > 1u )
                v58 = 100LL;
              v60 = 0LL;
              while ( 1 )
              {
                v61 = *(_DWORD *)(v5 + 32);
                if ( (v61 & 0x80000000) == 0
                  && v61 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 32), v61 | 0x80000000, v61) )
                {
                  break;
                }
                v60 = (unsigned int)(v60 + 1);
                if ( (unsigned int)v60 > (unsigned int)v58 )
                  goto LABEL_184;
              }
              if ( v61 == -1 )
              {
LABEL_184:
                *(_BYTE *)(v10 + 15) = 0x80;
                v67 = v10 + 16;
                v68 = v5 + 16;
                goto LABEL_185;
              }
              v62 = (unsigned int)v97;
              *(_BYTE *)(v10 + 15) = 0x80;
              _bittestandreset64(*(signed __int64 **)(v98 + 40), v62);
              if ( *(_WORD *)(v5 + 16) )
              {
                v63 = (_QWORD *)RtlpInterlockedFlushSList(v5 + 16, v60, v58, 0x8000LL);
                v64 = 0;
                if ( v63 )
                {
                  do
                  {
                    v65 = *((_DWORD *)v63 - 1);
                    ++v64;
                    v63 = (_QWORD *)*v63;
                    v66 = *(signed __int64 **)(v98 + 40);
                    v97 = (unsigned __int16)(v65 >> 8);
                    _bittestandreset64(v66, v97);
                  }
                  while ( v63 );
                  v24 = 1;
                }
              }
              else
              {
                v64 = 0;
              }
              v69 = v64 + 1 + (unsigned __int16)v61;
              v70 = *(_QWORD *)v5;
              v71 = ((_DWORD)v97 << 16) | v69;
              if ( (_WORD)v71 == *(_WORD *)(v5 + 40) )
              {
                v72 = *(unsigned int *)(v70 + 168);
                v73 = *(unsigned int *)(*(_QWORD *)v70 + 32LL);
                if ( *(_DWORD *)(v70 + 164) != 1
                  || (unsigned int)v73 < (unsigned int)v72
                  || (v73 = (unsigned int)(v73 - v72), (unsigned int)v73 >= *(_DWORD *)(*(_QWORD *)v70 + 36LL)) )
                {
                  v74 = *(__int64 **)v5;
                  v75 = (__int64 **)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v5 + 8LL), 0LL);
                  if ( !v75 )
                    goto LABEL_197;
                  _m_prefetchw((char *)v75 + 44);
                  if ( _InterlockedAnd((volatile signed __int32 *)v75 + 11, 0xFFFFFFF9) == 6 )
                  {
                    v76 = **v75;
                    *v75 = 0LL;
LABEL_195:
                    v77 = v75 + 6;
LABEL_196:
                    RtlpInterlockedPushEntrySList(v76, v77, v70, v72);
                    goto LABEL_197;
                  }
                  if ( !RtlpIsSubSegmentReuseable((__int64)v74, (__int64)v75) )
                    goto LABEL_197;
                  do
                  {
                    v86 = *((_DWORD *)v75 + 11);
                    if ( !v86 || (v86 & 2) != 0 )
                      goto LABEL_197;
                  }
                  while ( v86 != _InterlockedCompareExchange((volatile signed __int32 *)v75 + 11, v86 | 2, v86) );
                  v72 = (__int64)*v75;
                  v87 = 0;
                  while ( 1 )
                  {
                    v88 = ((_BYTE)v87 + (unsigned __int8)*(_WORD *)(v72 + 174)) & 0xF;
                    v73 = *(_QWORD *)(v72 + 8 * v88 + 16);
                    v70 = v72 + 8 * v88;
                    if ( v73 )
                    {
                      if ( (*(_DWORD *)(v73 + 44) & 1) == 0
                        && v73 == _InterlockedCompareExchange64(
                                    (volatile signed __int64 *)(v70 + 16),
                                    (signed __int64)v75,
                                    v73) )
                      {
                        _m_prefetchw((const void *)(v73 + 44));
                        if ( _InterlockedAnd((volatile signed __int32 *)(v73 + 44), 0xFFFFFFFD) == 2 )
                        {
                          v76 = **(_QWORD **)v73;
                          *(_QWORD *)v73 = 0LL;
                          v77 = (_QWORD **)(v73 + 48);
                          goto LABEL_196;
                        }
LABEL_197:
                        v78 = *v74;
                        v79 = *(_QWORD *)v5;
                        v80 = *(_QWORD *)(v78 + 24);
                        if ( (*(_BYTE *)(v5 + 38) & 3) != 0 )
                        {
                          BaseAddress = (PVOID)((*(_QWORD *)(v5 + 8) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
                          ReservedBlockSize = RtlpGetReservedBlockSize(v5, v73, v70, v72);
                          v82 = *(_QWORD *)(v80 + 24);
                          RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*(unsigned __int16 *)(v5 + 40);
                          HeapProtection = RtlpGetHeapProtection(v82, 1LL);
                          ZwProtectVirtualMemory(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            &BaseAddress,
                            &RegionSize,
                            HeapProtection,
                            &OldProtect);
                        }
                        *(_DWORD *)(*(_QWORD *)(v5 + 8) + 20LL) = 0;
                        RtlpFreeUserBlock(v80, *(unsigned __int8 **)(v5 + 8), v70, v72);
                        v84 = -*(unsigned __int16 *)(v5 + 40);
                        do
                        {
                          v85 = *(_QWORD *)(v79 + 160);
                          LODWORD(v103) = v85 + v84;
                          HIDWORD(v103) = HIDWORD(v85) - 1;
                        }
                        while ( v85 != _InterlockedCompareExchange64((volatile signed __int64 *)(v79 + 160), v103, v85) );
                        *(_QWORD *)(v5 + 8) = 0LL;
                        _InterlockedIncrement((volatile signed __int32 *)(v80 + 60));
                        *(_DWORD *)(v5 + 32) = 0;
                        _m_prefetchw((const void *)(v5 + 44));
                        if ( _InterlockedAnd((volatile signed __int32 *)(v5 + 44), 0xFFFFFFFE) == 1 )
                        {
                          v67 = v5 + 48;
                          v68 = **(_QWORD **)v5;
                          *(_QWORD *)v5 = 0LL;
                          goto LABEL_185;
                        }
                        goto LABEL_186;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(
                                 (volatile signed __int64 *)(v70 + 16),
                                 (signed __int64)v75,
                                 0LL) )
                    {
                      goto LABEL_197;
                    }
                    if ( (unsigned int)++v87 >= 0x10 )
                    {
                      v70 = *((unsigned __int16 *)*v75 + 86);
                      v76 = *(_QWORD *)(*(_QWORD *)(**v75 + 24) + 8 * v70 + 1192) + 144LL;
                      goto LABEL_195;
                    }
                  }
                }
              }
              *(_DWORD *)(v5 + 32) = v71;
              if ( (*(_DWORD *)(v5 + 44) & 2) != 0 || !RtlpIsSubSegmentReuseable(v70, v5) )
                goto LABEL_186;
              do
              {
                v89 = *(_DWORD *)(v5 + 44);
                if ( !v89 || (v89 & 2) != 0 )
                  goto LABEL_186;
              }
              while ( v89 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 44), v89 | 2, v89) );
              v59 = *(_QWORD *)v5;
              v90 = 0LL;
              do
              {
                v91 = ((_BYTE)v90 + (unsigned __int8)*(_WORD *)(v59 + 174)) & 0xF;
                v92 = *(volatile signed __int32 **)(v59 + 8 * v91 + 16);
                v93 = v59 + 8 * v91;
                if ( v92 )
                {
                  if ( (v92[11] & 1) == 0
                    && v92 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                           (volatile signed __int64 *)(v93 + 16),
                                                           v5,
                                                           (signed __int64)v92) )
                  {
                    _m_prefetchw((const void *)(v92 + 11));
                    v5 = 0LL;
                    if ( _InterlockedAnd(v92 + 11, 0xFFFFFFFD) == 2 )
                    {
                      v94 = **(_QWORD **)v92;
                      *(_QWORD *)v92 = 0LL;
                      RtlpInterlockedPushEntrySList(v94, v92 + 12, v90, v59);
                    }
                    goto LABEL_76;
                  }
                }
                else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v93 + 16), v5, 0LL) )
                {
                  goto LABEL_186;
                }
                v90 = (unsigned int)(v90 + 1);
              }
              while ( (unsigned int)v90 < 0x10 );
              v67 = v5 + 48;
              v58 = *(unsigned __int16 *)(*(_QWORD *)v5 + 172LL);
              v68 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v5 + 24LL) + 8 * v58 + 1192) + 144LL;
LABEL_185:
              RtlpInterlockedPushEntrySList(v68, v67, v58, v59);
LABEL_186:
              v5 = 0LL;
            }
            else
            {
              v5 = 0LL;
              RtlpLogHeapFailure(3, *(_QWORD *)(v54 + 24), v10, 0, 0LL, 0LL);
            }
          }
LABEL_76:
          if ( a5 )
            *a5 = v5;
          if ( a4 )
            *a4 = v5;
          if ( (dword_180160378 & 1) != 0
            && (dword_180160378 & 2) != 0
            && (PVOID)a1 != RtlpHpMetadataHeap
            && NtCurrentPeb()->ProcessHeap
            && (a3 & 0x10000000) == 0 )
          {
            goto LABEL_235;
          }
          return v24;
        }
LABEL_75:
        v36 = RtlpFreeHeap(a1, a3 | 2u, v10, v8);
        v24 = v36;
        if ( !v36 )
          return v24;
        goto LABEL_76;
      }
    }
LABEL_131:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v42 = NtCurrentTeb();
    v42->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    if ( a2 )
    {
      if ( (_WORD)a2 || (v37 = RtlCSparseBitmapBitmaskRead(a1, 2 * (a2 >> 20))) != 0 && (_DWORD)v37 != 3 )
        v8 -= 16LL;
    }
  }
  v11 = a3 & 1 | 2;
  if ( (a3 & 8) == 0 )
    v11 = a3 & 1;
  if ( (a3 & 4) != 0 )
    v11 |= 0x80000000;
  if ( (a3 & 0x100) != 0 )
    v11 |= 0x100u;
  if ( (a3 & 0xE00) != 0 )
    v11 |= a3 & 0xE00;
  if ( (a3 & 0x10) != 0 )
    v11 |= 0x2000000u;
  if ( (a3 & 2) != 0 )
    v11 |= 0x1000000u;
  v12 = 0;
  v13 = v11 | *(_DWORD *)(a1 + 20);
  v14 = *(_DWORD *)(a1 + 64);
  v15 = v13 & 0x11000001;
  if ( v14 )
    LOBYTE(v12) = v14 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v16 = v15 | 1;
  v17 = 0LL;
  if ( !v12 )
    v16 = v15;
  if ( a5 )
  {
    v17 = RtlpHpExtrasGet(a1, v8, v16, a4);
    if ( (unsigned __int64)(v17 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      *a5 = 0;
    else
      *a5 = *(_WORD *)v17;
  }
  else if ( a4 )
  {
    *a4 = RtlpHpSizeHeapInternal(a1, v8, v16, 0LL);
  }
  if ( (v16 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 56) )
    {
      if ( (v17 || (v17 = RtlpHpExtrasGet(a1, v8, v16, a4)) != 0) && v17 != -1 && (*(_BYTE *)(v17 + 2) & 0xF) != 0 )
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          if ( (_WORD)v8 || (v39 = RtlCSparseBitmapBitmaskRead(v15, 2 * (v8 >> 20))) != 0 && (_DWORD)v39 != 3 )
            v38 = v8 + 16;
          else
            v38 = v8;
        }
        else
        {
          v38 = v8;
        }
        if ( (int)RtlpCallInterceptRoutine(*(_BYTE *)(v17 + 2) & 0xF, a1, v38, 3, v17 + 16) < 0 )
          goto LABEL_107;
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, v8, v16) == -1 )
  {
    RtlpLogHeapFailure(9, a1, v8, 0, 0LL, 0LL);
LABEL_107:
    v24 = 0;
    goto LABEL_108;
  }
  if ( (_WORD)v8 )
  {
    v18 = 0;
LABEL_27:
    v19 = 104LL * v18;
    v20 = v19 + a1 + 112;
    if ( (RtlpHpAppCompatFlags & 1) != 0 )
    {
      DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(v19 + a1 + 112, v8);
    }
    else
    {
      v21 = v8 & *(_QWORD *)v20;
      if ( (RtlpHeapKey ^ v20 ^ v21 ^ *(_QWORD *)(v21 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        DescriptorValidateSafe = v21 + 32 * ((unsigned __int64)(unsigned int)(v8 - v21) >> *(_BYTE *)(v20 + 8));
      else
        DescriptorValidateSafe = 0LL;
    }
    if ( !DescriptorValidateSafe || (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) == 0 )
      goto LABEL_121;
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 2) != 0 )
    {
      if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) == 0
        && v8 != (DescriptorValidateSafe & *(_QWORD *)v20)
               + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v20)) >> 5 << *(_BYTE *)(v20 + 8)) )
      {
        goto LABEL_121;
      }
    }
    else
    {
      DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
      if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 1) == 0
        || (*(_BYTE *)(DescriptorValidateSafe + 24) & 2) == 0
        || (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) == 0 )
      {
        goto LABEL_121;
      }
    }
    if ( DescriptorValidateSafe )
    {
      v23 = (DescriptorValidateSafe & *(_QWORD *)v20)
          + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)v20)) >> 5 << *(_BYTE *)(v20 + 8));
      if ( v8 <= v23 )
      {
        RtlpHpSegPageRangeShrink(v20, DescriptorValidateSafe, 0, v16);
        v24 = 1;
        if ( RtlGetCurrentServiceSessionId() )
          v32 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v32 = 2147353472LL;
        if ( *(_BYTE *)v32 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapFreeEvent(*(_QWORD *)(v20 + 96), v8, 3LL, v31);
      }
      else
      {
        if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 4) != 0 )
        {
          v24 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v20 + 80), v23, v8, v16);
        }
        else
        {
          v24 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(v20 + 88), v23, v8, v16, &v95);
          if ( v24 )
          {
            if ( v95 <= 0x3FF0 )
            {
              v29 = *(_QWORD *)(v20 + 80);
              v30 = RtlpLfhBucketIndexMap[(unsigned __int64)(v95 + 15) >> 4];
              if ( (*(_QWORD *)(v29 + 8 * v30 + 208) & 1) != 0 )
                RtlpLfhBucketUsageUpdate(v29, v30, 0LL);
            }
          }
        }
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && *SharedData )
          v27 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v27 = 2147353472LL;
        if ( *(_BYTE *)v27 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( !v24 )
            goto LABEL_108;
          RtlpLogHeapFreeEvent(*(_QWORD *)(v20 + 96), v8, (~*(_BYTE *)(DescriptorValidateSafe + 24) & 4 | 8u) >> 2, v25);
        }
      }
      goto LABEL_43;
    }
LABEL_121:
    RtlpLogHeapFailure(9, *(_QWORD *)(v20 + 96), v8, 0, 0LL, 0LL);
    v24 = 0;
    goto LABEL_43;
  }
  v33 = RtlCSparseBitmapBitmaskRead(v15, 2 * (v8 >> 20));
  if ( v33 )
  {
    v18 = v33 - 1;
    if ( v18 != 2 )
      goto LABEL_27;
  }
  v24 = RtlpHpLargeFree(a1, v8, v16) != 0;
  if ( RtlGetCurrentServiceSessionId() )
    v35 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v35 = 2147353472LL;
  if ( *(_BYTE *)v35 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( !v24 )
      goto LABEL_108;
    RtlpLogHeapFreeEvent(a1, v8, 3LL, v34);
  }
LABEL_43:
  if ( !v24 )
  {
LABEL_108:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v40 = NtCurrentTeb();
    v40->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v24;
  }
  if ( a4 )
  {
    v41 = *a4;
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
      v41 -= 16LL;
    *a4 = v41;
  }
  if ( (dword_180160378 & 1) != 0
    && (dword_180160378 & 2) != 0
    && (PVOID)a1 != RtlpHpMetadataHeap
    && NtCurrentPeb()->ProcessHeap )
  {
LABEL_235:
    RtlpHpStackTraceRemoveStack(a1, v8);
  }
  return v24;
}
