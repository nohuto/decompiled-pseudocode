/*
 * XREFs of sub_180025780 @ 0x180025780
 * Callers:
 *     sub_18000913C @ 0x18000913C (sub_18000913C.c)
 *     sub_180024AD0 @ 0x180024AD0 (sub_180024AD0.c)
 * Callees:
 *     sub_1800072C4 @ 0x1800072C4 (sub_1800072C4.c)
 *     sub_180008F9C @ 0x180008F9C (sub_180008F9C.c)
 *     sub_180009038 @ 0x180009038 (sub_180009038.c)
 *     sub_1800098C4 @ 0x1800098C4 (sub_1800098C4.c)
 *     sub_18001E4DC @ 0x18001E4DC (sub_18001E4DC.c)
 *     sub_18001E750 @ 0x18001E750 (sub_18001E750.c)
 *     sub_18001F198 @ 0x18001F198 (sub_18001F198.c)
 *     sub_18001F5E8 @ 0x18001F5E8 (sub_18001F5E8.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     sub_180020B20 @ 0x180020B20 (sub_180020B20.c)
 *     sub_1800217D0 @ 0x1800217D0 (sub_1800217D0.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     sub_180021E9C @ 0x180021E9C (sub_180021E9C.c)
 *     sub_180023990 @ 0x180023990 (sub_180023990.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180027F78 @ 0x180027F78 (sub_180027F78.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     sub_180077520 @ 0x180077520 (sub_180077520.c)
 *     sub_18007DC74 @ 0x18007DC74 (sub_18007DC74.c)
 *     sub_180095A28 @ 0x180095A28 (sub_180095A28.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A8DC0 (RtlInterlockedPushEntrySList_0.c)
 *     sub_1800FFB4C @ 0x1800FFB4C (sub_1800FFB4C.c)
 *     sub_180100D30 @ 0x180100D30 (sub_180100D30.c)
 */

