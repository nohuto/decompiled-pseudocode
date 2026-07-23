/*
 * XREFs of sub_180017430 @ 0x180017430
 * Callers:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     sub_180013AC8 @ 0x180013AC8 (sub_180013AC8.c)
 *     sub_180014FCC @ 0x180014FCC (sub_180014FCC.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_1800173E0 @ 0x1800173E0 (sub_1800173E0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 *     sub_18006377C @ 0x18006377C (sub_18006377C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x18009E590 (RtlInterlockedPushEntrySList_0.c)
 *     RtlInterlockedFlushSList_0 @ 0x18009E5D0 (RtlInterlockedFlushSList_0.c)
 *     sub_1800EBFF8 @ 0x1800EBFF8 (sub_1800EBFF8.c)
 *     sub_1800FD70C @ 0x1800FD70C (sub_1800FD70C.c)
 *     sub_1800FE3BC @ 0x1800FE3BC (sub_1800FE3BC.c)
 *     sub_180102758 @ 0x180102758 (sub_180102758.c)
 *     sub_180102B70 @ 0x180102B70 (sub_180102B70.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

__int64 __fastcall sub_180017430(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // r14
  unsigned int v6; // ebx
  int v7; // r15d
  unsigned __int64 v8; // r13
  int v9; // ebx
  struct _TEB *v10; // rbx
  char v11; // bl
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _DWORD *v18; // r12
  __int64 v19; // rbx
  __int64 UserModeGlobalLogger; // rcx
  unsigned int v21; // r8d
  unsigned int i; // edx
  signed __int32 v23; // ebx
  int v24; // r9d
  _SLIST_ENTRY *v25; // rdx
  _SLIST_HEADER *v26; // rcx
  unsigned int v27; // r13d
  PSLIST_ENTRY v28; // rax
  int j; // r8d
  PSLIST_ENTRY v30; // rcx
  int v31; // ecx
  int v32; // eax
  __int64 v33; // r8
  signed __int64 v34; // rdx
  _SLIST_HEADER **v35; // r9
  __int64 v36; // r13
  volatile signed __int32 *v37; // rbx
  _SLIST_HEADER *v38; // rcx
  signed __int32 v39; // eax
  unsigned int k; // ecx
  _SLIST_ENTRY *v41; // rdx
  __int64 v42; // r13
  ULONG v43; // eax
  int v44; // r8d
  __int64 v45; // rdx
  signed __int64 v46; // rtt
  _SLIST_HEADER *v47; // rcx
  signed __int32 v48; // eax
  __int64 v49; // r9
  unsigned int m; // ecx
  __int64 v51; // r8
  _QWORD **v52; // rdx
  unsigned __int8 v53; // al
  __int64 v55; // [rsp+48h] [rbp-140h]
  __int64 v56; // [rsp+48h] [rbp-140h]
  signed __int64 v57; // [rsp+48h] [rbp-140h]
  unsigned int v58; // [rsp+58h] [rbp-130h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-108h] BYREF
  unsigned __int64 v60; // [rsp+88h] [rbp-100h]
  PVOID BaseAddress; // [rsp+90h] [rbp-F8h] BYREF
  int v62; // [rsp+98h] [rbp-F0h]
  unsigned int v63; // [rsp+9Ch] [rbp-ECh]
  ULONG OldProtect; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-E0h]
  __int64 v66; // [rsp+B0h] [rbp-D8h]
  __int64 v67; // [rsp+C0h] [rbp-C8h]
  struct _TEB *v68; // [rsp+C8h] [rbp-C0h]
  struct _TEB *v69; // [rsp+D0h] [rbp-B8h]
  struct _TEB *v70; // [rsp+D8h] [rbp-B0h]
  struct _TEB *v71; // [rsp+E0h] [rbp-A8h]
  __int64 v72; // [rsp+E8h] [rbp-A0h]
  __int64 v73; // [rsp+F0h] [rbp-98h]
  signed __int64 v74; // [rsp+F8h] [rbp-90h]
  __int128 v75; // [rsp+110h] [rbp-78h] BYREF
  int v76; // [rsp+128h] [rbp-60h]
  int v77; // [rsp+138h] [rbp-50h]
  int v78; // [rsp+148h] [rbp-40h]
  __int128 v79; // [rsp+150h] [rbp-38h]
  unsigned __int16 v80; // [rsp+1A8h] [rbp+20h] BYREF

  v4 = a2;
  if ( (byte_18015D028 & 2) != 0 )
  {
    v6 = sub_180017F70(a1, (__int64)&v80);
    if ( v6 && v80 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_18015AA38 + 8LL * v80 - 8) + 32LL), -v65);
    return v6;
  }
  v7 = 0;
  v8 = 0LL;
  v67 = a1;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (dword_180159760 & 2) != 0 && a2 )
      v4 = a2 - *(_QWORD *)(a2 - 16);
    v9 = (a3 & 1) != 0;
    if ( (a3 & 8) != 0 )
      v9 |= 2u;
    if ( (a3 & 4) != 0 )
      v9 |= 0x80000000;
    if ( (a3 & 0x100) != 0 )
      v9 |= 0x100u;
    if ( (a3 & 0xE00) != 0 )
      v9 |= a3 & 0xE00;
    if ( (a3 & 0x10) != 0 )
      v9 |= 0x2000000u;
    if ( (a3 & 2) != 0 )
      v9 |= 0x1000000u;
    v6 = sub_180016A80((_DWORD *)a1, v4, v9 & 0x11000001, 0LL, 0LL);
    if ( v6 )
    {
      if ( (dword_18015D2E8 & 1) != 0 && (dword_18015D2E8 & 2) != 0 )
      {
        if ( NtCurrentPeb()->ProcessHeap )
        {
          v79 = xmmword_18015A790;
          v75 = xmmword_18015A790;
          LOBYTE(v7) = a1 != *(_QWORD *)sub_18005DFE4(&v75);
          v62 = v7;
          if ( v7 )
            goto LABEL_154;
        }
      }
    }
    else
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v68 = NtCurrentTeb();
      v68->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    }
    return v6;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
LABEL_151:
    v53 = sub_1800150A0(a1, a3 | 2u, v8, v4);
    v6 = v53;
    if ( v53 )
      goto LABEL_152;
    return v6;
  }
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v8 = sub_18006377C(a1, a2);
    goto LABEL_39;
  }
  if ( (a2 & 0xF) != 0 )
  {
    sub_18009A5F0(9, a1, a2, 0, 0LL, 0LL);
  }
  else
  {
    v8 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
    if ( (*(_BYTE *)(v8 + 15) & 0x3F) != 0 )
    {
      v60 = v8;
      goto LABEL_39;
    }
    sub_18009A5F0(8, a1, v8, 0, 0LL, 0LL);
    v8 = 0LL;
  }
  v60 = 0LL;
LABEL_39:
  if ( !v8 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v10 = NtCurrentTeb();
    v69 = v10;
LABEL_42:
    v10->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( *(_BYTE *)(v4 - 1) != 5 )
    goto LABEL_74;
  if ( *(char *)(v8 + 15) >= 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v76 = *(_DWORD *)(v8 + 8) ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v76) != ((unsigned __int8)v76 ^ (unsigned __int8)(BYTE1(v76) ^ BYTE2(v76))) )
        goto LABEL_47;
    }
    v11 = 1;
    goto LABEL_51;
  }
  v11 = sub_180102B70(a1, v8);
  if ( v11 )
  {
LABEL_51:
    if ( *(char *)(v8 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v13 = *(_DWORD *)(v8 + 8);
        v77 = v13;
        if ( (v13 & *(_DWORD *)(a1 + 124)) != 0 )
        {
          v77 = v13 ^ *(_DWORD *)(a1 + 136);
          LOWORD(v13) = v77;
        }
      }
      else
      {
        LOWORD(v13) = *(_WORD *)(v8 + 8);
      }
    }
    else
    {
      if ( (unsigned __int16)qword_18015D458 ^ (unsigned __int16)(a1 ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4)) )
        v12 = 0LL;
      else
        v12 = *(_QWORD *)(v8
                        - (((unsigned int)qword_18015D458 ^ (unsigned int)a1 ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
      LOWORD(v13) = *(_WORD *)(v12 + 36);
    }
    v14 = (unsigned __int16)v13;
    if ( *(_BYTE *)(v8 + 15) == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v15 = *(_DWORD *)(v8 + 8);
        v78 = v15;
        if ( (v15 & *(_DWORD *)(a1 + 124)) != 0 )
        {
          v78 = v15 ^ *(_DWORD *)(a1 + 136);
          LOWORD(v15) = v78;
        }
      }
      else
      {
        LOWORD(v15) = *(_WORD *)(v8 + 8);
      }
      v16 = v14 + *(_QWORD *)(v8 - 16) - (unsigned __int16)v15;
    }
    else
    {
      v16 = 16LL * (unsigned __int16)v13;
    }
    if ( v16 + v8 < v4 )
      goto LABEL_47;
  }
  if ( !v11 )
  {
LABEL_47:
    sub_18009A5F0(3, a1, v8, v4, 0LL, 0LL);
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v10 = NtCurrentTeb();
    v70 = v10;
    goto LABEL_42;
  }
  if ( (a3 & 0x3C000102) == 0 )
  {
    v17 = *(_BYTE *)(v4 - 16 + 15) == 5 ? v4 - 16LL * *(unsigned __int8 *)(v4 - 16 + 14) : 0LL;
    v66 = v17;
    if ( (int)sub_1800EBFF8(*(_DWORD *)(v4 - 8), a1, v4, 3, v17) < 0 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v10 = NtCurrentTeb();
      v71 = v10;
      goto LABEL_42;
    }
  }
LABEL_74:
  if ( *(char *)(v8 + 15) >= 0 )
    goto LABEL_151;
  if ( (unsigned __int16)qword_18015D458 ^ (unsigned __int16)(a1 ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4)) )
    v18 = 0LL;
  else
    v18 = *(_DWORD **)(v8
                     - (((unsigned int)qword_18015D458 ^ (unsigned int)a1 ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
  if ( !v18 )
  {
    sub_18009A5F0(3, a1, v8, 0, 0LL, 0LL);
    goto LABEL_149;
  }
  _m_prefetchw(v18);
  v55 = *((_QWORD *)v18 + 1);
  v72 = v55;
  v58 = (unsigned __int16)(*(_DWORD *)(v8 + 12) >> 8);
  v19 = *(_QWORD *)(**(_QWORD **)v18 + 24LL);
  v73 = v19;
  v63 = qword_18015D458 ^ v55 ^ v19 ^ *(_DWORD *)(v55 + 24);
  if ( v55 + v58 * HIWORD(v63) + (unsigned __int16)v63 != v8 )
  {
    sub_18009A5F0(3, *(_QWORD *)(v19 + 24), v8, 0, 0LL, 0LL);
    goto LABEL_149;
  }
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FE3BC(*(_QWORD *)(v19 + 24), v8 + 16, 2LL);
  v21 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
    v21 = 100;
  for ( i = 0; i <= v21; ++i )
  {
    v23 = v18[8];
    if ( (v23 & 0x80000000) == 0 )
    {
      v24 = v18[8];
      if ( v23 == _InterlockedCompareExchange(v18 + 8, v23 | 0x80000000, v23) )
        goto LABEL_96;
    }
  }
  LOWORD(v23) = -1;
  v24 = -1;
LABEL_96:
  *(_BYTE *)(v8 + 15) = 0x80;
  if ( v24 == -1 )
  {
    v25 = (_SLIST_ENTRY *)(v8 + 16);
    v26 = (_SLIST_HEADER *)(v18 + 4);
    goto LABEL_148;
  }
  v27 = v58;
  _bittestandreset64(*(signed __int64 **)(v55 + 40), v58);
  if ( *((_WORD *)v18 + 8) )
  {
    v28 = RtlInterlockedFlushSList_0((PSLIST_HEADER)v18 + 1);
    for ( j = 0; ; ++j )
    {
      v30 = v28;
      if ( !v28 )
        break;
      v28 = v28->Next;
      v31 = *((_DWORD *)&v30[-1].Next + 3) >> 8;
      v27 = (unsigned __int16)v31;
      _bittestandreset64(*(signed __int64 **)(v55 + 40), (unsigned __int16)v31);
    }
  }
  else
  {
    j = 0;
  }
  v32 = (v27 << 16) | (j + 1 + (unsigned __int16)v23);
  v33 = *(_QWORD *)v18;
  if ( (_WORD)v32 == *((_WORD *)v18 + 20) )
  {
    v34 = *(unsigned int *)(*(_QWORD *)v33 + 32LL);
    v35 = (_SLIST_HEADER **)*(unsigned int *)(v33 + 168);
    if ( *(_DWORD *)(v33 + 164) != 1
      || (unsigned int)v34 < (unsigned int)v35
      || (v34 = (unsigned int)(v34 - (_DWORD)v35), (unsigned int)v34 >= *(_DWORD *)(*(_QWORD *)v33 + 36LL)) )
    {
      v36 = *(_QWORD *)v18;
      v37 = (volatile signed __int32 *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v18 + 8LL), 0LL);
      if ( v37 )
      {
        _m_prefetchw((const void *)(v37 + 11));
        if ( _InterlockedAnd(v37 + 11, 0xFFFFFFF9) == 6 )
        {
          v38 = **(_SLIST_HEADER ***)v37;
          *(_QWORD *)v37 = 0LL;
LABEL_124:
          v41 = (_SLIST_ENTRY *)(v37 + 12);
LABEL_125:
          RtlInterlockedPushEntrySList_0(v38, v41);
        }
        else if ( sub_180014FCC(v36, (__int64)v37) )
        {
          while ( 1 )
          {
            v39 = *((_DWORD *)v37 + 11);
            if ( !v39 || (v39 & 2) != 0 )
              break;
            if ( v39 == _InterlockedCompareExchange(v37 + 11, v39 | 2, v39) )
            {
              v35 = *(_SLIST_HEADER ***)v37;
              for ( k = 0; ; ++k )
              {
                if ( k >= 0x10 )
                {
                  v38 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)v37 + 24LL)
                                                    + 8LL * *(unsigned __int16 *)(*(_QWORD *)v37 + 172LL)
                                                    + 1192)
                                        + 144LL);
                  goto LABEL_124;
                }
                v33 = (__int64)&v35[((_BYTE)k + (unsigned __int8)*((_WORD *)v35 + 87)) & 0xF];
                v34 = *(_QWORD *)(v33 + 16);
                if ( v34 )
                {
                  if ( (*(_DWORD *)(v34 + 44) & 1) == 0
                    && v34 == _InterlockedCompareExchange64(
                                (volatile signed __int64 *)(v33 + 16),
                                (signed __int64)v37,
                                v34) )
                  {
                    _m_prefetchw((const void *)(v34 + 44));
                    if ( _InterlockedAnd((volatile signed __int32 *)(v34 + 44), 0xFFFFFFFD) != 2 )
                      goto LABEL_126;
                    v38 = **(_SLIST_HEADER ***)v34;
                    *(_QWORD *)v34 = 0LL;
                    v41 = (_SLIST_ENTRY *)(v34 + 48);
                    goto LABEL_125;
                  }
                }
                else if ( !_InterlockedCompareExchange64(
                             (volatile signed __int64 *)(v33 + 16),
                             (signed __int64)v37,
                             0LL) )
                {
                  goto LABEL_126;
                }
              }
            }
          }
        }
      }
LABEL_126:
      v42 = *(_QWORD *)(*(_QWORD *)v36 + 24LL);
      v56 = *(_QWORD *)v18;
      if ( (*((_BYTE *)v18 + 38) & 3) != 0 )
      {
        BaseAddress = (PVOID)((*((_QWORD *)v18 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
        RegionSize = (unsigned __int16)sub_180102758(v18, v34, v33, v35);
        RegionSize *= 16LL * *((unsigned __int16 *)v18 + 20);
        v6 = 1;
        v43 = sub_18002AE30(*(_QWORD *)(v42 + 24), 1LL);
        ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, v43, &OldProtect);
      }
      else
      {
        v6 = 1;
      }
      *(_DWORD *)(*((_QWORD *)v18 + 1) + 20LL) = 0;
      sub_180013AC8(v42, *((__int64 **)v18 + 1));
      v44 = *((unsigned __int16 *)v18 + 20);
      v45 = v56;
      do
      {
        v74 = *(_QWORD *)(v45 + 160);
        LODWORD(v57) = v74 - v44;
        HIDWORD(v57) = HIDWORD(v74) - 1;
        v46 = v74;
      }
      while ( v46 != _InterlockedCompareExchange64((volatile signed __int64 *)(v45 + 160), v57, v74) );
      *((_QWORD *)v18 + 1) = 0LL;
      _InterlockedIncrement((volatile signed __int32 *)(v42 + 60));
      v18[8] = 0;
      _m_prefetchw(v18 + 11);
      if ( _InterlockedAnd(v18 + 11, 0xFFFFFFFE) == 1 )
      {
        v47 = **(_SLIST_HEADER ***)v18;
        *(_QWORD *)v18 = 0LL;
        RtlInterlockedPushEntrySList_0(v47, (PSLIST_ENTRY)v18 + 3);
      }
      goto LABEL_152;
    }
  }
  v18[8] = v32;
  if ( (v18[11] & 2) != 0 || !sub_180014FCC(v33, (__int64)v18) )
    goto LABEL_149;
  do
  {
    v48 = v18[11];
    if ( !v48 || (v48 & 2) != 0 )
      goto LABEL_149;
  }
  while ( v48 != _InterlockedCompareExchange(v18 + 11, v48 | 2, v48) );
  v49 = *(_QWORD *)v18;
  for ( m = 0; ; ++m )
  {
    if ( m >= 0x10 )
    {
      v25 = (_SLIST_ENTRY *)(v18 + 12);
      v26 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)v18 + 24LL)
                                        + 8LL * *(unsigned __int16 *)(*(_QWORD *)v18 + 172LL)
                                        + 1192)
                            + 144LL);
      goto LABEL_148;
    }
    v51 = v49 + 8LL * (((_BYTE)m + (unsigned __int8)*(_WORD *)(v49 + 174)) & 0xF);
    v52 = *(_QWORD ***)(v51 + 16);
    if ( v52 )
      break;
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v51 + 16), (signed __int64)v18, 0LL) )
      goto LABEL_149;
LABEL_142:
    ;
  }
  if ( (*((_DWORD *)v52 + 11) & 1) != 0
    || v52 != (_QWORD **)_InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v51 + 16),
                           (signed __int64)v18,
                           (signed __int64)v52) )
  {
    goto LABEL_142;
  }
  _m_prefetchw((char *)v52 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v52 + 11, 0xFFFFFFFD) != 2 )
    goto LABEL_149;
  v26 = (_SLIST_HEADER *)**v52;
  *v52 = 0LL;
  v25 = (_SLIST_ENTRY *)(v52 + 6);
LABEL_148:
  RtlInterlockedPushEntrySList_0(v26, v25);
LABEL_149:
  v6 = 1;
LABEL_152:
  if ( sub_1800173E0() && (a3 & 0x10000000) == 0 )
LABEL_154:
    sub_1800FD70C(a1, v4);
  return v6;
}
