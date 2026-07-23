/*
 * XREFs of sub_180023C90 @ 0x180023C90
 * Callers:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 * Callees:
 *     sub_1800072C4 @ 0x1800072C4 (sub_1800072C4.c)
 *     sub_180009038 @ 0x180009038 (sub_180009038.c)
 *     sub_1800098C4 @ 0x1800098C4 (sub_1800098C4.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     sub_18001F198 @ 0x18001F198 (sub_18001F198.c)
 *     sub_18001F5E8 @ 0x18001F5E8 (sub_18001F5E8.c)
 *     sub_18001F6A8 @ 0x18001F6A8 (sub_18001F6A8.c)
 *     sub_1800215C8 @ 0x1800215C8 (sub_1800215C8.c)
 *     sub_1800217D0 @ 0x1800217D0 (sub_1800217D0.c)
 *     sub_1800218EC @ 0x1800218EC (sub_1800218EC.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     sub_180022088 @ 0x180022088 (sub_180022088.c)
 *     sub_180023688 @ 0x180023688 (sub_180023688.c)
 *     sub_180023990 @ 0x180023990 (sub_180023990.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
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
 *     sub_1800FEEB8 @ 0x1800FEEB8 (sub_1800FEEB8.c)
 *     sub_1800FFB4C @ 0x1800FFB4C (sub_1800FFB4C.c)
 *     sub_180100D30 @ 0x180100D30 (sub_180100D30.c)
 */

