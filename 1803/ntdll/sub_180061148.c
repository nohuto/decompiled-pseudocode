/*
 * XREFs of sub_180061148 @ 0x180061148
 * Callers:
 *     sub_180060E04 @ 0x180060E04 (sub_180060E04.c)
 * Callees:
 *     sub_180013AC8 @ 0x180013AC8 (sub_180013AC8.c)
 *     sub_180014FCC @ 0x180014FCC (sub_180014FCC.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_180061610 @ 0x180061610 (sub_180061610.c)
 *     sub_180061A7C @ 0x180061A7C (sub_180061A7C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x18009E590 (RtlInterlockedPushEntrySList_0.c)
 *     RtlInterlockedFlushSList_0 @ 0x18009E5D0 (RtlInterlockedFlushSList_0.c)
 *     sub_1800FE3BC @ 0x1800FE3BC (sub_1800FE3BC.c)
 *     sub_1800FE73C @ 0x1800FE73C (sub_1800FE73C.c)
 *     sub_1800FE7E4 @ 0x1800FE7E4 (sub_1800FE7E4.c)
 *     sub_180102758 @ 0x180102758 (sub_180102758.c)
 */

int __fastcall sub_180061148(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // r12
  unsigned int v5; // ebp
  _DWORD *v6; // rbx
  _SLIST_HEADER *v7; // rdi
  __int64 v8; // r15
  int v9; // ebx
  PSLIST_ENTRY v10; // rax
  _QWORD *p_Next; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  _DWORD *v15; // rdi
  __int64 v16; // r14
  int v17; // r15d
  unsigned __int64 v18; // rbp
  __int64 v19; // rbx
  __int64 UserModeGlobalLogger; // rcx
  unsigned int v21; // edx
  unsigned int v22; // r8d
  signed __int32 v23; // ebx
  _SLIST_HEADER **v24; // r8
  __int64 v25; // r9
  signed __int64 Alignment_low; // rdx
  __int64 *v27; // rsi
  volatile signed __int32 *v28; // rbx
  signed __int32 v29; // eax
  __int64 v30; // rcx
  _SLIST_HEADER *v31; // rcx
  _SLIST_ENTRY *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rbx
  int v36; // edx
  signed __int64 v37; // rax
  _QWORD *v38; // rbp
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r14
  __int64 v41; // rcx
  PSLIST_ENTRY v42; // rax
  unsigned int v43; // edx
  unsigned __int16 v44; // ax
  _DWORD *v45; // rcx
  ULONG v46; // eax
  _SLIST_HEADER *v47; // rcx
  _SLIST_ENTRY *v48; // rdx
  signed __int32 v49; // eax
  __int64 v50; // r8
  int v51; // r9d
  __int64 v52; // rcx
  _QWORD **v53; // rdx
  __int64 v55; // [rsp+30h] [rbp-68h]
  signed __int64 v56; // [rsp+38h] [rbp-60h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v59; // [rsp+A0h] [rbp+8h]
  _SLIST_HEADER *v60; // [rsp+A0h] [rbp+8h]
  unsigned int v61; // [rsp+A8h] [rbp+10h]
  __int64 v62; // [rsp+A8h] [rbp+10h]
  unsigned int v63; // [rsp+B0h] [rbp+18h]
  ULONG OldProtect; // [rsp+B8h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  v63 = 0;
  v55 = 0LL;
  do
  {
    if ( (*(_BYTE *)(a1 + 4 * v3 + 679) & 1) == 0 || (*(_BYTE *)(a1 + 672) & 1) != 0 )
    {
      v61 = 1;
LABEL_4:
      v5 = 0;
      v59 = 0;
LABEL_5:
      if ( v5 )
        v6 = (_DWORD *)(*(_QWORD *)(a1 + 8 * v3 + 2224) + 192LL * v5 - 192);
      else
        v6 = *(_DWORD **)(a1 + 8 * v3 + 1192);
      if ( !v6 || v6[41] != 1 )
        goto LABEL_8;
      v12 = sub_180061610(v6, v5);
      v13 = v12;
      if ( !v12 )
        goto LABEL_33;
      *(_DWORD *)(*(_QWORD *)v6 + 36LL) = 0;
      v14 = *(_QWORD *)(a1 + 24);
      if ( (unsigned __int16)v14 ^ (unsigned __int16)(qword_18015D458 ^ *(_WORD *)(v12 + 8) ^ (v12 >> 4))
        || (v15 = *(_DWORD **)(v12
                             - ((unsigned __int64)((unsigned int)v14 ^ (unsigned int)qword_18015D458 ^ *(_DWORD *)(v12 + 8) ^ (unsigned int)(v12 >> 4)) >> 12))) == 0LL )
      {
        sub_18009A5F0(3, v14, v12, 0, 0LL, 0LL);
        goto LABEL_33;
      }
      _m_prefetchw(v15);
      v16 = *((_QWORD *)v15 + 1);
      v17 = 0;
      v18 = (unsigned __int16)(*(_DWORD *)(v12 + 12) >> 8);
      v19 = *(_QWORD *)(**(_QWORD **)v15 + 24LL);
      if ( v16
         + (unsigned int)v18
         * (((unsigned int)qword_18015D458 ^ (unsigned int)v16 ^ (unsigned int)v19 ^ *(_DWORD *)(v16 + 24)) >> 16)
         + (unsigned __int16)(qword_18015D458 ^ v16 ^ v19 ^ *(_WORD *)(v16 + 24)) != v12 )
      {
        sub_18009A5F0(3, *(_QWORD *)(v19 + 24), v12, 0, 0LL, 0LL);
        goto LABEL_32;
      }
      if ( RtlGetCurrentServiceSessionId() )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FE3BC(*(_QWORD *)(v19 + 24), v13 + 16, 2LL);
      v21 = 0;
      v22 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      do
      {
        v23 = v15[8];
        if ( v23 >= 0 && v23 == _InterlockedCompareExchange(v15 + 8, v23 | 0x80000000, v23) )
          goto LABEL_28;
        ++v21;
      }
      while ( v21 <= v22 );
      v23 = -1;
LABEL_28:
      *(_BYTE *)(v13 + 15) = 0x80;
      if ( v23 == -1 )
      {
        RtlInterlockedPushEntrySList_0((PSLIST_HEADER)v15 + 1, (PSLIST_ENTRY)(v13 + 16));
        goto LABEL_32;
      }
      _bittestandreset64(*(signed __int64 **)(v16 + 40), v18);
      if ( *((_WORD *)v15 + 8) )
      {
        v42 = RtlInterlockedFlushSList_0((PSLIST_HEADER)v15 + 1);
        while ( v42 )
        {
          v43 = *((_DWORD *)&v42[-1].Next + 3);
          ++v17;
          v42 = v42->Next;
          v18 = (unsigned __int16)(v43 >> 8);
          _bittestandreset64(*(signed __int64 **)(v16 + 40), v18);
        }
      }
      v24 = *(_SLIST_HEADER ***)v15;
      if ( (_WORD)v17 + (_WORD)v23 + 1 == *((_WORD *)v15 + 20) )
      {
        v25 = *((unsigned int *)v24 + 42);
        Alignment_low = LODWORD((*v24)[2].Alignment);
        if ( *((_DWORD *)v24 + 41) != 1
          || (unsigned int)Alignment_low < (unsigned int)v25
          || (Alignment_low = (unsigned int)(Alignment_low - v25),
              (unsigned int)Alignment_low >= *((_DWORD *)&(*v24)[2].HeaderX64 + 1)) )
        {
          v27 = *(__int64 **)v15;
          v28 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v15 + 8LL), 0LL);
          if ( v28 )
          {
            _m_prefetchw((const void *)(v28 + 11));
            if ( _InterlockedAnd(v28 + 11, 0xFFFFFFF9) == 6 )
            {
              v31 = **(_SLIST_HEADER ***)v28;
              *(_QWORD *)v28 = 0LL;
LABEL_83:
              v32 = (_SLIST_ENTRY *)(v28 + 12);
LABEL_53:
              RtlInterlockedPushEntrySList_0(v31, v32);
            }
            else if ( sub_180014FCC((__int64)v27, (__int64)v28) )
            {
              while ( 1 )
              {
                v29 = *((_DWORD *)v28 + 11);
                if ( !v29 || (v29 & 2) != 0 )
                  break;
                if ( v29 == _InterlockedCompareExchange(v28 + 11, v29 | 2, v29) )
                {
                  v24 = *(_SLIST_HEADER ***)v28;
                  v25 = 0LL;
                  while ( 1 )
                  {
                    v30 = ((_BYTE)v25 + (unsigned __int8)*((_WORD *)v24 + 87)) & 0xF;
                    Alignment_low = (signed __int64)v24[v30 + 2];
                    if ( Alignment_low )
                    {
                      if ( (*(_DWORD *)(Alignment_low + 44) & 1) == 0
                        && Alignment_low == _InterlockedCompareExchange64(
                                              (volatile signed __int64 *)&v24[v30 + 2],
                                              (signed __int64)v28,
                                              Alignment_low) )
                      {
                        _m_prefetchw((const void *)(Alignment_low + 44));
                        if ( _InterlockedAnd((volatile signed __int32 *)(Alignment_low + 44), 0xFFFFFFFD) != 2 )
                          goto LABEL_54;
                        v31 = **(_SLIST_HEADER ***)Alignment_low;
                        *(_QWORD *)Alignment_low = 0LL;
                        v32 = (_SLIST_ENTRY *)(Alignment_low + 48);
                        goto LABEL_53;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&v24[v30 + 2],
                                 (signed __int64)v28,
                                 0LL) )
                    {
                      goto LABEL_54;
                    }
                    v25 = (unsigned int)(v25 + 1);
                    if ( (unsigned int)v25 >= 0x10 )
                    {
                      v31 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)v28 + 24LL)
                                                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)v28 + 172LL)
                                                        + 1192)
                                            + 144LL);
                      goto LABEL_83;
                    }
                  }
                }
              }
            }
          }
