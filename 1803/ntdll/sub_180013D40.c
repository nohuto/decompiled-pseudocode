/*
 * XREFs of sub_180013D40 @ 0x180013D40
 * Callers:
 *     sub_180011148 @ 0x180011148 (sub_180011148.c)
 *     sub_180011EB0 @ 0x180011EB0 (sub_180011EB0.c)
 *     RtlReAllocateHeap @ 0x180013CC0 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlRaiseException @ 0x18000BB80 (RtlRaiseException.c)
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_1800173E0 @ 0x1800173E0 (sub_1800173E0.c)
 *     RtlSizeHeap @ 0x18001B860 (RtlSizeHeap.c)
 *     sub_18001BD60 @ 0x18001BD60 (sub_18001BD60.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 *     sub_18006377C @ 0x18006377C (sub_18006377C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800EBFF8 @ 0x1800EBFF8 (sub_1800EBFF8.c)
 *     sub_1800EF2CC @ 0x1800EF2CC (sub_1800EF2CC.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1800FCA5C @ 0x1800FCA5C (sub_1800FCA5C.c)
 *     sub_1800FD70C @ 0x1800FD70C (sub_1800FD70C.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 *     sub_180102B70 @ 0x180102B70 (sub_180102B70.c)
 */

__int64 __fastcall sub_180013D40(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        ULONG_PTR a4,
        unsigned __int64 *a5,
        _WORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int16 v10; // r13
  unsigned __int64 v11; // r12
  int v12; // eax
  int v13; // r14d
  unsigned __int64 v14; // rdi
  __int64 v15; // rdi
  int v16; // r9d
  int v18; // eax
  __int64 v19; // r9
  _WORD *v20; // r10
  int v21; // edx
  int v22; // r13d
  char *v23; // r8
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  _QWORD *v26; // r14
  unsigned int v27; // edi
  struct _TEB *v28; // rbx
  struct _TEB *v29; // rbx
  struct _TEB *v30; // rax
  DWORD v31; // r12d
  struct _TEB *v32; // rdi
  _QWORD *v33; // rax
  int v34; // ecx
  int v35; // edx
  __int64 v36; // rax
  unsigned __int16 v37; // ax
  int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  unsigned __int16 v41; // ax
  __int64 v42; // rcx
  char v43; // dl
  unsigned __int16 v44; // ax
  __int64 v45; // r13
  ULONG_PTR v46; // rax
  __int64 v47; // rcx
  char v48; // cl
  int v49; // edx
  __int16 v50; // cx
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int16 v53; // ax
  int v54; // eax
  char v55; // cl
  int v56; // r8d
  __int64 v57; // rax
  unsigned __int16 v58; // ax
  int v59; // eax
  unsigned __int64 v60; // rdx
  int v61; // r9d
  int v62; // eax
  unsigned __int16 v63; // [rsp+30h] [rbp-128h]
  int v64; // [rsp+40h] [rbp-118h]
  int v65; // [rsp+40h] [rbp-118h]
  int v66; // [rsp+40h] [rbp-118h]
  int v67; // [rsp+40h] [rbp-118h]
  __int128 v68; // [rsp+50h] [rbp-108h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-F8h] BYREF

  v6 = 0LL;
  v8 = a3;
  v10 = 0;
  v11 = 0LL;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v29 = NtCurrentTeb();
    v29->LastErrorValue = RtlNtStatusToDosError(0);
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    v18 = sub_18001BD60(a2);
    v21 = *(_DWORD *)(a1 + 64);
    v22 = v18;
    if ( v21 && v21 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      v22 = v18 | 1;
    v23 = (char *)v8;
    if ( (dword_180159760 & 2) != 0 )
    {
      v11 = *(_QWORD *)(v8 - 16);
      v23 = (char *)(v8 - v11);
    }
    v24 = v11 + v19;
    if ( v24 < a4 )
    {
      v26 = 0LL;
    }
    else
    {
      v25 = sub_180012270(a1, v22, v23, v24, a5, v20);
      v26 = (_QWORD *)v25;
      if ( (unsigned __int64)(v25 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( (dword_180159760 & 2) != 0 )
        {
          v33 = (_QWORD *)(v11 + v25);
          *(v33 - 2) = v11;
          if ( v11 > 0x10 )
            *v26 = v11;
          v26 = v33;
        }
        if ( a5 )
          *a5 -= v11;
LABEL_28:
        if ( (unsigned int)sub_1800173E0(a1) && v26 )
        {
          sub_1800FD70C(a1, v8);
          sub_1800FCA5C(a1, v26);
        }
        return (__int64)v26;
      }
    }
    v30 = NtCurrentTeb();
    v31 = -1073741801;
    if ( v26 )
      v31 = -1073741819;
    v26 = 0LL;
    v30->LastStatusValue = v31;
    v32 = NtCurrentTeb();
    v32->LastErrorValue = RtlNtStatusToDosError(v31);
    if ( v22 < 0 || *(int *)(a1 + 20) < 0 )
    {
      ExceptionRecord.ExceptionCode = v31;
      ExceptionRecord.ExceptionAddress = RtlRaiseException;
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 1;
      ExceptionRecord.ExceptionFlags = 0;
      ExceptionRecord.ExceptionInformation[0] = a4;
      RtlRaiseException(&ExceptionRecord);
    }
    goto LABEL_28;
  }
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0;
  v12 = *(_DWORD *)(a1 + 116);
  v13 = v12 | a2;
  if ( (v12 & 0x1000000) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v14 = sub_18006377C(a1, a3);
      goto LABEL_13;
    }
    if ( (a3 & 0xF) != 0 )
    {
      v34 = 9;
    }
    else
    {
      v14 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
      if ( (*(_BYTE *)(v14 + 15) & 0x3F) != 0 )
      {
LABEL_13:
        if ( !v14 )
        {
          v27 = -1073741819;
          goto LABEL_35;
        }
        if ( *(_BYTE *)(v8 - 1) != 5 )
          goto LABEL_15;
        if ( *(char *)(v14 + 15) >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v35 = *(_DWORD *)(v14 + 8) ^ *(_DWORD *)(a1 + 136);
            if ( HIBYTE(v35) != ((unsigned __int8)v35 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v14 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v35))) )
              goto LABEL_79;
          }
        }
        else if ( !(unsigned __int8)sub_180102B70(a1, v14) )
        {
          goto LABEL_79;
        }
        if ( *(char *)(v14 + 15) >= 0 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v38 = *(_DWORD *)(v14 + 8);
            LOWORD(v64) = v38;
            if ( (v38 & *(_DWORD *)(a1 + 124)) != 0 )
              v64 = *(_DWORD *)(a1 + 136) ^ v38;
            v37 = v64;
          }
          else
          {
            v37 = *(_WORD *)(v14 + 8);
          }
        }
        else
        {
          if ( *(_WORD *)(v14 + 8) ^ (unsigned __int16)(qword_18015D458 ^ a1 ^ (v14 >> 4)) )
            v36 = 0LL;
          else
            v36 = *(_QWORD *)(v14
                            - ((unsigned __int64)(*(_DWORD *)(v14 + 8) ^ (unsigned int)qword_18015D458 ^ (unsigned int)a1 ^ (unsigned int)(v14 >> 4)) >> 12));
          v37 = *(_WORD *)(v36 + 36);
        }
        v39 = v37;
        if ( *(_BYTE *)(v14 + 15) == 4 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v40 = *(_DWORD *)(v14 + 8);
            LOWORD(v65) = v40;
            if ( (v40 & *(_DWORD *)(a1 + 124)) != 0 )
              v65 = *(_DWORD *)(a1 + 136) ^ v40;
            v41 = v65;
          }
          else
          {
            v41 = *(_WORD *)(v14 + 8);
          }
          v42 = v39 + *(_QWORD *)(v14 - 16) - v41;
        }
        else
        {
          v42 = 16LL * v37;
        }
        if ( v42 + v14 >= v8 )
        {
          LODWORD(v11) = *(_DWORD *)(v8 - 8);
          if ( (v13 & 0x3C000102) != 0 )
            goto LABEL_15;
          v43 = *(_BYTE *)(v8 - 1);
          if ( v43 == 5 )
          {
            v44 = 16 * *(unsigned __int8 *)(v8 - 16 + 14);
          }
          else if ( (v43 & 0x40) != 0 )
          {
            v44 = 16 * (v43 & 0x3F);
          }
          else
          {
            v44 = 0;
          }
          v45 = v44;
          v63 = v44;
          v46 = a4 + v44;
          if ( v46 < a4 )
          {
LABEL_34:
            v27 = -1073741801;
            goto LABEL_35;
          }
          a4 = v46;
          if ( v43 == 5 )
            v47 = v8 - 16LL * *(unsigned __int8 *)(v8 - 16 + 14);
          else
            v47 = 0LL;
          if ( (int)sub_1800EBFF8(v11, a1, v8, 5, v47) >= 0 )
          {
            v48 = *(_BYTE *)(v14 + 15);
            if ( v48 == 4 )
            {
              if ( (v13 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
                RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
              if ( *(_DWORD *)(a1 + 124) )
              {
                v49 = *(_DWORD *)(v14 + 8) ^ *(_DWORD *)(a1 + 136);
                *(_DWORD *)(v14 + 8) = v49;
                if ( HIBYTE(v49) != ((unsigned __int8)v49 ^ (unsigned __int8)(BYTE1(v49) ^ BYTE2(v49))) )
                  sub_1800FC010(a1, v14);
              }
              v10 = v63;
              v50 = *(_WORD *)(v14 + 8) - v63;
              *(_WORD *)(v14 + 8) = v50;
              if ( *(_DWORD *)(a1 + 124) )
              {
                *(_BYTE *)(v14 + 11) = v50 ^ *(_BYTE *)(v14 + 10) ^ HIBYTE(v50);
                *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
              }
              if ( (v13 & 1) == 0 && (*(_BYTE *)(a1 + 116) & 1) == 0 )
                RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
            }
            else
            {
              if ( v48 == 5 )
              {
                v51 = *(unsigned __int16 *)(v14 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
              }
              else if ( (v48 & 0x40) != 0 )
              {
                v51 = *(unsigned __int16 *)(16LL * (v48 & 0x3F) + v14 + 12);
              }
              else if ( (v48 & 0x3F) == 0x3F )
              {
                if ( v48 >= 0 )
                {
                  if ( *(_DWORD *)(a1 + 124) )
                  {
                    v54 = *(_DWORD *)(v14 + 8);
                    LOWORD(v66) = v54;
                    if ( (v54 & *(_DWORD *)(a1 + 124)) != 0 )
                      v66 = *(_DWORD *)(a1 + 136) ^ v54;
                    v53 = v66;
                  }
                  else
                  {
                    v53 = *(_WORD *)(v14 + 8);
                  }
                }
                else
                {
                  if ( *(_WORD *)(v14 + 8) ^ (unsigned __int16)(qword_18015D458 ^ a1 ^ (v14 >> 4)) )
                    v52 = 0LL;
                  else
                    v52 = *(_QWORD *)(v14
                                    - ((unsigned __int64)(*(_DWORD *)(v14 + 8) ^ (unsigned int)qword_18015D458 ^ (unsigned int)a1 ^ (unsigned int)(v14 >> 4)) >> 12));
                  v53 = *(_WORD *)(v52 + 36);
                }
                v48 = *(_BYTE *)(v14 + 15);
                v51 = *(_QWORD *)(16LL * v53 + v14);
              }
              else
              {
                v51 = v48 & 0x3F;
              }
              v55 = v48 & 0x80;
              v56 = v55 != 0 ? 0x80 : 0;
              if ( v55 )
              {
                if ( *(_WORD *)(v14 + 8) ^ (unsigned __int16)(qword_18015D458 ^ a1 ^ (v14 >> 4)) )
                  v57 = 0LL;
                else
                  v57 = *(_QWORD *)(v14
                                  - ((unsigned __int64)(*(_DWORD *)(v14 + 8) ^ (unsigned int)qword_18015D458 ^ (unsigned int)a1 ^ (unsigned int)(v14 >> 4)) >> 12));
                v58 = *(_WORD *)(v57 + 36);
              }
              else if ( *(_DWORD *)(a1 + 124) )
              {
                v59 = *(_DWORD *)(v14 + 8);
                LOWORD(v67) = v59;
                if ( (v59 & *(_DWORD *)(a1 + 124)) != 0 )
                  v67 = *(_DWORD *)(a1 + 136) ^ v59;
                v58 = v67;
              }
              else
              {
                v58 = *(_WORD *)(v14 + 8);
              }
              v60 = v51 - v45;
              v10 = v63;
              if ( v60 >= 0x3F )
              {
                *(_QWORD *)(v14 + 16LL * v58) = v60;
                *(_BYTE *)(v14 + 15) = v56 | 0x3F;
              }
              else
              {
                *(_BYTE *)(v14 + 15) = v56 | v60;
              }
            }
            v8 = v14 + 16;
LABEL_15:
            v15 = sub_180013F50(a1, v13 | 2u, v8, a4);
            if ( (dword_18015D2E8 & 1) != 0 && (dword_18015D2E8 & 2) != 0 )
            {
              if ( NtCurrentPeb()->ProcessHeap )
              {
                v68 = xmmword_18015A790;
                if ( a1 != *(_QWORD *)sub_18005DFE4(&v68) )
                {
                  if ( !v15 )
                  {
LABEL_32:
                    a4 -= v10;
                    if ( (_DWORD)v11 )
                    {
                      RtlSizeHeap(a1, 0LL, v8);
                      v62 = sub_1800EF2CC(a1, v13, v8, v61, v10, v11);
                      sub_1800EBFF8(v11, a1, v62, 6, v8);
                    }
                    goto LABEL_34;
                  }
                  if ( (v13 & 0x10000000) == 0 )
                  {
                    sub_1800FD70C(a1, v8);
                    sub_1800FCA5C(a1, v15);
                  }
                }
              }
            }
            if ( v15 )
            {
              v6 = v15;
              if ( (_DWORD)v11 )
              {
                v6 = sub_1800EF2CC(a1, v13, v15, v16, v10, v11);
                sub_1800EBFF8(v11, a1, v6, 6, v15);
              }
              return v6;
            }
            goto LABEL_32;
          }
          v27 = -1073741819;
LABEL_35:
          NtCurrentTeb()->LastStatusValue = v27;
          v28 = NtCurrentTeb();
          v28->LastErrorValue = RtlNtStatusToDosError(v27);
          if ( (v13 & 4) != 0 )
          {
            ExceptionRecord.ExceptionCode = v27;
            ExceptionRecord.ExceptionAddress = RtlRaiseException;
            ExceptionRecord.ExceptionRecord = 0LL;
            ExceptionRecord.NumberParameters = 1;
            ExceptionRecord.ExceptionFlags = 0;
            ExceptionRecord.ExceptionInformation[0] = a4;
            RtlRaiseException(&ExceptionRecord);
          }
          return v6;
        }
LABEL_79:
        sub_18009A5F0(3, a1, v14, v8, 0LL, 0LL);
        v27 = -1073741811;
        goto LABEL_35;
      }
      LODWORD(a3) = v14;
      v34 = 8;
    }
    sub_18009A5F0(v34, a1, a3, 0, 0LL, 0LL);
    v14 = 0LL;
    goto LABEL_13;
  }
  return sub_1801005E4((void *)a1);
}
