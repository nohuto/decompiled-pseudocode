/*
 * XREFs of sub_180006A0C @ 0x180006A0C
 * Callers:
 *     sub_180006554 @ 0x180006554 (sub_180006554.c)
 * Callees:
 *     sub_180006D5C @ 0x180006D5C (sub_180006D5C.c)
 *     sub_180006EE8 @ 0x180006EE8 (sub_180006EE8.c)
 *     sub_180023688 @ 0x180023688 (sub_180023688.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180078CB0 @ 0x180078CB0 (sub_180078CB0.c)
 *     sub_1800822D0 @ 0x1800822D0 (sub_1800822D0.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     RtlInterlockedPopEntrySList @ 0x1800A8D80 (RtlInterlockedPopEntrySList.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A8DC0 (RtlInterlockedPushEntrySList_0.c)
 *     RtlInterlockedPushListSList @ 0x1800A8E30 (RtlInterlockedPushListSList.c)
 *     sub_1800FF678 @ 0x1800FF678 (sub_1800FF678.c)
 *     sub_1800FFC68 @ 0x1800FFC68 (sub_1800FFC68.c)
 */

__int64 __fastcall sub_180006A0C(struct _SLIST_ENTRY *a1, signed __int64 a2, __int64 a3)
{
  struct _SLIST_ENTRY *v3; // r12
  __int64 v5; // r9
  __int64 v6; // rdi
  int v7; // r15d
  __int64 v8; // rbp
  unsigned int v9; // r8d
  signed __int32 v10; // ebx
  __int64 v11; // r14
  struct _TEB *v12; // rdx
  __int64 HeapVirtualAffinity_high; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  int v16; // eax
  struct _SLIST_ENTRY *v18; // rdi
  struct _SLIST_ENTRY *v19; // rax
  unsigned int v20; // r14d
  volatile signed __int64 *v21; // rbp
  unsigned int v22; // r13d
  struct _SLIST_ENTRY *v23; // r15
  struct _SLIST_ENTRY *v24; // rbx
  union _SLIST_HEADER *v25; // r14
  struct _SLIST_ENTRY *v26; // rax
  struct _SLIST_ENTRY *v27; // rbx
  signed __int32 v28; // eax
  __int64 v29; // rcx
  union _SLIST_HEADER **v30; // r8
  __int64 v31; // rcx
  unsigned int Next_low; // r12d
  unsigned int v33; // r14d
  struct _SLIST_ENTRY *v34; // rbx
  union _SLIST_HEADER *v35; // r15
  struct _SLIST_ENTRY *v36; // rbp
  __int64 v37; // rbx
  char *v38; // rcx
  struct _SLIST_ENTRY *v39; // r15
  union _SLIST_HEADER *v40; // rcx
  union _SLIST_HEADER *v41; // rcx
  union _SLIST_HEADER *v42; // rcx
  char v43; // al
  signed __int32 v44; // eax
  union _SLIST_HEADER **v45; // rcx
  int v46; // r9d
  union _SLIST_HEADER *v47; // rcx
  struct _SLIST_ENTRY *v48; // rdx
  char v49; // al
  signed __int32 v50; // eax
  union _SLIST_HEADER **v51; // rcx
  int v52; // r9d
  struct _SLIST_ENTRY *Next; // [rsp+70h] [rbp+8h]
  char v54; // [rsp+78h] [rbp+10h]

  v54 = a2;
  v3 = 0LL;
LABEL_2:
  v5 = 0x8000LL;
LABEL_3:
  while ( 2 )
  {
    v6 = *((_QWORD *)&a1->Next + 1);
    if ( v6 )
    {
      v7 = 0;
      v8 = *((_QWORD *)&a1->Next[1].Next + 1);
      if ( (*(_DWORD *)(v6 + 32) & 0x80000000) != 0 )
      {
        v37 = *((unsigned __int16 *)&a1[10].Next + 6);
        v7 = 1;
        if ( (*(_BYTE *)(v8 + 4 * v37 + 679) & 1) == 0 )
        {
          if ( (int)sub_180078CB0(
                      *((_QWORD *)&a1->Next[1].Next + 1),
                      *(unsigned __int8 *)(v8 + 4 * v37 + 678),
                      a3,
                      0x8000LL) >= 0 )
          {
            *(_BYTE *)(v8 + 4 * v37 + 679) |= 1u;
            v38 = (unsigned int)((__int64 (*)(void))RtlGetCurrentServiceSessionId)()
                ? (char *)NtCurrentPeb()->HotpatchInformation + 550
                : (char *)2147353472;
            if ( *v38 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              sub_1800FF678(*(_QWORD *)(v8 + 24), *(unsigned __int8 *)(v8 + 4 * v37 + 678));
          }
          v5 = 0x8000LL;
        }
      }
      a2 = 0LL;
      v9 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      while ( 1 )
      {
        v10 = *(_DWORD *)(v6 + 32);
        if ( (v10 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v10 )
            goto LABEL_50;
          if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 32), v10 | 0x80000000, v10) )
            break;
        }
        a2 = (unsigned int)(a2 + 1);
        if ( (unsigned int)a2 > v9 )
        {
          v10 = -1;
          break;
        }
      }
      if ( v10 != -1 )
      {
        v11 = *(_QWORD *)(v6 + 8);
        if ( v11 && *(struct _SLIST_ENTRY **)v6 == a1 && (_WORD)v10 )
        {
          v12 = NtCurrentTeb();
          HeapVirtualAffinity_high = HIWORD(v12->HeapVirtualAffinity);
          v14 = byte_180123520[*((unsigned __int16 *)&a1[10].Next + 6)];
          v15 = *((unsigned __int8 *)&qword_180159900 + HeapVirtualAffinity_high);
          HIWORD(v12->HeapVirtualAffinity) = (unsigned __int8)(HeapVirtualAffinity_high + 1);
          v16 = sub_180006D5C(v11 + 32, (unsigned int)(v10 >> 16), v15, v14);
          a2 = (v16 << 16) | ((unsigned int)(unsigned __int16)v10 - 1);
          *(_DWORD *)(v6 + 32) = a2;
          a3 = v11
             + v16
             * (((unsigned int)v8 ^ (unsigned int)qword_18015BFE8 ^ (unsigned int)v11 ^ *(_DWORD *)(v11 + 24)) >> 16)
             + (unsigned __int16)(v8 ^ qword_18015BFE8 ^ v11 ^ *(_WORD *)(v11 + 24));
          if ( (*(_BYTE *)(a3 + 15) & 0x3F) == 0 )
            goto LABEL_14;
          sub_1800A4DFC(14, *(_QWORD *)(*((_QWORD *)&a1->Next[1].Next + 1) + 24LL), a3, 0, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v6 + 32) = v10;
        }
      }
LABEL_50:
      a3 = 0LL;
LABEL_14:
      if ( v7 && dword_1801593E4 + 1 < (unsigned int)dword_1801593E0 )
        _InterlockedCompareExchange(&dword_1801593E4, 2 * (dword_1801593E4 + 1) - 1, dword_1801593E4);
      if ( a3 )
        return a3;
    }
    Next = a1->Next;
    while ( 1 )
    {
      v18 = 0LL;
LABEL_19:
      v19 = a1 + 1;
      while ( 1 )
      {
        v20 = 0;
        v21 = 0LL;
        v22 = 0;
        v23 = v19;
        do
        {
          v24 = v23->Next;
          if ( v23->Next )
          {
            Next_low = LOWORD(v24[2].Next);
            if ( Next_low > v22 && !(unsigned __int8)sub_180006EE8(a1, v23->Next, a3, v5) )
            {
              v18 = v24;
              v22 = Next_low;
              v21 = (volatile signed __int64 *)(&a1[1].Next + v20);
            }
            v3 = 0LL;
          }
          ++v20;
          v23 = (struct _SLIST_ENTRY *)((char *)v23 + 8);
        }
        while ( v20 < 0x10 );
        if ( !v21 )
        {
          v18 = 0LL;
          goto LABEL_29;
        }
        v25 = (union _SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&Next[1].Next + 1)
                                                + 8LL * *((unsigned __int16 *)&a1[10].Next + 6)
                                                + 1192)
                                    + 144LL);
        while ( 1 )
        {
          v26 = RtlInterlockedPopEntrySList(v25);
          v27 = v26;
          if ( !v26 )
            break;
          v39 = v26;
          v27 = v26 - 3;
          if ( (*((_DWORD *)&v26[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)sub_1800822D0(v27, a1) )
            {
              RtlInterlockedPushEntrySList_0(v25, v39);
              v27 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)&v27[2].Next + 12);
          if ( _InterlockedAnd((volatile signed __int32 *)&v27[2].Next + 3, 0xFFFFFFFD) == 2 )
          {
            v40 = (union _SLIST_HEADER *)v27->Next->Next;
            v27->Next = 0LL;
            RtlInterlockedPushEntrySList_0(v40, v26);
          }
        }
        if ( v18 == (struct _SLIST_ENTRY *)_InterlockedCompareExchange64(v21, (signed __int64)v27, (signed __int64)v18) )
          break;
        v19 = a1 + 1;
        if ( v27 )
        {
          RtlInterlockedPushEntrySList_0(v25, v27 + 3);
          goto LABEL_19;
        }
      }
      if ( !v27 )
        *((_WORD *)&a1[10].Next + 7) = (unsigned __int8)(((char *)v21 - (char *)a1 - 16) >> 3);
