/*
 * XREFs of EtwpApplyPayloadFilterInternal @ 0x1402B6498
 * Callers:
 *     EtwpApplyEventIdPayloadFilter @ 0x1402B2828 (EtwpApplyEventIdPayloadFilter.c)
 * Callees:
 *     IoGetStackLimits @ 0x1401307B0 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401B3450 (_alloca_probe.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     EtwpApplyPredicate @ 0x1402B6D34 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1402B7298 (EtwpGetFieldValue.c)
 *     RtlLengthRequiredSid @ 0x140544040 (RtlLengthRequiredSid.c)
 *     ExSystemExceptionFilter @ 0x1405BCA80 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpApplyPayloadFilterInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        char *a3,
        char a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  char v11; // r11
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  bool v18; // zf
  unsigned int v19; // eax
  char *v20; // r12
  __int64 v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  void *v25; // rsp
  void *v26; // rsp
  char *v27; // r14
  __int64 v28; // rax
  void *v29; // rsp
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // edx
  char *v33; // r11
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rdx
  __int64 v39; // r9
  unsigned int v40; // r12d
  unsigned int v41; // esi
  unsigned __int64 v42; // r15
  __int64 v43; // r13
  char *v44; // r10
  unsigned int v45; // eax
  char v46; // al
  unsigned __int16 v47; // cx
  __int64 v48; // rbx
  __int64 v49; // r14
  int v50; // r8d
  unsigned int v51; // edx
  _WORD *v52; // r8
  __int64 v53; // rdx
  int v54; // r9d
  unsigned int v55; // eax
  _WORD *v56; // rcx
  unsigned int v57; // r8d
  _BYTE *v58; // rdx
  unsigned int v59; // r8d
  int v60; // r9d
  unsigned int v61; // eax
  unsigned int v62; // r14d
  unsigned int v63; // ecx
  unsigned int v64; // eax
  __int64 v65; // r13
  unsigned __int64 v66; // r8
  __int64 v67; // r10
  unsigned __int16 *v68; // r14
  char v69; // si
  char v70; // bl
  unsigned int v71; // r12d
  char *v72; // r10
  char v73; // r13
  char v74; // cl
  unsigned int v75; // r15d
  __int16 v76; // dx
  __int64 v77; // rcx
  char v78; // al
  char v79; // [rsp+30h] [rbp+0h] BYREF
  char v80; // [rsp+31h] [rbp+1h]
  char v81; // [rsp+32h] [rbp+2h]
  unsigned int v82; // [rsp+34h] [rbp+4h]
  unsigned int v83; // [rsp+38h] [rbp+8h]
  unsigned int v84; // [rsp+3Ch] [rbp+Ch]
  char *v85; // [rsp+40h] [rbp+10h]
  char v86; // [rsp+48h] [rbp+18h]
  char *v87; // [rsp+50h] [rbp+20h]
  __int64 v88; // [rsp+58h] [rbp+28h]
  ULONG SubAuthorityCount[2]; // [rsp+60h] [rbp+30h] BYREF
  char *v90; // [rsp+68h] [rbp+38h]
  unsigned __int16 v91; // [rsp+70h] [rbp+40h]
  unsigned int v92; // [rsp+74h] [rbp+44h]
  unsigned int v93; // [rsp+78h] [rbp+48h]
  int v94; // [rsp+7Ch] [rbp+4Ch]
  __int64 v95; // [rsp+80h] [rbp+50h]
  unsigned __int64 LowLimit; // [rsp+88h] [rbp+58h] BYREF
  unsigned __int64 HighLimit[3]; // [rsp+90h] [rbp+60h] BYREF

  v82 = a2;
  v83 = -1073741811;
  if ( a2 > 0x80 )
    return 3221225485LL;
  v91 = *a1;
  v11 = *((_BYTE *)a1 + 2);
  v86 = v11;
  v12 = *(_QWORD *)(a6 + 8);
  if ( !_bittest64(&v12, v91 % 0x3Fu) )
    goto LABEL_4;
  v84 = 0;
  v13 = a6 + *(unsigned __int16 *)(a6 + 32);
  v14 = 0;
  v15 = 0;
  v16 = *(unsigned __int16 *)(a6 + 34) / 0xCu;
  while ( 1 )
  {
    v95 = v13;
    v17 = v14;
    v18 = v15 == v16;
    if ( v15 >= v16 )
      break;
    if ( *(_WORD *)v13 == v91 && *(_BYTE *)(v13 + 2) == v11 )
    {
      v18 = v15 == v16;
      break;
    }
    v19 = *(unsigned __int8 *)(v13 + 3);
    if ( (unsigned __int16)v19 >= *(_WORD *)(v13 + 6) )
      return 3221225485LL;
    v14 = *(unsigned __int8 *)(v13 + 3);
    v13 += 12LL;
    ++v15;
    if ( v17 >= v19 )
      v14 = v17;
  }
  if ( v18 )
  {
LABEL_4:
    *a7 = 1;
    return 0LL;
  }
  v20 = 0LL;
  v85 = 0LL;
  v21 = 16 * a2;
  v93 = *(unsigned __int8 *)(v13 + 3) + 1;
  v22 = 4 * v93;
  IoGetStackLimits(&LowLimit, HighLimit);
  if ( (unsigned __int64)HighLimit - LowLimit < (unsigned int)(v22 + v21 + 4096) )
    return 3221225626LL;
  v23 = v22 + 15;
  if ( v22 + 15 <= (unsigned __int64)(unsigned int)v22 )
    v23 = 0xFFFFFFFFFFFFFF0LL;
  v24 = v23 & 0xFFFFFFFFFFFFFFF0uLL;
  v25 = alloca(v24);
  v26 = alloca(v24);
  v27 = &v79;
  v87 = &v79;
  if ( a4 )
  {
    v28 = v21 + 15;
    if ( v21 + 15 <= (unsigned __int64)(unsigned int)v21 )
      v28 = 0xFFFFFFFFFFFFFF0LL;
    v29 = alloca(v28 & 0xFFFFFFFFFFFFFFF0uLL);
    v20 = &v79;
    v85 = &v79;
  }
  if ( a4 )
  {
    if ( (_DWORD)v21 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v21] > 0x7FFFFFFF0000LL || &a3[v21] < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(v20, a3, (unsigned int)v21);
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = v85;
    v34 = v82;
    while ( 1 )
    {
      v92 = v30;
      if ( v31 >= v34 )
        break;
      v35 = 2LL * v32;
      v36 = *(unsigned int *)&v85[16 * v32 + 8];
      if ( (_DWORD)v36 )
      {
        v37 = *(_QWORD *)&v85[8 * v35];
        v38 = v37 + v36;
        if ( v38 > 0x7FFFFFFF0000LL || v38 < v37 )
          MEMORY[0x7FFFFFFF0000] = 0;
        v34 = v82;
      }
      v31 = ++v30;
      v32 = v30;
    }
  }
  else
  {
    v33 = a3;
    v85 = a3;
    v34 = v82;
  }
  v39 = a6 + *(unsigned __int16 *)(a6 + 36);
  v88 = v39;
  v40 = 0;
  v41 = 0;
  v42 = (unsigned __int64)v33;
  v43 = v39 + 4LL * *(unsigned __int16 *)(v13 + 4);
  v44 = &v79;
  v90 = &v79;
  v45 = 0;
  v83 = 0;
  while ( v45 < v93 )
  {
    if ( v40 == v34 )
      return 3221225990LL;
    v46 = *(_BYTE *)v43 & 0xF;
    v47 = *(_WORD *)(v43 + 2);
    if ( v46 == 7 )
    {
      if ( v47 )
        return 3221225520LL;
      v44[3] = v40;
      *(_DWORD *)v44 = *(_DWORD *)v44 & 0xFF000000 | ((v41 & 0xFFF) << 12);
    }
    else
    {
      v48 = v47;
      if ( v46 == 8 )
        v48 = a5 != 0 ? 8 : 4;
      if ( (*(_BYTE *)v43 & 0x10) != 0 )
      {
        if ( (unsigned int)v48 >= v83 )
          return 3221225520LL;
        if ( (unsigned __int8)((*(_BYTE *)(v39 + 4 * v48) & 0xF) - 1) > 1u )
          return 3221225520LL;
        if ( (*(_BYTE *)(v39 + 4 * v48) & 0x30) != 0 )
          return 3221225520LL;
        if ( *(_WORD *)(v39 + 4 * v48 + 2) > 8u )
          return 3221225520LL;
        if ( *(_BYTE *)(v39 + 4 * v48 + 1) != 1 )
          return 3221225520LL;
        _mm_lfence();
        if ( !(unsigned __int8)EtwpGetFieldValue(
                                 *(_QWORD *)&v33[16 * (unsigned __int8)HIBYTE(*(_DWORD *)&v27[4 * v48])]
                               + ((*(_DWORD *)&v27[4 * v48] >> 12) & 0xFFF),
                                 *(unsigned __int16 *)(v39 + 4 * v48 + 2),
                                 SubAuthorityCount) )
          return 3221225520LL;
        LODWORD(v48) = SubAuthorityCount[0];
        if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
          return 3221225520LL;
        v39 = v88;
        v33 = v85;
      }
      v49 = *(unsigned __int8 *)(v43 + 1);
      if ( (*(_BYTE *)v43 & 0x20) != 0 )
      {
        if ( (unsigned int)v49 >= v83 )
          return 3221225520LL;
        if ( (unsigned __int8)((*(_BYTE *)(v39 + 4 * v49) & 0xF) - 1) > 1u )
          return 3221225520LL;
        if ( (*(_BYTE *)(v39 + 4 * v49) & 0x30) != 0 )
          return 3221225520LL;
        if ( *(_WORD *)(v39 + 4 * v49 + 2) > 8u )
          return 3221225520LL;
        if ( *(_BYTE *)(v39 + 4 * v49 + 1) != 1 )
          return 3221225520LL;
        _mm_lfence();
        if ( !(unsigned __int8)EtwpGetFieldValue(
                                 *(_QWORD *)&v33[16 * (unsigned __int8)HIBYTE(*(_DWORD *)&v87[4 * v49])]
                               + ((*(_DWORD *)&v87[4 * v49] >> 12) & 0xFFF),
                                 *(unsigned __int16 *)(v39 + 4 * v49 + 2),
                                 SubAuthorityCount) )
          return 3221225520LL;
        LODWORD(v49) = SubAuthorityCount[0];
        if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
          return 3221225520LL;
      }
      v50 = 0;
      if ( !(_DWORD)v48 )
      {
        if ( (*(_BYTE *)v43 & 0x10) != 0 || (_DWORD)v49 != 1 )
          return 3221225520LL;
        switch ( *(_BYTE *)v43 & 0xF )
        {
          case 3:
            v57 = *(_DWORD *)(v42 + 8);
            if ( v41 >= v57 )
              return 3221225485LL;
            v58 = (_BYTE *)(*(_QWORD *)v42 + v41);
            v59 = v57 - v41;
            v60 = 0;
            v61 = 0;
            while ( v61 < v59 && *v58 )
            {
              v61 = ++v60;
              v94 = v60;
              HighLimit[2] = (unsigned __int64)++v58;
            }
            if ( v60 == v59 )
            {
              v84 = 1;
              v50 = 0;
            }
            else
            {
              v50 = 1;
            }
            LODWORD(v48) = v60;
            break;
          case 4:
            v51 = *(_DWORD *)(v42 + 8) - v41;
            if ( v51 < 2 )
              return 3221225485LL;
            v52 = (_WORD *)(*(_QWORD *)v42 + v41);
            v53 = v51 >> 1;
            v54 = 0;
            v55 = 0;
            while ( 1 )
            {
              v56 = v52;
              if ( v55 >= (unsigned int)v53 || !*v52 )
                break;
              v55 = ++v54;
              v94 = v54;
              ++v52;
              HighLimit[1] = (unsigned __int64)(v56 + 1);
            }
            if ( v54 == (_DWORD)v53 )
            {
              v84 = 2;
              v50 = 0;
            }
            else
            {
              v50 = 2;
            }
            if ( v54 == (_DWORD)v53 && v41 + 2 * v53 != *(_DWORD *)(v42 + 8) )
              return 3221225485LL;
            LODWORD(v48) = 2 * v54;
            break;
          case 6:
            if ( *(_DWORD *)(v42 + 8) - v41 < 2 )
              return 3221225485LL;
            if ( !(unsigned __int8)EtwpGetFieldValue(*(_QWORD *)v42 + v41 + 1LL, 1LL, SubAuthorityCount) )
              return 3221225485LL;
            LODWORD(v48) = RtlLengthRequiredSid(SubAuthorityCount[0]);
            if ( (_DWORD)v48 == -1 )
              return 3221225485LL;
            v50 = 0;
            break;
          default:
            return 3221225520LL;
        }
      }
      v62 = v48 * v49;
      if ( *(_DWORD *)(v42 + 8) - v41 < v62 )
        return 3221225990LL;
      v44 = v90;
      v90[3] = v40;
      v63 = v62 & 0xFFF | *(_DWORD *)v44 & 0xFF000000 | ((v41 & 0xFFF) << 12);
      *(_DWORD *)v44 = v63;
      if ( HIBYTE(v63) != v40 || ((v63 >> 12) & 0xFFF) != v41 || (v63 & 0xFFF) != v62 )
        return 3221225990LL;
      v41 += v62 + v50;
      v64 = *(_DWORD *)(v42 + 8);
      if ( v41 > v64 )
        return 3221225473LL;
      v33 = v85;
      if ( v41 != v64 )
      {
        v34 = v82;
LABEL_115:
        v39 = v88;
        v27 = v87;
        goto LABEL_116;
      }
      ++v40;
      v34 = v82;
      if ( v40 >= v82 )
        goto LABEL_115;
      v41 = 0;
      v42 += 16LL;
      if ( v42 >= (unsigned __int64)&v85[16 * v82] )
        return 3221225473LL;
      if ( v84 )
      {
        if ( *(_DWORD *)(v42 + 8) < v84 )
          return 3221225990LL;
        v41 = v84;
      }
      v84 = 0;
      if ( v41 != *(_DWORD *)(v42 + 8) )
        goto LABEL_115;
      ++v40;
      v39 = v88;
      v27 = v87;
      if ( v40 < v82 )
      {
        v41 = 0;
        v42 += 16LL;
      }
    }
LABEL_116:
    v45 = ++v83;
    v43 += 4LL;
    v44 += 4;
    v90 = v44;
  }
  if ( v84 )
    return 3221225990LL;
  v65 = v95;
  v66 = *(unsigned __int16 *)(v95 + 4);
  LowLimit = v66;
  v67 = a6;
  v68 = (unsigned __int16 *)(a6 + *(unsigned __int16 *)(a6 + 40) + 4LL * *(unsigned __int16 *)(v95 + 8));
  v69 = 0;
  v70 = 0;
  v81 = 1;
  v71 = 0;
  while ( v71 < *(unsigned __int16 *)(v65 + 10) )
  {
    v72 = (char *)(v67 + 24LL * v68[1] + 56);
    v73 = 1;
    v74 = 0;
    v80 = 0;
    v75 = 0;
    while ( 1 )
    {
      v90 = v72;
      v76 = *v68;
      if ( v75 >= ((*v68 >> 2) & 0x3Fu) )
        break;
      v77 = *(unsigned __int16 *)v72;
      if ( !(unsigned __int8)EtwpApplyPredicate(
                               a6,
                               *(_BYTE *)(v39 + 4 * (v66 + v77)) & 0xF,
                               v72,
                               *(_QWORD *)&v33[16 * (unsigned __int8)HIBYTE(*(_DWORD *)&v87[4 * v77])]
                             + (((unsigned __int64)*(unsigned int *)&v87[4 * v77] >> 12) & 0xFFF),
                               *(_DWORD *)&v87[4 * v77] & 0xFFF,
                               &v79) )
        return 3221225520LL;
      v73 &= v79;
      v74 = v79 | v80;
      v80 |= v79;
      ++v75;
      v72 = v90 + 24;
      v66 = LowLimit;
      v39 = v88;
      v33 = v85;
    }
    if ( (v76 & 2) == 0 )
      v74 = v73;
    if ( (v76 & 1) != 0 )
    {
      v78 = v69 & v74;
      v69 = v74;
      if ( !v81 )
        v69 = v78;
      v81 = 0;
    }
    else
    {
      v70 |= v74;
      if ( v70 == 1 )
        break;
    }
    ++v71;
    v68 += 2;
    v65 = v95;
    v67 = a6;
  }
  *a7 = v69 | v70;
  return 0LL;
}
