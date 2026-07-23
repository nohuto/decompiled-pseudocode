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

int __fastcall RtlpLowFragHeapFlushCaches(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned int v8; // ebp
  _DWORD *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r15
  int v12; // ebx
  struct _PEB *v13; // rax
  struct _PEB *v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rdx
  _DWORD *v18; // rdi
  __int64 v19; // r14
  int v20; // r15d
  unsigned __int64 v21; // rbp
  __int64 v22; // rbx
  unsigned int v23; // ecx
  ULONG CurrentServiceSessionId; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  signed __int32 v28; // ebx
  _WORD *v29; // rcx
  signed __int64 v30; // rdx
  __int64 *v31; // rsi
  volatile signed __int32 *v32; // rbx
  signed __int32 v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  volatile signed __int32 *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rbx
  int v40; // edx
  signed __int64 v41; // rax
  __int64 v42; // rcx
  _DWORD *v43; // rdx
  struct _PEB *v44; // rbp
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r14
  __int64 v47; // rcx
  _QWORD *v48; // rax
  unsigned int v49; // edx
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v51; // rcx
  ULONG HeapProtection; // eax
  signed __int32 v53; // eax
  __int64 v54; // rcx
  __int64 **v55; // rdx
  __int64 v57; // [rsp+30h] [rbp-68h]
  signed __int64 v58; // [rsp+38h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v61; // [rsp+A0h] [rbp+8h]
  __int64 v62; // [rsp+A0h] [rbp+8h]
  unsigned int v63; // [rsp+A8h] [rbp+10h]
  __int64 v64; // [rsp+A8h] [rbp+10h]
  unsigned int v65; // [rsp+B0h] [rbp+18h]
  ULONG OldProtect; // [rsp+B8h] [rbp+20h] BYREF

  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v65 = 0;
  v57 = 0LL;
  do
  {
    if ( (*(_BYTE *)(a1 + 4 * v6 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v63 = 1;
LABEL_4:
      v8 = 0;
      v61 = 0;
LABEL_5:
      if ( v8 )
        v9 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v6 + 2224) + 192LL * v8 - 192);
      else
        v9 = *(_DWORD **)(a1 + 8 * v6 + 1192);
      if ( !v9 || v9[41] != 1 )
        goto LABEL_9;
      v15 = RtlpLocalInfoAllocFromCache(v9, v8);
      v16 = v15;
      if ( !v15 )
        goto LABEL_34;
      *(_DWORD *)(*(_QWORD *)v9 + 36LL) = 0;
      v17 = *(_QWORD *)(a1 + 24);
      if ( (unsigned __int16)v17 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v15 + 8) ^ (v15 >> 4))
        || (v18 = *(_DWORD **)(v15
                             - ((unsigned __int64)((unsigned int)v17 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v15 + 8) ^ (unsigned int)(v15 >> 4)) >> 12))) == 0LL )
      {
        RtlpLogHeapFailure(3, v17, v15, 0, 0LL, 0LL);
        goto LABEL_34;
      }
      _m_prefetchw(v18);
      v19 = *((_QWORD *)v18 + 1);
      v20 = 0;
      v21 = (unsigned __int16)(*(_DWORD *)(v15 + 12) >> 8);
      v22 = *(_QWORD *)(**(_QWORD **)v18 + 24LL);
      v23 = RtlpLFHKey ^ v22 ^ v19 ^ *(_DWORD *)(v19 + 24);
      if ( v19 + (unsigned int)v21 * HIWORD(v23) + (unsigned __int16)v23 != v15 )
      {
        RtlpLogHeapFailure(3, *(_QWORD *)(v22 + 24), v15, 0, 0LL, 0LL);
        goto LABEL_33;
      }
      CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
      a4 = 0LL;
      if ( CurrentServiceSessionId )
        v25 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v25 = 2147353472LL;
      if ( *(_BYTE *)v25 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        RtlpLogHeapFreeEvent(*(_QWORD *)(v22 + 24), v16 + 16, 2LL, 0LL);
        a4 = 0LL;
      }
      v26 = 0LL;
      v27 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      do
      {
        v28 = v18[8];
        if ( v28 >= 0 && v28 == _InterlockedCompareExchange(v18 + 8, v28 | 0x80000000, v28) )
          goto LABEL_29;
        v26 = (unsigned int)(v26 + 1);
      }
      while ( (unsigned int)v26 <= (unsigned int)v27 );
      v28 = -1;