LABEL_29:
      if ( !v18 )
        break;
      _m_prefetchw((char *)&v18[2].Next + 12);
      if ( _InterlockedAnd((volatile signed __int32 *)&v18[2].Next + 3, 0xFFFFFFFD) != 2 )
        goto LABEL_31;
      v41 = (union _SLIST_HEADER *)v18->Next->Next;
      v18->Next = 0LL;
      RtlInterlockedPushEntrySList_0(v41, v18 + 3);
    }
    v33 = 0;
    v34 = 0LL;
    v35 = (union _SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&Next[1].Next + 1)
                                            + 8LL * *((unsigned __int16 *)&a1[10].Next + 6)
                                            + 1192)
                                + 144LL);
    v36 = RtlInterlockedPopEntrySList(v35);
    if ( !v36 )
      return 0LL;
    do
    {
      v18 = v36 - 3;
      if ( (*((_DWORD *)&v36[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((char *)&v18[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v18[2].Next + 3, 0xFFFFFFFD) != 2 )
          goto LABEL_83;
LABEL_82:
        v42 = (union _SLIST_HEADER *)v18->Next->Next;
        v18->Next = 0LL;
        RtlInterlockedPushEntrySList_0(v42, v36);
        goto LABEL_83;
      }
      if ( (unsigned int)sub_1800822D0(&v36[-3], a1) )
      {
        _m_prefetchw((char *)&v18[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v18[2].Next + 3, 0xFFFFFFFD) == 2 )
          goto LABEL_82;
        if ( (unsigned __int8)sub_180023688(a1, &v36[-3]) )
          break;
      }
      else
      {
        v36->Next = v34;
        v34 = v36;
        if ( v33 )
          v36 = v3;
        ++v33;
        v3 = v36;
      }
LABEL_83:
      v18 = 0LL;
      v36 = RtlInterlockedPopEntrySList(v35);
    }
    while ( v36 );
    if ( v33 )
      RtlInterlockedPushListSList(v35, v34, v3, v33);
    v3 = 0LL;
LABEL_31:
    if ( v18 )
    {
      *((_BYTE *)&v18[2].Next + 11) = v54;
      do
      {
        v28 = *((_DWORD *)&v18[2].Next + 3);
        v5 = 0x8000LL;
        if ( !v28 || (v28 & 6) != 0 )
          goto LABEL_3;
        v29 = v28 | 6u;
      }
      while ( v28 != _InterlockedCompareExchange((volatile signed __int32 *)&v18[2].Next + 3, v29, v28) );
      v30 = (union _SLIST_HEADER **)v18->Next;
      if ( v18->Next == a1 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v29, a2, v30, 0x8000LL) )
          v31 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v31 = 2147353472LL;
        if ( *(_BYTE *)v31 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FFC68(*(_QWORD *)(*((_QWORD *)&a1->Next[1].Next + 1) + 24LL), *((_QWORD *)&v18->Next + 1));
        v18 = (struct _SLIST_ENTRY *)_InterlockedExchange64((volatile __int64 *)&a1->Next + 1, (__int64)v18);
        v5 = 0x8000LL;
        if ( !v18 )
          continue;
        _m_prefetchw((char *)&v18[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v18[2].Next + 3, 0xFFFFFFF9) != 6 )
        {
          v49 = sub_180023688(a1, v18);
          v5 = 0x8000LL;
          if ( v49 )
          {
            while ( 1 )
            {
              v50 = *((_DWORD *)&v18[2].Next + 3);
              v5 = 0x8000LL;
              if ( !v50 || (v50 & 2) != 0 )
                break;
              if ( v50 == _InterlockedCompareExchange((volatile signed __int32 *)&v18[2].Next + 3, v50 | 2, v50) )
              {
                v51 = (union _SLIST_HEADER **)v18->Next;
                v52 = 0;
                while ( 1 )
                {
                  a3 = ((_BYTE)v52 + (unsigned __int8)*((_WORD *)v51 + 87)) & 0xF;
                  a2 = (signed __int64)v51[a3 + 2];
                  if ( a2 )
                  {
                    if ( (*(_DWORD *)(a2 + 44) & 1) == 0
                      && a2 == _InterlockedCompareExchange64(
                                 (volatile signed __int64 *)&v51[a3 + 2],
                                 (signed __int64)v18,
                                 a2) )
                    {
                      goto LABEL_118;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(
                               (volatile signed __int64 *)&v51[a3 + 2],
                               (signed __int64)v18,
                               0LL) )
                  {
                    goto LABEL_2;
                  }
                  if ( (unsigned int)++v52 >= 0x10 )
                    goto LABEL_96;
                }
              }
            }
          }
          continue;
        }
        goto LABEL_99;
      }
      _m_prefetchw((char *)&v18[2].Next + 12);
      if ( _InterlockedAnd((volatile signed __int32 *)&v18[2].Next + 3, 0xFFFFFFF9) == 6 )
      {
LABEL_99:
        v47 = (union _SLIST_HEADER *)v18->Next->Next;
        v18->Next = 0LL;
LABEL_97:
        v48 = v18 + 3;
LABEL_98:
        RtlInterlockedPushEntrySList_0(v47, v48);
        goto LABEL_2;
      }
      v43 = sub_180023688(v30, v18);
      v5 = 0x8000LL;
      if ( v43 )
      {
        while ( 1 )
        {
          v44 = *((_DWORD *)&v18[2].Next + 3);
          v5 = 0x8000LL;
          if ( !v44 || (v44 & 2) != 0 )
            break;
          if ( v44 == _InterlockedCompareExchange((volatile signed __int32 *)&v18[2].Next + 3, v44 | 2, v44) )
          {
            v45 = (union _SLIST_HEADER **)v18->Next;
            v46 = 0;
            while ( 1 )
            {
              a3 = ((_BYTE)v46 + (unsigned __int8)*((_WORD *)v45 + 87)) & 0xF;
              a2 = (signed __int64)v45[a3 + 2];
              if ( a2 )
              {
                if ( (*(_DWORD *)(a2 + 44) & 1) == 0
                  && a2 == _InterlockedCompareExchange64(
                             (volatile signed __int64 *)&v45[a3 + 2],
                             (signed __int64)v18,
                             a2) )
                {
LABEL_118:
                  _m_prefetchw((const void *)(a2 + 44));
                  v5 = 0x8000LL;
                  if ( _InterlockedAnd((volatile signed __int32 *)(a2 + 44), 0xFFFFFFFD) == 2 )
                  {
                    v47 = **(union _SLIST_HEADER ***)a2;
                    *(_QWORD *)a2 = 0LL;
                    v48 = (struct _SLIST_ENTRY *)(a2 + 48);
                    goto LABEL_98;
                  }
                  goto LABEL_3;
                }
              }
              else if ( !_InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v45[a3 + 2],
                           (signed __int64)v18,
                           0LL) )
              {
                goto LABEL_2;
              }
              if ( (unsigned int)++v46 >= 0x10 )
              {
LABEL_96:
                v47 = (union _SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&v18->Next->Next[1].Next + 1)
                                                        + 8LL * *((unsigned __int16 *)&v18->Next[10].Next + 6)
                                                        + 1192)
                                            + 144LL);
                goto LABEL_97;
              }
            }
          }
        }
      }
      continue;
    }
    return 0LL;
  }
}
