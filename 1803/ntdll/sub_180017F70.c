/*
 * XREFs of sub_180017F70 @ 0x180017F70
 * Callers:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     sub_180013AC8 @ 0x180013AC8 (sub_180013AC8.c)
 *     sub_180014FCC @ 0x180014FCC (sub_180014FCC.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_1800173E0 @ 0x1800173E0 (sub_1800173E0.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_18001BA50 @ 0x18001BA50 (sub_18001BA50.c)
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 *     sub_180023AAC @ 0x180023AAC (sub_180023AAC.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 *     sub_18006316C @ 0x18006316C (sub_18006316C.c)
 *     sub_1800631EC @ 0x1800631EC (sub_1800631EC.c)
 *     sub_180063438 @ 0x180063438 (sub_180063438.c)
 *     sub_18006377C @ 0x18006377C (sub_18006377C.c)
 *     sub_180063A64 @ 0x180063A64 (sub_180063A64.c)
 *     sub_180063ACC @ 0x180063ACC (sub_180063ACC.c)
 *     sub_18006B2D8 @ 0x18006B2D8 (sub_18006B2D8.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x18009E590 (RtlInterlockedPushEntrySList_0.c)
 *     RtlInterlockedFlushSList_0 @ 0x18009E5D0 (RtlInterlockedFlushSList_0.c)
 *     sub_1800EBFF8 @ 0x1800EBFF8 (sub_1800EBFF8.c)
 *     sub_1800FD70C @ 0x1800FD70C (sub_1800FD70C.c)
 *     sub_1800FE3BC @ 0x1800FE3BC (sub_1800FE3BC.c)
 *     sub_180102758 @ 0x180102758 (sub_180102758.c)
 *     sub_180102B70 @ 0x180102B70 (sub_180102B70.c)
 *     sub_180105970 @ 0x180105970 (sub_180105970.c)
 */

