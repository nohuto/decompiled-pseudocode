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

__int64 __fastcall sub_180006A0C(_SLIST_ENTRY *a1, char a2, __int64 a3)
{
  _SLIST_ENTRY *v3; // r12
  __int64 v5; // r9
  __int64 v6; // rdi
  int v7; // r15d
  __int64 v8; // rbp
  int v9; // edx
  unsigned int v10; // r8d
  signed __int32 v11; // ebx
  __int64 v12; // r14
  struct _TEB *v13; // rdx
  __int64 HeapData_high; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // eax
  _SLIST_ENTRY *v19; // rdi
  _SLIST_ENTRY *v20; // rax
  unsigned int v21; // r14d
  volatile signed __int64 *v22; // rbp
  unsigned int v23; // r13d
  _SLIST_ENTRY *v24; // r15
  _SLIST_ENTRY *v25; // rbx
  _SLIST_HEADER *v26; // r14
  _SLIST_ENTRY *v27; // rax
  _SLIST_ENTRY *v28; // rbx
  signed __int32 v29; // eax
  _SLIST_HEADER **v30; // r8
  __int64 UserModeGlobalLogger; // rcx
  unsigned int Next_low; // r12d
  unsigned int v33; // r14d
  _SLIST_ENTRY *v34; // rbx
  _SLIST_HEADER *v35; // r15
  _SLIST_ENTRY *v36; // rbp
  __int64 v37; // rbx
  USHORT *v38; // rcx
  _SLIST_ENTRY *v39; // r15
  _SLIST_HEADER *v40; // rcx
  _SLIST_HEADER *v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _SLIST_HEADER *v44; // rcx
  char v45; // al
  signed __int32 v46; // eax
  _SLIST_HEADER **v47; // rcx
  int v48; // r9d
  _SLIST_HEADER *v49; // rdx
  _SLIST_HEADER *v50; // rcx
  _SLIST_ENTRY *v51; // rdx
  char v52; // al
  signed __int32 v53; // eax
  _SLIST_HEADER **v54; // rcx
  int v55; // r9d
  _SLIST_ENTRY *Next; // [rsp+70h] [rbp+8h]

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
            v38 = RtlGetCurrentServiceSessionId()
                ? NtCurrentPeb()->SharedData->UserModeGlobalLogger
                : (USHORT *)2147353472;
            if ( *(_BYTE *)v38 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              sub_1800FF678(*(_QWORD *)(v8 + 24), *(unsigned __int8 *)(v8 + 4 * v37 + 678));
          }
          v5 = 0x8000LL;
        }
      }
      v9 = 0;
      v10 = MEMORY[0x7FFE036A] > 1u ? 0x64 : 0;
      while ( 1 )
      {
        v11 = *(_DWORD *)(v6 + 32);
        if ( (v11 & 0x80000000) == 0 )
        {
          if ( !(_WORD)v11 )
            goto LABEL_50;
          if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 32), v11 | 0x80000000, v11) )
            break;
        }
        if ( ++v9 > v10 )
        {
          v11 = -1;
          break;
        }
      }
      if ( v11 != -1 )
      {
        v12 = *(_QWORD *)(v6 + 8);
        if ( v12 && *(_SLIST_ENTRY **)v6 == a1 && (_WORD)v11 )
        {
          v13 = NtCurrentTeb();
          HeapData_high = HIWORD(v13->HeapData);
          v15 = byte_180123520[*((unsigned __int16 *)&a1[10].Next + 6)];
          v16 = *((unsigned __int8 *)&qword_180159900 + HeapData_high);
          HIWORD(v13->HeapData) = (unsigned __int8)(HeapData_high + 1);
          v17 = sub_180006D5C(v12 + 32, (unsigned int)(v11 >> 16), v16, v15);
          *(_DWORD *)(v6 + 32) = (v17 << 16) | ((unsigned __int16)v11 - 1);
          a3 = v12
             + v17
             * (((unsigned int)v8 ^ (unsigned int)qword_18015BFE8 ^ (unsigned int)v12 ^ *(_DWORD *)(v12 + 24)) >> 16)
             + (unsigned __int16)(v8 ^ qword_18015BFE8 ^ v12 ^ *(_WORD *)(v12 + 24));
          if ( (*(_BYTE *)(a3 + 15) & 0x3F) == 0 )
            goto LABEL_14;
          sub_1800A4DFC(14, *(_QWORD *)(*((_QWORD *)&a1->Next[1].Next + 1) + 24LL), a3, 0, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v6 + 32) = v11;
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
      v19 = 0LL;
LABEL_19:
      v20 = a1 + 1;
      while ( 1 )
      {
        v21 = 0;
        v22 = 0LL;
        v23 = 0;
        v24 = v20;
        do
        {
          v25 = v24->Next;
          if ( v24->Next )
          {
            Next_low = LOWORD(v25[2].Next);
            if ( Next_low > v23 && !(unsigned __int8)sub_180006EE8(a1, v24->Next, a3, v5) )
            {
              v19 = v25;
              v23 = Next_low;
              v22 = (volatile signed __int64 *)(&a1[1].Next + v21);
            }
            v3 = 0LL;
          }
          ++v21;
          v24 = (_SLIST_ENTRY *)((char *)v24 + 8);
        }
        while ( v21 < 0x10 );
        if ( !v22 )
        {
          v19 = 0LL;
          goto LABEL_29;
        }
        v26 = (_SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&Next[1].Next + 1)
                                          + 8LL * *((unsigned __int16 *)&a1[10].Next + 6)
                                          + 1192)
                              + 144LL);
        while ( 1 )
        {
          v27 = RtlInterlockedPopEntrySList(v26);
          v28 = v27;
          if ( !v27 )
            break;
          v39 = v27;
          v28 = v27 - 3;
          if ( (*((_DWORD *)&v27[-1].Next + 3) & 1) != 0 )
          {
            if ( !(unsigned int)sub_1800822D0(v28, a1) )
            {
              RtlInterlockedPushEntrySList_0(v26, v39);
              v28 = 0LL;
            }
            break;
          }
          _m_prefetchw((char *)&v28[2].Next + 12);
          if ( _InterlockedAnd((volatile signed __int32 *)&v28[2].Next + 3, 0xFFFFFFFD) == 2 )
          {
            v40 = (_SLIST_HEADER *)v28->Next->Next;
            v28->Next = 0LL;
            RtlInterlockedPushEntrySList_0(v40, v27);
          }
        }
        if ( v19 == (_SLIST_ENTRY *)_InterlockedCompareExchange64(v22, (signed __int64)v28, (signed __int64)v19) )
          break;
        v20 = a1 + 1;
        if ( v28 )
        {
          RtlInterlockedPushEntrySList_0(v26, v28 + 3);
          goto LABEL_19;
        }
      }
      if ( !v28 )
        *((_WORD *)&a1[10].Next + 7) = (unsigned __int8)(((char *)v22 - (char *)a1 - 16) >> 3);