__int64 __fastcall sub_180023C90(__int64 BaseAddress, unsigned __int64 a2, int a3, __int64 *a4, _WORD *a5)
{
  int v5; // r14d
  __int64 *v6; // r12
  unsigned __int64 v8; // r13
  unsigned __int64 v10; // rsi
  unsigned int v11; // r15d
  int v12; // edx
  int v13; // r8d
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // esi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r9
  int v22; // eax
  unsigned int v23; // r8d
  __int64 v24; // r10
  unsigned int v25; // ecx
  int v26; // r8d
  unsigned __int16 v27; // cx
  void *v28; // r8
  char v29; // cl
  __int64 v30; // r8
  unsigned __int64 v31; // r10
  char *v32; // r9
  char *v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // r12d
  int v37; // esi
  int v38; // ecx
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v40; // rcx
  int v42; // ecx
  __int64 v43; // rdx
  int v44; // eax
  __int64 *v45; // rdi
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // r9
  __int64 UserModeGlobalLogger; // rcx
  unsigned __int8 v50; // al
  struct _TEB *v51; // rbx
  struct _TEB *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  _WORD *v55; // rax
  int v56; // r8d
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int16 v60; // ax
  int v61; // eax
  __int64 v62; // rdx
  int v63; // eax
  unsigned __int16 v64; // ax
  __int64 v65; // rcx
  _QWORD *v66; // rcx
  unsigned __int64 v67; // r15
  __int64 v68; // rbx
  unsigned int v69; // ecx
  __int64 v70; // r9
  __int64 v71; // rcx
  unsigned int v72; // r8d
  int v73; // edx
  signed __int32 v74; // ebx
  PSLIST_ENTRY v75; // rax
  int v76; // r8d
  unsigned int v77; // edx
  int v78; // eax
  _SLIST_ENTRY *v79; // r8
  int v80; // eax
  __int64 v81; // r9
  signed __int64 Next_low; // rdx
  __int64 *v83; // rsi
  _SLIST_ENTRY *v84; // rbx
  _SLIST_HEADER *v85; // rcx
  _SLIST_ENTRY *v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rbx
  unsigned __int16 v90; // ax
  _DWORD *v91; // rcx
  ULONG v92; // eax
  int v93; // edx
  signed __int64 v94; // rax
  int v95; // ecx
  signed __int32 v96; // eax
  int v97; // ecx
  _SLIST_HEADER *v98; // rcx
  signed __int32 v99; // eax
  unsigned __int16 *v100; // r8
  unsigned int i; // ecx
  __int64 v102; // r9
  _SLIST_ENTRY *v103; // rdx
  _SLIST_HEADER *Next; // rcx
  unsigned __int16 v105; // [rsp+30h] [rbp-98h]
  _RTL_SRWLOCK *v106; // [rsp+38h] [rbp-90h]
  _QWORD **v107; // [rsp+38h] [rbp-90h]
  int v108; // [rsp+40h] [rbp-88h]
  int v109; // [rsp+40h] [rbp-88h]
  char v110; // [rsp+48h] [rbp-80h]
  __int64 v111; // [rsp+48h] [rbp-80h]
  __int64 v112; // [rsp+50h] [rbp-78h] BYREF
  int v113; // [rsp+60h] [rbp-68h]
  ULONG OldProtect; // [rsp+70h] [rbp-58h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-50h] BYREF
  PVOID BaseAddressa; // [rsp+80h] [rbp-48h] BYREF
  signed __int64 v117; // [rsp+D0h] [rbp+8h]

  v5 = 0;
  v6 = a4;
  v8 = a2;
  v10 = 0LL;
  if ( *(_DWORD *)(BaseAddress + 16) == -571548178 )
  {
    v11 = 1;
    if ( (dword_180158684 & 2) != 0 && a2 && ((_WORD)a2 || !(unsigned int)sub_1800588D4(&stru_180159600)) )
      v8 -= 16LL;
    v12 = a3 & 1 | 2;
    if ( (a3 & 8) == 0 )
      v12 = a3 & 1;
    if ( (a3 & 4) != 0 )
      v12 |= 0x80000000;
    if ( (a3 & 0x100) != 0 )
      v12 |= 0x100u;
    if ( (a3 & 0xE00) != 0 )
      v12 |= a3 & 0xE00;
    if ( (a3 & 0x10) != 0 )
      v12 |= 0x2000000u;
    if ( (a3 & 2) != 0 )
      v12 |= 0x1000000u;
    v13 = 0;
    v14 = v12 | *(_DWORD *)(BaseAddress + 20);
    v15 = *(_DWORD *)(BaseAddress + 40);
    v16 = v14 & 0x11000001;
    if ( v15 )
      LOBYTE(v13) = v15 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v17 = v16 | 1;
    v18 = 0LL;
    if ( !v13 )
      v17 = v16;
    v110 = v17;
    if ( a5 )
    {
      v55 = (_WORD *)sub_18001F5E8((_RTL_SRWLOCK *)BaseAddress, v8, v17, v6);
      v18 = (unsigned __int64)v55;
      if ( v55 )
        *a5 = *v55;
      else
        *a5 = 0;
    }
    else if ( v6 )
    {
      *v6 = sub_1800072C4(BaseAddress, v8, v17, 0LL);
    }
    if ( (v17 & 0x1000000) == 0 )
    {
      if ( *(_DWORD *)(BaseAddress + 32) )
      {
        if ( (v18 || (v18 = sub_18001F5E8((_RTL_SRWLOCK *)BaseAddress, v8, v17, a4)) != 0)
          && (*(_BYTE *)(v18 + 2) & 0xF) != 0 )
        {
          if ( (dword_180158684 & 2) != 0 )
          {
            if ( (_WORD)v8 || (v57 = sub_1800588D4(&stru_180159600), v56 = v8, !v57) )
              v56 = v8 + 16;
          }
          else
          {
            v56 = v8;
          }
          if ( (int)sub_180095A28(*(_BYTE *)(v18 + 2) & 0xF, BaseAddress, v56, 3, v18 + 16) < 0 )
            goto LABEL_148;
        }
      }
    }
    if ( (*(_DWORD *)(BaseAddress + 20) & 0x10000000) != 0 && sub_180023990(BaseAddress, v8, v17) == -1 )
    {
      sub_1800A4DFC(9, BaseAddress, v8, 0, 0LL, 0LL);
LABEL_148:
      v11 = 0;
      goto LABEL_118;
    }
    if ( !(_WORD)v8 && (unsigned int)sub_1800588D4(&stru_180159600) )
    {
      if ( !sub_180009038(BaseAddress, (void *)v8, v17) )
        v11 = 0;
      if ( RtlGetCurrentServiceSessionId() )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_118;
        sub_1800FFB4C(BaseAddress, v8, 3LL, v48);
      }
      goto LABEL_66;
    }
    if ( (dword_180158684 & 1) != 0 )
    {
      v19 = sub_180100D30(BaseAddress, v8);
    }
    else if ( (BaseAddress ^ qword_18015BFA8 ^ *(_QWORD *)((v8 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((v8 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
    {
      v19 = (v8 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((v8 - (v8 & 0xFFFFFFFFFFF00000uLL)) >> 12);
    }
    else
    {
      v19 = 0LL;
    }
    if ( !v19 || (*(_BYTE *)(v19 + 24) & 4) == 0 )
      goto LABEL_164;
    if ( (*(_BYTE *)(v19 + 24) & 8) != 0 )
    {
      if ( (*(_BYTE *)(v19 + 24) & 0x21) == 0
        && v8 != (v19 & 0xFFFFFFFFFFF00000uLL) + (((unsigned int)(v19 >> 5) & 0x7FFF) << 12) )
      {
        goto LABEL_164;
      }
    }
    else
    {
      v19 += -32LL * *(unsigned __int8 *)(v19 + 27);
      if ( (*(_BYTE *)(v19 + 24) & 4) == 0 || (*(_BYTE *)(v19 + 24) & 8) == 0 || (*(_BYTE *)(v19 + 24) & 0x21) == 0 )
        goto LABEL_164;
    }
    if ( v19 )
    {
      v20 = (v19 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
      if ( v8 <= v20 )
      {
        sub_18001F198(BaseAddress, v19, 0, v17);
        v5 = 1;
        if ( RtlGetCurrentServiceSessionId() )
          v47 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          v47 = 2147353472LL;
        if ( *(_BYTE *)v47 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FFB4C(BaseAddress, v8, 3LL, v46);
        goto LABEL_65;
      }
      if ( (*(_BYTE *)(v19 + 24) & 1) == 0 )
      {
        v5 = sub_180029840((PRTL_SRWLOCK)(BaseAddress + 176), (__int64)&v112);
        if ( v5 )
        {
          if ( (unsigned int)v112 <= 0x3FF0 )
          {
            v21 = BaseAddress + 288;
            v43 = (unsigned __int8)byte_1801196F0[(unsigned __int64)(unsigned int)(v112 + 15) >> 4];
            if ( (*(_QWORD *)(BaseAddress + 288 + 8 * v43 + 192) & 1) != 0 )
              sub_1800098C4(BaseAddress + 288, v43, 0);
          }
        }
        goto LABEL_62;
      }
      v106 = 0LL;
      v21 = 0LL;
      v22 = qword_18015BFE8 ^ ((unsigned int)v20 >> 12) ^ *(_DWORD *)((v19 & 0xFFFFFFFFFFF00000uLL)
                                                                    + ((unsigned int)((__int64)(v19
                                                                                              - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                                    + 0x28);
      v105 = v22;
      if ( v8 )
      {
        v23 = v8 - HIWORD(v22) - v20;
        v24 = *(_QWORD *)(BaseAddress
                        + 8LL * (unsigned __int8)byte_1801196F0[((unsigned __int64)(unsigned __int16)v22 + 15) >> 4]
                        + 480);
        v25 = *(_DWORD *)(v24 + 72);
        if ( v25 )
        {
          v21 = (v23 * (unsigned __int64)v25) >> *(_BYTE *)(v24 + 76);
          v26 = v23 - v21 * (unsigned __int16)v22;
        }
        else
        {
          v42 = *(unsigned __int8 *)(v24 + 76);
          v21 = v23 >> v42;
          v26 = v23 & ((1 << v42) - 1);
        }
        if ( !v26 )
        {
          v27 = *(_WORD *)((v19 & 0xFFFFFFFFFFF00000uLL)
                         + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                         + 0x24);
          if ( v27 >= (unsigned __int16)v21 )
            v27 = v21;
          *(_WORD *)((v19 & 0xFFFFFFFFFFF00000uLL)
                   + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                   + 0x24) = v27;
          v28 = (void *)(v20 + 8 * (((unsigned __int64)(unsigned int)(2 * v21) >> 6) + 6));
          _m_prefetchw(v28);
          if ( (((unsigned __int64)_InterlockedAnd64((volatile signed __int64 *)v28, ~(3LL << ((2 * v21) & 0x3F))) >> ((2 * v21) & 0x3F)) & 1) != 0 )
          {
            if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF00000uLL)
                          + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                          + 0x2D) > 1u )
            {
              v29 = *(_BYTE *)((v19 & 0xFFFFFFFFFFF00000uLL)
                             + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                             + 0x2C);
              v30 = (unsigned int)(v8 - v20) >> v29;
              v31 = v20 + *(unsigned __int16 *)(v20 + 46);
              v32 = (char *)(v31 + 2 * v30);
              _m_prefetchw(v32);
              v33 = &v32[2
                       * ((((unsigned int)(unsigned __int16)v22 - 1 + (_DWORD)v8 - (_DWORD)v20) >> v29)
                        - (unsigned int)v30)
                       + 2];
              LODWORD(v34) = -1;
              if ( v32 < v33 )
              {
                v35 = (__int64)&v32[-v31];
                do
                {
                  if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v32, 0xFFFFu) == 1 && (_DWORD)v34 == -1 )
                    v34 = v35 >> 1;
                  v32 += 2;
                  v35 += 2LL;
                }
                while ( v32 < v33 );
                if ( (_DWORD)v34 != -1 )
                  sub_1800215C8(
                    BaseAddress + 288,
                    (v19 & 0xFFFFFFFFFFF00000uLL)
                  + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
                    v34,
                    2u,
                    v17);
              }
            }
            v21 = 0LL;
            goto LABEL_53;
          }
          sub_1800A4DFC(
            16,
            *(_QWORD *)(BaseAddress + 288),
            v8,
            (v19 & 0xFFF00000) + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
            (unsigned int)v21,
            0LL);
        }
LABEL_62:
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && SharedData->ServiceSessionId )
          v40 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          v40 = 2147353472LL;
        if ( *(_BYTE *)v40 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v5 )
          sub_1800FFB4C(BaseAddress, v8, ((*(_BYTE *)(v19 + 24) & 1) == 0) | 2u, v21);
        goto LABEL_65;
      }
LABEL_53:
      v36 = *(unsigned __int16 *)((v19 & 0xFFFFFFFFFFF00000uLL)
                                + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                + 0x22);
      LOWORD(v37) = *(_WORD *)((v19 & 0xFFFFFFFFFFF00000uLL)
                             + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                             + 0x20);
      do
      {
        if ( !v21 && (!(_WORD)v37 || (unsigned __int16)v37 == v36 - 1) )
        {
          v106 = sub_1800218EC(
                   (v19 & 0xFFFFFFFFFFF00000uLL)
                 + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
          v21 = (unsigned __int64)v106;
          if ( !v106 )
          {
            v5 = 1;
            goto LABEL_62;
          }
        }
        v38 = (unsigned __int16)(v37 + 1) - 1;
        v37 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)(v20 + 32), v37 + 1, v37);
      }
      while ( v37 != v38 );
      if ( (_WORD)v37 )
      {
        if ( (unsigned __int16)v37 != v36 - 1 )
        {
LABEL_60:
          v5 = 1;
          if ( v21 )
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v21 + 16));
          goto LABEL_62;
        }
        v44 = 2;
      }
      else
      {
        v44 = 0;
      }
      v45 = sub_1800217D0(
              v21,
              (__int64 *)((v19 & 0xFFFFFFFFFFF00000uLL)
                        + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)),
              v44);
      RtlReleaseSRWLockExclusive(v106 + 2);
      v21 = 0LL;
      if ( v45 )
      {
        sub_18001F6A8(
          BaseAddress + 288,
          *(_RTL_SRWLOCK **)(BaseAddress
                           + 288
                           + 8LL * (unsigned __int8)byte_1801196F0[((unsigned __int64)v105 + 15) >> 4]
                           + 192),
          (__int64)v45,
          v110);
        v21 = 0LL;
      }
      goto LABEL_60;
    }
LABEL_164:
    sub_1800A4DFC(9, BaseAddress, v8, 0, 0LL, 0LL);
LABEL_65:
    v11 = v5;
LABEL_66:
    if ( v11 )
    {
      if ( a4 )
      {
        v58 = *a4;
        if ( (dword_180158684 & 2) != 0 )
          v58 -= 16LL;
        *a4 = v58;
      }
      if ( (dword_18015C2A8 & 1) != 0
        && (dword_18015C2A8 & 2) != 0
        && (PVOID)BaseAddress != qword_18015BFE0
        && NtCurrentPeb()->ProcessHeap )
      {
        goto LABEL_122;
      }
      return v11;
    }
LABEL_118:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v52 = NtCurrentTeb();
    v52->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v11;
  }
  if ( (*(_DWORD *)(BaseAddress + 116) & 0x1000000) != 0 )
  {
LABEL_109:
    v50 = sub_1800265E0((PVOID)BaseAddress);
    v11 = v50;
    if ( v50 )
      goto LABEL_110;
    return v11;
  }
  if ( (*(_BYTE *)(BaseAddress + 120) & 1) != 0 )
  {
    v10 = sub_180077158(BaseAddress, a2);
  }
  else if ( (a2 & 0xF) != 0 )
  {
    sub_1800A4DFC(9, BaseAddress, a2, 0, 0LL, 0LL);
  }
  else
  {
    v10 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    if ( (*(_BYTE *)(v10 + 15) & 0x3F) == 0 )
    {
      sub_1800A4DFC(8, BaseAddress, v10, 0, 0LL, 0LL);
      v10 = 0LL;
    }
  }
  if ( !v10 )
    goto LABEL_117;
  if ( *(_BYTE *)(v8 - 1) == 5 )
  {
    if ( *(char *)(v10 + 15) >= 0 )
    {
      if ( !*(_DWORD *)(BaseAddress + 124) )
        goto LABEL_179;
      v113 = *(_DWORD *)(BaseAddress + 136) ^ *(_DWORD *)(v10 + 8);
      if ( HIBYTE(v113) == (BYTE2(v113) ^ (unsigned __int8)(v113 ^ BYTE1(v113))) )
        goto LABEL_179;
    }
    else if ( (unsigned __int8)sub_1800959D8(BaseAddress, v10) )
    {
LABEL_179:
      if ( *(char *)(v10 + 15) >= 0 )
      {
        if ( *(_DWORD *)(BaseAddress + 124) )
        {
          v61 = *(_DWORD *)(v10 + 8);
          LOWORD(v108) = v61;
          if ( (v61 & *(_DWORD *)(BaseAddress + 124)) != 0 )
            v108 = *(_DWORD *)(BaseAddress + 136) ^ v61;
          v60 = v108;
        }
        else
        {
          v60 = *(_WORD *)(v10 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)(BaseAddress ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4)) )
          v59 = 0LL;
        else
          v59 = *(_QWORD *)(v10
                          - ((unsigned __int64)((unsigned int)qword_18015BFE8 ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12));
        v60 = *(_WORD *)(v59 + 36);
      }
      v62 = v60;
      if ( *(_BYTE *)(v10 + 15) == 4 )
      {
        if ( *(_DWORD *)(BaseAddress + 124) )
        {
          v63 = *(_DWORD *)(v10 + 8);
          LOWORD(v109) = v63;
          if ( (v63 & *(_DWORD *)(BaseAddress + 124)) != 0 )
            v109 = *(_DWORD *)(BaseAddress + 136) ^ v63;
          v64 = v109;
        }
        else
        {
          v64 = *(_WORD *)(v10 + 8);
        }
        v54 = v62 + *(_QWORD *)(v10 - 16) - v64;
      }
      else
      {
        v54 = 16LL * v60;
      }
      if ( v54 + v10 < v8 )
        goto LABEL_116;
      if ( (a3 & 0x3C000102) != 0 )
        goto LABEL_107;
      v65 = *(_BYTE *)(v8 - 1) == 5 ? v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14) : 0LL;
      if ( (int)sub_180095A28(*(_DWORD *)(v8 - 8), BaseAddress, v8, 3, v65) >= 0 )
        goto LABEL_107;
LABEL_117:
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v51 = NtCurrentTeb();
      v51->LastErrorValue = RtlNtStatusToDosError(-1073741811);
      return 0;
    }
LABEL_116:
    sub_1800A4DFC(3, BaseAddress, v10, v8, 0LL, 0LL);
    goto LABEL_117;
  }
LABEL_107:
  if ( *(char *)(v10 + 15) >= 0 )
  {
    v6 = a4;
    goto LABEL_109;
  }
  if ( (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)(BaseAddress ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4))
    || (v66 = *(_QWORD **)(v10
                         - ((unsigned __int64)((unsigned int)qword_18015BFE8 ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12)),
        (v107 = (_QWORD **)v66) == 0LL) )
  {
    LODWORD(v53) = BaseAddress;
LABEL_203:
    sub_1800A4DFC(3, v53, v10, 0, 0LL, 0LL);
    goto LABEL_204;
  }
  _m_prefetchw(v66);
  v67 = (unsigned __int16)(*(_DWORD *)(v10 + 12) >> 8);
  v111 = v66[1];
  v68 = *(_QWORD *)(*(_QWORD *)*v66 + 24LL);
  v69 = qword_18015BFE8 ^ v68 ^ v111 ^ *(_DWORD *)(v111 + 24);
  if ( v111 + (unsigned int)v67 * HIWORD(v69) + (unsigned __int16)v69 != v10 )
  {
    v53 = *(_QWORD *)(v68 + 24);
    goto LABEL_203;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v71 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v71 = 2147353472LL;
  if ( *(_BYTE *)v71 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FFB4C(*(_QWORD *)(v68 + 24), v10 + 16, 2LL, v70);
  v72 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
    v72 = 100;
  v73 = 0;
  while ( 1 )
  {
    v74 = *((_DWORD *)v107 + 8);
    if ( (v74 & 0x80000000) == 0
      && v74 == _InterlockedCompareExchange((volatile signed __int32 *)v107 + 8, v74 | 0x80000000, v74) )
    {
      break;
    }
    if ( ++v73 > v72 )
      goto LABEL_222;
  }
  if ( v74 == -1 )
  {
LABEL_222:
    *(_BYTE *)(v10 + 15) = 0x80;
    RtlInterlockedPushEntrySList_0((PSLIST_HEADER)v107 + 1, (PSLIST_ENTRY)(v10 + 16));
    goto LABEL_204;
  }
  *(_BYTE *)(v10 + 15) = 0x80;
  _bittestandreset64(*(signed __int64 **)(v111 + 40), v67);
  if ( *((_WORD *)v107 + 8) )
  {
    v75 = RtlInterlockedFlushSList_0((PSLIST_HEADER)v107 + 1);
    v76 = 0;
    while ( v75 )
    {
      v77 = *((_DWORD *)&v75[-1].Next + 3);
      ++v76;
      v75 = v75->Next;
      v67 = (unsigned __int16)(v77 >> 8);
      _bittestandreset64(*(signed __int64 **)(v111 + 40), v67);
    }
  }
  else
  {
    v76 = 0;
  }
  v78 = v76 + (unsigned __int16)v74 + 1;
  v79 = (_SLIST_ENTRY *)*v107;
  v80 = ((_DWORD)v67 << 16) | v78;
  if ( (_WORD)v80 != *((_WORD *)v107 + 20)
    || (v81 = *((unsigned int *)&v79[10].Next + 2), Next_low = LODWORD(v79->Next[2].Next), HIDWORD(v79[10].Next) == 1)
    && (unsigned int)Next_low >= (unsigned int)v81
    && (Next_low = (unsigned int)(Next_low - v81), (unsigned int)Next_low < HIDWORD(v79->Next[2].Next)) )
  {
    *((_DWORD *)v107 + 8) = v80;
    if ( (*((_DWORD *)v107 + 11) & 2) == 0 && sub_180023688((__int64)v79, (__int64)v107) )
    {
      do
      {
        v99 = *((_DWORD *)v107 + 11);
        if ( !v99 || (v99 & 2) != 0 )
          goto LABEL_204;
      }
      while ( v99 != _InterlockedCompareExchange((volatile signed __int32 *)v107 + 11, v99 | 2, v99) );
      v100 = (unsigned __int16 *)*v107;
      for ( i = 0; i < 0x10; ++i )
      {
        v102 = ((_BYTE)i + (unsigned __int8)v100[87]) & 0xF;
        v103 = *(_SLIST_ENTRY **)&v100[4 * v102 + 8];
        if ( v103 )
        {
          if ( (*((_DWORD *)&v103[2].Next + 3) & 1) == 0
            && v103 == (_SLIST_ENTRY *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)&v100[4 * v102 + 8],
                                         (signed __int64)v107,
                                         (signed __int64)v103) )
          {
            _m_prefetchw((char *)&v103[2].Next + 12);
            if ( _InterlockedAnd((volatile signed __int32 *)&v103[2].Next + 3, 0xFFFFFFFD) == 2 )
            {
              Next = (_SLIST_HEADER *)v103->Next->Next;
              v103->Next = 0LL;
              RtlInterlockedPushEntrySList_0(Next, v103 + 3);
            }
            goto LABEL_204;
          }
        }
        else if ( !_InterlockedCompareExchange64(
                     (volatile signed __int64 *)&v100[4 * v102 + 8],
                     (signed __int64)v107,
                     0LL) )
        {
          goto LABEL_204;
        }
      }
      RtlInterlockedPushEntrySList_0(
        (PSLIST_HEADER)(*(_QWORD *)(*(_QWORD *)(**v107 + 24LL) + 8LL * *((unsigned __int16 *)*v107 + 86) + 1192) + 144LL),
        (PSLIST_ENTRY)v107 + 3);
    }
LABEL_204:
    v11 = 1;
    goto LABEL_128;
  }
  v83 = *v107;
  v84 = (_SLIST_ENTRY *)_InterlockedExchange64(*v107 + 1, 0LL);
  if ( !v84 )
    goto LABEL_233;
  _m_prefetchw((char *)&v84[2].Next + 12);
  if ( _InterlockedAnd((volatile signed __int32 *)&v84[2].Next + 3, 0xFFFFFFF9) == 6 )
  {
    v85 = (_SLIST_HEADER *)v84->Next->Next;
    v84->Next = 0LL;
LABEL_231:
    v86 = v84 + 3;
LABEL_232:
    RtlInterlockedPushEntrySList_0(v85, v86);
    goto LABEL_233;
  }
  if ( !sub_180023688((__int64)v83, (__int64)v84) )
    goto LABEL_233;
  do
  {
    v96 = *((_DWORD *)&v84[2].Next + 3);
    if ( !v96 || (v96 & 2) != 0 )
      goto LABEL_233;
  }
  while ( v96 != _InterlockedCompareExchange((volatile signed __int32 *)&v84[2].Next + 3, v96 | 2, v96) );
  v79 = v84->Next;
  v97 = 0;
  while ( 1 )
  {
    v81 = ((_BYTE)v97 + (unsigned __int8)*((_WORD *)&v79[10].Next + 7)) & 0xF;
    Next_low = *((_QWORD *)&v79[1].Next + v81);
    if ( !Next_low )
    {
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&v79[1].Next + v81, (signed __int64)v84, 0LL) )
        goto LABEL_233;
      goto LABEL_245;
    }
    if ( (*(_DWORD *)(Next_low + 44) & 1) == 0
      && Next_low == _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&v79[1].Next + v81,
                       (signed __int64)v84,
                       Next_low) )
    {
      break;
    }