LABEL_54:
          v33 = *v27;
          v34 = *(_QWORD *)v15;
          v35 = *(_QWORD *)(v33 + 24);
          if ( (*((_BYTE *)v15 + 38) & 3) != 0 )
          {
            BaseAddress = (PVOID)((*((_QWORD *)v15 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
            v44 = sub_180102758(v15, Alignment_low, v24, v25);
            v45 = *(_DWORD **)(v35 + 24);
            RegionSize = 16 * v44 * (unsigned __int64)*((unsigned __int16 *)v15 + 20);
            v46 = sub_18002AE30(v45, 1);
            ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, v46, &OldProtect);
          }
          *(_DWORD *)(*((_QWORD *)v15 + 1) + 20LL) = 0;
          sub_180013AC8(v35, *((__int64 **)v15 + 1));
          v36 = -*((unsigned __int16 *)v15 + 20);
          do
          {
            v37 = *(_QWORD *)(v34 + 160);
            LODWORD(v56) = v37 + v36;
            HIDWORD(v56) = HIDWORD(v37) - 1;
          }
          while ( v37 != _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 160), v56, v37) );
          *((_QWORD *)v15 + 1) = 0LL;
          _InterlockedAdd((volatile signed __int32 *)(v35 + 60), 1u);
          v15[8] = 0;
          _m_prefetchw(v15 + 11);
          if ( _InterlockedAnd(v15 + 11, 0xFFFFFFFE) == 1 )
          {
            v47 = **(_SLIST_HEADER ***)v15;
            *(_QWORD *)v15 = 0LL;
LABEL_84:
            v48 = (_SLIST_ENTRY *)(v15 + 12);
LABEL_85:
            RtlInterlockedPushEntrySList_0(v47, v48);
          }
          goto LABEL_32;
        }
      }
      v15[8] = ((_DWORD)v18 << 16) | (v17 + (unsigned __int16)v23 + 1);
      if ( (v15[11] & 2) != 0 || !sub_180014FCC((__int64)v24, (__int64)v15) )
        goto LABEL_32;
      do
      {
        v49 = v15[11];
        if ( !v49 || (v49 & 2) != 0 )
          goto LABEL_32;
      }
      while ( v49 != _InterlockedCompareExchange(v15 + 11, v49 | 2, v49) );
      v50 = *(_QWORD *)v15;
      v51 = 0;
      while ( 1 )
      {
        v52 = ((_BYTE)v51 + (unsigned __int8)*(_WORD *)(v50 + 174)) & 0xF;
        v53 = *(_QWORD ***)(v50 + 8 * v52 + 16);
        if ( v53 )
        {
          if ( (*((_DWORD *)v53 + 11) & 1) == 0
            && v53 == (_QWORD **)_InterlockedCompareExchange64(
                                   (volatile signed __int64 *)(v50 + 8 * v52 + 16),
                                   (signed __int64)v15,
                                   (signed __int64)v53) )
          {
            _m_prefetchw((char *)v53 + 44);
            if ( _InterlockedAnd((volatile signed __int32 *)v53 + 11, 0xFFFFFFFD) == 2 )
            {
              v47 = (_SLIST_HEADER *)**v53;
              *v53 = 0LL;
              v48 = (_SLIST_ENTRY *)(v53 + 6);
              goto LABEL_85;
            }
LABEL_32:
            v5 = v59;
LABEL_33:
            v3 = v55;
LABEL_8:
            v59 = ++v5;
            if ( v5 >= v61 )
            {
              v2 = v63;
              goto LABEL_10;
            }
            goto LABEL_5;
          }
        }
        else if ( !_InterlockedCompareExchange64(
                     (volatile signed __int64 *)(v50 + 8 * v52 + 16),
                     (signed __int64)v15,
                     0LL) )
        {
          goto LABEL_32;
        }
        if ( (unsigned int)++v51 >= 0x10 )
        {
          v47 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)v15 + 24LL)
                                            + 8LL * *(unsigned __int16 *)(*(_QWORD *)v15 + 172LL)
                                            + 1192)
                                + 144LL);
          goto LABEL_84;
        }
      }
    }
    v61 = qword_18015A580[0];
    if ( LODWORD(qword_18015A580[0]) )
      goto LABEL_4;