LABEL_29:
      *(_BYTE *)(v16 + 15) = 0x80;
      v29 = v18 + 4;
      if ( v28 == -1 )
      {
        RtlpInterlockedPushEntrySList(v29, v16 + 16, v27, 0LL);
        goto LABEL_33;
      }
      _bittestandreset64(*(signed __int64 **)(v19 + 40), v21);
      if ( *v29 )
      {
        v48 = (_QWORD *)RtlpInterlockedFlushSList(v29, v26, v27, 0LL);
        while ( v48 )
        {
          v49 = *((_DWORD *)v48 - 1);
          ++v20;
          v48 = (_QWORD *)*v48;
          v21 = (unsigned __int16)(v49 >> 8);
          _bittestandreset64(*(signed __int64 **)(v19 + 40), v21);
        }
      }
      a3 = *(_QWORD *)v18;
      if ( (_WORD)v20 + (_WORD)v28 + 1 == *((_WORD *)v18 + 20) )
      {
        a4 = *(unsigned int *)(a3 + 168);
        v30 = *(unsigned int *)(*(_QWORD *)a3 + 32LL);
        if ( *(_DWORD *)(a3 + 164) != 1
          || (unsigned int)v30 < (unsigned int)a4
          || (v30 = (unsigned int)(v30 - a4), (unsigned int)v30 >= *(_DWORD *)(*(_QWORD *)a3 + 36LL)) )
        {
          v31 = *(__int64 **)v18;
          v32 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v18 + 8LL), 0LL);
          if ( v32 )
          {
            _m_prefetchw((const void *)(v32 + 11));
            if ( _InterlockedAnd(v32 + 11, 0xFFFFFFF9) == 6 )
            {
              v35 = **(_QWORD **)v32;
              *(_QWORD *)v32 = 0LL;
LABEL_85:
              v36 = v32 + 12;
LABEL_50:
              RtlpInterlockedPushEntrySList(v35, v36, a3, a4);
            }
            else if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v31, v32, a3, a4) )
            {
              while ( 1 )
              {
                v33 = *((_DWORD *)v32 + 11);
                if ( !v33 || (v33 & 2) != 0 )
                  break;
                if ( v33 == _InterlockedCompareExchange(v32 + 11, v33 | 2, v33) )
                {
                  a3 = *(_QWORD *)v32;
                  a4 = 0LL;
                  while ( 1 )
                  {
                    v34 = ((_BYTE)a4 + (unsigned __int8)*(_WORD *)(a3 + 174)) & 0xF;
                    v30 = *(_QWORD *)(a3 + 8 * v34 + 16);
                    if ( v30 )
                    {
                      if ( (*(_DWORD *)(v30 + 44) & 1) == 0
                        && v30 == _InterlockedCompareExchange64(
                                    (volatile signed __int64 *)(a3 + 8 * v34 + 16),
                                    (signed __int64)v32,
                                    v30) )
                      {
                        _m_prefetchw((const void *)(v30 + 44));
                        if ( _InterlockedAnd((volatile signed __int32 *)(v30 + 44), 0xFFFFFFFD) != 2 )
                          goto LABEL_51;
                        v35 = **(_QWORD **)v30;
                        *(_QWORD *)v30 = 0LL;
                        v36 = (volatile signed __int32 *)(v30 + 48);
                        goto LABEL_50;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(
                                 (volatile signed __int64 *)(a3 + 8 * v34 + 16),
                                 (signed __int64)v32,
                                 0LL) )
                    {
                      goto LABEL_51;
                    }
                    a4 = (unsigned int)(a4 + 1);
                    if ( (unsigned int)a4 >= 0x10 )
                    {
                      a3 = *(unsigned __int16 *)(*(_QWORD *)v32 + 172LL);
                      v35 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v32 + 24LL) + 8 * a3 + 1192) + 144LL;
                      goto LABEL_85;
                    }
                  }
                }
              }
            }
          }
