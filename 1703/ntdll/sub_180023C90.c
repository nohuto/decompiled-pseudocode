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

__int64 __fastcall sub_180023C90(__int64 a1, unsigned __int64 a2, int a3, __int64 *a4, _WORD *a5)
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
  _DWORD *HotpatchInformation; // rcx
  __int64 v40; // rcx
  int v42; // ecx
  __int64 v43; // rdx
  int v44; // eax
  __int64 *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r9
  __int64 v57; // rcx
  unsigned __int8 v58; // al
  struct _TEB *v59; // rbx
  struct _TEB *v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  _WORD *v63; // rax
  int v64; // r8d
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned __int16 v68; // ax
  int v69; // eax
  __int64 v70; // rdx
  int v71; // eax
  unsigned __int16 v72; // ax
  __int64 v73; // rcx
  _QWORD *v74; // rcx
  __int64 v75; // r9
  unsigned __int64 v76; // r15
  __int64 v77; // rbx
  unsigned int v78; // ecx
  __int64 v79; // r8
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rcx
  unsigned int v84; // r8d
  int v85; // edx
  signed __int32 v86; // ebx
  PSLIST_ENTRY v87; // rax
  int v88; // r8d
  unsigned int v89; // edx
  int v90; // eax
  struct _SLIST_ENTRY *v91; // r8
  int v92; // eax
  __int64 v93; // r9
  signed __int64 Next_low; // rdx
  __int64 *v95; // rsi
  struct _SLIST_ENTRY *v96; // rbx
  union _SLIST_HEADER *v97; // rcx
  struct _SLIST_ENTRY *v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rsi
  __int64 v101; // rbx
  unsigned __int16 v102; // ax
  _DWORD *v103; // rcx
  unsigned int v104; // eax
  int v105; // edx
  signed __int64 v106; // rax
  int v107; // ecx
  signed __int32 v108; // eax
  int v109; // ecx
  union _SLIST_HEADER *v110; // rcx
  signed __int32 v111; // eax
  unsigned __int16 *v112; // r8
  unsigned int i; // ecx
  __int64 v114; // r9
  struct _SLIST_ENTRY *v115; // rdx
  union _SLIST_HEADER *Next; // rcx
  unsigned __int16 v117; // [rsp+30h] [rbp-98h]
  signed __int64 v118; // [rsp+38h] [rbp-90h]
  _QWORD **v119; // [rsp+38h] [rbp-90h]
  int v120; // [rsp+40h] [rbp-88h]
  int v121; // [rsp+40h] [rbp-88h]
  char v122; // [rsp+48h] [rbp-80h]
  __int64 v123; // [rsp+48h] [rbp-80h]
  unsigned int v124[4]; // [rsp+50h] [rbp-78h] BYREF
  int v125; // [rsp+60h] [rbp-68h]
  char v126[8]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v127; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v128[9]; // [rsp+80h] [rbp-48h] BYREF
  signed __int64 v129; // [rsp+D0h] [rbp+8h]

  v5 = 0;
  v6 = a4;
  v8 = a2;
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v11 = 1;
    if ( (dword_180158684 & 2) != 0
      && a2
      && ((_WORD)a2 || !(unsigned int)sub_1800588D4(&qword_180159600, a2 >> 16, 1LL)) )
    {
      v8 -= 16LL;
    }
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
    v14 = v12 | *(_DWORD *)(a1 + 20);
    v15 = *(_DWORD *)(a1 + 40);
    v16 = v14 & 0x11000001;
    if ( v15 )
      LOBYTE(v13) = v15 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v17 = v16 | 1;
    v18 = 0LL;
    if ( !v13 )
      v17 = v16;
    v122 = v17;
    if ( a5 )
    {
      v63 = (_WORD *)sub_18001F5E8(a1, v8, v17, v6);
      v18 = (unsigned __int64)v63;
      if ( v63 )
        *a5 = *v63;
      else
        *a5 = 0;
    }
    else if ( v6 )
    {
      *v6 = sub_1800072C4(a1, v8, v17, 0LL);
    }
    if ( (v17 & 0x1000000) == 0 )
    {
      if ( *(_DWORD *)(a1 + 32) )
      {
        if ( (v18 || (v18 = sub_18001F5E8(a1, v8, v17, a4)) != 0) && (*(_BYTE *)(v18 + 2) & 0xF) != 0 )
        {
          if ( (dword_180158684 & 2) != 0 )
          {
            if ( (_WORD)v8 || (v65 = sub_1800588D4(&qword_180159600, v8 >> 16, 1LL), v64 = v8, !v65) )
              v64 = v8 + 16;
          }
          else
          {
            v64 = v8;
          }
          if ( (int)sub_180095A28(*(_BYTE *)(v18 + 2) & 0xF, a1, v64, 3, v18 + 16) < 0 )
            goto LABEL_148;
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 && sub_180023990(a1, v8, v17) == -1 )
    {
      sub_1800A4DFC(9, a1, v8, 0, 0LL, 0LL);
LABEL_148:
      v11 = 0;
      goto LABEL_118;
    }
    if ( !(_WORD)v8 && (unsigned int)sub_1800588D4(&qword_180159600, v8 >> 16, 1LL) )
    {
      if ( !sub_180009038(a1, v8, v17) )
        v11 = 0;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v53, v52, v54, v55) )
        v57 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      else
        v57 = 2147353472LL;
      if ( *(_BYTE *)v57 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( !v11 )
          goto LABEL_118;
        sub_1800FFB4C(a1, v8, 3LL, v56);
      }
      goto LABEL_66;
    }
    if ( (dword_180158684 & 1) != 0 )
    {
      v19 = sub_180100D30(a1, v8);
    }
    else if ( (a1 ^ qword_18015BFA8 ^ *(_QWORD *)((v8 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((v8 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
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
        sub_18001F198(a1, v19, 0, v17);
        v5 = 1;
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v47, v46, v48, v49) )
          v51 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v51 = 2147353472LL;
        if ( *(_BYTE *)v51 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FFB4C(a1, v8, 3LL, v50);
        goto LABEL_65;
      }
      if ( (*(_BYTE *)(v19 + 24) & 1) == 0 )
      {
        v5 = sub_180029840(
               (int)a1 + 176,
               (v19 & 0xFFF00000) + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
               v8,
               v17,
               (__int64)v124);
        if ( v5 )
        {
          if ( v124[0] <= 0x3FF0 )
          {
            v21 = a1 + 288;
            v43 = (unsigned __int8)byte_1801196F0[(unsigned __int64)(v124[0] + 15) >> 4];
            if ( (*(_QWORD *)(a1 + 288 + 8 * v43 + 192) & 1) != 0 )
              sub_1800098C4(a1 + 288, v43, 0);
          }
        }
        goto LABEL_62;
      }
      v118 = 0LL;
      v21 = 0LL;
      v22 = qword_18015BFE8 ^ ((unsigned int)v20 >> 12) ^ *(_DWORD *)((v19 & 0xFFFFFFFFFFF00000uLL)
                                                                    + ((unsigned int)((__int64)(v19
                                                                                              - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                                    + 0x28);
      v117 = v22;
      if ( v8 )
      {
        v23 = v8 - HIWORD(v22) - v20;
        v24 = *(_QWORD *)(a1
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
                    a1 + 288,
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
            *(_QWORD *)(a1 + 288),
            v8,
            (v19 & 0xFFF00000) + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
            (unsigned int)v21,
            0LL);
        }
LABEL_62:
        HotpatchInformation = NtCurrentPeb()->HotpatchInformation;
        if ( HotpatchInformation && *HotpatchInformation )
          v40 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
        else
          v40 = 2147353472LL;
        if ( *(_BYTE *)v40 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v5 )
          sub_1800FFB4C(a1, v8, ((*(_BYTE *)(v19 + 24) & 1) == 0) | 2u, v21);
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
          v118 = sub_1800218EC(
                   (v19 & 0xFFFFFFFFFFF00000uLL)
                 + ((unsigned int)((__int64)(v19 - (v19 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
          v21 = v118;
          if ( !v118 )
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
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v21 + 16));
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
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v118 + 16));
      v21 = 0LL;
      if ( v45 )
      {
        sub_18001F6A8(
          a1 + 288,
          *(_QWORD *)(a1 + 288 + 8LL * (unsigned __int8)byte_1801196F0[((unsigned __int64)v117 + 15) >> 4] + 192),
          (__int64)v45,
          v122);
        v21 = 0LL;
      }
      goto LABEL_60;
    }
LABEL_164:
    sub_1800A4DFC(9, a1, v8, 0, 0LL, 0LL);
LABEL_65:
    v11 = v5;
LABEL_66:
    if ( v11 )
    {
      if ( a4 )
      {
        v66 = *a4;
        if ( (dword_180158684 & 2) != 0 )
          v66 -= 16LL;
        *a4 = v66;
      }
      if ( (dword_18015C2A8 & 1) != 0
        && (dword_18015C2A8 & 2) != 0
        && a1 != *(_QWORD *)&qword_18015BFE0
        && NtCurrentPeb()->ProcessHeap )
      {
        goto LABEL_122;
      }
      return v11;
    }
LABEL_118:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v60 = NtCurrentTeb();
    v60->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v11;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
LABEL_109:
    v58 = sub_1800265E0(a1, a3 | 2u, v10, v8);
    v11 = v58;
    if ( v58 )
      goto LABEL_110;
    return v11;
  }
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v10 = sub_180077158(a1, a2);
  }
  else if ( (a2 & 0xF) != 0 )
  {
    sub_1800A4DFC(9, a1, a2, 0, 0LL, 0LL);
  }
  else
  {
    v10 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    if ( (*(_BYTE *)(v10 + 15) & 0x3F) == 0 )
    {
      sub_1800A4DFC(8, a1, v10, 0, 0LL, 0LL);
      v10 = 0LL;
    }
  }
  if ( !v10 )
    goto LABEL_117;
  if ( *(_BYTE *)(v8 - 1) == 5 )
  {
    if ( *(char *)(v10 + 15) >= 0 )
    {
      if ( !*(_DWORD *)(a1 + 124) )
        goto LABEL_179;
      v125 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v10 + 8);
      if ( HIBYTE(v125) == (BYTE2(v125) ^ (unsigned __int8)(v125 ^ BYTE1(v125))) )
        goto LABEL_179;
    }
    else if ( (unsigned __int8)sub_1800959D8(a1, v10) )
    {
LABEL_179:
      if ( *(char *)(v10 + 15) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v69 = *(_DWORD *)(v10 + 8);
          LOWORD(v120) = v69;
          if ( (v69 & *(_DWORD *)(a1 + 124)) != 0 )
            v120 = *(_DWORD *)(a1 + 136) ^ v69;
          v68 = v120;
        }
        else
        {
          v68 = *(_WORD *)(v10 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)(a1 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4)) )
          v67 = 0LL;
        else
          v67 = *(_QWORD *)(v10
                          - ((unsigned __int64)((unsigned int)qword_18015BFE8 ^ (unsigned int)a1 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12));
        v68 = *(_WORD *)(v67 + 36);
      }
      v70 = v68;
      if ( *(_BYTE *)(v10 + 15) == 4 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v71 = *(_DWORD *)(v10 + 8);
          LOWORD(v121) = v71;
          if ( (v71 & *(_DWORD *)(a1 + 124)) != 0 )
            v121 = *(_DWORD *)(a1 + 136) ^ v71;
          v72 = v121;
        }
        else
        {
          v72 = *(_WORD *)(v10 + 8);
        }
        v62 = v70 + *(_QWORD *)(v10 - 16) - v72;
      }
      else
      {
        v62 = 16LL * v68;
      }
      if ( v62 + v10 < v8 )
        goto LABEL_116;
      if ( (a3 & 0x3C000102) != 0 )
        goto LABEL_107;
      v73 = *(_BYTE *)(v8 - 1) == 5 ? v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14) : 0LL;
      if ( (int)sub_180095A28(*(_DWORD *)(v8 - 8), a1, v8, 3, v73) >= 0 )
        goto LABEL_107;
LABEL_117:
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v59 = NtCurrentTeb();
      v59->LastErrorValue = RtlNtStatusToDosError(-1073741811);
      return 0;
    }
LABEL_116:
    sub_1800A4DFC(3, a1, v10, v8, 0LL, 0LL);
    goto LABEL_117;
  }
LABEL_107:
  if ( *(char *)(v10 + 15) >= 0 )
  {
    v6 = a4;
    goto LABEL_109;
  }
  if ( (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)(a1 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4))
    || (v74 = *(_QWORD **)(v10
                         - ((unsigned __int64)((unsigned int)qword_18015BFE8 ^ (unsigned int)a1 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12)),
        (v119 = (_QWORD **)v74) == 0LL) )
  {
    LODWORD(v61) = a1;
LABEL_203:
    sub_1800A4DFC(3, v61, v10, 0, 0LL, 0LL);
    goto LABEL_204;
  }
  _m_prefetchw(v74);
  v75 = v74[1];
  v76 = (unsigned __int16)(*(_DWORD *)(v10 + 12) >> 8);
  v123 = v75;
  v77 = *(_QWORD *)(*(_QWORD *)*v74 + 24LL);
  v78 = qword_18015BFE8 ^ v77 ^ v75 ^ *(_DWORD *)(v75 + 24);
  v79 = (unsigned __int16)v78;
  v80 = (unsigned int)v76 * HIWORD(v78);
  v81 = v75 + v80 + v79;
  if ( v81 != v10 )
  {
    v61 = *(_QWORD *)(v77 + 24);
    goto LABEL_203;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v80, qword_18015BFE8, v81, v75) )
    v83 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
  else
    v83 = 2147353472LL;
  if ( *(_BYTE *)v83 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FFB4C(*(_QWORD *)(v77 + 24), v10 + 16, 2LL, v82);
  v84 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
    v84 = 100;
  v85 = 0;
  while ( 1 )
  {
    v86 = *((_DWORD *)v119 + 8);
    if ( (v86 & 0x80000000) == 0
      && v86 == _InterlockedCompareExchange((volatile signed __int32 *)v119 + 8, v86 | 0x80000000, v86) )
    {
      break;
    }
    if ( ++v85 > v84 )
      goto LABEL_222;
  }
  if ( v86 == -1 )
  {
LABEL_222:
    *(_BYTE *)(v10 + 15) = 0x80;
    RtlInterlockedPushEntrySList_0((PSLIST_HEADER)v119 + 1, (PSLIST_ENTRY)(v10 + 16));
    goto LABEL_204;
  }
  *(_BYTE *)(v10 + 15) = 0x80;
  _bittestandreset64(*(signed __int64 **)(v123 + 40), v76);
  if ( *((_WORD *)v119 + 8) )
  {
    v87 = RtlInterlockedFlushSList_0((PSLIST_HEADER)v119 + 1);
    v88 = 0;
    while ( v87 )
    {
      v89 = *((_DWORD *)&v87[-1].Next + 3);
      ++v88;
      v87 = v87->Next;
      v76 = (unsigned __int16)(v89 >> 8);
      _bittestandreset64(*(signed __int64 **)(v123 + 40), v76);
    }
  }
  else
  {
    v88 = 0;
  }
  v90 = v88 + (unsigned __int16)v86 + 1;
  v91 = (struct _SLIST_ENTRY *)*v119;
  v92 = ((_DWORD)v76 << 16) | v90;
  if ( (_WORD)v92 != *((_WORD *)v119 + 20)
    || (v93 = *((unsigned int *)&v91[10].Next + 2), Next_low = LODWORD(v91->Next[2].Next), HIDWORD(v91[10].Next) == 1)
    && (unsigned int)Next_low >= (unsigned int)v93
    && (Next_low = (unsigned int)(Next_low - v93), (unsigned int)Next_low < HIDWORD(v91->Next[2].Next)) )
  {
    *((_DWORD *)v119 + 8) = v92;
    if ( (*((_DWORD *)v119 + 11) & 2) == 0 && sub_180023688((__int64)v91, (__int64)v119) )
    {
      do
      {
        v111 = *((_DWORD *)v119 + 11);
        if ( !v111 || (v111 & 2) != 0 )
          goto LABEL_204;
      }
      while ( v111 != _InterlockedCompareExchange((volatile signed __int32 *)v119 + 11, v111 | 2, v111) );
      v112 = (unsigned __int16 *)*v119;
      for ( i = 0; i < 0x10; ++i )
      {
        v114 = ((_BYTE)i + (unsigned __int8)v112[87]) & 0xF;
        v115 = *(struct _SLIST_ENTRY **)&v112[4 * v114 + 8];
        if ( v115 )
        {
          if ( (*((_DWORD *)&v115[2].Next + 3) & 1) == 0
            && v115 == (struct _SLIST_ENTRY *)_InterlockedCompareExchange64(
                                                (volatile signed __int64 *)&v112[4 * v114 + 8],
                                                (signed __int64)v119,
                                                (signed __int64)v115) )
          {
            _m_prefetchw((char *)&v115[2].Next + 12);
            if ( _InterlockedAnd((volatile signed __int32 *)&v115[2].Next + 3, 0xFFFFFFFD) == 2 )
            {
              Next = (union _SLIST_HEADER *)v115->Next->Next;
              v115->Next = 0LL;
              RtlInterlockedPushEntrySList_0(Next, v115 + 3);
            }
            goto LABEL_204;
          }
        }
        else if ( !_InterlockedCompareExchange64(
                     (volatile signed __int64 *)&v112[4 * v114 + 8],
                     (signed __int64)v119,
                     0LL) )
        {
          goto LABEL_204;
        }
      }
      RtlInterlockedPushEntrySList_0(
        (PSLIST_HEADER)(*(_QWORD *)(*(_QWORD *)(**v119 + 24LL) + 8LL * *((unsigned __int16 *)*v119 + 86) + 1192) + 144LL),
        (PSLIST_ENTRY)v119 + 3);
    }
LABEL_204:
    v11 = 1;
    goto LABEL_128;
  }
  v95 = *v119;
  v96 = (struct _SLIST_ENTRY *)_InterlockedExchange64(*v119 + 1, 0LL);
  if ( !v96 )
    goto LABEL_233;
  _m_prefetchw((char *)&v96[2].Next + 12);
  if ( _InterlockedAnd((volatile signed __int32 *)&v96[2].Next + 3, 0xFFFFFFF9) == 6 )
  {
    v97 = (union _SLIST_HEADER *)v96->Next->Next;
    v96->Next = 0LL;
LABEL_231:
    v98 = v96 + 3;
LABEL_232:
    RtlInterlockedPushEntrySList_0(v97, v98);
    goto LABEL_233;
  }
  if ( !sub_180023688((__int64)v95, (__int64)v96) )
    goto LABEL_233;
  do
  {
    v108 = *((_DWORD *)&v96[2].Next + 3);
    if ( !v108 || (v108 & 2) != 0 )
      goto LABEL_233;
  }
  while ( v108 != _InterlockedCompareExchange((volatile signed __int32 *)&v96[2].Next + 3, v108 | 2, v108) );
  v91 = v96->Next;
  v109 = 0;
  while ( 1 )
  {
    v93 = ((_BYTE)v109 + (unsigned __int8)*((_WORD *)&v91[10].Next + 7)) & 0xF;
    Next_low = *((_QWORD *)&v91[1].Next + v93);
    if ( !Next_low )
    {
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&v91[1].Next + v93, (signed __int64)v96, 0LL) )
        goto LABEL_233;
      goto LABEL_245;
    }
    if ( (*(_DWORD *)(Next_low + 44) & 1) == 0
      && Next_low == _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&v91[1].Next + v93,
                       (signed __int64)v96,
                       Next_low) )
    {
      break;
    }