__int64 __fastcall sub_180025780(__int64 a1, unsigned __int64 a2, int a3, __int64 *a4, PSLIST_HEADER ListHead)
{
  unsigned int v5; // r15d
  unsigned __int64 v6; // r14
  int v7; // edx
  int v8; // r10d
  __int64 v10; // r12
  int v11; // r8d
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rbx
  unsigned int v14; // ebp
  int v15; // r13d
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  int v18; // eax
  unsigned __int64 v19; // rcx
  unsigned int v20; // r9d
  __int64 v21; // rcx
  unsigned int v22; // edx
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  unsigned __int16 v25; // r10
  unsigned int v26; // r8d
  unsigned int v27; // edx
  int v28; // edx
  __int64 v29; // rcx
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // rdi
  __int64 *v32; // rsi
  _QWORD *v33; // r11
  signed __int64 v34; // rbx
  int v35; // eax
  unsigned int v36; // r8d
  unsigned int v37; // ecx
  unsigned __int64 v38; // r10
  int v39; // r8d
  unsigned __int16 v40; // cx
  char v41; // cl
  __int64 v42; // r8
  __int64 v43; // rbp
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // r13d
  int v47; // ebp
  int v48; // ecx
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v50; // rcx
  char v52; // cl
  int v53; // ecx
  BOOL v54; // r13d
  BOOL v55; // eax
  BOOL v56; // r14d
  int v57; // r12d
  unsigned __int64 v58; // rbx
  int v59; // eax
  unsigned int v60; // ebp
  int v61; // eax
  signed __int64 v62; // rbx
  int v63; // r8d
  signed __int64 v64; // rdx
  _QWORD *v65; // rcx
  _QWORD *v66; // r10
  __int64 v67; // rdx
  __int64 **v68; // rax
  volatile signed __int64 *v69; // rcx
  signed __int64 v70; // rax
  __int64 *v71; // r8
  __int64 v72; // rbp
  int v73; // r9d
  unsigned int v74; // r13d
  unsigned int v75; // ebp
  int v76; // r13d
  char v77; // cl
  __int64 v78; // rdx
  __int64 (__fastcall *v79)(__int64, __int64, unsigned int); // r9
  unsigned int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 **v84; // rax
  __int64 v85; // rcx
  __int64 (__fastcall *v86)(__int64, __int64, char); // rax
  char v87; // cl
  __int64 v88; // rdx
  __int64 (__fastcall *v89)(__int64, __int64, unsigned int); // r9
  unsigned int v90; // eax
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // r9
  __int64 UserModeGlobalLogger; // rcx
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rdx
  signed __int64 v98; // r8
  signed __int64 v99; // rdx
  signed __int64 v100; // rtt
  int v101; // r8d
  int v102; // eax
  bool v103; // zf
  signed __int64 v104; // rax
  char v105; // [rsp+30h] [rbp-88h]
  int v106; // [rsp+30h] [rbp-88h]
  BOOL v107; // [rsp+34h] [rbp-84h] BYREF
  int v108; // [rsp+38h] [rbp-80h]
  signed __int64 v109; // [rsp+40h] [rbp-78h]
  int v110; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v111; // [rsp+50h] [rbp-68h]
  int v112; // [rsp+58h] [rbp-60h]
  unsigned int v113; // [rsp+5Ch] [rbp-5Ch] BYREF
  unsigned int v114; // [rsp+60h] [rbp-58h]
  int v115; // [rsp+68h] [rbp-50h]
  __int64 v116[9]; // [rsp+70h] [rbp-48h] BYREF
  _RTL_SRWLOCK *SRWLocka; // [rsp+C0h] [rbp+8h]
  unsigned int SRWLockb; // [rsp+C0h] [rbp+8h]
  int v121; // [rsp+D0h] [rbp+18h]
  int v122; // [rsp+D0h] [rbp+18h]
  BOOL ListHeada; // [rsp+E0h] [rbp+28h]
  _SLIST_HEADER *ListHeadb; // [rsp+E0h] [rbp+28h]

  v5 = 0;
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 40);
  v8 = a3 | *(_DWORD *)(a1 + 20) & 0x11000001;
  v10 = a1;
  v11 = 0;
  if ( v7 )
    LOBYTE(v11) = v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v12 = (unsigned __int64)byte_1801196F0;
  v13 = 0LL;
  v14 = v8 | 1;
  v15 = 1;
  if ( !v11 )
    v14 = v8;
  v105 = v14;
  if ( ListHead )
  {
    if ( !(_WORD)v6 )
    {
      if ( (unsigned int)sub_1800588D4(&stru_180159600) )
      {
        v29 = sub_180008F9C((_RTL_SRWLOCK *)v10, v6, v14, (__int64)&v107);
        goto LABEL_29;
      }
      v12 = (unsigned __int64)byte_1801196F0;
    }
    if ( (dword_180158684 & 1) != 0 )
    {
      v16 = sub_180100D30(v10, v6);
      v12 = (unsigned __int64)byte_1801196F0;
    }
    else if ( (v10 ^ qword_18015BFA8 ^ *(_QWORD *)((v6 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((v6 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
    {
      v16 = (v6 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 12);
    }
    else
    {
      v16 = 0LL;
    }
    if ( !v16 || (*(_BYTE *)(v16 + 24) & 4) == 0 )
      goto LABEL_84;
    if ( (*(_BYTE *)(v16 + 24) & 8) != 0 )
    {
      if ( (*(_BYTE *)(v16 + 24) & 0x21) == 0
        && v6 != (v16 & 0xFFFFFFFFFFF00000uLL) + (((unsigned int)(v16 >> 5) & 0x7FFF) << 12) )
      {
        goto LABEL_84;
      }
    }
    else
    {
      v16 += -32LL * *(unsigned __int8 *)(v16 + 27);
      if ( (*(_BYTE *)(v16 + 24) & 4) == 0 || (*(_BYTE *)(v16 + 24) & 8) == 0 || (*(_BYTE *)(v16 + 24) & 0x21) == 0 )
        goto LABEL_84;
    }
    if ( !v16 )
    {
LABEL_84:
      v13 = 0LL;
      goto LABEL_85;
    }
    v17 = (v16 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v16 - (v16 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
    if ( v6 <= v17 )
    {
      v29 = ((unsigned __int64)*(unsigned __int8 *)(v16 + 27) << 12) - *(unsigned __int16 *)(v16 + 6);
      v107 = (*(_BYTE *)(v16 + 4) & 1) != 0;
    }
    else if ( (*(_BYTE *)(v16 + 24) & 1) != 0 )
    {
      v18 = *(_DWORD *)(v17 + 40) ^ qword_18015BFE8 ^ ((unsigned int)v17 >> 12);
      v19 = (unsigned __int16)(*(_WORD *)(v17 + 40) ^ qword_18015BFE8 ^ ((unsigned int)v17 >> 12)) + 15LL;
      v112 = v18;
      v20 = v6 - HIWORD(v18) - v17;
      v21 = *(_QWORD *)(v10 + 8LL * (unsigned __int8)byte_1801196F0[v19 >> 4] + 480);
      v22 = *(_DWORD *)(v21 + 72);
      if ( v22 )
      {
        v23 = (v20 * (unsigned __int64)v22) >> *(_BYTE *)(v21 + 76);
        v12 = v20 - (_DWORD)v23 * (unsigned __int16)v18;
      }
      else
      {
        v52 = *(_BYTE *)(v21 + 76);
        LODWORD(v23) = v20 >> v52;
        v12 = ((1 << v52) - 1) & v20;
      }
      if ( (_DWORD)v12 )
      {
        v26 = -1;
      }
      else
      {
        v24 = *(_QWORD *)(v17 + 8 * ((unsigned __int64)(unsigned int)(2 * v23) >> 6) + 48) >> ((2 * v23) & 0x3F);
        if ( (v24 & 1) != 0 )
        {
          v25 = *(_WORD *)(v17 + 40) ^ ((unsigned int)v17 >> 12);
          v26 = (unsigned __int16)qword_18015BFE8 ^ v25;
          if ( (v24 & 2) != 0 )
          {
            v27 = *(unsigned __int16 *)(((unsigned __int16)qword_18015BFE8 ^ (unsigned __int64)v25) + v6 - 2);
            if ( (unsigned __int16)v27 >= 0x8000u )
              --v26;
            else
              v26 -= v27 & 0x3FFF;
            v28 = (v27 >> 14) & 1;
          }
          else
          {
            v28 = 0;
          }
          v107 = v28;
        }
        else
        {
          v26 = -1;
        }
      }
      v29 = v26;
    }
    else
    {
      v29 = (unsigned int)sub_180021E9C(v6, v16, &v107);
    }
LABEL_29:
    if ( v29 != -1 )
    {
      if ( a4 )
        *a4 = v29;
      if ( v107 )
      {
        v30 = v29 + v6;
        if ( (v14 & 0x10000000) != 0 )
          v30 += 16LL;
        v13 = (v30 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v13 )
        {
          LOWORD(ListHead->Alignment) = *(_WORD *)v13;
          goto LABEL_37;
        }
LABEL_85:
        LOWORD(ListHead->Alignment) = 0;
        goto LABEL_37;
      }
    }
    goto LABEL_84;
  }
  if ( a4 )
    *a4 = sub_1800072C4(a1, v6, v14, 0LL);
LABEL_37:
  if ( (v14 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(v10 + 32) )
    {
      if ( (v13 || (v13 = sub_18001F5E8((_RTL_SRWLOCK *)v10, v6, v14, a4)) != 0) && (*(_BYTE *)(v13 + 2) & 0xF) != 0 )
      {
        if ( (dword_180158684 & 2) != 0 )
        {
          if ( (_WORD)v6 || (v102 = sub_1800588D4(&stru_180159600), v101 = v6, !v102) )
            v101 = v6 + 16;
        }
        else
        {
          v101 = v6;
        }
        if ( (int)sub_180095A28(*(_BYTE *)(v13 + 2) & 0xF, v10, v101, 3, v13 + 16) < 0 )
          return v5;
      }
    }
  }
  if ( (*(_DWORD *)(v10 + 20) & 0x10000000) != 0 && sub_180023990(v10, v6, v14) == -1 )
    goto LABEL_213;
  if ( !(_WORD)v6 && (unsigned int)sub_1800588D4(&stru_180159600) )
  {
    if ( !sub_180009038(v10, (void *)v6, v14) )
      v15 = 0;
    v5 = v15;
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 && v15 )
      goto LABEL_184;
    return v5;
  }
  if ( (dword_180158684 & 1) != 0 )
  {
    v31 = sub_180100D30(v10, v6);
  }
  else if ( (v10 ^ qword_18015BFA8 ^ *(_QWORD *)((v6 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((v6 & 0xFFFFFFFFFFF00000uLL) >> 20)) == 0xA2E64EADA2E64EADuLL )
  {
    v31 = (v6 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 12);
  }
  else
  {
    v31 = 0LL;
  }
  v111 = v31;
  if ( !v31 || (*(_BYTE *)(v31 + 24) & 4) == 0 )
    goto LABEL_213;
  if ( (*(_BYTE *)(v31 + 24) & 8) != 0 )
  {
    if ( (*(_BYTE *)(v31 + 24) & 0x21) == 0
      && v6 != (v31 & 0xFFFFFFFFFFF00000uLL) + (((unsigned int)(v31 >> 5) & 0x7FFF) << 12) )
    {
      goto LABEL_213;
    }
  }
  else
  {
    v31 += -32LL * *(unsigned __int8 *)(v31 + 27);
    v111 = v31;
    if ( (*(_BYTE *)(v31 + 24) & 4) == 0 || (*(_BYTE *)(v31 + 24) & 8) == 0 || (*(_BYTE *)(v31 + 24) & 0x21) == 0 )
      goto LABEL_213;
  }
  if ( !v31 )
  {
LABEL_213:
    sub_1800A4DFC(9, v10, v6, 0, 0LL, 0LL);
    return v5;
  }
  v32 = (__int64 *)((v31 & 0xFFFFFFFFFFF00000uLL)
                  + ((unsigned int)((__int64)(v31 - (v31 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
  if ( v6 > (unsigned __int64)v32 )
  {
    if ( (*(_BYTE *)(v31 + 24) & 1) != 0 )
    {
      v33 = (_QWORD *)(v10 + 288);
      v34 = 0LL;
      v35 = qword_18015BFE8 ^ *((_DWORD *)v32 + 10) ^ ((unsigned int)v32 >> 12);
      v109 = 0LL;
      v108 = v35;
      if ( !v6 )
        goto LABEL_66;
      v36 = v6 - HIWORD(v108) - (_DWORD)v32;
      v12 = v33[(unsigned __int8)byte_1801196F0[((unsigned __int64)(unsigned __int16)v35 + 15) >> 4] + 24];
      v37 = *(_DWORD *)(v12 + 72);
      if ( v37 )
      {
        v38 = (v36 * (unsigned __int64)v37) >> *(_BYTE *)(v12 + 76);
        v39 = v36 - v38 * (unsigned __int16)v35;
      }
      else
      {
        v53 = *(unsigned __int8 *)(v12 + 76);
        LODWORD(v38) = v36 >> v53;
        v39 = v36 & ((1 << v53) - 1);
      }
      if ( !v39 )
      {
        v40 = *(_WORD *)((v31 & 0xFFFFFFFFFFF00000uLL)
                       + ((unsigned int)((__int64)(v31 - (v31 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                       + 0x24);
        if ( v40 >= (unsigned __int16)v38 )
          v40 = v38;
        *(_WORD *)((v31 & 0xFFFFFFFFFFF00000uLL)
                 + ((unsigned int)((__int64)(v31 - (v31 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                 + 0x24) = v40;
        v12 = (unsigned __int64)&v32[(unsigned __int64)(unsigned int)(2 * v38) >> 6];
        _m_prefetchw((const void *)(v12 + 48));
        if ( (((unsigned __int64)_InterlockedAnd64((volatile signed __int64 *)(v12 + 48), ~(3LL << ((2 * v38) & 0x3F))) >> ((2 * v38) & 0x3F)) & 1) != 0 )
        {
          if ( *(_BYTE *)((v31 & 0xFFFFFFFFFFF00000uLL)
                        + ((unsigned int)((__int64)(v31 - (v31 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                        + 0x2D) <= 1u )
            goto LABEL_66;
          v41 = *(_BYTE *)((v31 & 0xFFFFFFFFFFF00000uLL)
                         + ((unsigned int)((__int64)(v31 - (v31 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                         + 0x2C);
          v42 = (unsigned int)(v6 - (_DWORD)v32) >> v41;
          v12 = (unsigned __int64)v32 + 2 * v42 + *((unsigned __int16 *)v32 + 23);
          _m_prefetchw((const void *)v12);
          LODWORD(v43) = -1;
          v44 = v12
              + 2LL
              * ((((unsigned int)(unsigned __int16)v108 - 1 + (_DWORD)v6 - (_DWORD)v32) >> v41) - (unsigned int)v42 + 1);
          if ( v12 >= v44 )
            goto LABEL_66;
          v45 = 2 * v42;
          do
          {
            if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v12, 0xFFFFu) == 1 && (_DWORD)v43 == -1 )
              v43 = v45 >> 1;
            v12 += 2LL;
            v45 += 2LL;
          }
          while ( v12 < v44 );
          v10 = a1;
          if ( (_DWORD)v43 == -1 )
          {
LABEL_66:
            v46 = *((unsigned __int16 *)v32 + 17);
            LOWORD(v47) = *((_WORD *)v32 + 16);
            while ( v34 || (_WORD)v47 && (unsigned __int16)v47 != v46 - 1 )
            {
LABEL_70:
              v48 = (unsigned __int16)(v47 + 1) - 1;
              v47 = (unsigned __int16)_InterlockedCompareExchange16((volatile signed __int16 *)v32 + 16, v47 + 1, v47);
              if ( v47 == v48 )
              {
                if ( (_WORD)v47 )
                {
                  if ( (unsigned __int16)v47 != v46 - 1 )
                    goto LABEL_73;
                  v63 = 2;
                }
                else
                {
                  v63 = 0;
                }
                switch ( *((_BYTE *)v32 + 38) )
                {
                  case 0:
                    v64 = v34 + 24;
                    v65 = (_QWORD *)(v34 + 8);
                    goto LABEL_112;
                  case 1:
                    v64 = v34 + 40;
                    v65 = 0LL;
                    goto LABEL_112;
                  case 2:
                    v64 = 0LL;
                    v65 = 0LL;
LABEL_112:
                    if ( v63 == 2 )
                    {
                      v12 = 0LL;
                      v66 = 0LL;
                    }
                    else
                    {
                      v12 = v34 + 24;
                      v66 = (_QWORD *)(v34 + 8);
                    }
                    if ( v64 )
                    {
                      v67 = *v32;
                      v68 = (__int64 **)v32[1];
                      if ( *(__int64 **)(*v32 + 8) != v32 || *v68 != v32 )
                        __fastfail(3u);
                      *v68 = (__int64 *)v67;
                      *(_QWORD *)(v67 + 8) = v68;
                      if ( v65 )
                        --*v65;
                    }
                    *((_BYTE *)v32 + 38) = v63;
                    if ( v12 )
                    {
                      v84 = *(__int64 ***)(v12 + 8);
                      if ( *v84 != (__int64 *)v12 )
                        __fastfail(3u);
                      *v32 = v12;
                      v32[1] = (__int64)v84;
                      *v84 = v32;
                      *(_QWORD *)(v12 + 8) = v32;
                      if ( v66 )
                        ++*v66;
                      v32 = 0LL;
                    }
                    if ( (*(_BYTE *)v34 & 1) == 0 && *(_QWORD *)(v34 + 8) > 8uLL )
                    {
                      v32 = *(__int64 **)v12;
                      v95 = **(_QWORD **)v12;
                      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 || *(__int64 **)(v95 + 8) != v32 )
                        __fastfail(3u);
                      *(_QWORD *)v12 = v95;
                      *(_QWORD *)(v95 + 8) = v12;
                      --*v66;
                      *((_BYTE *)v32 + 38) = 2;
                    }
                    if ( v32 && *((_BYTE *)v32 + 38) == 2 )
                      v32[2] = 0LL;
                    break;
                }
                v69 = (volatile signed __int64 *)(v34 + 16);
                v70 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 16), 0LL, 1LL);
                if ( v70 != 1 )
                {
                  v12 = -1LL;
                  do
                  {
                    v97 = 3LL;
                    v98 = v70 & 6;
                    if ( v98 != 2 )
                      v97 = -1LL;
                    v99 = v70 + v97;
                    v100 = v70;
                    v70 = _InterlockedCompareExchange64(v69, v99, v70);
                  }
                  while ( v100 != v70 );
                  if ( v98 == 2 )
                    sub_180077520(v69, v99, 0LL);
                }
                v34 = 0LL;
                v109 = 0LL;
                if ( v32 )
                {
                  v71 = (__int64 *)(v10 + 288);
                  v72 = *(_QWORD *)(v10
                                  + 288
                                  + 8LL
                                  * (unsigned __int8)byte_1801196F0[((unsigned __int64)(unsigned __int16)v108 + 15) >> 4]
                                  + 192);
                  if ( *((_WORD *)v32 + 16) != *((_WORD *)v32 + 17) )
                  {
                    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v72 + 16));
                    sub_18007DC74(v32, v72);
                    if ( *((_WORD *)v32 + 16) == *((_WORD *)v32 + 17) )
                      v32[2] = 0LL;
                    else
                      v32 = sub_1800217D0(v72, v32, 0);
                    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v72 + 16));
                    v71 = (__int64 *)(v10 + 288);
                  }
                  if ( v32 )
                  {
                    _InterlockedDecrement64((volatile signed __int64 *)(v72 + 64));
                    v73 = 2 * (v105 & 1);
                    v106 = v73;
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(v72 + 56), -*((__int16 *)v32 + 17));
                    _BitScanForward(&v74, *((unsigned __int8 *)v32 + 45) << *((_BYTE *)v32 + 44));
                    ListHeadb = (_SLIST_HEADER *)&v71[2 * v74 - 14];
                    if ( LOWORD(ListHeadb->Alignment) )
                    {
                      v85 = *v71;
                      v86 = (__int64 (__fastcall *)(__int64, __int64, char))(qword_18015BFA8 ^ (unsigned __int64)v71 ^ v71[2]);
                      if ( v86 == sub_18001E750 )
                      {
                        sub_18001E750(v85, (__int64)v32, v73 != 0);
                      }
                      else
                      {
                        LOBYTE(v5) = v73 != 0;
                        v86(v85, (__int64)v32, v5);
                      }
                    }
                    else
                    {
                      v75 = 1;
                      if ( *((unsigned __int8 *)v32 + 45) > 1u )
                      {
                        v76 = v73;
                        do
                        {
                          v75 = sub_180027F78(v32, v75, &v110);
                          if ( v75 == -1 )
                            break;
                          if ( v110 )
                          {
                            if ( v5 )
                            {
                              v77 = *((_BYTE *)v32 + 44);
                              v78 = v75 << v77;
                              v79 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))(qword_18015BFA8 ^ (v10 + 288) ^ *(_QWORD *)(v10 + 320));
                              v80 = v110 << v77;
                              v81 = *(_QWORD *)(v10 + 288);
                              SRWLockb = v78;
                              v82 = (__int64)v32 + v78;
                              v121 = v80;
                              if ( v79 == sub_180020B20 )
                                sub_180020B20(v81, v82, v80);
                              else
                                v79(v81, v82, v80);
                              sub_18001E4DC((__int64)v32, SRWLockb, v121);
                              v75 += v110;
                            }
                            else
                            {
                              if ( !v76 )
                                RtlAcquireSRWLockShared((PRTL_SRWLOCK)(v10 + 336));
                              v5 = 2;
                            }
                          }
                        }
                        while ( v75 < *((unsigned __int8 *)v32 + 45) );
                        if ( v5 && !v106 )
                          RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v10 + 336));
                      }
                      RtlInterlockedPushEntrySList_0(ListHeadb, (PSLIST_ENTRY)v32);
                      v6 = a2;
                      v34 = v109;
                    }
                  }
                }
                goto LABEL_73;
              }
            }
            v62 = v32[2];
            do
            {
              while ( 1 )
              {
                while ( !v62 )
                {
                  v62 = _InterlockedCompareExchange64(v32 + 2, 3LL, 0LL);
                  if ( !v62 )
                  {
                    v34 = 0LL;
                    goto LABEL_73;
                  }
                }
                if ( (v62 & 1) != 0 )
                  break;
                v109 = v62;
                SRWLocka = (_RTL_SRWLOCK *)(v62 + 16);
                RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v62 + 16));
                v62 = v32[2];
                if ( v109 == v62 )
                {
                  v34 = v109;
                  goto LABEL_107;
                }
                RtlReleaseSRWLockExclusive(SRWLocka);
              }
              v104 = _InterlockedCompareExchange64(v32 + 2, v62 & 1 | ((v62 & 0xFFFFFFFFFFFFFFFEuLL) + 2), v62);
              v103 = v62 == v104;
              v62 = v104;
            }
            while ( !v103 );
            v34 = 0LL;
LABEL_107:
            if ( v34 )
              goto LABEL_70;
LABEL_73:
            v5 = 1;
            if ( v34 )
              RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v34 + 16));
            goto LABEL_75;
          }
          v54 = (int)v43 < 0;
          v55 = v43 == -2;
          ListHeada = v55;
          if ( (int)v43 < 0 )
          {
            LODWORD(v43) = 1;
          }
          else if ( !(_DWORD)v43 )
          {
            goto LABEL_66;
          }
          if ( (unsigned int)v43 < *(unsigned __int8 *)((v31 & 0xFFFFFFFFFFF00000uLL)
                                                      + ((unsigned int)((__int64)(v31 - (v31 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                      + 0x2D) )
          {
            v56 = v55;
            v57 = 0;
            v58 = (unsigned __int64)v33;
            do
            {
              v59 = sub_180027F78(v32, (unsigned int)v43, &v113);
              v115 = v59;
              if ( v59 == -1 )
                break;
              v60 = v113;
              if ( v113 >= 2 )
              {
                if ( v57 )
                {
                  v87 = *(_BYTE *)((v31 & 0xFFFFFFFFFFF00000uLL)
                                 + ((unsigned int)((__int64)(v31 - (v31 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                 + 0x2C);
                  v88 = (unsigned int)(v59 << v87);
                  v89 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))(qword_18015BFA8 ^ v58 ^ *(_QWORD *)(v58 + 32));
                  v90 = v113 << v87;
                  v91 = *(_QWORD *)v58;
                  v114 = v88;
                  v92 = (__int64)v32 + v88;
                  v122 = v90;
                  if ( v89 == sub_180020B20 )
                    sub_180020B20(v91, v92, v90);
                  else
                    v89(v91, v92, v90);
                  sub_18001E4DC((__int64)v32, v114, v122);
                  if ( !v54 )
                    break;
                  LODWORD(v43) = v115 + v60;
                }
                else
                {
                  LODWORD(v43) = v59;
                  if ( (v105 & 1) == 0 )
                    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(v58 + 48));
                  v57 = 2;
                  if ( !v56 )
                    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v32 + 3);
                }
              }
              else
              {
                if ( !v54 )
                  break;
                LODWORD(v43) = v59 + v113;
              }
            }
            while ( (unsigned int)v43 < *(unsigned __int8 *)((v31 & 0xFFFFFFFFFFF00000uLL)
                                                           + ((unsigned int)((__int64)(v31
                                                                                     - (v31 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12)
                                                           + 0x2D) );
            v31 = v111;
            v61 = v57;
            v6 = a2;
            v5 = 0;
            v10 = a1;
            v34 = v109;
            if ( v61 )
            {
              if ( !ListHeada )
                RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v32 + 3);
              if ( (v105 & 1) == 0 )
                RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 336));
            }
          }
          goto LABEL_66;
        }
        sub_1800A4DFC(
          16,
          *v33,
          v6,
          (v31 & 0xFFF00000) + ((unsigned int)((__int64)(v31 - (v31 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12),
          (unsigned int)v38,
          0LL);
      }
    }
    else
    {
      v5 = sub_180029840((PRTL_SRWLOCK)(v10 + 176), (__int64)v116);
      if ( v5 )
      {
        if ( LODWORD(v116[0]) <= 0x3FF0 )
        {
          v83 = (unsigned __int8)byte_1801196F0[(unsigned __int64)(unsigned int)(LODWORD(v116[0]) + 15) >> 4];
          if ( (*(_QWORD *)(v10 + 288 + 8 * v83 + 192) & 1) != 0 )
            sub_1800098C4(v10 + 288, v83, 0);
        }
      }
    }
LABEL_75:
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && SharedData->ServiceSessionId )
      v50 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      v50 = 2147353472LL;
    if ( *(_BYTE *)v50 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v5 )
      sub_1800FFB4C(v10, v6, ((*(_BYTE *)(v31 + 24) & 1) == 0) | 2u, v12);
    return v5;
  }
  sub_18001F198(v10, v31, 0, v14);
  v5 = 1;
  if ( RtlGetCurrentServiceSessionId() )
    v96 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    v96 = 2147353472LL;
  if ( *(_BYTE *)v96 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
LABEL_184:
    sub_1800FFB4C(v10, v6, 3LL, v93);
  return v5;
}