LABEL_29:
      if ( !v19 )
        break;
      _m_prefetchw((char *)&v19[2].Next + 12);
      if ( _InterlockedAnd((volatile signed __int32 *)&v19[2].Next + 3, 0xFFFFFFFD) != 2 )
        goto LABEL_31;
      v41 = (_SLIST_HEADER *)v19->Next->Next;
      v19->Next = 0LL;
      RtlInterlockedPushEntrySList_0(v41, v19 + 3);
    }
    v33 = 0;
    v34 = 0LL;
    v35 = (_SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&Next[1].Next + 1)
                                      + 8LL * *((unsigned __int16 *)&a1[10].Next + 6)
                                      + 1192)
                          + 144LL);
    v36 = RtlInterlockedPopEntrySList(v35);
    if ( !v36 )
      return 0LL;
    do
    {
      v19 = v36 - 3;
      if ( (*((_DWORD *)&v36[-1].Next + 3) & 1) == 0 )
      {
        _m_prefetchw((char *)&v19[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v19[2].Next + 3, 0xFFFFFFFD) != 2 )
          goto LABEL_83;
LABEL_82:
        v44 = (_SLIST_HEADER *)v19->Next->Next;
        v19->Next = 0LL;
        RtlInterlockedPushEntrySList_0(v44, v36);
        goto LABEL_83;
      }
      if ( (unsigned int)sub_1800822D0(&v36[-3], a1) )
      {
        _m_prefetchw((char *)&v19[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v19[2].Next + 3, 0xFFFFFFFD) == 2 )
          goto LABEL_82;
        if ( (unsigned __int8)sub_180023688(a1, &v36[-3], v42, v43) )
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
      v19 = 0LL;
      v36 = RtlInterlockedPopEntrySList(v35);
    }
    while ( v36 );
    if ( v33 )
      RtlInterlockedPushListSList(v35, v34, v3, v33);
    v3 = 0LL;
LABEL_31:
    if ( v19 )
    {
      *((_BYTE *)&v19[2].Next + 11) = a2;
      do
      {
        v29 = *((_DWORD *)&v19[2].Next + 3);
        v5 = 0x8000LL;
        if ( !v29 || (v29 & 6) != 0 )
          goto LABEL_3;
      }
      while ( v29 != _InterlockedCompareExchange((volatile signed __int32 *)&v19[2].Next + 3, v29 | 6, v29) );
      v30 = (_SLIST_HEADER **)v19->Next;
      if ( v19->Next == a1 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          UserModeGlobalLogger = 2147353472LL;
        if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FFC68(*(_QWORD *)(*((_QWORD *)&a1->Next[1].Next + 1) + 24LL), *((_QWORD *)&v19->Next + 1));
        v19 = (_SLIST_ENTRY *)_InterlockedExchange64((volatile __int64 *)&a1->Next + 1, (__int64)v19);
        v5 = 0x8000LL;
        if ( !v19 )
          continue;
        _m_prefetchw((char *)&v19[2].Next + 12);
        if ( _InterlockedAnd((volatile signed __int32 *)&v19[2].Next + 3, 0xFFFFFFF9) != 6 )
        {
          v52 = sub_180023688(a1, v19, a3, 0x8000LL);
          v5 = 0x8000LL;
          if ( v52 )
          {
            while ( 1 )
            {
              v53 = *((_DWORD *)&v19[2].Next + 3);
              v5 = 0x8000LL;
              if ( !v53 || (v53 & 2) != 0 )
                break;
              if ( v53 == _InterlockedCompareExchange((volatile signed __int32 *)&v19[2].Next + 3, v53 | 2, v53) )
              {
                v54 = (_SLIST_HEADER **)v19->Next;
                v55 = 0;
                while ( 1 )
                {
                  a3 = ((_BYTE)v55 + (unsigned __int8)*((_WORD *)v54 + 87)) & 0xF;
                  v49 = v54[a3 + 2];
                  if ( v49 )
                  {
                    if ( (*((_DWORD *)&v49[2].HeaderX64 + 3) & 1) == 0
                      && v49 == (_SLIST_HEADER *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)&v54[a3 + 2],
                                                   (signed __int64)v19,
                                                   (signed __int64)v49) )
                    {
                      goto LABEL_118;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(
                               (volatile signed __int64 *)&v54[a3 + 2],
                               (signed __int64)v19,
                               0LL) )
                  {
                    goto LABEL_2;
                  }
                  if ( (unsigned int)++v55 >= 0x10 )
                    goto LABEL_96;
                }
              }
            }
          }
          continue;
        }
        goto LABEL_99;
      }
      _m_prefetchw((char *)&v19[2].Next + 12);
      if ( _InterlockedAnd((volatile signed __int32 *)&v19[2].Next + 3, 0xFFFFFFF9) == 6 )
      {
LABEL_99:
        v50 = (_SLIST_HEADER *)v19->Next->Next;
        v19->Next = 0LL;
LABEL_97:
        v51 = v19 + 3;
LABEL_98:
        RtlInterlockedPushEntrySList_0(v50, v51);
        goto LABEL_2;
      }
      v45 = sub_180023688(v30, v19, v30, 0x8000LL);
      v5 = 0x8000LL;
      if ( v45 )
      {
        while ( 1 )
        {
          v46 = *((_DWORD *)&v19[2].Next + 3);
          v5 = 0x8000LL;
          if ( !v46 || (v46 & 2) != 0 )
            break;
          if ( v46 == _InterlockedCompareExchange((volatile signed __int32 *)&v19[2].Next + 3, v46 | 2, v46) )
          {
            v47 = (_SLIST_HEADER **)v19->Next;
            v48 = 0;
            while ( 1 )
            {
              a3 = ((_BYTE)v48 + (unsigned __int8)*((_WORD *)v47 + 87)) & 0xF;
              v49 = v47[a3 + 2];
              if ( v49 )
              {
                if ( (*((_DWORD *)&v49[2].HeaderX64 + 3) & 1) == 0
                  && v49 == (_SLIST_HEADER *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)&v47[a3 + 2],
                                               (signed __int64)v19,
                                               (signed __int64)v49) )
                {
LABEL_118:
                  _m_prefetchw((char *)&v49[2].HeaderX64 + 12);
                  v5 = 0x8000LL;
                  if ( _InterlockedAnd((volatile signed __int32 *)&v49[2].HeaderX64 + 3, 0xFFFFFFFD) == 2 )
                  {
                    v50 = *(_SLIST_HEADER **)v49->Alignment;
                    v49->Alignment = 0LL;
                    v51 = (_SLIST_ENTRY *)&v49[3];
                    goto LABEL_98;
                  }
                  goto LABEL_3;
                }
              }
              else if ( !_InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v47[a3 + 2],
                           (signed __int64)v19,
                           0LL) )
              {
                goto LABEL_2;
              }
              if ( (unsigned int)++v48 >= 0x10 )
              {
LABEL_96:
                v50 = (_SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&v19->Next->Next[1].Next + 1)
                                                  + 8LL * *((unsigned __int16 *)&v19->Next[10].Next + 6)
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
