/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x18003F2E0
 * Callers:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 * Callees:
 *     RtlpIsSubSegmentReuseable @ 0x180014FA0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpFreeUserBlock @ 0x180015054 (RtlpFreeUserBlock.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     RtlpFreeHeap @ 0x18003AD60 (RtlpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003E860 (RtlpFreeHeapInternal.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpFreeHeap @ 0x18003FEE0 (RtlpHpFreeHeap.c)
 *     RtlpGetHeapProtection @ 0x18004B238 (RtlpGetHeapProtection.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpProbeUserBufferSafe @ 0x180077930 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3B50 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A3B90 (RtlpInterlockedFlushSList.c)
 *     RtlpCallInterceptRoutine @ 0x1800EFE04 (RtlpCallInterceptRoutine.c)
 *     RtlpHeapExceptionFilter @ 0x1800F2DA8 (RtlpHeapExceptionFilter.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180100A6C (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x1801016FC (RtlpLogHeapFreeEvent.c)
 *     RtlpGetReservedBlockSize @ 0x180106330 (RtlpGetReservedBlockSize.c)
 *     RtlpValidateLFHBlock @ 0x18010674C (RtlpValidateLFHBlock.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // r13
  int v6; // r15d
  unsigned __int64 v7; // rsi
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // bl
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // ecx
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // r12
  __int64 v21; // rbx
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r9
  signed __int32 v27; // ebx
  _DWORD *v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // esi
  _QWORD *v31; // rax
  int i; // r8d
  _QWORD *v33; // rcx
  int v34; // ecx
  int v35; // eax
  __int64 v36; // r8
  signed __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rsi
  volatile signed __int32 *v40; // rbx
  __int64 v41; // rcx
  signed __int32 v42; // eax
  unsigned int j; // ecx
  volatile signed __int32 *v44; // rdx
  __int64 v45; // rbx
  ULONG HeapProtection; // eax
  __int64 v47; // r9
  int v48; // edx
  signed __int64 v49; // r8
  signed __int64 v50; // rtt
  __int64 v51; // rcx
  signed __int32 v52; // eax
  unsigned int k; // ecx
  _QWORD **v54; // rdx
  unsigned __int8 v55; // al
  __int64 v57; // [rsp+38h] [rbp-130h] BYREF
  int v58; // [rsp+40h] [rbp-128h]
  unsigned __int16 v59; // [rsp+44h] [rbp-124h]
  unsigned __int16 v60; // [rsp+46h] [rbp-122h]
  int v61; // [rsp+48h] [rbp-120h]
  signed __int64 v62; // [rsp+50h] [rbp-118h]
  int v63; // [rsp+58h] [rbp-110h]
  int v64; // [rsp+5Ch] [rbp-10Ch]
  unsigned int v65; // [rsp+60h] [rbp-108h]
  signed __int32 v66; // [rsp+64h] [rbp-104h]
  unsigned int v67; // [rsp+6Ch] [rbp-FCh]
  unsigned int v68; // [rsp+70h] [rbp-F8h]
  unsigned int v69; // [rsp+74h] [rbp-F4h]
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-E0h] BYREF
  unsigned __int64 v71; // [rsp+90h] [rbp-D8h]
  PVOID BaseAddress; // [rsp+98h] [rbp-D0h] BYREF
  unsigned int v73; // [rsp+A0h] [rbp-C8h]
  ULONG OldProtect[3]; // [rsp+A4h] [rbp-C4h] BYREF
  __int64 v75; // [rsp+B0h] [rbp-B8h]
  __int64 v76; // [rsp+B8h] [rbp-B0h]
  int v77; // [rsp+D0h] [rbp-98h]
  int v78; // [rsp+E0h] [rbp-88h]
  int v79; // [rsp+F0h] [rbp-78h]
  __int64 v80; // [rsp+F8h] [rbp-70h]
  struct _TEB *v81; // [rsp+100h] [rbp-68h]
  struct _TEB *v82; // [rsp+108h] [rbp-60h]
  struct _TEB *v83; // [rsp+110h] [rbp-58h]
  struct _TEB *v84; // [rsp+118h] [rbp-50h]
  signed __int64 v85; // [rsp+120h] [rbp-48h]
  __int64 v86; // [rsp+128h] [rbp-40h]
  signed __int64 v87; // [rsp+130h] [rbp-38h]
  unsigned __int16 v88; // [rsp+188h] [rbp+20h] BYREF

  v4 = a2;
  v6 = 0;
  if ( (RtlpHpHeapFeatures & 2) == 0 )
  {
    v8 = RtlpFreeHeapInternal(a1, a2, a3, 0LL, 0LL);
    v67 = v8;
    return v8;
  }
  v7 = 0LL;
  v80 = a1;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
    {
      if ( a2 )
      {
        if ( (_WORD)a2 || (v10 = RtlCSparseBitmapBitmaskRead(a1, 2 * (a2 >> 20))) != 0 && (_DWORD)v10 != 3 )
          v4 -= 16LL;
      }
    }
    if ( (a3 & 1) != 0 )
      v6 = 1;
    if ( (a3 & 8) != 0 )
      v6 |= 2u;
    if ( (a3 & 4) != 0 )
      v6 |= 0x80000000;
    if ( (a3 & 0x100) != 0 )
      v6 |= 0x100u;
    if ( (a3 & 0xE00) != 0 )
      v6 |= a3 & 0xE00;
    if ( (a3 & 0x10) != 0 )
      v6 |= 0x2000000u;
    if ( (a3 & 2) != 0 )
      v6 |= 0x1000000u;
    v8 = RtlpHpFreeHeap(a1, v4, v6 & 0x11000001, (unsigned int)&v57, (__int64)&v88);
    v58 = v8;
    if ( v8 )
    {
      v9 = v57;
      if ( (RtlpHpAppCompatFlags & 2) != 0 )
        v9 = v57 - 16;
      v75 = v9;
      v57 = v9;
      if ( (dword_180160378 & 1) != 0
        && (dword_180160378 & 2) != 0
        && (PVOID)a1 != RtlpHpMetadataHeap
        && NtCurrentPeb()->ProcessHeap )
      {
        goto LABEL_168;
      }
    }
    else
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v81 = NtCurrentTeb();
      v81->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    }
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
LABEL_162:
    v55 = RtlpFreeHeap(a1, a3 | 2u, v7, v4);
    v8 = v55;
    v58 = v55;
    if ( v55 )
      goto LABEL_163;
    goto LABEL_22;
  }
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v7 = RtlpProbeUserBufferSafe(a1, a2);
    goto LABEL_48;
  }
  if ( (a2 & 0xF) != 0 )
  {
    RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
  }
  else
  {
    v7 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
    if ( (*(_BYTE *)(v7 + 15) & 0x3F) != 0 )
    {
      v71 = v7;
      goto LABEL_48;
    }
    RtlpLogHeapFailure(8, a1, v7, 0, 0LL, 0LL);
    v7 = 0LL;
  }
  v71 = 0LL;
LABEL_48:
  if ( !v7 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v82 = NtCurrentTeb();
    v82->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    v8 = 0;
    v58 = 0;
    goto LABEL_25;
  }
  if ( *(_BYTE *)(v4 - 1) != 5 )
    goto LABEL_85;
  if ( *(char *)(v7 + 15) >= 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v77 = *(_DWORD *)(v7 + 8) ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v77) != ((unsigned __int8)v77 ^ (unsigned __int8)(BYTE1(v77) ^ BYTE2(v77))) )
        goto LABEL_78;
    }
    v11 = 1;
    goto LABEL_57;
  }
  v11 = RtlpValidateLFHBlock(a1, v7);
  if ( v11 )
  {
LABEL_57:
    if ( *(char *)(v7 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v14 = *(_DWORD *)(v7 + 8);
        v78 = v14;
        if ( (v14 & *(_DWORD *)(a1 + 124)) != 0 )
          v78 = v14 ^ *(_DWORD *)(a1 + 136);
        v13 = v78;
      }
      else
      {
        v13 = *(_WORD *)(v7 + 8);
      }
      v59 = v13;
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4)) )
        v12 = 0LL;
      else
        v12 = *(_QWORD *)(v7
                        - (((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12));
      v13 = *(_WORD *)(v12 + 36);
    }
    v15 = v13;
    if ( *(_BYTE *)(v7 + 15) == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v16 = *(_DWORD *)(v7 + 8);
        v79 = v16;
        if ( (v16 & *(_DWORD *)(a1 + 124)) != 0 )
          v79 = v16 ^ *(_DWORD *)(a1 + 136);
        v17 = v79;
      }
      else
      {
        v17 = *(_WORD *)(v7 + 8);
      }
      v60 = v17;
      v18 = v15 + *(_QWORD *)(v7 - 16) - v17;
    }
    else
    {
      v18 = 16LL * v13;
    }
    if ( v18 + v7 < v4 )
      goto LABEL_78;
  }
  if ( !v11 )
  {
LABEL_78:
    RtlpLogHeapFailure(3, a1, v7, v4, 0LL, 0LL);
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v83 = NtCurrentTeb();
    v83->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    v8 = 0;
    v58 = 0;
    goto LABEL_25;
  }
  if ( (a3 & 0x3C000102) == 0 )
  {
    v19 = *(_BYTE *)(v4 - 16 + 15) == 5 ? v4 - 16LL * *(unsigned __int8 *)(v4 - 16 + 14) : 0LL;
    v76 = v19;
    if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v4 - 8), a1, v4, 3, v19) < 0 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v84 = NtCurrentTeb();
      v84->LastErrorValue = RtlNtStatusToDosError(-1073741811);
      v8 = 0;
      v58 = 0;
      goto LABEL_25;
    }
  }