__int64 __fastcall sub_180017F70(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 *a4, _WORD *a5)
{
  int v5; // r15d
  unsigned __int64 v8; // rsi
  unsigned __int64 v10; // r12
  int v11; // edx
  int v12; // r8d
  int v13; // ecx
  int v14; // edx
  _WORD *v15; // rbx
  unsigned int v16; // r12d
  unsigned __int64 v17; // r14
  int v18; // r9d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  char v24; // cl
  unsigned __int64 v25; // r10
  __int64 v26; // r8
  int v27; // ebx
  unsigned int v28; // r9d
  unsigned int v29; // edx
  int v30; // edi
  __int64 v31; // rcx
  unsigned int v32; // r8d
  __int64 v33; // rax
  char v34; // cl
  unsigned __int64 v35; // rdx
  int v36; // r8d
  __int64 v37; // r8
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r8
  unsigned __int16 v40; // ax
  int v41; // ecx
  unsigned __int64 v42; // r14
  __int16 v43; // ax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rdi
  unsigned __int64 v47; // rdx
  __int64 v48; // rbx
  unsigned __int64 v49; // rdx
  int v50; // edx
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v52; // rcx
  unsigned int v53; // r14d
  __int64 v55; // r9
  __int64 v56; // r10
  signed __int64 v57; // rax
  signed __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 UserModeGlobalLogger; // rcx
  __int64 v62; // rcx
  unsigned __int8 v63; // al
  char v64; // cl
  struct _TEB *v65; // rbx
  __int64 v66; // r8
  struct _TEB *v67; // rbx
  int v68; // edx
  __int64 v69; // rax
  unsigned __int16 v70; // ax
  int v71; // eax
  __int64 v72; // rdx
  int v73; // eax
  unsigned __int16 v74; // ax
  __int64 v75; // rcx
  __int64 v76; // rcx
  signed __int32 *v77; // rbx
  int v78; // edx
  __int64 v79; // rax
  __int64 v80; // r14
  __int64 v81; // rdx
  __int64 v82; // rcx
  unsigned int v83; // r9d
  int v84; // r8d
  signed __int32 v85; // ebx
  _SLIST_HEADER *v86; // rdx
  _SLIST_HEADER *v87; // r8
  PSLIST_ENTRY v88; // rax
  int v89; // r8d
  unsigned int v90; // edx
  signed __int64 *v91; // rcx
  int v92; // eax
  _QWORD **v93; // rbx
  int v94; // eax
  __int64 v95; // r8
  _SLIST_HEADER **v96; // r9
  signed __int64 v97; // rdx
  _SLIST_ENTRY *v98; // r12
  _SLIST_HEADER *v99; // rcx
  _SLIST_ENTRY *v100; // rdx
  __int64 v101; // r12
  unsigned __int16 v102; // ax
  __int64 v103; // rcx
  ULONG v104; // eax
  unsigned __int16 *v105; // r8
  int v106; // edx
  signed __int64 v107; // rax
  _SLIST_HEADER *v108; // rcx
  signed __int32 v109; // eax
  __int64 v110; // rax
  _SLIST_HEADER **v111; // rcx
  signed __int32 v112; // eax
  unsigned __int16 *v113; // r9
  int v114; // r8d
  __int64 v115; // rax
  _SLIST_ENTRY *v116; // rdx
  unsigned __int16 *v117; // rcx
  _SLIST_HEADER *Next; // rcx
  signed __int32 v119[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v120; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v121; // [rsp+38h] [rbp-70h]
  __int64 v122; // [rsp+40h] [rbp-68h]
  signed __int64 v123; // [rsp+48h] [rbp-60h]
  int v124; // [rsp+50h] [rbp-58h]
  unsigned int v125; // [rsp+58h] [rbp-50h] BYREF
  ULONG OldProtect; // [rsp+5Ch] [rbp-4Ch] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-40h] BYREF
  __int128 v129; // [rsp+70h] [rbp-38h] BYREF
  int v130; // [rsp+B0h] [rbp+8h]
  BOOL v131; // [rsp+B0h] [rbp+8h]
  __int64 v132; // [rsp+B0h] [rbp+8h]
  unsigned __int16 *v133; // [rsp+B0h] [rbp+8h]
  signed __int64 v134; // [rsp+B0h] [rbp+8h]

  v5 = 0;
  v8 = a2;
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (dword_180159760 & 2) != 0 && a2 )
    {
      v122 = *(_QWORD *)(a2 - 16);
      v8 = a2 - v122;
    }
    else
    {
      v122 = 0LL;
    }
    v11 = a3 & 1 | 2;
    if ( (a3 & 8) == 0 )
      v11 = a3 & 1;
    if ( (a3 & 4) != 0 )
      v11 |= 0x80000000;
    if ( (a3 & 0x100) != 0 )
      v11 |= 0x100u;
    if ( (a3 & 0xE00) != 0 )
      v11 |= a3 & 0xE00;
    if ( (a3 & 0x10) != 0 )
      v11 |= 0x2000000u;
    if ( (a3 & 2) != 0 )
      v11 |= 0x1000000u;
    v12 = 0;
    v13 = *(_DWORD *)(a1 + 64);
    v14 = (*(_DWORD *)(a1 + 20) | v11) & 0x11000001;
    if ( v13 )
      LOBYTE(v12) = v13 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v15 = a5;
    v16 = v14 | 1;
    v17 = 0LL;
    v18 = 1;
    if ( !v12 )
      v16 = v14;
    if ( !a5 )
    {
      if ( a4 )
        *a4 = sub_180063ACC(a1, v8, v16, 0LL);
LABEL_55:
      if ( (v16 & 0x1000000) == 0 )
      {
        if ( *(_DWORD *)(a1 + 56) )
        {
          if ( (v17 || (v17 = sub_180063A64(a1, v8, v16, a4)) != 0) && v17 != -1LL )
          {
            v64 = *(_BYTE *)(v17 + 2);
            if ( (v64 & 0xF) != 0 && (int)sub_1800EBFF8(v64 & 0xF, a1, v8, 3, v17 + 16) < 0 )
              goto LABEL_155;
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 && sub_18001BA50(a1, v8, v16) == -1 )
      {
        sub_18009A5F0(9, a1, v8, 0, 0LL, 0LL);
LABEL_155:
        v53 = 0;
        goto LABEL_156;
      }
      if ( (_WORD)v8 )
      {
        v44 = 0;
      }
      else
      {
        v60 = sub_18006316C(&unk_18015D838, 2 * ((v8 - qword_18015D878) >> 20));
        if ( !v60 || (v44 = v60 - 1, v44 == 2) )
        {
          v131 = sub_1800631EC(a1, v8, v16) != 0;
          if ( RtlGetCurrentServiceSessionId() )
            UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          else
            UserModeGlobalLogger = 2147353472LL;
          v53 = v131;
          if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( !v131 )
              goto LABEL_156;
            sub_1800FE3BC(a1, v8, 3LL);
          }
          goto LABEL_77;
        }
      }
      v45 = 120LL * v44;
      v46 = v45 + a1 + 112;
      if ( (dword_180159760 & 1) != 0 )
      {
        v48 = sub_180105970(v45 + a1 + 112, v8);
      }
      else
      {
        v47 = v8 & *(_QWORD *)v46;
        if ( (qword_18015A440 ^ v46 ^ v47 ^ *(_QWORD *)(v47 + 0x10)) == 0xA2E64EADA2E64EADuLL )
          v48 = v47 + 32 * ((unsigned __int64)(unsigned int)(v8 - v47) >> *(_BYTE *)(v46 + 8));
        else
          v48 = 0LL;
      }
      if ( !v48 || (*(_BYTE *)(v48 + 24) & 1) == 0 )
        goto LABEL_170;
      if ( (*(_BYTE *)(v48 + 24) & 2) != 0 )
      {
        if ( (*(_BYTE *)(v48 + 24) & 0xCu) < 8 && (((1 << *(_BYTE *)(v46 + 8)) - 1) & v8) != 0 )
          goto LABEL_170;
      }
      else
      {
        v48 += -32LL * *(unsigned __int8 *)(v48 + 31);
        if ( (*(_BYTE *)(v48 + 24) & 1) == 0 || (*(_BYTE *)(v48 + 24) & 2) == 0 || (*(_BYTE *)(v48 + 24) & 0xCu) < 8 )
          goto LABEL_170;
      }
      if ( v48 )
      {
        v49 = (v48 & *(_QWORD *)v46) + ((v48 - (v48 & *(_QWORD *)v46)) >> 5 << *(_BYTE *)(v46 + 8));
        if ( v8 <= v49 )
        {
          sub_180023AAC(v46, v48, 0LL, v16);
          v130 = 1;
          if ( RtlGetCurrentServiceSessionId() )
            v62 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          else
            v62 = 2147353472LL;
          if ( !*(_BYTE *)v62 || (NtCurrentPeb()->TracingFlags & 1) == 0 )
            goto LABEL_76;
          v66 = 3LL;
        }
        else
        {
          if ( (*(_BYTE *)(v48 + 24) & 0xC) == 8 )
          {
            v50 = sub_180018770(*(_QWORD *)(v46 + 80), v49, v8, v16);
            v130 = v50;
          }
          else
          {
            v130 = sub_1800205E0(*(PRTL_SRWLOCK *)(v46 + 88), (__int64)&v125);
            v50 = v130;
            if ( v130 )
            {
              v55 = *(_QWORD *)(v46 + 80);
              if ( v125 <= *(_DWORD *)(v55 + 80) - 16 )
              {
                v56 = byte_1801190F0[(unsigned __int64)(v125 + 15) >> 4];
                if ( (*(_QWORD *)(v55 + 8 * v56 + 224) & 1) != 0 )
                {
                  do
                  {
                    v57 = *(_QWORD *)(v55 + 8 * v56 + 224);
                    v123 = v57;
                    v58 = v57;
                    v121 = (_QWORD *)v57;
                    if ( (v57 & 1) == 0 )
                      break;
                    if ( WORD1(v123) > 1u )
                    {
                      WORD1(v121) = WORD1(v123) - 1;
                      v58 = (signed __int64)v121;
                    }
                  }
                  while ( v57 != _InterlockedCompareExchange64(
                                   (volatile signed __int64 *)(v55 + 8 * v56 + 224),
                                   v58,
                                   v57) );
                }
              }
            }
          }
          SharedData = NtCurrentPeb()->SharedData;
          if ( SharedData && SharedData->ServiceSessionId )
            v52 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          else
            v52 = 2147353472LL;
          if ( !*(_BYTE *)v52 || (NtCurrentPeb()->TracingFlags & 1) == 0 || !v50 )
            goto LABEL_76;
          v66 = (unsigned int)((*(_BYTE *)(v48 + 24) & 0xC) != 8) + 2;
        }
        sub_1800FE3BC(*(_QWORD *)(v46 + 112), v8, v66);
LABEL_76:
        v53 = v130;
        goto LABEL_77;
      }
LABEL_170:
      sub_18009A5F0(9, *(_QWORD *)(v46 + 112), v8, 0, 0LL, 0LL);
      v53 = 0;
LABEL_77:
      if ( v53 )
      {
        if ( a4 )
          *a4 -= v122;
        if ( (dword_18015D2E8 & 1) != 0 && (dword_18015D2E8 & 2) != 0 )
        {
          if ( NtCurrentPeb()->ProcessHeap )
          {
            v129 = xmmword_18015A790;
            LOBYTE(v5) = a1 != *(_QWORD *)sub_18005DFE4(&v129);
            if ( v5 )
              goto LABEL_280;
          }
        }
        return v53;
      }
LABEL_156:
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v65 = NtCurrentTeb();
      v65->LastErrorValue = RtlNtStatusToDosError(-1073741811);
      return v53;
    }
    if ( (_WORD)v8 )
    {
      v19 = 0;
    }
    else
    {
      v59 = sub_18006316C(&unk_18015D838, 2 * ((v8 - qword_18015D878) >> 20));
      if ( !v59 || (v19 = v59 - 1, v19 == 2) )
      {
        v38 = sub_180063438(a1, v8, v16, &v120);
        goto LABEL_46;
      }
      v18 = 1;
    }
    v20 = 120LL * v19;
    v21 = v20 + a1 + 112;
    if ( (dword_180159760 & 1) != 0 )
    {
      v23 = sub_180105970(v20 + a1 + 112, v8);
      v18 = 1;
    }
    else
    {
      v22 = v8 & *(_QWORD *)v21;
      if ( (qword_18015A440 ^ v21 ^ v22 ^ *(_QWORD *)(v22 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        v23 = v22 + 32 * ((unsigned __int64)(unsigned int)(v8 - v22) >> *(_BYTE *)(v21 + 8));
      else
        v23 = 0LL;
    }
    if ( !v23 || (*(_BYTE *)(v23 + 24) & 1) == 0 )
      goto LABEL_144;
    if ( (*(_BYTE *)(v23 + 24) & 2) != 0 )
    {
      if ( (*(_BYTE *)(v23 + 24) & 0xCu) < 8 && (((1 << *(_BYTE *)(v21 + 8)) - 1) & v8) != 0 )
        goto LABEL_144;
    }
    else
    {
      v23 += -32LL * *(unsigned __int8 *)(v23 + 31);
      if ( (*(_BYTE *)(v23 + 24) & 1) == 0 || (*(_BYTE *)(v23 + 24) & 2) == 0 || (*(_BYTE *)(v23 + 24) & 0xCu) < 8 )
        goto LABEL_144;
    }
    if ( !v23 )
    {
LABEL_144:
      v15 = a5;
      v17 = -1LL;
      goto LABEL_98;
    }
    v24 = *(_BYTE *)(v21 + 8);
    v25 = (v23 & *(_QWORD *)v21) + ((v23 - (v23 & *(_QWORD *)v21)) >> 5 << v24);
    if ( v8 <= v25 )
    {
      if ( (*(_WORD *)(v23 + 8) & 1) != 0 )
      {
        _InterlockedOr(v119, 0);
        v24 = *(_BYTE *)(v21 + 8);
      }
      else
      {
        v18 = 0;
      }
      v38 = ((unsigned __int64)*(unsigned __int8 *)(v23 + 31) << v24) - *(unsigned int *)(v23 + 4);
      v120 = v18;
    }
    else if ( (*(_BYTE *)(v23 + 24) & 0xC) == 8 )
    {
      v26 = *(_QWORD *)(v21 + 80);
      v27 = *(_DWORD *)(v25 + 40);
      v28 = (unsigned int)v25 >> 12;
      v29 = qword_18015A448 ^ ((unsigned int)v25 >> 12) ^ v27;
      v30 = (unsigned __int16)v29;
      v31 = *(_QWORD *)(v26
                      + 8LL * byte_1801190F0[(unsigned __int64)((unsigned int)(unsigned __int16)v29 + 15) >> 4]
                      + 224);
      v32 = v8 - HIWORD(v29) - v25;
      v33 = *(unsigned int *)(v31 + 72);
      v34 = *(_BYTE *)(v31 + 76);
      if ( (_DWORD)v33 )
      {
        v35 = (v33 * (unsigned __int64)v32) >> v34;
        v36 = v32 - v35 * v30;
      }
      else
      {
        LODWORD(v35) = v32 >> v34;
        v36 = v32 & ((1 << v34) - 1);
      }
      if ( v36 )
      {
        v38 = 0xFFFFFFFFLL;
      }
      else
      {
        v37 = *(_QWORD *)(v25 + 8 * ((unsigned __int64)(unsigned int)(2 * v35) >> 6) + 48) >> ((2 * v35) & 0x3F);
        if ( (v37 & 1) != 0 )
        {
          v38 = (unsigned __int16)qword_18015A448 ^ (unsigned int)(unsigned __int16)(v27 ^ v28);
          if ( (v37 & 2) != 0 )
          {
            v39 = (unsigned __int16)qword_18015A448 ^ (unsigned __int64)(unsigned __int16)(v27 ^ v28);
            v40 = *(_WORD *)(v39 + v8 - 2);
            v41 = (v40 >> 14) & 1;
            if ( v41 )
            {
              _InterlockedOr(v119, 0);
              v40 = *(_WORD *)(v39 + v8 - 2);
            }
            if ( (v40 & 0x8000u) != 0 )
              v38 = (unsigned int)(v38 - 1);
            else
              v38 = (unsigned int)v38 - (v40 & 0x3FFF);
          }
          else
          {
            v41 = 0;
          }
          v120 = v41;
        }
        else
        {
          v38 = 0xFFFFFFFFLL;
        }
      }
    }
    else
    {
      v38 = (unsigned int)sub_18006B2D8(*(_QWORD *)(v21 + 88), v8, v23, &v120);
    }
    v15 = a5;
LABEL_46:
    if ( v38 != -1LL )
    {
      if ( a4 )
        *a4 = v38;
      if ( v120 )
      {
        v42 = v38 + v8;
        if ( (v16 & 0x10000000) != 0 )
          v42 += 16LL;
        v17 = (v42 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v17 )
        {
          v43 = *(_WORD *)v17;
LABEL_54:
          *v15 = v43;
          goto LABEL_55;
        }
      }
LABEL_98:
      v43 = 0;
      goto LABEL_54;
    }
    goto LABEL_144;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
  {
LABEL_126:
    v63 = sub_1800150A0(a1, a3 | 2u, v10, v8);
    v53 = v63;
    if ( v63 )
      goto LABEL_127;
    return v53;
  }
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    v10 = sub_18006377C(a1, a2);
  }
  else if ( (a2 & 0xF) != 0 )
  {
    sub_18009A5F0(9, a1, a2, 0, 0LL, 0LL);
  }
  else
  {
    v10 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v10 -= 16LL * *(unsigned __int8 *)(v10 + 14);
    if ( (*(_BYTE *)(v10 + 15) & 0x3F) == 0 )
    {
      sub_18009A5F0(8, a1, v10, 0, 0LL, 0LL);
      v10 = 0LL;
    }
  }
  if ( !v10 )
    goto LABEL_177;
  if ( *(_BYTE *)(v8 - 1) == 5 )
  {
    if ( *(char *)(v10 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v68 = *(_DWORD *)(v10 + 8) ^ *(_DWORD *)(a1 + 136);
        if ( HIBYTE(v68) != ((unsigned __int8)v68 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v10 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v68))) )
          goto LABEL_202;
      }
    }
    else if ( !(unsigned __int8)sub_180102B70(a1, v10) )
    {
LABEL_202:
      sub_18009A5F0(3, a1, v10, v8, 0LL, 0LL);
      goto LABEL_177;
    }
    if ( *(char *)(v10 + 15) >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v71 = *(_DWORD *)(v10 + 8);
        v124 = v71;
        if ( (v71 & *(_DWORD *)(a1 + 124)) != 0 )
          v124 = *(_DWORD *)(a1 + 136) ^ v71;
        v70 = v124;
      }
      else
      {
        v70 = *(_WORD *)(v10 + 8);
      }
    }
    else
    {
      if ( *(_WORD *)(v10 + 8) ^ (unsigned __int16)(qword_18015D458 ^ a1 ^ (v10 >> 4)) )
        v69 = 0LL;
      else
        v69 = *(_QWORD *)(v10
                        - ((unsigned __int64)(*(_DWORD *)(v10 + 8) ^ (unsigned int)qword_18015D458 ^ (unsigned int)a1 ^ (unsigned int)(v10 >> 4)) >> 12));
      v70 = *(_WORD *)(v69 + 36);
    }
    v72 = v70;
    if ( *(_BYTE *)(v10 + 15) == 4 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v73 = *(_DWORD *)(v10 + 8);
        v124 = v73;
        if ( (v73 & *(_DWORD *)(a1 + 124)) != 0 )
          v124 = *(_DWORD *)(a1 + 136) ^ v73;
        v74 = v124;
      }
      else
      {
        v74 = *(_WORD *)(v10 + 8);
      }
      v75 = v72 + *(_QWORD *)(v10 - 16) - v74;
    }
    else
    {
      v75 = 16LL * v70;
    }
    if ( v75 + v10 < v8 )
      goto LABEL_202;
    if ( (a3 & 0x3C000102) != 0 )
      goto LABEL_125;
    v76 = *(_BYTE *)(v8 - 1) == 5 ? v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14) : 0LL;
    if ( (int)sub_1800EBFF8(*(_DWORD *)(v8 - 8), a1, v8, 3, v76) >= 0 )
      goto LABEL_125;
