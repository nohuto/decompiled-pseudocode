/*
 * XREFs of sub_180006554 @ 0x180006554
 * Callers:
 *     sub_180006330 @ 0x180006330 (sub_180006330.c)
 * Callees:
 *     sub_180006A0C @ 0x180006A0C (sub_180006A0C.c)
 *     sub_180006E54 @ 0x180006E54 (sub_180006E54.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     sub_180022088 @ 0x180022088 (sub_180022088.c)
 *     sub_180023688 @ 0x180023688 (sub_180023688.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_18008AEA0 @ 0x18008AEA0 (sub_18008AEA0.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A8DC0 (RtlInterlockedPushEntrySList_0.c)
 *     RtlInterlockedFlushSList_0 @ 0x1800A8E00 (RtlInterlockedFlushSList_0.c)
 *     sub_1800FFB4C @ 0x1800FFB4C (sub_1800FFB4C.c)
 *     sub_1800FFDB0 @ 0x1800FFDB0 (sub_1800FFDB0.c)
 *     sub_1800FFE58 @ 0x1800FFE58 (sub_1800FFE58.c)
 */

int __fastcall sub_180006554(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  unsigned int v4; // r12d
  _DWORD *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdi
  int v8; // ebx
  PSLIST_ENTRY v9; // rax
  __int64 v10; // r12
  _QWORD *p_Next; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  _DWORD *v15; // rdi
  __int64 v16; // r14
  int v17; // r15d
  unsigned __int64 v18; // rbp
  __int64 v19; // rbx
  unsigned int v20; // ecx
  ULONG CurrentServiceSessionId; // eax
  __int64 v22; // r9
  __int64 UserModeGlobalLogger; // rcx
  unsigned int v24; // edx
  unsigned int v25; // r8d
  signed __int32 v26; // ebx
  _SLIST_HEADER *v27; // rcx
  unsigned __int64 v28; // r8
  int v29; // ebp
  signed __int64 v30; // rdx
  __int64 *v31; // rsi
  volatile signed __int32 *v32; // rbx
  signed __int32 v33; // eax
  _SLIST_HEADER **v34; // rcx
  _SLIST_HEADER *v35; // rcx
  _SLIST_ENTRY *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rbx
  int v40; // edx
  signed __int64 v41; // rax
  int v42; // ecx
  _SLIST_HEADER *v43; // rcx
  _SLIST_ENTRY *v44; // rdx
  _QWORD *v45; // rbp
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r14
  __int64 v48; // rcx
  PSLIST_ENTRY v49; // rax
  unsigned int v50; // edx
  unsigned __int16 v51; // ax
  void *v52; // rcx
  ULONG v53; // eax
  signed __int32 v54; // eax
  __int64 v55; // rcx
  int v56; // r9d
  __int64 v57; // r8
  _QWORD **v58; // rdx
  __int64 v60; // [rsp+30h] [rbp-68h]
  __int64 v61; // [rsp+38h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v64; // [rsp+A0h] [rbp+8h]
  __int64 v65; // [rsp+A0h] [rbp+8h]
  unsigned int v66; // [rsp+A8h] [rbp+10h]
  ULONG OldProtect; // [rsp+B0h] [rbp+18h] BYREF
  signed __int64 v68; // [rsp+B8h] [rbp+20h]

  v2 = 0;
  v61 = 0LL;
  v3 = 0LL;
  v66 = 0;
  v60 = 0LL;
  do
  {
    v4 = 0;
    if ( (*(_BYTE *)(a1 + 4 * v3 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v64 = 1;
      goto LABEL_4;
    }
    v64 = dword_1801593E0;
    if ( dword_1801593E0 )
    {
LABEL_4:
      if ( v4 )
        v5 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v3 + 2224) + 192LL * v4 - 192);
      else
        v5 = *(_DWORD **)(a1 + 8 * v3 + 1192);
      if ( !v5 || v5[41] != 1 )
        goto LABEL_8;
      v12 = sub_180006A0C(v5, v4);
      v13 = v12;
      if ( !v12 )
        goto LABEL_32;
      *(_DWORD *)(*(_QWORD *)v5 + 36LL) = 0;
      v14 = *(_QWORD *)(a1 + 24);
      if ( (unsigned __int16)v14 ^ (unsigned __int16)(qword_18015BFE8 ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4))
        || (v15 = *(_DWORD **)(v12
                             - ((unsigned __int64)((unsigned int)v14 ^ (unsigned int)qword_18015BFE8 ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12))) == 0LL )
      {
        sub_1800A4DFC(3, v14, v12, 0, 0LL, 0LL);
        goto LABEL_32;
      }
      _m_prefetchw(v15);
      v16 = *((_QWORD *)v15 + 1);
      v17 = 0;
      v18 = (unsigned __int16)(*(_DWORD *)(v12 + 12) >> 8);
      v19 = *(_QWORD *)(**(_QWORD **)v15 + 24LL);
      v20 = qword_18015BFE8 ^ v19 ^ v16 ^ *(_DWORD *)(v16 + 24);
      if ( v16 + (unsigned int)v18 * HIWORD(v20) + (unsigned __int16)v20 != v12 )
      {
        sub_1800A4DFC(3, *(_QWORD *)(v19 + 24), v12, 0, 0LL, 0LL);
        goto LABEL_32;
      }
      CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
      v22 = 0LL;
      if ( CurrentServiceSessionId )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        sub_1800FFB4C(*(_QWORD *)(v19 + 24), v13 + 16, 2LL, 0LL);
        v22 = 0LL;
      }
      v24 = 0;
      v25 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      do
      {
        v26 = v15[8];
        if ( v26 >= 0 && v26 == _InterlockedCompareExchange(v15 + 8, v26 | 0x80000000, v26) )
          goto LABEL_28;
        ++v24;
      }
      while ( v24 <= v25 );
      v26 = -1;
LABEL_28:
      *(_BYTE *)(v13 + 15) = 0x80;
      v27 = (_SLIST_HEADER *)(v15 + 4);
      if ( v26 == -1 )
      {
        RtlInterlockedPushEntrySList_0(v27, (PSLIST_ENTRY)(v13 + 16));
        goto LABEL_32;
      }
      _bittestandreset64(*(signed __int64 **)(v16 + 40), v18);
      if ( LOWORD(v27->Alignment) )
      {
        v49 = RtlInterlockedFlushSList_0(v27);
        while ( v49 )
        {
          v50 = *((_DWORD *)&v49[-1].Next + 3);
          ++v17;
          v49 = v49->Next;
          v18 = (unsigned __int16)(v50 >> 8);
          _bittestandreset64(*(signed __int64 **)(v16 + 40), v18);
        }
      }
      v28 = *(_QWORD *)v15;
      v29 = (_DWORD)v18 << 16;
      if ( ((unsigned __int16)v29 | (unsigned __int16)(v17 + v26 + 1)) == *((_WORD *)v15 + 20) )
      {
        v22 = *(unsigned int *)(v28 + 168);
        v30 = *(unsigned int *)(*(_QWORD *)v28 + 32LL);
        if ( *(_DWORD *)(v28 + 164) != 1
          || (unsigned int)v30 < (unsigned int)v22
          || (v30 = (unsigned int)(v30 - v22), (unsigned int)v30 >= *(_DWORD *)(*(_QWORD *)v28 + 36LL)) )
        {
          v31 = *(__int64 **)v15;
          v32 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v15 + 8LL), 0LL);
          if ( v32 )
          {
            _m_prefetchw((const void *)(v32 + 11));
            if ( _InterlockedAnd(v32 + 11, 0xFFFFFFF9) == 6 )
            {
              v35 = **(_SLIST_HEADER ***)v32;
              *(_QWORD *)v32 = 0LL;
LABEL_85:
              v36 = (_SLIST_ENTRY *)(v32 + 12);
LABEL_48:
              RtlInterlockedPushEntrySList_0(v35, v36);
            }
            else if ( (unsigned __int8)sub_180023688(v31, v32, v28, v22) )
            {
              while ( 1 )
              {
                v33 = *((_DWORD *)v32 + 11);
                if ( !v33 || (v33 & 2) != 0 )
                  break;
                if ( v33 == _InterlockedCompareExchange(v32 + 11, v33 | 2, v33) )
                {
                  v34 = *(_SLIST_HEADER ***)v32;
                  v22 = 0LL;
                  while ( 1 )
                  {
                    v28 = ((_BYTE)v22 + (unsigned __int8)*((_WORD *)v34 + 87)) & 0xF;
                    v30 = (signed __int64)v34[v28 + 2];
                    if ( v30 )
                    {
                      if ( (*(_DWORD *)(v30 + 44) & 1) == 0
                        && v30 == _InterlockedCompareExchange64(
                                    (volatile signed __int64 *)&v34[v28 + 2],
                                    (signed __int64)v32,
                                    v30) )
                      {
                        _m_prefetchw((const void *)(v30 + 44));
                        if ( _InterlockedAnd((volatile signed __int32 *)(v30 + 44), 0xFFFFFFFD) != 2 )
                          goto LABEL_49;
                        v35 = **(_SLIST_HEADER ***)v30;
                        *(_QWORD *)v30 = 0LL;
                        v36 = (_SLIST_ENTRY *)(v30 + 48);
                        goto LABEL_48;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&v34[v28 + 2],
                                 (signed __int64)v32,
                                 0LL) )
                    {
                      goto LABEL_49;
                    }
                    v22 = (unsigned int)(v22 + 1);
                    if ( (unsigned int)v22 >= 0x10 )
                    {
                      v35 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)v32 + 24LL)
                                                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)v32 + 172LL)
                                                        + 1192)
                                            + 144LL);
                      goto LABEL_85;
                    }
                  }
                }
              }
            }
          }
