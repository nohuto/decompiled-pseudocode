/*
 * XREFs of RtlpLowFragHeapFlushCaches @ 0x1800145D4
 * Callers:
 *     RtlpFlushHeap @ 0x180013DA4 (RtlpFlushHeap.c)
 * Callees:
 *     RtlpLocalInfoAllocFromCache @ 0x180014AA8 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpIsSubSegmentReuseable @ 0x180014FA0 (RtlpIsSubSegmentReuseable.c)
 *     RtlpFreeUserBlock @ 0x180015054 (RtlpFreeUserBlock.c)
 *     RtlpFreeUserBlockToHeap @ 0x180015220 (RtlpFreeUserBlockToHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlpGetHeapProtection @ 0x18004B238 (RtlpGetHeapProtection.c)
 *     RtlpLogHeapFailure @ 0x18009FBBC (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3B50 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A3B90 (RtlpInterlockedFlushSList.c)
 *     RtlpLogHeapFreeEvent @ 0x1801016FC (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x180101A7C (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x180101B24 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpGetReservedBlockSize @ 0x180106330 (RtlpGetReservedBlockSize.c)
 */

struct _PEB *__fastcall RtlpLowFragHeapFlushCaches(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // r12
  unsigned int v5; // ebp
  _DWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r15
  int v9; // ebx
  struct _PEB *result; // rax
  struct _PEB *v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  _DWORD *v15; // rdi
  __int64 v16; // r14
  int v17; // r15d
  unsigned __int64 v18; // rbp
  __int64 v19; // rbx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // r8d
  signed __int32 v27; // ebx
  _WORD *v28; // rcx
  __int64 *v29; // r8
  __int64 v30; // r9
  signed __int64 v31; // rdx
  __int64 *v32; // rsi
  volatile signed __int32 *v33; // rbx
  signed __int32 v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  volatile signed __int32 *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rbx
  int v41; // edx
  signed __int64 v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rdx
  struct _PEB *v45; // rbp
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  unsigned int v52; // edx
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v54; // rcx
  unsigned int HeapProtection; // eax
  signed __int32 v56; // eax
  __int64 v57; // r8
  int v58; // r9d
  __int64 v59; // rcx
  __int64 **v60; // rdx
  __int64 v61; // [rsp+30h] [rbp-68h]
  signed __int64 v62; // [rsp+38h] [rbp-60h]
  unsigned __int64 v63; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v64[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v65; // [rsp+A0h] [rbp+8h]
  __int64 v66; // [rsp+A0h] [rbp+8h]
  unsigned int v67; // [rsp+A8h] [rbp+10h]
  __int64 v68; // [rsp+A8h] [rbp+10h]
  unsigned int v69; // [rsp+B0h] [rbp+18h]
  char v70; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v69 = 0;
  v61 = 0LL;
  do
  {
    if ( (*(_BYTE *)(a1 + 4 * v3 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v67 = 1;
LABEL_4:
      v5 = 0;
      v65 = 0;
LABEL_5:
      if ( v5 )
        v6 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v3 + 2224) + 192LL * v5 - 192);
      else
        v6 = *(_DWORD **)(a1 + 8 * v3 + 1192);
      if ( !v6 || v6[41] != 1 )
        goto LABEL_9;
      v12 = RtlpLocalInfoAllocFromCache(v6, v5);
      v13 = v12;
      if ( !v12 )
        goto LABEL_34;
      *(_DWORD *)(*(_QWORD *)v6 + 36LL) = 0;
      v14 = *(_QWORD *)(a1 + 24);
      if ( (unsigned __int16)v14 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4))
        || (v15 = *(_DWORD **)(v12
                             - ((unsigned __int64)((unsigned int)v14 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12))) == 0LL )
      {
        RtlpLogHeapFailure(3, v14, v12, 0, 0LL, 0LL);
        goto LABEL_34;
      }
      _m_prefetchw(v15);
      v16 = *((_QWORD *)v15 + 1);
      v17 = 0;
      v18 = (unsigned __int16)(*(_DWORD *)(v12 + 12) >> 8);
      v19 = *(_QWORD *)(**(_QWORD **)v15 + 24LL);
      v20 = RtlpLFHKey ^ v19 ^ v16 ^ *(_DWORD *)(v16 + 24);
      v21 = (unsigned __int16)v20;
      v22 = (unsigned int)v18 * HIWORD(v20);
      v23 = v16 + v22 + v21;
      if ( v23 != v12 )
      {
        RtlpLogHeapFailure(3, *(_QWORD *)(v19 + 24), v12, 0, 0LL, 0LL);
        goto LABEL_33;
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v22, v23) )
        v24 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v24 = 2147353472LL;
      if ( *(_BYTE *)v24 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapFreeEvent(*(_QWORD *)(v19 + 24), v13 + 16, 2LL, 0LL);
      v25 = 0;
      v26 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      do
      {
        v27 = v15[8];
        if ( v27 >= 0 && v27 == _InterlockedCompareExchange(v15 + 8, v27 | 0x80000000, v27) )
          goto LABEL_29;
        ++v25;
      }
      while ( v25 <= v26 );
      v27 = -1;
LABEL_29:
      *(_BYTE *)(v13 + 15) = 0x80;
      v28 = v15 + 4;
      if ( v27 == -1 )
      {
        RtlpInterlockedPushEntrySList(v28, v13 + 16);
        goto LABEL_33;
      }
      _bittestandreset64(*(signed __int64 **)(v16 + 40), v18);
      if ( *v28 )
      {
        v51 = (_QWORD *)RtlpInterlockedFlushSList(v28);
        while ( v51 )
        {
          v52 = *((_DWORD *)v51 - 1);
          ++v17;
          v51 = (_QWORD *)*v51;
          v18 = (unsigned __int16)(v52 >> 8);
          _bittestandreset64(*(signed __int64 **)(v16 + 40), v18);
        }
      }
      v29 = *(__int64 **)v15;
      if ( (_WORD)v17 + (_WORD)v27 + 1 == *((_WORD *)v15 + 20) )
      {
        v30 = *((unsigned int *)v29 + 42);
        v31 = *(unsigned int *)(*v29 + 32);
        if ( *((_DWORD *)v29 + 41) != 1
          || (unsigned int)v31 < (unsigned int)v30
          || (v31 = (unsigned int)(v31 - v30), (unsigned int)v31 >= *(_DWORD *)(*v29 + 36)) )
        {
          v32 = *(__int64 **)v15;
          v33 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v15 + 8LL), 0LL);
          if ( v33 )
          {
            _m_prefetchw((const void *)(v33 + 11));
            if ( _InterlockedAnd(v33 + 11, 0xFFFFFFF9) == 6 )
            {
              v36 = **(_QWORD **)v33;
              *(_QWORD *)v33 = 0LL;
LABEL_85:
              v37 = v33 + 12;
LABEL_50:
              RtlpInterlockedPushEntrySList(v36, v37);
            }
            else if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v32, v33) )
            {
              while ( 1 )
              {
                v34 = *((_DWORD *)v33 + 11);
                if ( !v34 || (v34 & 2) != 0 )
                  break;
                if ( v34 == _InterlockedCompareExchange(v33 + 11, v34 | 2, v34) )
                {
                  v29 = *(__int64 **)v33;
                  v30 = 0LL;
                  while ( 1 )
                  {
                    v35 = ((_BYTE)v30 + (unsigned __int8)*((_WORD *)v29 + 87)) & 0xF;
                    v31 = v29[v35 + 2];
                    if ( v31 )
                    {
                      if ( (*(_DWORD *)(v31 + 44) & 1) == 0
                        && v31 == _InterlockedCompareExchange64(&v29[v35 + 2], (signed __int64)v33, v31) )
                      {
                        _m_prefetchw((const void *)(v31 + 44));
                        if ( _InterlockedAnd((volatile signed __int32 *)(v31 + 44), 0xFFFFFFFD) != 2 )
                          goto LABEL_51;
                        v36 = **(_QWORD **)v31;
                        *(_QWORD *)v31 = 0LL;
                        v37 = (volatile signed __int32 *)(v31 + 48);
                        goto LABEL_50;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(&v29[v35 + 2], (signed __int64)v33, 0LL) )
                    {
                      goto LABEL_51;
                    }
                    v30 = (unsigned int)(v30 + 1);
                    if ( (unsigned int)v30 >= 0x10 )
                    {
                      v36 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v33 + 24LL)
                                      + 8LL * *(unsigned __int16 *)(*(_QWORD *)v33 + 172LL)
                                      + 1192)
                          + 144LL;
                      goto LABEL_85;
                    }
                  }
                }
              }
            }
          }