LABEL_177:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v67 = NtCurrentTeb();
    v67->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
LABEL_125:
  if ( *(char *)(v10 + 15) >= 0 )
    goto LABEL_126;
  if ( (unsigned __int16)qword_18015D458 ^ (unsigned __int16)(a1 ^ *(_WORD *)(v10 + 8) ^ (v10 >> 4))
    || (v77 = *(signed __int32 **)(v10
                                 - ((unsigned __int64)((unsigned int)qword_18015D458 ^ (unsigned int)a1 ^ *(_DWORD *)(v10 + 8) ^ (unsigned int)(v10 >> 4)) >> 12)),
        (v121 = v77) == 0LL) )
  {
    LODWORD(v81) = a1;
    goto LABEL_277;
  }
  _m_prefetchw(v77);
  v78 = (unsigned __int16)(*(_DWORD *)(v10 + 12) >> 8);
  v79 = *(_QWORD *)v77;
  v123 = *((_QWORD *)v77 + 1);
  LODWORD(v122) = v78;
  v80 = *(_QWORD *)(*(_QWORD *)v79 + 24LL);
  if ( v123
     + v78 * (((unsigned int)qword_18015D458 ^ (unsigned int)v123 ^ (unsigned int)v80 ^ *(_DWORD *)(v123 + 24)) >> 16)
     + (unsigned __int16)(qword_18015D458 ^ v123 ^ v80 ^ *(_WORD *)(v123 + 24)) != v10 )
  {
    v81 = *(_QWORD *)(v80 + 24);
LABEL_277:
    sub_18009A5F0(3, v81, v10, 0, 0LL, 0LL);
    goto LABEL_278;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v82 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v82 = 2147353472LL;
  if ( *(_BYTE *)v82 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1800FE3BC(*(_QWORD *)(v80 + 24), v10 + 16, 2LL);
  v83 = 0;
  v84 = 0;
  if ( MEMORY[0x7FFE036A] > 1u )
    v83 = 100;
  while ( 1 )
  {
    v85 = v77[8];
    v86 = (_SLIST_HEADER *)v121;
    if ( (v85 & 0x80000000) == 0
      && v85 == _InterlockedCompareExchange((volatile signed __int32 *)v121 + 8, v85 | 0x80000000, v85) )
    {
      break;
    }
    if ( ++v84 > v83 )
    {
      v85 = -1;
      break;
    }
    v77 = (signed __int32 *)v121;
  }
  *(_BYTE *)(v10 + 15) = 0x80;
  v87 = v86 + 1;
  if ( v85 == -1 )
  {
    RtlInterlockedPushEntrySList_0(v87, (PSLIST_ENTRY)(v10 + 16));
    goto LABEL_278;
  }
  _bittestandreset64(*(signed __int64 **)(v123 + 40), (unsigned int)v122);
  if ( LOWORD(v87->Alignment) )
  {
    v88 = RtlInterlockedFlushSList_0(v86 + 1);
    v89 = 0;
    while ( v88 )
    {
      v90 = *((_DWORD *)&v88[-1].Next + 3);
      ++v89;
      v88 = v88->Next;
      v91 = *(signed __int64 **)(v123 + 40);
      v90 >>= 8;
      LODWORD(v122) = (unsigned __int16)v90;
      _bittestandreset64(v91, (unsigned __int16)v90);
    }
  }
  else
  {
    v89 = 0;
  }
  v92 = (unsigned __int16)v85;
  v93 = (_QWORD **)v121;
  v94 = ((_DWORD)v122 << 16) | (v89 + 1 + v92);
  v95 = *v121;
  if ( (_WORD)v94 != *((_WORD *)v121 + 20)
    || (v96 = (_SLIST_HEADER **)*(unsigned int *)(v95 + 168),
        v97 = *(unsigned int *)(*(_QWORD *)v95 + 32LL),
        *(_DWORD *)(v95 + 164) == 1)
    && (unsigned int)v97 >= (unsigned int)v96
    && (v97 = (unsigned int)(v97 - (_DWORD)v96), (unsigned int)v97 < *(_DWORD *)(*(_QWORD *)v95 + 36LL)) )
  {
    *((_DWORD *)v121 + 8) = v94;
    if ( (*((_DWORD *)v93 + 11) & 2) != 0 || !sub_180014FCC(v95, (__int64)v93) )
      goto LABEL_278;
    do
    {
      v112 = *((_DWORD *)v93 + 11);
      if ( !v112 || (v112 & 2) != 0 )
        goto LABEL_278;
    }
    while ( v112 != _InterlockedCompareExchange((volatile signed __int32 *)v93 + 11, v112 | 2, v112) );
    v113 = (unsigned __int16 *)*v93;
    v114 = 0;
    while ( 1 )
    {
      v115 = ((_BYTE)v114 + (unsigned __int8)v113[87]) & 0xF;
      v116 = *(_SLIST_ENTRY **)&v113[4 * v115 + 8];
      v117 = &v113[4 * v115];
      if ( v116 )
      {
        if ( (*((_DWORD *)&v116[2].Next + 3) & 1) == 0
          && v116 == (_SLIST_ENTRY *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)v117 + 2,
                                       (signed __int64)v93,
                                       (signed __int64)v116) )
        {
          _m_prefetchw((char *)&v116[2].Next + 12);
          if ( _InterlockedAnd((volatile signed __int32 *)&v116[2].Next + 3, 0xFFFFFFFD) == 2 )
          {
            Next = (_SLIST_HEADER *)v116->Next->Next;
            v116->Next = 0LL;
            RtlInterlockedPushEntrySList_0(Next, v116 + 3);
          }
          goto LABEL_278;
        }
      }
      else if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v117 + 2, (signed __int64)v93, 0LL) )
      {
        goto LABEL_278;
      }
      if ( (unsigned int)++v114 >= 0x10 )
      {
        RtlInterlockedPushEntrySList_0(
          (PSLIST_HEADER)(*(_QWORD *)(*(_QWORD *)(**v93 + 24LL) + 8LL * *((unsigned __int16 *)*v93 + 86) + 1192) + 144LL),
          (PSLIST_ENTRY)v93 + 3);
        goto LABEL_278;
      }
    }
  }
  v132 = *v121;
  v98 = (_SLIST_ENTRY *)_InterlockedExchange64((volatile __int64 *)(*v121 + 8LL), 0LL);
  if ( !v98 )
    goto LABEL_243;
  _m_prefetchw((char *)&v98[2].Next + 12);
  if ( _InterlockedAnd((volatile signed __int32 *)&v98[2].Next + 3, 0xFFFFFFF9) == 6 )
  {
    v99 = (_SLIST_HEADER *)v98->Next->Next;
    v98->Next = 0LL;
LABEL_241:
    v100 = v98 + 3;
LABEL_242:
    RtlInterlockedPushEntrySList_0(v99, v100);
    goto LABEL_243;
  }
  if ( !sub_180014FCC(v132, (__int64)v98) )
    goto LABEL_243;
  do
  {
    v109 = *((_DWORD *)&v98[2].Next + 3);
    if ( !v109 || (v109 & 2) != 0 )
      goto LABEL_243;
  }
  while ( v109 != _InterlockedCompareExchange((volatile signed __int32 *)&v98[2].Next + 3, v109 | 2, v109) );
  v96 = (_SLIST_HEADER **)v98->Next;
  v95 = 0LL;
  while ( 1 )
  {
    v110 = ((_BYTE)v95 + (unsigned __int8)*((_WORD *)v96 + 87)) & 0xF;
    v97 = (signed __int64)v96[v110 + 2];
    v111 = &v96[v110];
    if ( !v97 )
    {
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v111 + 2, (signed __int64)v98, 0LL) )
        goto LABEL_243;
      goto LABEL_256;
    }
    if ( (*(_DWORD *)(v97 + 44) & 1) == 0
      && v97 == _InterlockedCompareExchange64((volatile signed __int64 *)v111 + 2, (signed __int64)v98, v97) )
    {
      break;
    }
