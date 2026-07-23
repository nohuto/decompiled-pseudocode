/*
 * XREFs of sub_180061610 @ 0x180061610
 * Callers:
 *     sub_180061148 @ 0x180061148 (sub_180061148.c)
 * Callees:
 *     sub_180014FCC @ 0x180014FCC (sub_180014FCC.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18001EBF0 @ 0x18001EBF0 (sub_18001EBF0.c)
 *     sub_1800619D4 @ 0x1800619D4 (sub_1800619D4.c)
 *     sub_180061E38 @ 0x180061E38 (sub_180061E38.c)
 *     sub_1800746F8 @ 0x1800746F8 (sub_1800746F8.c)
 *     sub_18007B1B0 @ 0x18007B1B0 (sub_18007B1B0.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     RtlInterlockedPopEntrySList @ 0x18009E550 (RtlInterlockedPopEntrySList.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x18009E590 (RtlInterlockedPushEntrySList_0.c)
 *     RtlInterlockedPushListSList @ 0x18009E600 (RtlInterlockedPushListSList.c)
 *     sub_1800FDEE8 @ 0x1800FDEE8 (sub_1800FDEE8.c)
 *     sub_1800FE5F4 @ 0x1800FE5F4 (sub_1800FE5F4.c)
 */

__int64 __fastcall sub_180061610(__int64 a1, char a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  int v5; // edx
  unsigned int v6; // r8d
  signed __int32 v7; // ebx
  __int64 v8; // r12
  struct _TEB *v9; // r15
  unsigned int v10; // r13d
  unsigned __int16 HeapData_high; // bp
  __int16 v12; // ax
  int v13; // eax
  __int64 v14; // r8
  _SLIST_ENTRY *v16; // rdi
  _QWORD *v17; // rax
  _QWORD *v18; // r15
  unsigned int v19; // ebp
  volatile signed __int64 *v20; // rsi
  unsigned int v21; // r13d
  __int64 v22; // rbx
  _SLIST_HEADER *v23; // rbp
  _SLIST_ENTRY *v24; // rax
  _SLIST_ENTRY *v25; // rbx
  signed __int32 v26; // eax
  _SLIST_ENTRY *v27; // r8
  __int64 UserModeGlobalLogger; // rcx
  unsigned int v29; // r12d
  unsigned int v30; // ebp
  _SLIST_ENTRY *v31; // rbx
  _SLIST_ENTRY *v32; // r15
  _SLIST_HEADER *v33; // r12
  _SLIST_ENTRY *v34; // rsi
  __int16 v35; // ax
  __int64 v36; // rbx
  USHORT *v37; // rcx
  _SLIST_ENTRY *v38; // r15
  _SLIST_HEADER *Next; // rcx
  _SLIST_HEADER *v40; // rcx
  _SLIST_ENTRY *v41; // rax
  _SLIST_HEADER *v42; // rcx
  signed __int32 v43; // eax
  _SLIST_HEADER **v44; // r8
  int v45; // r9d
  __int64 v46; // rcx
  _SLIST_HEADER *v47; // rdx
  _SLIST_HEADER *v48; // rcx
  _SLIST_ENTRY *v49; // rdx
  signed __int32 v50; // eax
  _SLIST_HEADER **v51; // r8
  int v52; // r9d
  __int64 v53; // rcx
  int v54; // [rsp+70h] [rbp+8h]
  __int64 v55; // [rsp+70h] [rbp+8h]

  while ( 1 )
  {
LABEL_1:
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
    {
      v54 = 0;
      v4 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      if ( (*(_DWORD *)(v3 + 32) & 0x80000000) != 0 )
      {
        v36 = *(unsigned __int16 *)(a1 + 172);
        v54 = 1;
        if ( (*(_BYTE *)(v4 + 4 * v36 + 679) & 1) == 0
          && (int)sub_1800746F8(v4, *(unsigned __int8 *)(v4 + 4 * v36 + 678)) >= 0 )
        {
          *(_BYTE *)(v4 + 4 * v36 + 679) |= 1u;
          v37 = RtlGetCurrentServiceSessionId()
              ? NtCurrentPeb()->SharedData->UserModeGlobalLogger
              : (USHORT *)2147353472;
          if ( *(_BYTE *)v37 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
            sub_1800FDEE8(*(_QWORD *)(v4 + 24), *(unsigned __int8 *)(v4 + 4 * v36 + 678));
        }
      }
      v5 = 0;
      v6 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      while ( 1 )
      {
        v7 = *(_DWORD *)(v3 + 32);
        if ( (v7 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v7 )
            goto LABEL_49;
          if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 32), v7 | 0x80000000, v7) )
            break;
        }
        if ( ++v5 > v6 )
        {
          v7 = -1;
          break;
        }
      }
      if ( v7 == -1 )
        goto LABEL_49;
      v8 = *(_QWORD *)(v3 + 8);
      if ( !v8 || *(_QWORD *)v3 != a1 || !(_WORD)v7 )
      {
        *(_DWORD *)(v3 + 32) = v7;
        goto LABEL_49;
      }
      v9 = NtCurrentTeb();
      v10 = byte_180123370[*(unsigned __int16 *)(a1 + 172)];
      HeapData_high = (unsigned __int8)HIWORD(v9->HeapData);
      if ( HeapData_high == HIBYTE(HIWORD(v9->HeapData)) )
      {
        v35 = sub_18001EBF0();
        v12 = (v35 << 8) | (unsigned __int8)(v35 + 1);
      }
      else
      {
        v12 = (unsigned __int8)(HIWORD(v9->HeapData) ^ (HeapData_high + 1)) ^ HIWORD(v9->HeapData);
      }
      HIWORD(v9->HeapData) = v12;
      v13 = sub_1800619D4(v8 + 32, (unsigned int)(v7 >> 16), byte_18015A460[HeapData_high], v10);
      *(_DWORD *)(v3 + 32) = (v13 << 16) | ((unsigned __int16)v7 - 1);
      v14 = v8
          + v13 * (((unsigned int)v4 ^ (unsigned int)qword_18015D458 ^ (unsigned int)v8 ^ *(_DWORD *)(v8 + 24)) >> 16)
          + (unsigned __int16)(v4 ^ qword_18015D458 ^ v8 ^ *(_WORD *)(v8 + 24));
      if ( (*(_BYTE *)(v14 + 15) & 0x3F) != 0 )
      {
        sub_18009A5F0(15, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), v14, 0, 0LL, 0LL);
LABEL_49:
        v14 = 0LL;
      }
      if ( v54 && (unsigned int)(HIDWORD(qword_18015A580[0]) + 1) < LODWORD(qword_18015A580[0]) )
        _InterlockedCompareExchange(
          (_DWORD *)qword_18015A580 + 1,
          2 * (HIDWORD(qword_18015A580[0]) + 1) - 1,
          SHIDWORD(qword_18015A580[0]));
      if ( v14 )
        return v14;
    }
    v55 = *(_QWORD *)a1;
    while ( 1 )
    {
      v16 = 0LL;
LABEL_19:
      v17 = (_QWORD *)(a1 + 16);
      while ( 1 )
      {
        v18 = v17;
        v19 = 0;
        v20 = 0LL;
        v21 = 0;
        do
        {
          v22 = *v18;
          if ( *v18 )
          {
            v29 = *(unsigned __int16 *)(v22 + 32);
            if ( v29 > v21 && !(unsigned __int8)sub_180061E38(a1, *v18) )
            {
              v16 = (_SLIST_ENTRY *)v22;
              v21 = v29;
              v20 = (volatile signed __int64 *)(a1 + 8 * (v19 + 2LL));
            }
          }
          ++v19;
          ++v18;
        }
        while ( v19 < 0x10 );
        if ( !v20 )
        {
          v16 = 0LL;
          goto LABEL_29;
        }
        v23 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v55 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192) + 144LL);
        while ( 1 )
        {
          v24 = RtlInterlockedPopEntrySList(v23);
          v25 = v24;
          if ( !v24 )
            break;
          v38 = v24;
          v25 = v24 - 3;
          if ( (*((_DWORD *)&v24[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)sub_18007B1B0(v25, a1) )
            {
              RtlInterlockedPushEntrySList_0(v23, v38);
              v25 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)&v25[2].Next + 12);
          if ( _InterlockedAnd((volatile signed __int32 *)&v25[2].Next + 3, 0xFFFFFFFD) == 2 )
          {
            Next = (_SLIST_HEADER *)v25->Next->Next;
            v25->Next = 0LL;
            RtlInterlockedPushEntrySList_0(Next, v24);
          }
        }
        if ( v16 == (_SLIST_ENTRY *)_InterlockedCompareExchange64(v20, (signed __int64)v25, (signed __int64)v16) )
          break;
        v17 = (_QWORD *)(a1 + 16);
        if ( v25 )
        {
          RtlInterlockedPushEntrySList_0(v23, v25 + 3);
          goto LABEL_19;
        }
      }
      if ( !v25 )
        *(_WORD *)(a1 + 174) = (unsigned __int8)(((__int64)v20 - a1 - 16) >> 3);