LABEL_10:
    ++v2;
    ++v3;
    v63 = v2;
    v55 = v3;
  }
  while ( v2 < 0x81 );
  v7 = (_SLIST_HEADER *)(a1 + 96);
  v8 = 12LL;
  v60 = (_SLIST_HEADER *)(a1 + 96);
  v62 = 12LL;
  do
  {
    v9 = 0;
    v10 = RtlInterlockedFlushSList_0(v7);
    p_Next = &v10->Next;
    if ( v10 )
    {
      do
      {
        v38 = p_Next;
        p_Next = (_QWORD *)*p_Next;
        v39 = 1LL << *((_BYTE *)v38 + 16);
        if ( v39 > 0xF0000 )
          v39 = 983040LL;
        v40 = v39 + *((unsigned __int16 *)v38 + 9);
        v4 += v40;
        sub_180061A7C(*(PVOID *)(a1 + 24), v38);
        ++v9;
        LODWORD(v10) = RtlGetCurrentServiceSessionId();
        if ( (_DWORD)v10 )
        {
          v10 = (PSLIST_ENTRY)NtCurrentPeb();
          v41 = (__int64)&v10[9].Next[34].Next + 6;
        }
        else
        {
          v41 = 2147353472LL;
        }
        if ( *(_BYTE *)v41 )
        {
          v10 = (PSLIST_ENTRY)NtCurrentPeb();
          if ( (*(_BYTE *)(&v10[55].Next + 1) & 1) != 0 )
          {
            sub_1800FE73C(*(_QWORD *)(a1 + 24), v38, v40, 0LL);
            LODWORD(v10) = sub_1800FE7E4(*(_QWORD *)(a1 + 24), v38, v40, 0LL);
          }
        }
      }
      while ( p_Next );
      v7 = v60;
      v8 = v62;
      if ( v9 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v60[1], -v9);
    }
    v7 += 3;
    --v8;
    v60 = v7;
    v62 = v8;
  }
  while ( v8 );
  if ( v4 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 72), -v4);
  return (int)v10;
}
