/*
 * XREFs of sub_1800222E0 @ 0x1800222E0
 * Callers:
 *     sub_18001EF1C @ 0x18001EF1C (sub_18001EF1C.c)
 *     sub_180021168 @ 0x180021168 (sub_180021168.c)
 *     RtlReAllocateHeap @ 0x180022260 (RtlReAllocateHeap.c)
 * Callees:
 *     sub_1800211B0 @ 0x1800211B0 (sub_1800211B0.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     RtlSizeHeap @ 0x180023760 (RtlSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlRaiseException @ 0x180030AC0 (RtlRaiseException.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180077158 @ 0x180077158 (sub_180077158.c)
 *     sub_18008AB60 @ 0x18008AB60 (sub_18008AB60.c)
 *     sub_1800959D8 @ 0x1800959D8 (sub_1800959D8.c)
 *     sub_180095A28 @ 0x180095A28 (sub_180095A28.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_1800FE3D0 @ 0x1800FE3D0 (sub_1800FE3D0.c)
 *     sub_1800FEEB8 @ 0x1800FEEB8 (sub_1800FEEB8.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 */

char *__fastcall sub_1800222E0(
        unsigned __int16 *BaseAddress,
        int a2,
        char *a3,
        unsigned __int64 a4,
        __int64 *a5,
        _WORD *a6)
{
  __int64 v6; // rbp
  char *v8; // rsi
  __int16 v9; // di
  int v11; // r12d
  int v12; // eax
  int v13; // edi
  unsigned __int64 v14; // r14
  unsigned __int16 v15; // r15
  __int64 v16; // r14
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r12d
  char *v24; // r8
  unsigned __int64 v25; // r9
  char *v26; // rax
  char *v27; // r15
  __int64 v28; // rax
  unsigned __int32 v29; // r14d
  struct _TEB *v30; // rbx
  struct _TEB *v31; // rbx
  unsigned __int32 v32; // r14d
  struct _TEB *v33; // rdi
  __int64 v34; // rax
  unsigned __int16 v35; // ax
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  unsigned __int16 v39; // ax
  __int64 v40; // rcx
  char v41; // al
  char *v42; // rcx
  __int64 v43; // rcx
  char v44; // cl
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int16 v47; // ax
  int v48; // eax
  char v49; // r8
  __int64 v50; // rax
  unsigned __int16 v51; // ax
  int v52; // eax
  unsigned __int64 v53; // rdx
  int v54; // eax
  int v55; // eax
  int v56; // [rsp+38h] [rbp-120h]
  int v57; // [rsp+38h] [rbp-120h]
  int v58; // [rsp+38h] [rbp-120h]
  int v59; // [rsp+38h] [rbp-120h]
  int v60; // [rsp+50h] [rbp-108h]
  EXCEPTION_RECORD ExceptionRecord; // [rsp+60h] [rbp-F8h] BYREF

  v6 = 0LL;
  v8 = a3;
  v9 = a2;
  v11 = 0;
  if ( !a3 )
  {
    NtCurrentTeb()->LastStatusValue = 0;
    v31 = NtCurrentTeb();
    v31->LastErrorValue = RtlNtStatusToDosError(0);
    return 0LL;
  }
  if ( *((_DWORD *)BaseAddress + 4) == -571548178 )
  {
    v18 = a2 & 1 | 2;
    if ( (v9 & 8) == 0 )
      v18 = v9 & 1;
    if ( (v9 & 4) != 0 )
      v18 |= 0x80000000;
    v19 = v18 | 0x100;
    if ( (v9 & 0x100) == 0 )
      v19 = v18;
    v20 = v19 | v9 & 0xE00;
    if ( (v9 & 0xE00) == 0 )
      v20 = v19;
    if ( (v9 & 0x10) != 0 )
      v20 |= 0x2000000u;
    if ( (v9 & 2) != 0 )
      v20 |= 0x1000000u;
    v21 = *((_DWORD *)BaseAddress + 10);
    v22 = 0;
    if ( v21 )
      LOBYTE(v22) = v21 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v23 = v20 | 1;
    if ( !v22 )
      v23 = v20;
    if ( (dword_180158684 & 2) != 0 && ((_WORD)v8 || !(unsigned int)sub_1800588D4(&stru_180159600)) )
      v24 = v8 - 16;
    else
      v24 = v8;
    v25 = a4;
    if ( (dword_180158684 & 2) != 0 && a4 + 16 >= a4 )
      v25 = a4 + 16;
    v26 = sub_1800211B0((_RTL_SRWLOCK *)BaseAddress, v23, v24, v25, a5, a6);
    v27 = v26;
    if ( v26 )
    {
      if ( v26 != (char *)-1LL )
      {
        if ( (dword_180158684 & 2) != 0 && ((_WORD)v26 || !(unsigned int)sub_1800588D4(&stru_180159600)) )
          v27 += 16;
        if ( a5 )
        {
          v28 = *a5;
          if ( (dword_180158684 & 2) != 0 )
            v28 -= 16LL;
          *a5 = v28;
        }
LABEL_48:
        if ( (dword_18015C2A8 & 1) != 0
          && (dword_18015C2A8 & 2) != 0
          && BaseAddress != qword_18015BFE0
          && NtCurrentPeb()->ProcessHeap
          && v27 )
        {
          sub_1800FEEB8(BaseAddress, v8);
          sub_1800FE3D0(BaseAddress, v27);
        }
        return v27;
      }
      v32 = -1073741819;
    }
    else
    {
      v32 = -1073741801;
    }
    v27 = 0LL;
    NtCurrentTeb()->LastStatusValue = v32;
    v33 = NtCurrentTeb();
    v33->LastErrorValue = RtlNtStatusToDosError(v32);
    if ( v23 < 0 || *((int *)BaseAddress + 5) < 0 )
    {
      ExceptionRecord.ExceptionCode = v32;
      ExceptionRecord.ExceptionAddress = RtlRaiseException;
      ExceptionRecord.ExceptionRecord = 0LL;
      ExceptionRecord.NumberParameters = 1;
      ExceptionRecord.ExceptionFlags = 0;
      ExceptionRecord.ExceptionInformation[0] = a4;
      RtlRaiseException(&ExceptionRecord);
    }
    goto LABEL_48;
  }
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0;
  v12 = *((_DWORD *)BaseAddress + 29);
  v13 = v12 | a2;
  if ( (v12 & 0x1000000) == 0 )
  {
    if ( (BaseAddress[60] & 1) != 0 )
    {
      v14 = sub_180077158(BaseAddress, a3);
    }
    else if ( ((unsigned __int8)a3 & 0xF) != 0 )
    {
      sub_1800A4DFC(9, (_DWORD)BaseAddress, (_DWORD)a3, 0, 0LL, 0LL);
      v14 = 0LL;
    }
    else
    {
      v14 = (unsigned __int64)(a3 - 16);
      _m_prefetchw(a3 - 16);
      if ( *(a3 - 1) == 5 )
        v14 -= 16LL * *(unsigned __int8 *)(v14 + 14);
      if ( (*(_BYTE *)(v14 + 15) & 0x3F) == 0 )
      {
        sub_1800A4DFC(8, (_DWORD)BaseAddress, v14, 0, 0LL, 0LL);
        v14 = 0LL;
      }
    }
    if ( !v14 )
    {
      v29 = -1073741819;
      goto LABEL_53;
    }
    if ( *(v8 - 1) != 5 )
    {
LABEL_16:
      v15 = 0;
      goto LABEL_17;
    }
    if ( *(char *)(v14 + 15) >= 0 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v60 = *((_DWORD *)BaseAddress + 34) ^ *(_DWORD *)(v14 + 8);
        if ( HIBYTE(v60) != ((unsigned __int8)v60 ^ (unsigned __int8)(BYTE1(v60) ^ BYTE2(v60))) )
          goto LABEL_103;
      }
    }
    else if ( !(unsigned __int8)sub_1800959D8(BaseAddress, v14) )
    {
      goto LABEL_103;
    }
    if ( *(char *)(v14 + 15) >= 0 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v36 = *(_DWORD *)(v14 + 8);
        LOWORD(v56) = v36;
        if ( (v36 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v56 = *((_DWORD *)BaseAddress + 34) ^ v36;
        v35 = v56;
      }
      else
      {
        v35 = *(_WORD *)(v14 + 8);
      }
    }
    else
    {
      if ( (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v14 + 8) ^ (v14 >> 4)) )
        v34 = 0LL;
      else
        v34 = *(_QWORD *)(v14
                        - ((unsigned __int64)((unsigned int)qword_18015BFE8 ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v14 + 8) ^ (unsigned int)(v14 >> 4)) >> 12));
      v35 = *(_WORD *)(v34 + 36);
    }
    v37 = v35;
    if ( *(_BYTE *)(v14 + 15) == 4 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v38 = *(_DWORD *)(v14 + 8);
        LOWORD(v57) = v38;
        if ( (v38 & *((_DWORD *)BaseAddress + 31)) != 0 )
          v57 = *((_DWORD *)BaseAddress + 34) ^ v38;
        v39 = v57;
      }
      else
      {
        v39 = *(_WORD *)(v14 + 8);
      }
      v40 = v37 + *(_QWORD *)(v14 - 16) - v39;
    }
    else
    {
      v40 = 16LL * v35;
    }
    if ( v40 + v14 >= (unsigned __int64)v8 )
    {
      v11 = *((_DWORD *)v8 - 2);
      if ( (v13 & 0x3C000102) != 0 )
        goto LABEL_16;
      v41 = *(v8 - 1);
      v42 = v8 - 16;
      if ( v41 == 5 )
      {
        v15 = 16 * (unsigned __int8)v42[14];
      }
      else if ( (v41 & 0x40) != 0 )
      {
        v15 = 16 * (v41 & 0x3F);
      }
      else
      {
        v15 = 0;
      }
      if ( a4 + v15 < a4 )
      {
LABEL_52:
        v29 = -1073741801;
        goto LABEL_53;
      }
      a4 += v15;
      if ( v42[15] == 5 )
        v43 = (__int64)&v8[-16 * (unsigned __int8)*(v8 - 2)];
      else
        v43 = 0LL;
      if ( (int)sub_180095A28(v11, (_DWORD)BaseAddress, (_DWORD)v8, 5, v43) >= 0 )
      {
        v44 = *(_BYTE *)(v14 + 15);
        if ( v44 == 4 )
        {
          if ( (v13 & 1) == 0 && (BaseAddress[58] & 1) == 0 )
            RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            *(_DWORD *)(v14 + 8) ^= *((_DWORD *)BaseAddress + 34);
            if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
              sub_1800FDA30(BaseAddress, v14);
          }
          *(_WORD *)(v14 + 8) -= v15;
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
            *(_DWORD *)(v14 + 8) ^= *((_DWORD *)BaseAddress + 34);
          }
          if ( (v13 & 1) == 0 && (BaseAddress[58] & 1) == 0 )
            RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
        }
        else
        {
          if ( v44 == 5 )
          {
            v45 = *(unsigned __int16 *)(v14 + 12) ^ (unsigned __int64)BaseAddress[70];
          }
          else if ( (v44 & 0x40) != 0 )
          {
            v45 = *(unsigned __int16 *)(16LL * (v44 & 0x3F) + v14 + 12);
          }
          else if ( (v44 & 0x3F) == 0x3F )
          {
            if ( v44 >= 0 )
            {
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v48 = *(_DWORD *)(v14 + 8);
                LOWORD(v58) = v48;
                if ( (v48 & *((_DWORD *)BaseAddress + 31)) != 0 )
                  v58 = *((_DWORD *)BaseAddress + 34) ^ v48;
                v47 = v58;
              }
              else
              {
                v47 = *(_WORD *)(v14 + 8);
              }
            }
            else
            {
              if ( (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v14 + 8) ^ (v14 >> 4)) )
                v46 = 0LL;
              else
                v46 = *(_QWORD *)(v14
                                - ((unsigned __int64)((unsigned int)qword_18015BFE8 ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v14 + 8) ^ (unsigned int)(v14 >> 4)) >> 12));
              v47 = *(_WORD *)(v46 + 36);
            }
            v45 = *(_QWORD *)(16LL * v47 + v14);
          }
          else
          {
            v45 = v44 & 0x3F;
          }
          v49 = 0;
          if ( *(char *)(v14 + 15) >= 0 )
          {
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v52 = *(_DWORD *)(v14 + 8);
              LOWORD(v59) = v52;
              if ( (v52 & *((_DWORD *)BaseAddress + 31)) != 0 )
                v59 = *((_DWORD *)BaseAddress + 34) ^ v52;
              v51 = v59;
            }
            else
            {
              v51 = *(_WORD *)(v14 + 8);
            }
          }
          else
          {
            v49 = 0x80;
            if ( (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v14 + 8) ^ (v14 >> 4)) )
              v50 = 0LL;
            else
              v50 = *(_QWORD *)(v14
                              - ((unsigned __int64)((unsigned int)qword_18015BFE8 ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v14 + 8) ^ (unsigned int)(v14 >> 4)) >> 12));
            v51 = *(_WORD *)(v50 + 36);
          }
          v53 = v45 - v15;
          if ( v53 >= 0x3F )
          {
            *(_QWORD *)(v14 + 16LL * v51) = v53;
            *(_BYTE *)(v14 + 15) = v49 | 0x3F;
          }
          else
          {
            *(_BYTE *)(v14 + 15) = v49 | v53;
          }
        }
        v8 = (char *)(v14 + 16);