LABEL_85:
  if ( *(char *)(v7 + 15) >= 0 )
    goto LABEL_162;
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(a1 ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4))
    || (v20 = *(_DWORD **)(v7
                         - (((unsigned int)RtlpLFHKey ^ (unsigned int)a1 ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12))) == 0LL )
  {
    RtlpLogHeapFailure(3, a1, v7, 0, 0LL, 0LL);
    v8 = 1;
    goto LABEL_161;
  }
  _m_prefetchw(v20);
  v62 = *((_QWORD *)v20 + 1);
  v85 = v62;
  v61 = 0;
  v65 = (unsigned __int16)(*(_DWORD *)(v7 + 12) >> 8);
  v21 = *(_QWORD *)(**(_QWORD **)v20 + 24LL);
  v86 = v21;
  v73 = RtlpLFHKey ^ v21 ^ v62 ^ *(_DWORD *)(v62 + 24);
  if ( v62 + v65 * HIWORD(v73) + (unsigned __int16)v73 != v7 )
  {
    RtlpLogHeapFailure(3, *(_QWORD *)(v21 + 24), v7, 0, 0LL, 0LL);
    goto LABEL_160;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v23 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v23 = 2147353472LL;
  if ( *(_BYTE *)v23 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(*(_QWORD *)(v21 + 24), v7 + 16, 2LL, v22);
  v64 = 0;
  v63 = 0;
  v24 = 0LL;
  if ( MEMORY[0x7FFE036A] > 1u )
    v24 = 100LL;
  v25 = 0LL;
  v26 = 0x8000LL;
  while ( 1 )
  {
    v63 = v25;
    if ( (unsigned int)v25 > (unsigned int)v24 )
      break;
    v27 = v20[8];
    v64 = v27;
    if ( (v27 & 0x80000000) == 0 && v27 == _InterlockedCompareExchange(v20 + 8, v27 | 0x80000000, v27) )
      goto LABEL_104;
    v25 = (unsigned int)(v25 + 1);
  }
  v27 = -1;
  v64 = -1;
LABEL_104:
  v66 = v27;
  *(_BYTE *)(v7 + 15) = 0x80;
  if ( v27 == -1 )
  {
    v28 = (_DWORD *)(v7 + 16);
    v29 = (__int64)(v20 + 4);
    goto LABEL_159;
  }
  v30 = v65;
  _bittestandreset64(*(signed __int64 **)(v62 + 40), v65);
  if ( *((_WORD *)v20 + 8) )
  {
    v31 = (_QWORD *)RtlpInterlockedFlushSList(v20 + 4, v25, v24, 0x8000LL);
    for ( i = 0; ; v61 = i )
    {
      v33 = v31;
      if ( !v31 )
        break;
      v31 = (_QWORD *)*v31;
      v34 = *((_DWORD *)v33 - 1) >> 8;
      v30 = (unsigned __int16)v34;
      v65 = (unsigned __int16)v34;
      _bittestandreset64(*(signed __int64 **)(v62 + 40), (unsigned __int16)v34);
      ++i;
    }
  }
  else
  {
    i = 0;
  }
  v35 = (v30 << 16) | (i + 1 + (unsigned __int16)v27);
  v66 = v35;
  v36 = *(_QWORD *)v20;
  if ( (_WORD)v35 == *((_WORD *)v20 + 20) )
  {
    v37 = *(unsigned int *)(*(_QWORD *)v36 + 32LL);
    v38 = *(unsigned int *)(v36 + 168);
    if ( *(_DWORD *)(v36 + 164) != 1
      || (unsigned int)v37 < (unsigned int)v38
      || (v37 = (unsigned int)(v37 - v38), (unsigned int)v37 >= *(_DWORD *)(*(_QWORD *)v36 + 36LL)) )
    {
      v66 = 0;
      v39 = *(_QWORD *)v20;
      v40 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v20 + 8LL), 0LL);
      if ( v40 )
      {
        _m_prefetchw((const void *)(v40 + 11));
        if ( _InterlockedAnd(v40 + 11, 0xFFFFFFF9) == 6 )
        {
          v41 = **(_QWORD **)v40;
          *(_QWORD *)v40 = 0LL;
LABEL_133:
          v44 = v40 + 12;
LABEL_134:
          RtlpInterlockedPushEntrySList(v41, v44, v36, v38);
        }
        else if ( RtlpIsSubSegmentReuseable(v39, (__int64)v40) )
        {
          while ( 1 )
          {
            v42 = *((_DWORD *)v40 + 11);
            if ( !v42 || (v42 & 2) != 0 )
              break;
            if ( v42 == _InterlockedCompareExchange(v40 + 11, v42 | 2, v42) )
            {
              v38 = *(_QWORD *)v40;
              for ( j = 0; ; ++j )
              {
                v68 = j;
                if ( j >= 0x10 )
                {
                  v41 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v40 + 24LL)
                                  + 8LL * *(unsigned __int16 *)(*(_QWORD *)v40 + 172LL)
                                  + 1192)
                      + 144LL;
                  goto LABEL_133;
                }
                v36 = v38 + 8LL * (((_BYTE)j + (unsigned __int8)*(_WORD *)(v38 + 174)) & 0xF);
                v37 = *(_QWORD *)(v36 + 16);
                if ( v37 )
                {
                  if ( (*(_DWORD *)(v37 + 44) & 1) == 0
                    && v37 == _InterlockedCompareExchange64(
                                (volatile signed __int64 *)(v36 + 16),
                                (signed __int64)v40,
                                v37) )
                  {
                    _m_prefetchw((const void *)(v37 + 44));
                    if ( _InterlockedAnd((volatile signed __int32 *)(v37 + 44), 0xFFFFFFFD) != 2 )
                      goto LABEL_135;
                    v41 = **(_QWORD **)v37;
                    *(_QWORD *)v37 = 0LL;
                    v44 = (volatile signed __int32 *)(v37 + 48);
                    goto LABEL_134;
                  }
                }
                else if ( !_InterlockedCompareExchange64(
                             (volatile signed __int64 *)(v36 + 16),
                             (signed __int64)v40,
                             0LL) )
                {
                  goto LABEL_135;
                }
              }
            }
          }
        }
      }
