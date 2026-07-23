/*
 * XREFs of sub_180024AD0 @ 0x180024AD0
 * Callers:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 * Callees:
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     sub_180022088 @ 0x180022088 (sub_180022088.c)
 *     sub_180023688 @ 0x180023688 (sub_180023688.c)
 *     sub_180023C90 @ 0x180023C90 (sub_180023C90.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180077158 @ 0x180077158 (sub_180077158.c)
 *     sub_18008AEA0 @ 0x18008AEA0 (sub_18008AEA0.c)
 *     sub_1800959D8 @ 0x1800959D8 (sub_1800959D8.c)
 *     sub_180095A28 @ 0x180095A28 (sub_180095A28.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A8DC0 (RtlInterlockedPushEntrySList_0.c)
 *     RtlInterlockedFlushSList_0 @ 0x1800A8E00 (RtlInterlockedFlushSList_0.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 *     sub_1800FEEB8 @ 0x1800FEEB8 (sub_1800FEEB8.c)
 *     sub_1800FFB4C @ 0x1800FFB4C (sub_1800FFB4C.c)
 */

__int64 __fastcall sub_180024AD0(_DWORD *BaseAddress, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // r15
  int v6; // r14d
  unsigned __int64 v7; // r13
  unsigned int v8; // ebx
  __int64 v9; // rax
  struct _TEB *v10; // rbx
  char v11; // bl
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // ecx
  unsigned __int16 v17; // ax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD **v20; // r12
  __int64 v21; // rbx
  __int64 v22; // r9
  __int64 UserModeGlobalLogger; // rcx
  unsigned int v24; // r8d
  unsigned int i; // edx
  signed __int32 v26; // ebx
  _SLIST_ENTRY *v27; // rdx
  _SLIST_HEADER *v28; // rcx
  unsigned int v29; // r13d
  PSLIST_ENTRY v30; // rax
  int j; // r8d
  PSLIST_ENTRY v32; // rcx
  int v33; // ecx
  int v34; // eax
  __int64 v35; // r8
  signed __int64 v36; // rdx
  _SLIST_HEADER **v37; // r9
  __int64 v38; // r13
  _SLIST_ENTRY *v39; // rbx
  _SLIST_HEADER *v40; // rcx
  signed __int32 v41; // eax
  __int64 v42; // r10
  _SLIST_HEADER *v43; // rcx
  __int64 v44; // r13
  ULONG v45; // eax
  int v46; // r8d
  signed __int64 v47; // rdx
  _SLIST_HEADER *v48; // rcx
  signed __int32 v49; // eax
  unsigned __int16 *v50; // r9
  unsigned int v51; // r8d
  __int64 v52; // r10
  _SLIST_ENTRY *v53; // rdx
  _SLIST_HEADER *Next; // rcx
  unsigned __int8 v55; // al
  _SLIST_HEADER ListHead; // [rsp+30h] [rbp-158h] BYREF
  int v58; // [rsp+40h] [rbp-148h]
  unsigned __int16 v59; // [rsp+44h] [rbp-144h]
  unsigned __int16 v60; // [rsp+46h] [rbp-142h]
  int v61; // [rsp+48h] [rbp-140h]
  unsigned int v62; // [rsp+4Ch] [rbp-13Ch]
  int v63; // [rsp+50h] [rbp-138h]
  unsigned int v64; // [rsp+54h] [rbp-134h]
  signed __int32 v65; // [rsp+58h] [rbp-130h]
  unsigned int v66; // [rsp+60h] [rbp-128h]
  int v67[2]; // [rsp+68h] [rbp-120h] BYREF
  _QWORD *v68; // [rsp+70h] [rbp-118h]
  unsigned int k; // [rsp+78h] [rbp-110h]
  signed __int64 v70; // [rsp+90h] [rbp-F8h]
  int v71; // [rsp+98h] [rbp-F0h]
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp-E8h] BYREF
  int m; // [rsp+A8h] [rbp-E0h]
  unsigned __int64 v74; // [rsp+B0h] [rbp-D8h]
  PVOID BaseAddressa; // [rsp+B8h] [rbp-D0h] BYREF
  int v76; // [rsp+C8h] [rbp-C0h]
  unsigned int v77; // [rsp+DCh] [rbp-ACh]
  ULONG OldProtect; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-A0h]
  __int64 v80; // [rsp+F0h] [rbp-98h]
  int v81; // [rsp+108h] [rbp-80h]
  int v82; // [rsp+118h] [rbp-70h]
  struct _TEB *v83; // [rsp+120h] [rbp-68h]
  struct _TEB *v84; // [rsp+128h] [rbp-60h]
  struct _TEB *v85; // [rsp+130h] [rbp-58h]
  struct _TEB *v86; // [rsp+138h] [rbp-50h]
  _DWORD *v87; // [rsp+140h] [rbp-48h]
  signed __int64 v88; // [rsp+148h] [rbp-40h]
  __int64 v89; // [rsp+158h] [rbp-30h]

  v4 = a2;
  v6 = 0;
  if ( (byte_18015BFBC & 2) == 0 )
  {
    v8 = sub_180023C90((__int64)BaseAddress, a2, a3, 0LL, 0LL);
    v66 = v8;
    return v8;
  }
  v7 = 0LL;
  v87 = BaseAddress;
  if ( BaseAddress[4] == -571548178 )
  {
    if ( (dword_180158684 & 2) == 0 || !a2 )
      goto LABEL_4;
    if ( (_WORD)a2 )
    {
      v71 = 0;
    }
    else
    {
      v71 = sub_1800588D4(&stru_180159600);
      if ( v71 )
      {
LABEL_4:
        *((_DWORD *)&ListHead.HeaderX64 + 3) = 0;
        if ( (a3 & 1) != 0 )
        {
          v6 = 1;
          *((_DWORD *)&ListHead.HeaderX64 + 3) = 1;
        }
        if ( (a3 & 8) != 0 )
        {
          v6 |= 2u;
          *((_DWORD *)&ListHead.HeaderX64 + 3) = v6;
        }
        if ( (a3 & 4) != 0 )
        {
          v6 |= 0x80000000;
          *((_DWORD *)&ListHead.HeaderX64 + 3) = v6;
        }
        if ( (a3 & 0x100) != 0 )
        {
          v6 |= 0x100u;
          *((_DWORD *)&ListHead.HeaderX64 + 3) = v6;
        }
        if ( (a3 & 0xE00) != 0 )
        {
          v6 |= a3 & 0xE00;
          *((_DWORD *)&ListHead.HeaderX64 + 3) = v6;
        }
        if ( (a3 & 0x10) != 0 )
        {
          v6 |= 0x2000000u;
          *((_DWORD *)&ListHead.HeaderX64 + 3) = v6;
        }
        if ( (a3 & 2) != 0 )
        {
          v6 |= 0x1000000u;
          *((_DWORD *)&ListHead.HeaderX64 + 3) = v6;
        }
        v8 = sub_180025780((int)BaseAddress, v4, v6 & 0x11000001, (int)v67, &ListHead);
        v58 = v8;
        if ( v8 )
        {
          v9 = *(_QWORD *)v67;
          if ( (dword_180158684 & 2) != 0 )
            v9 = *(_QWORD *)v67 - 16LL;
          v79 = v9;
          *(_QWORD *)v67 = v9;
          if ( (dword_18015C2A8 & 1) == 0
            || (dword_18015C2A8 & 2) == 0
            || BaseAddress == qword_18015BFE0
            || !NtCurrentPeb()->ProcessHeap )
          {
            goto LABEL_22;
          }
          goto LABEL_176;
        }
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v83 = NtCurrentTeb();
        v83->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        goto LABEL_22;
      }
    }
    v4 -= 16LL;
    goto LABEL_4;
  }
  if ( (BaseAddress[29] & 0x1000000) != 0 )
    goto LABEL_170;
  if ( (BaseAddress[30] & 1) != 0 )
  {
    v7 = sub_180077158(BaseAddress, a2);
  }
  else if ( (a2 & 0xF) != 0 )
  {
    sub_1800A4DFC(9, (_DWORD)BaseAddress, a2, 0, 0LL, 0LL);
    v74 = 0LL;
  }
  else
  {
    v7 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
    if ( (*(_BYTE *)(v7 + 15) & 0x3F) != 0 )
    {
      v74 = v7;
    }
    else
    {
      sub_1800A4DFC(8, (_DWORD)BaseAddress, v7, 0, 0LL, 0LL);
      v7 = 0LL;
      v74 = 0LL;
    }
  }
  if ( v7 )
  {
    if ( *(_BYTE *)(v4 - 1) != 5 )
      goto LABEL_88;
    *((_BYTE *)&ListHead.HeaderX64 + 4) = 1;
    if ( *(char *)(v7 + 15) >= 0 )
    {
      if ( BaseAddress[31] )
      {
        v76 = *(_DWORD *)(v7 + 8) ^ BaseAddress[34];
        if ( HIBYTE(v76) != ((unsigned __int8)v76 ^ (unsigned __int8)(BYTE1(v76) ^ BYTE2(v76))) )
        {
          *((_BYTE *)&ListHead.HeaderX64 + 4) = 0;
          goto LABEL_82;
        }
      }
      v11 = 1;
      *((_BYTE *)&ListHead.HeaderX64 + 4) = 1;
    }
    else
    {
      v11 = sub_1800959D8(BaseAddress, v7);
      *((_BYTE *)&ListHead.HeaderX64 + 4) = v11;
      if ( !v11 )
      {
LABEL_81:
        if ( !v11 )
          goto LABEL_82;
        if ( (a3 & 0x3C000102) == 0 )
        {
          v19 = *(_BYTE *)(v4 - 16 + 15) == 5 ? v4 - 16LL * *(unsigned __int8 *)(v4 - 16 + 14) : 0LL;
          v80 = v19;
          if ( (int)sub_180095A28(*(_DWORD *)(v4 - 8), (_DWORD)BaseAddress, v4, 3, v19) < 0 )
          {
            NtCurrentTeb()->LastStatusValue = -1073741811;
            v10 = NtCurrentTeb();
            v86 = v10;
            goto LABEL_51;
          }
        }
LABEL_88:
        if ( *(char *)(v7 + 15) < 0 )
        {
          if ( (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4))
            || (v20 = *(_QWORD ***)(v7
                                  - (((unsigned int)qword_18015BFE8 ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12))) == 0LL )
          {
            sub_1800A4DFC(3, (_DWORD)BaseAddress, v7, 0, 0LL, 0LL);
            v8 = 1;
          }
          else
          {
            _m_prefetchw(v20);
            v68 = v20[1];
            v61 = 0;
            v64 = (unsigned __int16)(*(_DWORD *)(v7 + 12) >> 8);
            v21 = *(_QWORD *)(**v20 + 24LL);
            v89 = v21;
            v77 = qword_18015BFE8 ^ v21 ^ (unsigned int)v68 ^ *((_DWORD *)v68 + 6);
            if ( (_QWORD *)((char *)v68 + v64 * HIWORD(v77) + (unsigned __int16)v77) != (_QWORD *)v7 )
            {
              sub_1800A4DFC(3, *(_QWORD *)(v21 + 24), v7, 0, 0LL, 0LL);
              goto LABEL_168;
            }
            if ( RtlGetCurrentServiceSessionId() )
              UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
            else
              UserModeGlobalLogger = 2147353472LL;
            if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
              sub_1800FFB4C(*(_QWORD *)(v21 + 24), v7 + 16, 2LL, v22);
            v63 = 0;
            v62 = 0;
            v24 = 0;
            if ( MEMORY[0x7FFE036A] > 1u )
              v24 = 100;
            for ( i = 0; ; ++i )
            {
              v62 = i;
              if ( i > v24 )
                break;
              v26 = *((_DWORD *)v20 + 8);
              v63 = v26;
              if ( (v26 & 0x80000000) == 0
                && v26 == _InterlockedCompareExchange((volatile signed __int32 *)v20 + 8, v26 | 0x80000000, v26) )
              {
                goto LABEL_107;
              }
            }
            v26 = -1;
            v63 = -1;
LABEL_107:
            v65 = v26;
            *(_BYTE *)(v7 + 15) = 0x80;
            if ( v26 == -1 )
            {
              v27 = (_SLIST_ENTRY *)(v7 + 16);
              v28 = (_SLIST_HEADER *)(v20 + 2);
LABEL_167:
              RtlInterlockedPushEntrySList_0(v28, v27);
LABEL_168:
              v8 = 1;
            }
            else
            {
              v29 = v64;
              _bittestandreset64((signed __int64 *)v68[5], v64);
              if ( *((_WORD *)v20 + 8) )
              {
                v30 = RtlInterlockedFlushSList_0((PSLIST_HEADER)v20 + 1);
                for ( j = 0; ; v61 = j )
                {
                  v32 = v30;
                  if ( !v30 )
                    break;
                  v30 = v30->Next;
                  v33 = *((_DWORD *)&v32[-1].Next + 3) >> 8;
                  v29 = (unsigned __int16)v33;
                  v64 = (unsigned __int16)v33;
                  _bittestandreset64((signed __int64 *)v68[5], (unsigned __int16)v33);
                  ++j;
                }
              }
              else
              {
                j = 0;
              }
              v34 = (v29 << 16) | (j + 1 + (unsigned __int16)v26);
              v65 = v34;
              v35 = (__int64)*v20;
              if ( (_WORD)v34 != *((_WORD *)v20 + 20)
                || (v36 = *(unsigned int *)(*(_QWORD *)v35 + 32LL),
                    v37 = (_SLIST_HEADER **)*(unsigned int *)(v35 + 168),
                    *(_DWORD *)(v35 + 164) == 1)
                && (unsigned int)v36 >= (unsigned int)v37
                && (v36 = (unsigned int)(v36 - (_DWORD)v37), (unsigned int)v36 < *(_DWORD *)(*(_QWORD *)v35 + 36LL)) )
              {
                *((_DWORD *)v20 + 8) = v34;
                if ( (*((_DWORD *)v20 + 11) & 2) != 0 || !sub_180023688(v35, (__int64)v20) )
                  goto LABEL_168;
                do
                {
                  v49 = *((_DWORD *)v20 + 11);
                  if ( !v49 || (v49 & 2) != 0 )
                  {
                    *((_BYTE *)&ListHead.HeaderX64 + 8) = 0;
                    goto LABEL_168;
                  }
                }
                while ( v49 != _InterlockedCompareExchange((volatile signed __int32 *)v20 + 11, v49 | 2, v49) );
                *((_BYTE *)&ListHead.HeaderX64 + 8) = 1;
                v50 = (unsigned __int16 *)*v20;
                v51 = 0;
                for ( k = 0; ; k = v51 )
                {
                  if ( v51 >= 0x10 )
                  {
                    *((_BYTE *)&ListHead.HeaderX64 + 5) = 0;
                    v27 = (_SLIST_ENTRY *)(v20 + 6);
                    v28 = (_SLIST_HEADER *)(*(_QWORD *)(*(_QWORD *)(**v20 + 24LL)
                                                      + 8LL * *((unsigned __int16 *)*v20 + 86)
                                                      + 1192)
                                          + 144LL);
                    goto LABEL_167;
                  }
                  v52 = ((_BYTE)v51 + (unsigned __int8)v50[87]) & 0xF;
                  v53 = *(_SLIST_ENTRY **)&v50[4 * v52 + 8];
                  if ( v53 )
                  {
                    if ( (*((_BYTE *)&v53[2].Next + 12) & 1) == 0
                      && v53 == (_SLIST_ENTRY *)_InterlockedCompareExchange64(
                                                  (volatile signed __int64 *)&v50[4 * v52 + 8],
                                                  (signed __int64)v20,
                                                  (signed __int64)v53) )
                    {
                      _m_prefetchw((char *)&v53[2].Next + 12);
                      if ( _InterlockedAnd((volatile signed __int32 *)&v53[2].Next + 3, 0xFFFFFFFD) == 2 )
                      {
                        Next = (_SLIST_HEADER *)v53->Next->Next;
                        v53->Next = 0LL;
                        RtlInterlockedPushEntrySList_0(Next, v53 + 3);
                      }
                      *((_BYTE *)&ListHead.HeaderX64 + 5) = 1;
                      goto LABEL_168;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(
                               (volatile signed __int64 *)&v50[4 * v52 + 8],
                               (signed __int64)v20,
                               0LL) )
                  {
                    *((_BYTE *)&ListHead.HeaderX64 + 5) = 1;
                    goto LABEL_168;
                  }
                  ++v51;
                }
              }
              v65 = 0;
              v38 = (__int64)*v20;
              v39 = (_SLIST_ENTRY *)_InterlockedExchange64(*v20 + 1, 0LL);
              if ( !v39 )
                goto LABEL_138;
              _m_prefetchw((char *)&v39[2].Next + 12);
              if ( _InterlockedAnd((volatile signed __int32 *)&v39[2].Next + 3, 0xFFFFFFF9) == 6 )
              {
                v40 = (_SLIST_HEADER *)v39->Next->Next;
                v39->Next = 0LL;
                RtlInterlockedPushEntrySList_0(v40, v39 + 3);
                *((_BYTE *)&ListHead.HeaderX64 + 6) = 0;
                goto LABEL_138;
              }
              *((_BYTE *)&ListHead.HeaderX64 + 6) = 1;
              if ( sub_180023688(v38, (__int64)v39) )
              {
                do
                {
                  v41 = *((_DWORD *)&v39[2].Next + 3);
                  if ( !v41 || (v41 & 2) != 0 )
                  {
                    *((_BYTE *)&ListHead.HeaderX64 + 7) = 0;
                    goto LABEL_138;
                  }
                }
                while ( v41 != _InterlockedCompareExchange((volatile signed __int32 *)&v39[2].Next + 3, v41 | 2, v41) );
                *((_BYTE *)&ListHead.HeaderX64 + 7) = 1;
                v37 = (_SLIST_HEADER **)v39->Next;
                v35 = 0LL;
                for ( m = 0; ; m = v35 )
                {
                  if ( (unsigned int)v35 >= 0x10 )
                  {
                    RtlInterlockedPushEntrySList_0(
                      (PSLIST_HEADER)(*(_QWORD *)(*((_QWORD *)&v39->Next->Next[1].Next + 1)
                                                + 8LL * *((unsigned __int16 *)&v39->Next[10].Next + 6)
                                                + 1192)
                                    + 144LL),
                      v39 + 3);
                    break;
                  }
                  v42 = ((_BYTE)v35 + (unsigned __int8)*((_WORD *)v37 + 87)) & 0xF;
                  v36 = (signed __int64)v37[v42 + 2];
                  if ( v36 )
                  {
                    if ( (*(_BYTE *)(v36 + 44) & 1) == 0
                      && v36 == _InterlockedCompareExchange64(
                                  (volatile signed __int64 *)&v37[v42 + 2],
                                  (signed __int64)v39,
                                  v36) )
                    {
                      _m_prefetchw((const void *)(v36 + 44));
                      if ( _InterlockedAnd((volatile signed __int32 *)(v36 + 44), 0xFFFFFFFD) == 2 )
                      {
                        v43 = **(_SLIST_HEADER ***)v36;
                        *(_QWORD *)v36 = 0LL;
                        RtlInterlockedPushEntrySList_0(v43, (PSLIST_ENTRY)(v36 + 48));
                      }
                      break;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(
                               (volatile signed __int64 *)&v37[v42 + 2],
                               (signed __int64)v39,
                               0LL) )
                  {
                    break;
                  }
                  v35 = (unsigned int)(v35 + 1);
                }
              }
LABEL_138:
              v44 = *(_QWORD *)(*(_QWORD *)v38 + 24LL);
              v68 = *v20;
              if ( (*((_BYTE *)v20 + 38) & 3) != 0 )
              {
                BaseAddressa = (PVOID)(((unsigned __int64)v20[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
                RegionSize = (unsigned __int16)sub_18008AEA0(v20, v36, v35, v37);
                RegionSize *= 16LL * *((unsigned __int16 *)v20 + 20);
                v8 = 1;
                v45 = sub_18001E548(*(_DWORD **)(v44 + 24), 1);
                ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v45, &OldProtect);
              }
              else
              {
                v8 = 1;
              }
              *((_DWORD *)v20[1] + 5) = 0;
              sub_180022088(v44, v20[1]);
              v46 = -*((unsigned __int16 *)v20 + 20);
              do
              {
                v47 = v68[20];
                v88 = v47;
                LODWORD(v70) = v47 + v46;
                if ( v46 <= 0 )
                  HIDWORD(v70) = HIDWORD(v47) - 1;
                else
                  HIDWORD(v70) = HIDWORD(v47) + 1;
              }
              while ( v47 != _InterlockedCompareExchange64(v68 + 20, v70, v47) );
              v20[1] = 0LL;
              _InterlockedIncrement((volatile signed __int32 *)(v44 + 60));
              *((_DWORD *)v20 + 8) = 0;
              _m_prefetchw((char *)v20 + 44);
              if ( _InterlockedAnd((volatile signed __int32 *)v20 + 11, 0xFFFFFFFE) == 1 )
              {
                v48 = (_SLIST_HEADER *)**v20;
                *v20 = 0LL;
                RtlInterlockedPushEntrySList_0(v48, (PSLIST_ENTRY)v20 + 3);
              }
            }
          }
          v58 = 1;
LABEL_171:
          LOWORD(ListHead.Alignment) = 0;
          *(_QWORD *)v67 = 0LL;
          if ( (dword_18015C2A8 & 1) != 0
            && (dword_18015C2A8 & 2) != 0
            && BaseAddress != qword_18015BFE0
            && NtCurrentPeb()->ProcessHeap
            && (a3 & 0x10000000) == 0 )
          {
LABEL_176:
            sub_1800FEEB8(BaseAddress, v4);
          }
LABEL_22:
          if ( v8 && LOWORD(ListHead.Alignment) )
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(*(_QWORD *)(qword_1801598D8 + 8LL * (LOWORD(ListHead.Alignment) - 1)) + 32LL),
              -*(_QWORD *)v67);
          goto LABEL_25;
        }
LABEL_170:
        v55 = sub_1800265E0(BaseAddress);
        v8 = v55;
        v58 = v55;
        if ( !v55 )
          goto LABEL_22;
        goto LABEL_171;
      }
    }
    if ( *(char *)(v7 + 15) >= 0 )
    {
      if ( BaseAddress[31] )
      {
        v14 = *(_DWORD *)(v7 + 8);
        v81 = v14;
        if ( (v14 & BaseAddress[31]) != 0 )
          v81 = v14 ^ BaseAddress[34];
        v13 = v81;
      }
      else
      {
        v13 = *(_WORD *)(v7 + 8);
      }
      v59 = v13;
    }
    else
    {
      if ( *(_WORD *)(v7 + 8) ^ (unsigned __int16)(qword_18015BFE8 ^ (unsigned __int16)BaseAddress ^ (v7 >> 4)) )
        v12 = 0LL;
      else
        v12 = *(_QWORD *)(v7
                        - ((*(_DWORD *)(v7 + 8) ^ (unsigned int)qword_18015BFE8 ^ (unsigned int)BaseAddress ^ (unsigned int)(v7 >> 4)) >> 12));
      v13 = *(_WORD *)(v12 + 36);
    }
    v15 = v13;
    if ( *(_BYTE *)(v7 + 15) == 4 )
    {
      if ( BaseAddress[31] )
      {
        v16 = *(_DWORD *)(v7 + 8);
        v82 = v16;
        if ( (v16 & BaseAddress[31]) != 0 )
          v82 = v16 ^ BaseAddress[34];
        v17 = v82;
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
    if ( v18 + v7 >= v4 )
      goto LABEL_81;
    *((_BYTE *)&ListHead.HeaderX64 + 4) = 0;
LABEL_82:
    sub_1800A4DFC(3, (_DWORD)BaseAddress, v7, v4, 0LL, 0LL);
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v10 = NtCurrentTeb();
    v85 = v10;
    goto LABEL_51;
  }
  NtCurrentTeb()->LastStatusValue = -1073741811;
  v10 = NtCurrentTeb();
  v84 = v10;
LABEL_51:
  v10->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  v8 = 0;
  v58 = 0;
LABEL_25:
  v66 = v8;
  return v8;
}