LABEL_17:
        v16 = sub_180022560(BaseAddress);
        if ( (dword_18015C2A8 & 1) != 0
          && (dword_18015C2A8 & 2) != 0
          && BaseAddress != qword_18015BFE0
          && NtCurrentPeb()->ProcessHeap )
        {
          if ( !v16 )
          {
LABEL_50:
            a4 -= v15;
            if ( v11 )
            {
              v54 = RtlSizeHeap(BaseAddress, 0, v8);
              v55 = sub_18008AB60((_DWORD)BaseAddress, v13, (_DWORD)v8, v54, v15, v11);
              sub_180095A28(v11, (_DWORD)BaseAddress, v55, 6, (__int64)v8);
            }
            goto LABEL_52;
          }
          if ( (v13 & 0x10000000) == 0 )
          {
            sub_1800FEEB8(BaseAddress, v8);
            sub_1800FE3D0(BaseAddress, v16);
          }
        }
        if ( v16 )
        {
          v6 = v16;
          if ( v11 )
          {
            v6 = sub_18008AB60((_DWORD)BaseAddress, v13, v16, (unsigned int)a4 - v15, v15, v11);
            sub_180095A28(v11, (_DWORD)BaseAddress, v6, 6, v16);
          }
          return (char *)v6;
        }
        goto LABEL_50;
      }
      v29 = -1073741819;
LABEL_53:
      NtCurrentTeb()->LastStatusValue = v29;
      v30 = NtCurrentTeb();
      v30->LastErrorValue = RtlNtStatusToDosError(v29);
      if ( (v13 & 4) != 0 )
      {
        ExceptionRecord.ExceptionCode = v29;
        ExceptionRecord.ExceptionAddress = RtlRaiseException;
        ExceptionRecord.ExceptionRecord = 0LL;
        ExceptionRecord.NumberParameters = 1;
        ExceptionRecord.ExceptionFlags = 0;
        ExceptionRecord.ExceptionInformation[0] = a4;
        RtlRaiseException(&ExceptionRecord);
      }
      return (char *)v6;
    }
LABEL_103:
    sub_1800A4DFC(3, (_DWORD)BaseAddress, v14, (_DWORD)v8, 0LL, 0LL);
    v29 = -1073741811;
    goto LABEL_53;
  }
  return (char *)sub_180101730(BaseAddress);
}