LABEL_51:
          v38 = *v32;
          v39 = *(_QWORD *)v15;
          v40 = *(_QWORD *)(v38 + 24);
          if ( (*((_BYTE *)v15 + 38) & 3) != 0 )
          {
            v64[0] = (*((_QWORD *)v15 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL;
            ReservedBlockSize = RtlpGetReservedBlockSize(v15, v31, v29, v30);
            v54 = *(_QWORD *)(v40 + 24);
            v63 = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v15 + 20);
            HeapProtection = RtlpGetHeapProtection(v54, 1LL);
            ZwProtectVirtualMemory(-1LL, v64, &v63, HeapProtection, &v70);
          }
          *(_DWORD *)(*((_QWORD *)v15 + 1) + 20LL) = 0;
          RtlpFreeUserBlock(v40, *((_QWORD *)v15 + 1), v29, v30);
          v41 = -*((unsigned __int16 *)v15 + 20);
          do
          {
            v42 = *(_QWORD *)(v39 + 160);
            LODWORD(v62) = v42 + v41;
            HIDWORD(v62) = HIDWORD(v42) - 1;
          }
          while ( v42 != _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 160), v62, v42) );
          *((_QWORD *)v15 + 1) = 0LL;
          _InterlockedAdd((volatile signed __int32 *)(v40 + 60), 1u);
          v15[8] = 0;
          _m_prefetchw(v15 + 11);
          if ( _InterlockedAnd(v15 + 11, 0xFFFFFFFE) == 1 )
          {
            v43 = **(_QWORD **)v15;
            *(_QWORD *)v15 = 0LL;
LABEL_57:
            v44 = v15 + 12;
LABEL_58:
            RtlpInterlockedPushEntrySList(v43, v44);
          }
          goto LABEL_33;
        }
      }
      v15[8] = ((_DWORD)v18 << 16) | (v17 + (unsigned __int16)v27 + 1);
      if ( (v15[11] & 2) != 0 || !(unsigned __int8)RtlpIsSubSegmentReuseable(v29, v15) )
        goto LABEL_33;
      do
      {
        v56 = v15[11];
        if ( !v56 || (v56 & 2) != 0 )
          goto LABEL_33;
      }
      while ( v56 != _InterlockedCompareExchange(v15 + 11, v56 | 2, v56) );
      v57 = *(_QWORD *)v15;
      v58 = 0;
      while ( 1 )
      {
        v59 = ((_BYTE)v58 + (unsigned __int8)*(_WORD *)(v57 + 174)) & 0xF;
        v60 = *(__int64 ***)(v57 + 8 * v59 + 16);
        if ( v60 )
        {
          if ( (*((_DWORD *)v60 + 11) & 1) == 0
            && v60 == (__int64 **)_InterlockedCompareExchange64(
                                    (volatile signed __int64 *)(v57 + 8 * v59 + 16),
                                    (signed __int64)v15,
                                    (signed __int64)v60) )
          {
            _m_prefetchw((char *)v60 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v60 + 11, 0xFFFFFFFD) == 2 )
            {
              v43 = **v60;
              *v60 = 0LL;
              v44 = v60 + 6;
              goto LABEL_58;
            }
LABEL_33:
            v5 = v65;
LABEL_34:
            v3 = v61;
LABEL_9:
            v65 = ++v5;
            if ( v5 >= v67 )
            {
              v2 = v69;
              goto LABEL_11;
            }
            goto LABEL_5;
          }
        }
        else if ( !_InterlockedCompareExchange64(
                     (volatile signed __int64 *)(v57 + 8 * v59 + 16),
                     (signed __int64)v15,
                     0LL) )
        {
          goto LABEL_33;
        }
        if ( (unsigned int)++v58 >= 0x10 )
        {
          v43 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v15 + 24LL)
                          + 8LL * *(unsigned __int16 *)(*(_QWORD *)v15 + 172LL)
                          + 1192)
              + 144LL;
          goto LABEL_57;
        }
      }
    }
    v67 = RtlpAffinityState;
    if ( (_DWORD)RtlpAffinityState )
      goto LABEL_4;