LABEL_256:
    v95 = (unsigned int)(v95 + 1);
    if ( (unsigned int)v95 >= 0x10 )
    {
      v99 = (_SLIST_HEADER *)(*(_QWORD *)(*((_QWORD *)&v98->Next->Next[1].Next + 1)
                                        + 8LL * *((unsigned __int16 *)&v98->Next[10].Next + 6)
                                        + 1192)
                            + 144LL);
      goto LABEL_241;
    }
  }
  _m_prefetchw((const void *)(v97 + 44));
  if ( _InterlockedAnd((volatile signed __int32 *)(v97 + 44), 0xFFFFFFFD) == 2 )
  {
    v99 = **(_SLIST_HEADER ***)v97;
    *(_QWORD *)v97 = 0LL;
    v100 = (_SLIST_ENTRY *)(v97 + 48);
    goto LABEL_242;
  }
LABEL_243:
  v101 = *(_QWORD *)(*(_QWORD *)v132 + 24LL);
  v133 = (unsigned __int16 *)*v93;
  if ( (*((_BYTE *)v93 + 38) & 3) != 0 )
  {
    BaseAddress = (PVOID)(((unsigned __int64)v93[1] + 4151) & 0xFFFFFFFFFFFFF000uLL);
    v102 = sub_180102758(v93, v97, v95, v96);
    v103 = *(_QWORD *)(v101 + 24);
    RegionSize = 16 * v102 * (unsigned __int64)*((unsigned __int16 *)v93 + 20);
    v104 = sub_18002AE30(v103, 1LL);
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, v104, &OldProtect);
  }
  *((_DWORD *)v93[1] + 5) = 0;
  sub_180013AC8(v101, v93[1]);
  v105 = v133;
  v106 = -*((unsigned __int16 *)v93 + 20);
  do
  {
    v107 = *((_QWORD *)v105 + 20);
    LODWORD(v134) = v107 + v106;
    HIDWORD(v134) = HIDWORD(v107) - 1;
  }
  while ( v107 != _InterlockedCompareExchange64((volatile signed __int64 *)v105 + 20, v134, v107) );
  v93[1] = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v101 + 60));
  *((_DWORD *)v93 + 8) = 0;
  _m_prefetchw((char *)v93 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v93 + 11, 0xFFFFFFFE) == 1 )
  {
    v108 = (_SLIST_HEADER *)**v93;
    *v93 = 0LL;
    RtlInterlockedPushEntrySList_0(v108, (PSLIST_ENTRY)v93 + 3);
  }
LABEL_278:
  v53 = 1;
LABEL_127:
  if ( a5 )
    *a5 = 0;
  if ( a4 )
    *a4 = 0LL;
  if ( sub_1800173E0() && (a3 & 0x10000000) == 0 )
LABEL_280:
    sub_1800FD70C(a1, v8);
  return v53;
}