LABEL_245:
    if ( (unsigned int)++v97 >= 0x10 )
    {
      v85 = (_SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&v84->Next->Next[1].Next + 1)
                                        + 8LL * *((unsigned __int16 *)&v84->Next[10].Next + 6)
                                        + 1192)
                            + 144LL);
      goto LABEL_231;
    }
  }
  _m_prefetchw((const void *)(Next_low + 44));
  if ( _InterlockedAnd((volatile signed __int32 *)(Next_low + 44), 0xFFFFFFFD) == 2 )
  {
    v85 = **(_SLIST_HEADER ***)Next_low;
    *(_QWORD *)Next_low = 0LL;
    v86 = (_SLIST_ENTRY *)(Next_low + 48);
    goto LABEL_232;
  }
LABEL_233:
  v11 = 1;
  v87 = *v83;
  v88 = (__int64)*v107;
  v89 = *(_QWORD *)(v87 + 24);
  if ( (*((_BYTE *)v107 + 38) & 3) != 0 )
  {
    BaseAddressa = (PVOID)(((unsigned __int64)v107[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
    v90 = sub_18008AEA0(v107, Next_low, v79, v81);
    v91 = *(_DWORD **)(v89 + 24);
    RegionSize = 16 * v90 * (unsigned __int64)*((unsigned __int16 *)v107 + 20);
    v92 = sub_18001E548(v91, 1);
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, v92, &OldProtect);
  }
  *((_DWORD *)v107[1] + 5) = 0;
  sub_180022088(v89, v107[1]);
  v93 = -*((unsigned __int16 *)v107 + 20);
  do
  {
    v94 = *(_QWORD *)(v88 + 160);
    if ( v93 <= 0 )
      v95 = HIDWORD(v94) - 1;
    else
      v95 = HIDWORD(v94) + 1;
    HIDWORD(v117) = v95;
    LODWORD(v117) = v94 + v93;
  }
  while ( v94 != _InterlockedCompareExchange64((volatile signed __int64 *)(v88 + 160), v117, v94) );
  v107[1] = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v89 + 60));
  *((_DWORD *)v107 + 8) = 0;
  _m_prefetchw((char *)v107 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v107 + 11, 0xFFFFFFFE) == 1 )
  {
    v98 = (_SLIST_HEADER *)**v107;
    *v107 = 0LL;
    RtlInterlockedPushEntrySList_0(v98, (PSLIST_ENTRY)v107 + 3);
  }
LABEL_128:
  v6 = a4;
LABEL_110:
  if ( a5 )
    *a5 = 0;
  if ( v6 )
    *v6 = 0LL;
  if ( (dword_18015C2A8 & 1) != 0
    && (dword_18015C2A8 & 2) != 0
    && (PVOID)BaseAddress != qword_18015BFE0
    && NtCurrentPeb()->ProcessHeap
    && (a3 & 0x10000000) == 0 )
  {
LABEL_122:
    sub_1800FEEB8(BaseAddress, v8);
  }
  return v11;
}