LABEL_11:
    ++v2;
    ++v3;
    v69 = v2;
    v61 = v3;
  }
  while ( v2 < 0x81 );
  v7 = a1 + 96;
  v8 = 12LL;
  v66 = a1 + 96;
  v68 = 12LL;
  do
  {
    v9 = 0;
    result = (struct _PEB *)RtlpInterlockedFlushSList(v7);
    v11 = result;
    if ( result )
    {
      do
      {
        v45 = v11;
        v11 = *(struct _PEB **)&v11->InheritedAddressSpace;
        v46 = 1LL << LOBYTE(v45->ImageBaseAddress);
        if ( v46 > 0xF0000 )
          v46 = 983040LL;
        v47 = v46 + WORD1(v45->ImageBaseAddress);
        v4 += v47;
        RtlpFreeUserBlockToHeap(*(_QWORD *)(a1 + 24), v45);
        ++v9;
        result = (struct _PEB *)RtlGetCurrentServiceSessionId(v49, v48);
        if ( (_DWORD)result )
        {
          result = NtCurrentPeb();
          v50 = (__int64)result->SharedData + 550;
        }
        else
        {
          v50 = 2147353472LL;
        }
        if ( *(_BYTE *)v50 )
        {
          result = NtCurrentPeb();
          if ( (result->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v45, v47, 0LL);
            result = (struct _PEB *)RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v45, v47, 0LL);
          }
        }
      }
      while ( v11 );
      v7 = v66;
      v8 = v68;
      if ( v9 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v66 + 16), -v9);
    }
    v7 += 48LL;
    --v8;
    v66 = v7;
    v68 = v8;
  }
  while ( v8 );
  if ( v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v4);
  return result;
}