LABEL_135:
      v45 = *(_QWORD *)(*(_QWORD *)v39 + 24LL);
      v62 = *(_QWORD *)v20;
      if ( (*((_BYTE *)v20 + 38) & 3) != 0 )
      {
        BaseAddress = (PVOID)((*((_QWORD *)v20 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
        RegionSize = (unsigned __int16)RtlpGetReservedBlockSize(v20, v37, v36, v38);
        RegionSize *= 16LL * *((unsigned __int16 *)v20 + 20);
        v8 = 1;
        HeapProtection = RtlpGetHeapProtection(*(_QWORD *)(v45 + 24), 1LL);
        ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, HeapProtection, OldProtect);
      }
      else
      {
        v8 = 1;
      }
      *(_DWORD *)(*((_QWORD *)v20 + 1) + 20LL) = 0;
      RtlpFreeUserBlock(v45, *((unsigned __int8 **)v20 + 1), v36, v38);
      v48 = -*((unsigned __int16 *)v20 + 20);
      v49 = v62;
      do
      {
        v87 = *(_QWORD *)(v49 + 160);
        LODWORD(v62) = v87 + v48;
        HIDWORD(v62) = HIDWORD(v87) - 1;
        v50 = v87;
      }
      while ( v50 != _InterlockedCompareExchange64((volatile signed __int64 *)(v49 + 160), v62, v87) );
      *((_QWORD *)v20 + 1) = 0LL;
      _InterlockedIncrement((volatile signed __int32 *)(v45 + 60));
      v20[8] = 0;
      _m_prefetchw(v20 + 11);
      if ( _InterlockedAnd(v20 + 11, 0xFFFFFFFE) == 1 )
      {
        v51 = **(_QWORD **)v20;
        *(_QWORD *)v20 = 0LL;
        RtlpInterlockedPushEntrySList(v51, v20 + 12, v49, v47);
      }
      goto LABEL_161;
    }
  }
  v20[8] = v35;
  if ( (v20[11] & 2) != 0 || !RtlpIsSubSegmentReuseable(v36, (__int64)v20) )
    goto LABEL_160;
  do
  {
    v52 = v20[11];
    if ( !v52 || (v52 & 2) != 0 )
      goto LABEL_160;
  }
  while ( v52 != _InterlockedCompareExchange(v20 + 11, v52 | 2, v52) );
  v26 = *(_QWORD *)v20;
  for ( k = 0; ; ++k )
  {
    v69 = k;
    if ( k >= 0x10 )
    {
      v28 = v20 + 12;
      v29 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v20 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v20 + 172LL) + 1192)
          + 144LL;
      goto LABEL_159;
    }
    v24 = v26 + 8LL * (((_BYTE)k + (unsigned __int8)*(_WORD *)(v26 + 174)) & 0xF);
    v54 = *(_QWORD ***)(v24 + 16);
    if ( v54 )
      break;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 16), (signed __int64)v20, 0LL) )
      goto LABEL_160;