LABEL_49:
          v37 = *v31;
          v38 = *(_QWORD *)v15;
          v39 = *(_QWORD *)(v37 + 24);
          if ( (*((_BYTE *)v15 + 38) & 3) != 0 )
          {
            BaseAddress = (PVOID)((*((_QWORD *)v15 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
            v51 = sub_18008AEA0(v15, v30, v28, v22);
            v52 = *(void **)(v39 + 24);
            RegionSize = 16 * v51 * (unsigned __int64)*((unsigned __int16 *)v15 + 20);
            v53 = sub_18001E548(v52);
            ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, v53, &OldProtect);
          }
          *(_DWORD *)(*((_QWORD *)v15 + 1) + 20LL) = 0;
          sub_180022088(v39, *((_QWORD *)v15 + 1), v28, v22);
          v40 = -*((unsigned __int16 *)v15 + 20);
          do
          {
            v41 = *(_QWORD *)(v38 + 160);
            LODWORD(v68) = v41 + v40;
            if ( v40 > 0 )
              v42 = HIDWORD(v41) + 1;
            else
              v42 = HIDWORD(v41) - 1;
            HIDWORD(v68) = v42;
          }
          while ( v41 != _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 160), v68, v41) );
          *((_QWORD *)v15 + 1) = 0LL;
          _InterlockedAdd((volatile signed __int32 *)(v39 + 60), 1u);
          v15[8] = 0;
          _m_prefetchw(v15 + 11);
          if ( _InterlockedAnd(v15 + 11, 0xFFFFFFFE) == 1 )
          {
            v43 = **(_SLIST_HEADER ***)v15;
            *(_QWORD *)v15 = 0LL;
LABEL_57:
            v44 = (_SLIST_ENTRY *)(v15 + 12);
LABEL_58:
            RtlInterlockedPushEntrySList_0(v43, v44);
          }
          goto LABEL_32;
        }
      }
      v15[8] = v29 | (v17 + (unsigned __int16)v26 + 1);
      if ( (v15[11] & 2) != 0 || !(unsigned __int8)sub_180023688(v28, v15, v28, v22) )
        goto LABEL_32;
      do
      {
        v54 = v15[11];
        if ( !v54 || (v54 & 2) != 0 )
          goto LABEL_32;
      }
      while ( v54 != _InterlockedCompareExchange(v15 + 11, v54 | 2, v54) );
      v55 = *(_QWORD *)v15;
      v56 = 0;
      while ( 1 )
      {
        v57 = ((_BYTE)v56 + (unsigned __int8)*(_WORD *)(v55 + 174)) & 0xF;
        v58 = *(_QWORD ***)(v55 + 8 * v57 + 16);
        if ( v58 )
        {
          if ( (*((_DWORD *)v58 + 11) & 1) == 0
            && v58 == (_QWORD **)_InterlockedCompareExchange64(
                                   (volatile signed __int64 *)(v55 + 8 * v57 + 16),
                                   (signed __int64)v15,
                                   (signed __int64)v58) )
          {
            _m_prefetchw((char *)v58 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v58 + 11, 0xFFFFFFFD) == 2 )
            {
              v43 = (_SLIST_HEADER *)**v58;
              *v58 = 0LL;
              v44 = (_SLIST_ENTRY *)(v58 + 6);
              goto LABEL_58;
            }
LABEL_32:
            v3 = v60;
LABEL_8:
            if ( ++v4 >= v64 )
            {
              v2 = v66;
              break;
            }
            goto LABEL_4;
          }
        }
        else if ( !_InterlockedCompareExchange64(
                     (volatile signed __int64 *)(v55 + 8 * v57 + 16),
                     (signed __int64)v15,
                     0LL) )
        {
          goto LABEL_32;
        }
        if ( (unsigned int)++v56 >= 0x10 )
        {
          v43 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)v15 + 24LL)
                                            + 8LL * *(unsigned __int16 *)(*(_QWORD *)v15 + 172LL)
                                            + 1192)
                                + 144LL);
          goto LABEL_57;
        }
      }
    }
    ++v2;
    ++v3;
    v66 = v2;
    v60 = v3;
  }
  while ( v2 < 0x81 );
  v6 = 12LL;
  v7 = a1 + 96;
  v65 = 12LL;
  do
  {
    v8 = 0;
    v9 = RtlInterlockedFlushSList_0((PSLIST_HEADER)v7);
    v10 = v61;
    p_Next = &v9->Next;
    if ( v9 )
    {
      do
      {
        v45 = p_Next;
        p_Next = (_QWORD *)*p_Next;
        v46 = 1LL << *((_BYTE *)v45 + 16);
        if ( v46 > 0xF0000 )
          v46 = 983040LL;
        v47 = v46 + *((unsigned __int16 *)v45 + 9);
        v10 += v47;
        sub_180006E54(*(PVOID *)(a1 + 24), v45);
        ++v8;
        LODWORD(v9) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v9 )
        {
          v9 = (PSLIST_ENTRY)NtCurrentPeb();
          v48 = (__int64)&v9[9].Next[34].Next + 6;
        }
        else
        {
          v48 = 2147353472LL;
        }
        if ( *(_BYTE *)v48 )
        {
          v9 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v9[55].Next + 1) & 1) != 0 )
          {
            sub_1800FFDB0(*(_QWORD *)(a1 + 24), v45, v47, 0LL);
            LODWORD(v9) = sub_1800FFE58(*(_QWORD *)(a1 + 24), v45, v47, 0LL);
          }
        }
      }
      while ( p_Next );
      v6 = v65;
      v61 = v10;
      if ( v8 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 16), -v8);
    }
    v7 += 48LL;
    v65 = --v6;
  }
  while ( v6 );
  if ( v10 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v10);
  return (int)v9;
}
