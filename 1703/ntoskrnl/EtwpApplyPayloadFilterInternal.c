/*
 * XREFs of EtwpApplyPayloadFilterInternal @ 0x1402589D0
 * Callers:
 *     EtwpApplyEventIdPayloadFilter @ 0x140257188 (EtwpApplyEventIdPayloadFilter.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400E77A0 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     __chkstk @ 0x140189CF0 (__chkstk.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     EtwpApplyPredicate @ 0x140259244 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x14025979C (EtwpGetFieldValue.c)
 *     ExSystemExceptionFilter @ 0x140430F30 (ExSystemExceptionFilter.c)
 *     RtlLengthRequiredSid @ 0x14046EA80 (RtlLengthRequiredSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpApplyPayloadFilterInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        void *a3,
        char a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  char v11; // r11
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  unsigned int v16; // edx
  bool v17; // zf
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  void *v23; // rsp
  void *v24; // rsp
  char v25; // r14
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  void *v28; // rsp
  void *v29; // rsp
  unsigned __int64 v30; // rcx
  unsigned int v31; // ecx
  char *v32; // r10
  unsigned int v33; // r8d
  __int64 v34; // rdx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rdx
  __int64 v37; // r13
  unsigned int v38; // edx
  unsigned int v39; // esi
  unsigned __int64 v40; // r15
  __int64 v41; // r12
  char *v42; // r11
  char *v43; // r9
  unsigned int v44; // eax
  char v45; // al
  __int64 v46; // rdi
  __int64 v47; // r14
  int v48; // r8d
  unsigned int v49; // eax
  _WORD *v50; // rcx
  unsigned int v51; // eax
  unsigned int v52; // r9d
  unsigned int v53; // edx
  _BYTE *v54; // rax
  unsigned int v55; // edx
  unsigned int v56; // ecx
  unsigned int v57; // r14d
  unsigned int v58; // ecx
  unsigned int v59; // eax
  __int64 v60; // r12
  unsigned __int64 v61; // r9
  __int64 v62; // r11
  unsigned __int16 *v63; // rsi
  unsigned int v64; // r15d
  char v65; // di
  unsigned int v66; // r8d
  char *v67; // r8
  char v68; // r12
  char v69; // r13
  __int64 v70; // rax
  char v71; // dl
  char v72; // [rsp+30h] [rbp+0h] BYREF
  char v73; // [rsp+31h] [rbp+1h]
  int v74; // [rsp+34h] [rbp+4h]
  unsigned int v75; // [rsp+38h] [rbp+8h]
  unsigned int v76; // [rsp+3Ch] [rbp+Ch]
  unsigned int v77; // [rsp+40h] [rbp+10h]
  char *v78; // [rsp+48h] [rbp+18h]
  char *v79; // [rsp+50h] [rbp+20h]
  char v80; // [rsp+58h] [rbp+28h]
  ULONG SubAuthorityCount[2]; // [rsp+60h] [rbp+30h] BYREF
  char *v82; // [rsp+68h] [rbp+38h]
  unsigned __int16 v83; // [rsp+70h] [rbp+40h]
  unsigned int v84; // [rsp+74h] [rbp+44h]
  unsigned int v85; // [rsp+78h] [rbp+48h]
  int v86; // [rsp+7Ch] [rbp+4Ch]
  __int64 v87; // [rsp+80h] [rbp+50h]
  unsigned __int64 LowLimit; // [rsp+88h] [rbp+58h] BYREF
  unsigned __int64 HighLimit[3]; // [rsp+90h] [rbp+60h] BYREF

  v75 = a2;
  v74 = -1073741811;
  if ( a2 > 0x80 )
    return 3221225485LL;
  v83 = *a1;
  v11 = *((_BYTE *)a1 + 2);
  v80 = v11;
  v12 = *(_QWORD *)(a6 + 8);
  if ( !_bittest64(&v12, v83 % 0x3Fu) )
    goto LABEL_4;
  v76 = 0;
  v13 = a6 + *(unsigned __int16 *)(a6 + 32);
  v14 = 0;
  v15 = 0;
  v16 = *(unsigned __int16 *)(a6 + 34) / 0xCu;
  while ( 1 )
  {
    v87 = v13;
    v17 = v15 == v16;
    if ( v15 >= v16 )
      break;
    if ( *(_WORD *)v13 == v83 && *(_BYTE *)(v13 + 2) == v11 )
    {
      v17 = v15 == v16;
      break;
    }
    v18 = *(unsigned __int8 *)(v13 + 3);
    if ( (unsigned __int16)v18 >= *(_WORD *)(v13 + 6) )
      return 3221225485LL;
    if ( v14 < v18 )
      v14 = *(unsigned __int8 *)(v13 + 3);
    v13 += 12LL;
    ++v15;
  }
  if ( v17 )
  {
LABEL_4:
    *a7 = 1;
    return 0LL;
  }
  v79 = 0LL;
  v19 = 16 * a2;
  v85 = *(unsigned __int8 *)(v13 + 3) + 1;
  v20 = 4 * v85;
  IoGetStackLimits(&LowLimit, HighLimit);
  if ( (unsigned __int64)HighLimit - LowLimit >= (unsigned int)(v20 + v19 + 4096) )
  {
    v21 = v20 + 15;
    if ( v20 + 15 <= (unsigned __int64)(unsigned int)v20 )
      v21 = 0xFFFFFFFFFFFFFF0LL;
    v22 = v21 & 0xFFFFFFFFFFFFFFF0uLL;
    v23 = alloca(v22);
    v24 = alloca(v22);
    v78 = &v72;
    v25 = 0;
    if ( a4 )
    {
      v26 = v19 + 15;
      if ( v19 + 15 <= (unsigned __int64)(unsigned int)v19 )
        v26 = 0xFFFFFFFFFFFFFF0LL;
      v27 = v26 & 0xFFFFFFFFFFFFFFF0uLL;
      v28 = alloca(v27);
      v29 = alloca(v27);
      v79 = &v72;
      if ( (_DWORD)v19 )
      {
        if ( ((unsigned __int8)a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v30 = (unsigned __int64)a3 + (unsigned int)v19;
        if ( v30 > 0x7FFFFFFF0000LL || v30 < (unsigned __int64)a3 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(&v72, a3, (unsigned int)v19);
      v31 = 0;
      v32 = v79;
      v33 = v75;
      while ( 1 )
      {
        v84 = v31;
        if ( v31 >= v33 )
          break;
        v34 = *(unsigned int *)&v79[16 * v31 + 8];
        if ( (_DWORD)v34 )
        {
          v35 = *(_QWORD *)&v79[16 * v31];
          v36 = v35 + v34;
          if ( v36 > 0x7FFFFFFF0000LL || v36 < v35 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v33 = v75;
        }
        ++v31;
      }
      v25 = 0;
    }
    else
    {
      v32 = (char *)a3;
      v79 = (char *)a3;
      v33 = v75;
    }
    v37 = a6 + *(unsigned __int16 *)(a6 + 36);
    v38 = 0;
    v74 = 0;
    v39 = 0;
    v40 = (unsigned __int64)v32;
    v41 = v37 + 4LL * *(unsigned __int16 *)(v13 + 4);
    v42 = v78;
    v43 = v78;
    v82 = v78;
    v44 = 0;
    while ( 1 )
    {
      v77 = v44;
      if ( v44 >= v85 )
        break;
      if ( v38 == v33 )
        return 3221225990LL;
      v45 = *(_BYTE *)v41 & 0xF;
      if ( v45 == 7 )
      {
        if ( *(_WORD *)(v41 + 2) )
          return 3221225520LL;
        v43[3] = v38;
        *(_DWORD *)v43 = *(_DWORD *)v43 & 0xFF000000 | ((v39 & 0xFFF) << 12);
      }
      else
      {
        v46 = *(unsigned __int16 *)(v41 + 2);
        if ( v45 == 8 )
          v46 = a5 != 0 ? 8 : 4;
        if ( (*(_BYTE *)v41 & 0x10) != 0 )
        {
          if ( (unsigned int)v46 >= v77 )
            return 3221225520LL;
          if ( (unsigned __int8)((*(_BYTE *)(v37 + 4 * v46) & 0xF) - 1) > 1u )
            return 3221225520LL;
          if ( (*(_BYTE *)(v37 + 4 * v46) & 0x30) != 0 )
            return 3221225520LL;
          if ( *(_WORD *)(v37 + 4 * v46 + 2) > 8u )
            return 3221225520LL;
          if ( *(_BYTE *)(v37 + 4 * v46 + 1) != 1 )
            return 3221225520LL;
          _mm_lfence();
          if ( !(unsigned __int8)EtwpGetFieldValue(
                                   *(_QWORD *)&v32[16 * (unsigned __int8)v42[4 * v46 + 3]]
                                 + ((*(_DWORD *)&v42[4 * v46] >> 12) & 0xFFF),
                                   *(unsigned __int16 *)(v37 + 4 * v46 + 2),
                                   SubAuthorityCount,
                                   v43) )
            return 3221225520LL;
          LODWORD(v46) = SubAuthorityCount[0];
          if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
            return 3221225520LL;
          v32 = v79;
          v42 = v78;
        }
        v47 = *(unsigned __int8 *)(v41 + 1);
        if ( (*(_BYTE *)v41 & 0x20) != 0 )
        {
          if ( (unsigned int)v47 >= v77 )
            return 3221225520LL;
          if ( (unsigned __int8)((*(_BYTE *)(v37 + 4 * v47) & 0xF) - 1) > 1u )
            return 3221225520LL;
          if ( (*(_BYTE *)(v37 + 4 * v47) & 0x30) != 0 )
            return 3221225520LL;
          if ( *(_WORD *)(v37 + 4 * v47 + 2) > 8u )
            return 3221225520LL;
          if ( *(_BYTE *)(v37 + 4 * v47 + 1) != 1 )
            return 3221225520LL;
          _mm_lfence();
          if ( !(unsigned __int8)EtwpGetFieldValue(
                                   *(_QWORD *)&v32[16 * (unsigned __int8)v42[4 * v47 + 3]]
                                 + ((*(_DWORD *)&v42[4 * v47] >> 12) & 0xFFF),
                                   *(unsigned __int16 *)(v37 + 4 * v47 + 2),
                                   SubAuthorityCount,
                                   v43) )
            return 3221225520LL;
          LODWORD(v47) = SubAuthorityCount[0];
          if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
            return 3221225520LL;
        }
        v48 = 0;
        if ( !(_DWORD)v46 )
        {
          if ( (*(_BYTE *)v41 & 0x10) != 0 || (_DWORD)v47 != 1 )
            return 3221225520LL;
          switch ( *(_BYTE *)v41 & 0xF )
          {
            case 3:
              v53 = *(_DWORD *)(v40 + 8);
              if ( v39 >= v53 )
                return 3221225485LL;
              v54 = (_BYTE *)(*(_QWORD *)v40 + v39);
              v55 = v53 - v39;
              v56 = 0;
              while ( v56 < v55 && *v54 )
              {
                v86 = ++v56;
                HighLimit[2] = (unsigned __int64)++v54;
              }
              if ( v56 == v55 )
              {
                v76 = 1;
                v48 = 0;
              }
              else
              {
                v48 = 1;
              }
              LODWORD(v46) = v56;
              break;
            case 4:
              v49 = *(_DWORD *)(v40 + 8) - v39;
              if ( v49 < 2 )
                return 3221225485LL;
              v50 = (_WORD *)(*(_QWORD *)v40 + v39);
              v51 = v49 >> 1;
              v52 = 0;
              while ( v52 < v51 && *v50 )
              {
                v86 = ++v52;
                HighLimit[1] = (unsigned __int64)++v50;
              }
              if ( v52 == v51 )
              {
                v76 = 2;
                v48 = 0;
              }
              else
              {
                v48 = 2;
              }
              if ( v52 == v51 && v39 + 2LL * v51 != *(_DWORD *)(v40 + 8) )
                return 3221225485LL;
              LODWORD(v46) = 2 * v52;
              break;
            case 6:
              if ( *(_DWORD *)(v40 + 8) - v39 < 2 )
                return 3221225485LL;
              if ( !(unsigned __int8)EtwpGetFieldValue(*(_QWORD *)v40 + v39 + 1LL, 1LL, SubAuthorityCount, v43) )
                return 3221225485LL;
              LODWORD(v46) = RtlLengthRequiredSid(SubAuthorityCount[0]);
              if ( (_DWORD)v46 == -1 )
                return 3221225485LL;
              v48 = 0;
              break;
            default:
              return 3221225520LL;
          }
        }
        v57 = v46 * v47;
        if ( *(_DWORD *)(v40 + 8) - v39 < v57 )
          return 3221225990LL;
        v38 = v74;
        v43 = v82;
        v82[3] = v74;
        v58 = v57 & 0xFFF | *(_DWORD *)v43 & 0xFF000000 | ((v39 & 0xFFF) << 12);
        *(_DWORD *)v43 = v58;
        if ( (unsigned __int8)v43[3] != v38 || ((v58 >> 12) & 0xFFF) != v39 || (v58 & 0xFFF) != v57 )
          return 3221225990LL;
        v39 += v57 + v48;
        v59 = *(_DWORD *)(v40 + 8);
        if ( v39 > v59 )
          return 3221225473LL;
        v32 = v79;
        if ( v39 == v59 )
        {
          v74 = ++v38;
          v33 = v75;
          if ( v38 < v75 )
          {
            v39 = 0;
            v40 += 16LL;
            if ( v40 >= (unsigned __int64)&v79[16 * v75] )
              return 3221225473LL;
            if ( v76 )
            {
              if ( *(_DWORD *)(v40 + 8) < v76 )
                return 3221225990LL;
              v39 = v76;
            }
            v76 = 0;
            if ( v39 == *(_DWORD *)(v40 + 8) )
            {
              v74 = ++v38;
              if ( v38 < v75 )
              {
                v39 = 0;
                v40 += 16LL;
              }
            }
          }
        }
        else
        {
          v33 = v75;
        }
        v42 = v78;
        v25 = 0;
      }
      v44 = v77 + 1;
      v41 += 4LL;
      v43 += 4;
      v82 = v43;
    }
    if ( v76 )
      return 3221225990LL;
    v60 = v87;
    v61 = v37 + 4LL * *(unsigned __int16 *)(v87 + 4);
    LowLimit = v61;
    v62 = a6;
    v63 = (unsigned __int16 *)(a6 + *(unsigned __int16 *)(a6 + 40) + 4LL * *(unsigned __int16 *)(v87 + 8));
    v64 = 0;
    v65 = 0;
    v73 = 1;
    v66 = 0;
    v74 = 0;
    while ( v66 < *(unsigned __int16 *)(v60 + 10) )
    {
      v67 = (char *)(v62 + 8 * (v63[1] + 2LL * v63[1] + 7));
      v68 = 1;
      v69 = 0;
      while ( 1 )
      {
        v82 = v67;
        if ( v64 >= ((*v63 >> 2) & 0x3Fu) )
          break;
        v70 = *(unsigned __int16 *)v67;
        if ( !(unsigned __int8)EtwpApplyPredicate(
                                 v62,
                                 *(_BYTE *)(v61 + 4 * v70) & 0xF,
                                 v67,
                                 *(_QWORD *)&v79[16 * (unsigned __int8)v78[4 * v70 + 3]]
                               + (((unsigned __int64)*(unsigned int *)&v78[4 * v70] >> 12) & 0xFFF),
                                 *(_DWORD *)&v78[4 * v70] & 0xFFF,
                                 &v72) )
          return 3221225520LL;
        v68 &= v72;
        v69 |= v72;
        ++v64;
        v67 = v82 + 24;
        v61 = LowLimit;
        v62 = a6;
      }
      v71 = v68;
      if ( (*v63 & 2) != 0 )
        v71 = v69;
      if ( (*v63 & 1) != 0 )
      {
        v64 = 0;
        if ( v73 )
        {
          v25 = v71;
          v73 = 0;
        }
        else
        {
          v25 &= v71;
        }
      }
      else
      {
        v65 |= v71;
        if ( v65 == 1 )
          break;
        v64 = 0;
      }
      v66 = ++v74;
      v63 += 2;
      v60 = v87;
    }
    *a7 = v25 | v65;
    return 0LL;
  }
  return 3221225626LL;
}