LABEL_156:
    ;
  }
  if ( (*((_DWORD *)v54 + 11) & 1) != 0
    || v54 != (_QWORD **)_InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v24 + 16),
                           (signed __int64)v20,
                           (signed __int64)v54) )
  {
    goto LABEL_156;
  }
  _m_prefetchw((char *)v54 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v54 + 11, 0xFFFFFFFD) != 2 )
    goto LABEL_160;
  v29 = **v54;
  *v54 = 0LL;
  v28 = v54 + 6;
LABEL_159:
  RtlpInterlockedPushEntrySList(v29, v28, v24, v26);
LABEL_160:
  v8 = 1;
LABEL_161:
  v58 = 1;
LABEL_163:
  v88 = 0;
  v57 = 0LL;
  if ( (dword_180160378 & 1) != 0
    && (dword_180160378 & 2) != 0
    && (PVOID)a1 != RtlpHpMetadataHeap
    && NtCurrentPeb()->ProcessHeap
    && (a3 & 0x10000000) == 0 )
  {
LABEL_168:
    RtlpHpStackTraceRemoveStack(a1, v4);
  }
LABEL_22:
  if ( v8 && v88 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_18015D918 + 8LL * v88 - 8) + 32LL), -v57);
LABEL_25:
  v67 = v8;
  return v8;
}
