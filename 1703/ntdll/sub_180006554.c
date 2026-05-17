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

PSLIST_ENTRY __fastcall sub_180006554(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  unsigned int v4; // r12d
  _DWORD *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdi
  int v8; // ebx
  PSLIST_ENTRY result; // rax
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
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // r8d
  signed __int32 v24; // ebx
  union _SLIST_HEADER *v25; // rcx
  unsigned __int64 v26; // r8
  int v27; // ebp
  __int64 v28; // r9
  signed __int64 v29; // rdx
  __int64 *v30; // rsi
  volatile signed __int32 *v31; // rbx
  signed __int32 v32; // eax
  union _SLIST_HEADER **v33; // rcx
  union _SLIST_HEADER *v34; // rcx
  struct _SLIST_ENTRY *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rbx
  int v39; // edx
  signed __int64 v40; // rax
  int v41; // ecx
  union _SLIST_HEADER *v42; // rcx
  struct _SLIST_ENTRY *v43; // rdx
  _QWORD *v44; // rbp
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r14
  __int64 v47; // rcx
  PSLIST_ENTRY v48; // rax
  unsigned int v49; // edx
  unsigned __int16 v50; // ax
  __int64 v51; // rcx
  unsigned int v52; // eax
  signed __int32 v53; // eax
  __int64 v54; // rcx
  int v55; // r9d
  __int64 v56; // r8
  _QWORD **v57; // rdx
  __int64 v58; // [rsp+30h] [rbp-68h]
  __int64 v59; // [rsp+38h] [rbp-60h]
  unsigned __int64 v60; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v61[10]; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v62; // [rsp+A0h] [rbp+8h]
  __int64 v63; // [rsp+A0h] [rbp+8h]
  unsigned int v64; // [rsp+A8h] [rbp+10h]
  char v65; // [rsp+B0h] [rbp+18h] BYREF
  signed __int64 v66; // [rsp+B8h] [rbp+20h]

  v2 = 0;
  v59 = 0LL;
  v3 = 0LL;
  v64 = 0;
  v58 = 0LL;
  do
  {
    v4 = 0;
    if ( (*(_BYTE *)(a1 + 4 * v3 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v62 = 1;
      goto LABEL_4;
    }
    v62 = dword_1801593E0;
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
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v21 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      else
        v21 = 2147353472LL;
      if ( *(_BYTE *)v21 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FFB4C(*(_QWORD *)(v19 + 24), v13 + 16, 2LL, 0LL);
      v22 = 0;
      v23 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      do
      {
        v24 = v15[8];
        if ( v24 >= 0 && v24 == _InterlockedCompareExchange(v15 + 8, v24 | 0x80000000, v24) )
          goto LABEL_28;
        ++v22;
      }
      while ( v22 <= v23 );
      v24 = -1;
LABEL_28:
      *(_BYTE *)(v13 + 15) = 0x80;
      v25 = (union _SLIST_HEADER *)(v15 + 4);
      if ( v24 == -1 )
      {
        RtlInterlockedPushEntrySList_0(v25, (PSLIST_ENTRY)(v13 + 16));
        goto LABEL_32;
      }
      _bittestandreset64(*(signed __int64 **)(v16 + 40), v18);
      if ( LOWORD(v25->Alignment) )
      {
        v48 = RtlInterlockedFlushSList_0(v25);
        while ( v48 )
        {
          v49 = *((_DWORD *)&v48[-1].Next + 3);
          ++v17;
          v48 = v48->Next;
          v18 = (unsigned __int16)(v49 >> 8);
          _bittestandreset64(*(signed __int64 **)(v16 + 40), v18);
        }
      }
      v26 = *(_QWORD *)v15;
      v27 = (_DWORD)v18 << 16;
      if ( ((unsigned __int16)v27 | (unsigned __int16)(v17 + v24 + 1)) == *((_WORD *)v15 + 20) )
      {
        v28 = *(unsigned int *)(v26 + 168);
        v29 = *(unsigned int *)(*(_QWORD *)v26 + 32LL);
        if ( *(_DWORD *)(v26 + 164) != 1
          || (unsigned int)v29 < (unsigned int)v28
          || (v29 = (unsigned int)(v29 - v28), (unsigned int)v29 >= *(_DWORD *)(*(_QWORD *)v26 + 36LL)) )
        {
          v30 = *(__int64 **)v15;
          v31 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v15 + 8LL), 0LL);
          if ( v31 )
          {
            _m_prefetchw((const void *)(v31 + 11));
            if ( _InterlockedAnd(v31 + 11, 0xFFFFFFF9) == 6 )
            {
              v34 = **(union _SLIST_HEADER ***)v31;
              *(_QWORD *)v31 = 0LL;
LABEL_85:
              v35 = (struct _SLIST_ENTRY *)(v31 + 12);
LABEL_48:
              RtlInterlockedPushEntrySList_0(v34, v35);
            }
            else if ( (unsigned __int8)sub_180023688(v30, v31) )
            {
              while ( 1 )
              {
                v32 = *((_DWORD *)v31 + 11);
                if ( !v32 || (v32 & 2) != 0 )
                  break;
                if ( v32 == _InterlockedCompareExchange(v31 + 11, v32 | 2, v32) )
                {
                  v33 = *(union _SLIST_HEADER ***)v31;
                  v28 = 0LL;
                  while ( 1 )
                  {
                    v26 = ((_BYTE)v28 + (unsigned __int8)*((_WORD *)v33 + 87)) & 0xF;
                    v29 = (signed __int64)v33[v26 + 2];
                    if ( v29 )
                    {
                      if ( (*(_DWORD *)(v29 + 44) & 1) == 0
                        && v29 == _InterlockedCompareExchange64(
                                    (volatile signed __int64 *)&v33[v26 + 2],
                                    (signed __int64)v31,
                                    v29) )
                      {
                        _m_prefetchw((const void *)(v29 + 44));
                        if ( _InterlockedAnd((volatile signed __int32 *)(v29 + 44), 0xFFFFFFFD) != 2 )
                          goto LABEL_49;
                        v34 = **(union _SLIST_HEADER ***)v29;
                        *(_QWORD *)v29 = 0LL;
                        v35 = (struct _SLIST_ENTRY *)(v29 + 48);
                        goto LABEL_48;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&v33[v26 + 2],
                                 (signed __int64)v31,
                                 0LL) )
                    {
                      goto LABEL_49;
                    }
                    v28 = (unsigned int)(v28 + 1);
                    if ( (unsigned int)v28 >= 0x10 )
                    {
                      v34 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)v31 + 24LL)
                                                              + 8LL * *(unsigned __int16 *)(*(_QWORD *)v31 + 172LL)
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
          v36 = *v30;
          v37 = *(_QWORD *)v15;
          v38 = *(_QWORD *)(v36 + 24);
          if ( (*((_BYTE *)v15 + 38) & 3) != 0 )
          {
            v61[0] = (*((_QWORD *)v15 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL;
            v50 = sub_18008AEA0(v15, v29, v26, v28);
            v51 = *(_QWORD *)(v38 + 24);
            v60 = 16 * v50 * (unsigned __int64)*((unsigned __int16 *)v15 + 20);
            v52 = sub_18001E548(v51, 1LL);
            ZwProtectVirtualMemory(-1LL, v61, &v60, v52, &v65);
          }
          *(_DWORD *)(*((_QWORD *)v15 + 1) + 20LL) = 0;
          sub_180022088(v38, *((_QWORD *)v15 + 1), v26, v28);
          v39 = -*((unsigned __int16 *)v15 + 20);
          do
          {
            v40 = *(_QWORD *)(v37 + 160);
            LODWORD(v66) = v40 + v39;
            if ( v39 > 0 )
              v41 = HIDWORD(v40) + 1;
            else
              v41 = HIDWORD(v40) - 1;
            HIDWORD(v66) = v41;
          }
          while ( v40 != _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 160), v66, v40) );
          *((_QWORD *)v15 + 1) = 0LL;
          _InterlockedAdd((volatile signed __int32 *)(v38 + 60), 1u);
          v15[8] = 0;
          _m_prefetchw(v15 + 11);
          if ( _InterlockedAnd(v15 + 11, 0xFFFFFFFE) == 1 )
          {
            v42 = **(union _SLIST_HEADER ***)v15;
            *(_QWORD *)v15 = 0LL;
LABEL_57:
            v43 = (struct _SLIST_ENTRY *)(v15 + 12);
LABEL_58:
            RtlInterlockedPushEntrySList_0(v42, v43);
          }
          goto LABEL_32;
        }
      }
      v15[8] = v27 | (v17 + (unsigned __int16)v24 + 1);
      if ( (v15[11] & 2) != 0 || !(unsigned __int8)sub_180023688(v26, v15) )
        goto LABEL_32;
      do
      {
        v53 = v15[11];
        if ( !v53 || (v53 & 2) != 0 )
          goto LABEL_32;
      }
      while ( v53 != _InterlockedCompareExchange(v15 + 11, v53 | 2, v53) );
      v54 = *(_QWORD *)v15;
      v55 = 0;
      while ( 1 )
      {
        v56 = ((_BYTE)v55 + (unsigned __int8)*(_WORD *)(v54 + 174)) & 0xF;
        v57 = *(_QWORD ***)(v54 + 8 * v56 + 16);
        if ( v57 )
        {
          if ( (*((_DWORD *)v57 + 11) & 1) == 0
            && v57 == (_QWORD **)_InterlockedCompareExchange64(
                                   (volatile signed __int64 *)(v54 + 8 * v56 + 16),
                                   (signed __int64)v15,
                                   (signed __int64)v57) )
          {
            _m_prefetchw((char *)v57 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v57 + 11, 0xFFFFFFFD) == 2 )
            {
              v42 = (union _SLIST_HEADER *)**v57;
              *v57 = 0LL;
              v43 = (struct _SLIST_ENTRY *)(v57 + 6);
              goto LABEL_58;
            }
LABEL_32:
            v3 = v58;
LABEL_8:
            if ( ++v4 >= v62 )
            {
              v2 = v64;
              break;
            }
            goto LABEL_4;
          }
        }
        else if ( !_InterlockedCompareExchange64(
                     (volatile signed __int64 *)(v54 + 8 * v56 + 16),
                     (signed __int64)v15,
                     0LL) )
        {
          goto LABEL_32;
        }
        if ( (unsigned int)++v55 >= 0x10 )
        {
          v42 = (union _SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)v15 + 24LL)
                                                  + 8LL * *(unsigned __int16 *)(*(_QWORD *)v15 + 172LL)
                                                  + 1192)
                                      + 144LL);
          goto LABEL_57;
        }
      }
    }
    ++v2;
    ++v3;
    v64 = v2;
    v58 = v3;
  }
  while ( v2 < 0x81 );
  v6 = 12LL;
  v7 = a1 + 96;
  v63 = 12LL;
  do
  {
    v8 = 0;
    result = RtlInterlockedFlushSList_0((PSLIST_HEADER)v7);
    v10 = v59;
    p_Next = &result->Next;
    if ( result )
    {
      do
      {
        v44 = p_Next;
        p_Next = (_QWORD *)*p_Next;
        v45 = 1LL << *((_BYTE *)v44 + 16);
        if ( v45 > 0xF0000 )
          v45 = 983040LL;
        v46 = v45 + *((unsigned __int16 *)v44 + 9);
        v10 += v46;
        sub_180006E54(*(_QWORD *)(a1 + 24), v44);
        ++v8;
        result = (PSLIST_ENTRY)RtlGetCurrentServiceSessionId();
        if ( (_DWORD)result )
        {
          result = (PSLIST_ENTRY)NtCurrentPeb();
          v47 = (__int64)&result[9].Next[34].Next + 6;
        }
        else
        {
          v47 = 2147353472LL;
        }
        if ( *(_BYTE *)v47 )
        {
          result = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&result[55].Next + 1) & 1) != 0 )
          {
            sub_1800FFDB0(*(_QWORD *)(a1 + 24), v44, v46, 0LL);
            result = (PSLIST_ENTRY)sub_1800FFE58(*(_QWORD *)(a1 + 24), v44, v46, 0LL);
          }
        }
      }
      while ( p_Next );
      v6 = v63;
      v59 = v10;
      if ( v8 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 16), -v8);
    }
    v7 += 48LL;
    v63 = --v6;
  }
  while ( v6 );
  if ( v10 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v10);
  return result;
}