LABEL_51:
          v37 = *v31;
          v38 = *(_QWORD *)v18;
          v39 = *(_QWORD *)(v37 + 24);
          if ( (*((_BYTE *)v18 + 38) & 3) != 0 )
          {
            BaseAddress = (PVOID)((*((_QWORD *)v18 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
            ReservedBlockSize = RtlpGetReservedBlockSize(v18, v30, a3, a4);
            v51 = *(_QWORD *)(v39 + 24);
            RegionSize = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v18 + 20);
            HeapProtection = RtlpGetHeapProtection(v51, 1LL);
            ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, HeapProtection, &OldProtect);
          }
          *(_DWORD *)(*((_QWORD *)v18 + 1) + 20LL) = 0;
          RtlpFreeUserBlock(v39, *((_QWORD *)v18 + 1), a3, a4);
          v40 = -*((unsigned __int16 *)v18 + 20);
          do
          {
            v41 = *(_QWORD *)(v38 + 160);
            LODWORD(v58) = v41 + v40;
            HIDWORD(v58) = HIDWORD(v41) - 1;
          }
          while ( v41 != _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 160), v58, v41) );
          *((_QWORD *)v18 + 1) = 0LL;
          _InterlockedAdd((volatile signed __int32 *)(v39 + 60), 1u);
          v18[8] = 0;
          _m_prefetchw(v18 + 11);
          if ( _InterlockedAnd(v18 + 11, 0xFFFFFFFE) == 1 )
          {
            v42 = **(_QWORD **)v18;
            *(_QWORD *)v18 = 0LL;
LABEL_57:
            v43 = v18 + 12;
LABEL_58:
            RtlpInterlockedPushEntrySList(v42, v43, a3, a4);
          }
          goto LABEL_33;
        }
      }
      v18[8] = ((_DWORD)v21 << 16) | (v20 + (unsigned __int16)v28 + 1);
      if ( (v18[11] & 2) != 0 || !(unsigned __int8)RtlpIsSubSegmentReuseable(a3, v18, a3, a4) )
        goto LABEL_33;
      do
      {
        v53 = v18[11];
        if ( !v53 || (v53 & 2) != 0 )
          goto LABEL_33;
      }
      while ( v53 != _InterlockedCompareExchange(v18 + 11, v53 | 2, v53) );
      a3 = *(_QWORD *)v18;
      a4 = 0LL;
      while ( 1 )
      {
        v54 = ((_BYTE)a4 + (unsigned __int8)*(_WORD *)(a3 + 174)) & 0xF;
        v55 = *(__int64 ***)(a3 + 8 * v54 + 16);
        if ( v55 )
        {
          if ( (*((_DWORD *)v55 + 11) & 1) == 0
            && v55 == (__int64 **)_InterlockedCompareExchange64(
                                    (volatile signed __int64 *)(a3 + 8 * v54 + 16),
                                    (signed __int64)v18,
                                    (signed __int64)v55) )
          {
            _m_prefetchw((char *)v55 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v55 + 11, 0xFFFFFFFD) == 2 )
            {
              v42 = **v55;
              *v55 = 0LL;
              v43 = v55 + 6;
              goto LABEL_58;
            }
LABEL_33:
            v8 = v61;
LABEL_34:
            v6 = v57;
LABEL_9:
            v61 = ++v8;
            if ( v8 >= v63 )
            {
              v5 = v65;
              goto LABEL_11;
            }
            goto LABEL_5;
          }
        }
        else if ( !_InterlockedCompareExchange64(
                     (volatile signed __int64 *)(a3 + 8 * v54 + 16),
                     (signed __int64)v18,
                     0LL) )
        {
          goto LABEL_33;
        }
        a4 = (unsigned int)(a4 + 1);
        if ( (unsigned int)a4 >= 0x10 )
        {
          a3 = *(unsigned __int16 *)(*(_QWORD *)v18 + 172LL);
          v42 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v18 + 24LL) + 8 * a3 + 1192) + 144LL;
          goto LABEL_57;
        }
      }
    }
    v63 = RtlpAffinityState;
    if ( (_DWORD)RtlpAffinityState )
      goto LABEL_4;
LABEL_11:
    ++v5;
    ++v6;
    v65 = v5;
    v57 = v6;
  }
  while ( v5 < 0x81 );
  v10 = a1 + 96;
  v11 = 12LL;
  v62 = a1 + 96;
  v64 = 12LL;
  do
  {
    v12 = 0;
    v13 = (struct _PEB *)RtlpInterlockedFlushSList(v10, v6, a3, a4);
    v14 = v13;
    if ( v13 )
    {
      do
      {
        v44 = v14;
        v14 = *(struct _PEB **)&v14->InheritedAddressSpace;
        v45 = 1LL << LOBYTE(v44->ImageBaseAddress);
        if ( v45 > 0xF0000 )
          v45 = 983040LL;
        v46 = v45 + WORD1(v44->ImageBaseAddress);
        v7 += v46;
        RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 24), v44);
        ++v12;
        LODWORD(v13) = RtlGetCurrentServiceSessionId();
        a4 = 0LL;
        if ( (_DWORD)v13 )
        {
          v13 = NtCurrentPeb();
          v47 = (__int64)v13->SharedData + 550;
        }
        else
        {
          v47 = 2147353472LL;
        }
        if ( *(_BYTE *)v47 )
        {
          v13 = NtCurrentPeb();
          if ( (v13->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapSubSegmentAllocCached(*(_QWORD *)(a1 + 24), v44, v46, 0LL);
            LODWORD(v13) = RtlpLogHeapSubSegmentFree(*(_QWORD *)(a1 + 24), v44, v46, 0LL);
          }
        }
      }
      while ( v14 );
      v10 = v62;
      v11 = v64;
      if ( v12 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v62 + 16), -v12);
    }
    v10 += 48LL;
    --v11;
    v62 = v10;
    v64 = v11;
  }
  while ( v11 );
  if ( v7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v7);
  return (int)v13;
}