LABEL_245:
    if ( (unsigned int)++v109 >= 0x10 )
    {
      v97 = (union _SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&v96->Next->Next[1].Next + 1)
                                              + 8LL * *((unsigned __int16 *)&v96->Next[10].Next + 6)
                                              + 1192)
                                  + 144LL);
      goto LABEL_231;
    }
  }
  _m_prefetchw((const void *)(Next_low + 44));
  if ( _InterlockedAnd((volatile signed __int32 *)(Next_low + 44), 0xFFFFFFFD) == 2 )
  {
    v97 = **(union _SLIST_HEADER ***)Next_low;
    *(_QWORD *)Next_low = 0LL;
    v98 = (struct _SLIST_ENTRY *)(Next_low + 48);
    goto LABEL_232;
  }
LABEL_233:
  v11 = 1;
  v99 = *v95;
  v100 = (__int64)*v119;
  v101 = *(_QWORD *)(v99 + 24);
  if ( (*((_BYTE *)v119 + 38) & 3) != 0 )
  {
    v128[0] = ((unsigned __int64)v119[1] + 4151) & 0xFFFFFFFFFFFFF000uLL;
    v102 = sub_18008AEA0(v119, Next_low, v91, v93);
    v103 = *(_DWORD **)(v101 + 24);
    v127 = 16 * v102 * (unsigned __int64)*((unsigned __int16 *)v119 + 20);
    v104 = sub_18001E548(v103, 1);
    ZwProtectVirtualMemory(-1LL, v128, &v127, v104, v126);
  }
  *((_DWORD *)v119[1] + 5) = 0;
  sub_180022088(v101, (__int64)v119[1]);
  v105 = -*((unsigned __int16 *)v119 + 20);
  do
  {
    v106 = *(_QWORD *)(v100 + 160);
    if ( v105 <= 0 )
      v107 = HIDWORD(v106) - 1;
    else
      v107 = HIDWORD(v106) + 1;
    HIDWORD(v129) = v107;
    LODWORD(v129) = v106 + v105;
  }
  while ( v106 != _InterlockedCompareExchange64((volatile signed __int64 *)(v100 + 160), v129, v106) );
  v119[1] = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v101 + 60));
  *((_DWORD *)v119 + 8) = 0;
  _m_prefetchw((char *)v119 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v119 + 11, 0xFFFFFFFE) == 1 )
  {
    v110 = (union _SLIST_HEADER *)**v119;
    *v119 = 0LL;
    RtlInterlockedPushEntrySList_0(v110, (PSLIST_ENTRY)v119 + 3);
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
    && a1 != *(_QWORD *)&qword_18015BFE0
    && NtCurrentPeb()->ProcessHeap
    && (a3 & 0x10000000) == 0 )
  {
LABEL_122:
    sub_1800FEEB8(a1, v8);
  }
  return v11;
}