LABEL_29:
      if ( !v16 )
        break;
      _m_prefetchw((char *)&v16[2].Next + 12);
      if ( _InterlockedAnd((volatile signed __int32 *)&v16[2].Next + 3, 0xFFFFFFFD) != 2 )
        goto LABEL_31;
      v40 = (_SLIST_HEADER *)v16->Next->Next;
      v16->Next = 0LL;
      RtlInterlockedPushEntrySList_0(v40, v16 + 3);
    }
    v30 = 0;
    v31 = 0LL;
    v32 = 0LL;
    v33 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(v55 + 24) + 8LL * *(unsigned __int16 *)(a1 + 172) + 1192) + 144LL);
    v34 = RtlInterlockedPopEntrySList(v33);
    if ( !v34 )
      return 0LL;
    do
    {
      v16 = v34 - 3;
      if ( (*((_DWORD *)&v34[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((char *)&v16[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v16[2].Next + 3, 0xFFFFFFFD) != 2 )
          goto LABEL_84;
LABEL_83:
        v42 = (_SLIST_HEADER *)v16->Next->Next;
        v16->Next = 0LL;
        RtlInterlockedPushEntrySList_0(v42, v34);
        goto LABEL_84;
      }
      if ( (unsigned int)sub_18007B1B0(&v34[-3], a1) )
      {
        _m_prefetchw((char *)&v16[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v16[2].Next + 3, 0xFFFFFFFD) == 2 )
          goto LABEL_83;
        if ( sub_180014FCC(a1, (__int64)&v34[-3]) )
          break;
      }
      else
      {
        v34->Next = v31;
        v41 = v34;
        v31 = v34;
        if ( v30 )
          v41 = v32;
        ++v30;
        v32 = v41;
      }
LABEL_84:
      v16 = 0LL;
      v34 = RtlInterlockedPopEntrySList(v33);
    }
    while ( v34 );
    if ( v30 )
      RtlInterlockedPushListSList(v33, v31, v32, v30);
LABEL_31:
    if ( !v16 )
      return 0LL;
    *((_BYTE *)&v16[2].Next + 11) = a2;
    do
    {
      v26 = *((_DWORD *)&v16[2].Next + 3);
      if ( !v26 || (v26 & 6) != 0 )
        goto LABEL_1;
    }
    while ( v26 != _InterlockedCompareExchange((volatile signed __int32 *)&v16[2].Next + 3, v26 | 6, v26) );
    v27 = v16->Next;
    if ( v16->Next == (_SLIST_ENTRY *)a1 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        sub_1800FE5F4(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL), *((_QWORD *)&v16->Next + 1));
      v16 = (_SLIST_ENTRY *)_InterlockedExchange64((volatile __int64 *)(a1 + 8), (__int64)v16);
      if ( !v16 )
        continue;
      _m_prefetchw((char *)&v16[2].Next + 12);
      if ( _InterlockedAnd((volatile signed __int32 *)&v16[2].Next + 3, 0xFFFFFFF9) != 6 )
      {
        if ( sub_180014FCC(a1, (__int64)v16) )
        {
          while ( 1 )
          {
            v50 = *((_DWORD *)&v16[2].Next + 3);
            if ( !v50 || (v50 & 2) != 0 )
              break;
            if ( v50 == _InterlockedCompareExchange((volatile signed __int32 *)&v16[2].Next + 3, v50 | 2, v50) )
            {
              v51 = (_SLIST_HEADER **)v16->Next;
              v52 = 0;
              while ( 1 )
              {
                v53 = ((_BYTE)v52 + (unsigned __int8)*((_WORD *)v51 + 87)) & 0xF;
                v47 = v51[v53 + 2];
                if ( v47 )
                {
                  if ( (*((_DWORD *)&v47[2].HeaderX64 + 3) & 1) == 0
                    && v47 == (_SLIST_HEADER *)_InterlockedCompareExchange64(
                                                 (volatile signed __int64 *)&v51[v53 + 2],
                                                 (signed __int64)v16,
                                                 (signed __int64)v47) )
                  {
                    goto LABEL_103;
                  }
                }
                else if ( !_InterlockedCompareExchange64(
                             (volatile signed __int64 *)&v51[v53 + 2],
                             (signed __int64)v16,
                             0LL) )
                {
                  goto LABEL_1;
                }
                if ( (unsigned int)++v52 >= 0x10 )
                  goto LABEL_97;
              }
            }
          }
        }
        continue;
      }
      goto LABEL_100;
    }
    _m_prefetchw((char *)&v16[2].Next + 12);
    if ( _InterlockedAnd((volatile signed __int32 *)&v16[2].Next + 3, 0xFFFFFFF9) == 6 )
    {
LABEL_100:
      v48 = (_SLIST_HEADER *)v16->Next->Next;
      v16->Next = 0LL;
LABEL_98:
      v49 = v16 + 3;
LABEL_99:
      RtlInterlockedPushEntrySList_0(v48, v49);
      continue;
    }
    if ( sub_180014FCC((__int64)v27, (__int64)v16) )
    {
      while ( 1 )
      {
        v43 = *((_DWORD *)&v16[2].Next + 3);
        if ( !v43 || (v43 & 2) != 0 )
          break;
        if ( v43 == _InterlockedCompareExchange((volatile signed __int32 *)&v16[2].Next + 3, v43 | 2, v43) )
        {
          v44 = (_SLIST_HEADER **)v16->Next;
          v45 = 0;
          while ( 1 )
          {
            v46 = ((_BYTE)v45 + (unsigned __int8)*((_WORD *)v44 + 87)) & 0xF;
            v47 = v44[v46 + 2];
            if ( v47 )
            {
              if ( (*((_DWORD *)&v47[2].HeaderX64 + 3) & 1) == 0
                && v47 == (_SLIST_HEADER *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)&v44[v46 + 2],
                                             (signed __int64)v16,
                                             (signed __int64)v47) )
              {
LABEL_103:
                _m_prefetchw((char *)&v47[2].HeaderX64 + 12);
                if ( _InterlockedAnd((volatile signed __int32 *)&v47[2].HeaderX64 + 3, 0xFFFFFFFD) == 2 )
                {
                  v48 = *(_SLIST_HEADER **)v47->Alignment;
                  v47->Alignment = 0LL;
                  v49 = (_SLIST_ENTRY *)&v47[3];
                  goto LABEL_99;
                }
                goto LABEL_1;
              }
            }
            else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&v44[v46 + 2], (signed __int64)v16, 0LL) )
            {
              goto LABEL_1;
            }
            if ( (unsigned int)++v45 >= 0x10 )
            {
LABEL_97:
              v48 = (_SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&v16->Next->Next[1].Next + 1)
                                                + 8LL * *((unsigned __int16 *)&v16->Next[10].Next + 6)
                                                + 1192)
                                    + 144LL);
              goto LABEL_98;
            }
          }
        }
      }
    }
  }
}
