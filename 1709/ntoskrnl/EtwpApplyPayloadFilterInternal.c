/*
 * XREFs of EtwpApplyPayloadFilterInternal @ 0x1402825B4
 * Callers:
 *     EtwpApplyEventIdPayloadFilter @ 0x140280188 (EtwpApplyEventIdPayloadFilter.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400D9020 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1401897F0 (_alloca_probe.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     EtwpApplyPredicate @ 0x140282E20 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x14028337C (EtwpGetFieldValue.c)
 *     RtlLengthRequiredSid @ 0x14045C500 (RtlLengthRequiredSid.c)
 *     ExSystemExceptionFilter @ 0x140515700 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  unsigned int v14; // r10d
  unsigned int v15; // r8d
  unsigned int v16; // edx
  bool v17; // zf
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  void *v23; // rsp
  void *v24; // rsp
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  void *v27; // rsp
  void *v28; // rsp
  unsigned __int64 v29; // rcx
  char v30; // di
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
  __int64 v49; // r10
  unsigned int v50; // eax
  _WORD *v51; // rcx
  unsigned int v52; // eax
  unsigned int v53; // r9d
  unsigned int v54; // edx
  _BYTE *v55; // rax
  unsigned int v56; // edx
  unsigned int v57; // ecx
  unsigned int v58; // r14d
  unsigned int v59; // ecx
  unsigned int v60; // eax
  __int64 v61; // r12
  unsigned __int64 v62; // r9
  __int64 v63; // r11
  unsigned __int16 *v64; // r14
  char v65; // si
  unsigned int v66; // r8d
  char *v67; // r8
  char v68; // r12
  char v69; // r13
  unsigned int v70; // r15d
  __int16 v71; // dx
  __int64 v72; // rax
  char v73; // cl
  char v74; // [rsp+30h] [rbp+0h] BYREF
  char v75; // [rsp+31h] [rbp+1h]
  int v76; // [rsp+34h] [rbp+4h]
  unsigned int v77; // [rsp+38h] [rbp+8h]
  unsigned int v78; // [rsp+3Ch] [rbp+Ch]
  unsigned int v79; // [rsp+40h] [rbp+10h]
  char *v80; // [rsp+48h] [rbp+18h]
  char *v81; // [rsp+50h] [rbp+20h]
  char v82; // [rsp+58h] [rbp+28h]
  ULONG SubAuthorityCount[2]; // [rsp+60h] [rbp+30h] BYREF
  char *v84; // [rsp+68h] [rbp+38h]
  unsigned __int16 v85; // [rsp+70h] [rbp+40h]
  unsigned int v86; // [rsp+74h] [rbp+44h]
  unsigned int v87; // [rsp+78h] [rbp+48h]
  int v88; // [rsp+7Ch] [rbp+4Ch]
  __int64 v89; // [rsp+80h] [rbp+50h]
  unsigned __int64 LowLimit; // [rsp+88h] [rbp+58h] BYREF
  unsigned __int64 HighLimit[3]; // [rsp+90h] [rbp+60h] BYREF

  v77 = a2;
  v76 = -1073741811;
  if ( a2 > 0x80 )
    return 3221225485LL;
  v85 = *a1;
  v11 = *((_BYTE *)a1 + 2);
  v82 = v11;
  v12 = *(_QWORD *)(a6 + 8);
  if ( !_bittest64(&v12, v85 % 0x3Fu) )
    goto LABEL_4;
  v78 = 0;
  v13 = a6 + *(unsigned __int16 *)(a6 + 32);
  v14 = 0;
  v15 = 0;
  v16 = *(unsigned __int16 *)(a6 + 34) / 0xCu;
  while ( 1 )
  {
    v89 = v13;
    v17 = v15 == v16;
    if ( v15 >= v16 )
      break;
    if ( *(_WORD *)v13 == v85 && *(_BYTE *)(v13 + 2) == v11 )
    {
      v17 = v15 == v16;
      break;
    }
    v18 = *(unsigned __int8 *)(v13 + 3);
    if ( (unsigned __int16)v18 >= *(_WORD *)(v13 + 6) )
      return 3221225485LL;
    v13 += 12LL;
    ++v15;
    if ( v14 >= v18 )
      v18 = v14;
    v14 = v18;
  }
  if ( v17 )
  {
LABEL_4:
    *a7 = 1;
    return 0LL;
  }
  v81 = 0LL;
  v19 = 16 * a2;
  v87 = *(unsigned __int8 *)(v13 + 3) + 1;
  v20 = 4 * v87;
  IoGetStackLimits(&LowLimit, HighLimit);
  if ( (unsigned __int64)HighLimit - LowLimit >= (unsigned int)(v20 + v19 + 4096) )
  {
    v21 = v20 + 15;
    if ( v20 + 15 <= (unsigned __int64)(unsigned int)v20 )
      v21 = 0xFFFFFFFFFFFFFF0LL;
    v22 = v21 & 0xFFFFFFFFFFFFFFF0uLL;
    v23 = alloca(v22);
    v24 = alloca(v22);
    v80 = &v74;
    if ( a4 )
    {
      v25 = v19 + 15;
      if ( v19 + 15 <= (unsigned __int64)(unsigned int)v19 )
        v25 = 0xFFFFFFFFFFFFFF0LL;
      v26 = v25 & 0xFFFFFFFFFFFFFFF0uLL;
      v27 = alloca(v26);
      v28 = alloca(v26);
      v81 = &v74;
      if ( (_DWORD)v19 )
      {
        if ( ((unsigned __int8)a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v29 = (unsigned __int64)a3 + (unsigned int)v19;
        if ( v29 > 0x7FFFFFFF0000LL || v29 < (unsigned __int64)a3 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(&v74, a3, (unsigned int)v19);
      v30 = 0;
      v31 = 0;
      v32 = v81;
      v33 = v77;
      while ( 1 )
      {
        v86 = v31;
        if ( v31 >= v33 )
          break;
        v34 = *(unsigned int *)&v81[16 * v31 + 8];
        if ( (_DWORD)v34 )
        {
          v35 = *(_QWORD *)&v81[16 * v31];
          v36 = v35 + v34;
          if ( v36 > 0x7FFFFFFF0000LL || v36 < v35 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v33 = v77;
        }
        ++v31;
      }
    }
    else
    {
      v32 = (char *)a3;
      v81 = (char *)a3;
      v33 = v77;
      v30 = 0;
    }
    v37 = a6 + *(unsigned __int16 *)(a6 + 36);
    v38 = 0;
    v76 = 0;
    v39 = 0;
    v40 = (unsigned __int64)v32;
    v41 = v37 + 4LL * *(unsigned __int16 *)(v13 + 4);
    v42 = v80;
    v43 = v80;
    v84 = v80;
    v44 = 0;
    while ( 1 )
    {
      v79 = v44;
      if ( v44 >= v87 )
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
          if ( (unsigned int)v46 >= v79 )
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
          v32 = v81;
          v42 = v80;
        }
        v47 = *(unsigned __int8 *)(v41 + 1);
        if ( (*(_BYTE *)v41 & 0x20) != 0 )
        {
          if ( (unsigned int)v47 >= v79 )
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
              v54 = *(_DWORD *)(v40 + 8);
              if ( v39 >= v54 )
                return 3221225485LL;
              v55 = (_BYTE *)(*(_QWORD *)v40 + v39);
              v56 = v54 - v39;
              v57 = 0;
              while ( v57 < v56 && *v55 )
              {
                v88 = ++v57;
                HighLimit[2] = (unsigned __int64)++v55;
              }
              if ( v57 == v56 )
              {
                v78 = 1;
                v48 = 0;
              }
              else
              {
                v48 = 1;
              }
              LODWORD(v46) = v57;
              break;
            case 4:
              v49 = *(unsigned int *)(v40 + 8);
              v50 = *(_DWORD *)(v40 + 8) - v39;
              if ( v50 < 2 )
                return 3221225485LL;
              v51 = (_WORD *)(*(_QWORD *)v40 + v39);
              v52 = v50 >> 1;
              v53 = 0;
              while ( v53 < v52 && *v51 )
              {
                v88 = ++v53;
                HighLimit[1] = (unsigned __int64)++v51;
              }
              if ( v53 == v52 )
              {
                v78 = 2;
                v48 = 0;
              }
              else
              {
                v48 = 2;
              }
              if ( v53 == v52 && v39 + 2LL * v52 != v49 )
                return 3221225485LL;
              LODWORD(v46) = 2 * v53;
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
        v58 = v46 * v47;
        if ( *(_DWORD *)(v40 + 8) - v39 < v58 )
          return 3221225990LL;
        v38 = v76;
        v43 = v84;
        v84[3] = v76;
        v59 = v58 & 0xFFF | *(_DWORD *)v43 & 0xFF000000 | ((v39 & 0xFFF) << 12);
        *(_DWORD *)v43 = v59;
        if ( (unsigned __int8)v43[3] != v38 || ((v59 >> 12) & 0xFFF) != v39 || (v59 & 0xFFF) != v58 )
          return 3221225990LL;
        v39 += v58 + v48;
        v60 = *(_DWORD *)(v40 + 8);
        if ( v39 > v60 )
          return 3221225473LL;
        v32 = v81;
        if ( v39 == v60 )
        {
          v76 = ++v38;
          v33 = v77;
          if ( v38 < v77 )
          {
            v39 = 0;
            v40 += 16LL;
            if ( v40 >= (unsigned __int64)&v81[16 * v77] )
              return 3221225473LL;
            if ( v78 )
            {
              if ( *(_DWORD *)(v40 + 8) < v78 )
                return 3221225990LL;
              v39 = v78;
            }
            v78 = 0;
            if ( v39 == *(_DWORD *)(v40 + 8) )
            {
              v76 = ++v38;
              if ( v38 < v77 )
              {
                v39 = 0;
                v40 += 16LL;
              }
            }
          }
        }
        else
        {
          v33 = v77;
        }
        v42 = v80;
        v30 = 0;
      }
      v44 = v79 + 1;
      v41 += 4LL;
      v43 += 4;
      v84 = v43;
    }
    if ( v78 )
      return 3221225990LL;
    v61 = v89;
    v62 = v37 + 4LL * *(unsigned __int16 *)(v89 + 4);
    LowLimit = v62;
    v63 = a6;
    v64 = (unsigned __int16 *)(a6 + *(unsigned __int16 *)(a6 + 40) + 4LL * *(unsigned __int16 *)(v89 + 8));
    v65 = 0;
    v75 = 1;
    v66 = 0;
    v76 = 0;
    while ( v66 < *(unsigned __int16 *)(v61 + 10) )
    {
      v67 = (char *)(v63 + 8 * (v64[1] + 2LL * v64[1] + 7));
      v68 = 1;
      v69 = 0;
      v70 = 0;
      while ( 1 )
      {
        v84 = v67;
        v71 = *v64;
        if ( v70 >= ((*v64 >> 2) & 0x3Fu) )
          break;
        v72 = *(unsigned __int16 *)v67;
        if ( !(unsigned __int8)EtwpApplyPredicate(
                                 v63,
                                 *(_BYTE *)(v62 + 4 * v72) & 0xF,
                                 v67,
                                 *(_QWORD *)&v81[16 * (unsigned __int8)v80[4 * v72 + 3]]
                               + (((unsigned __int64)*(unsigned int *)&v80[4 * v72] >> 12) & 0xFFF),
                                 *(_DWORD *)&v80[4 * v72] & 0xFFF,
                                 &v74) )
          return 3221225520LL;
        v68 &= v74;
        v69 |= v74;
        ++v70;
        v67 = v84 + 24;
        v62 = LowLimit;
        v63 = a6;
      }
      v73 = v68;
      if ( (v71 & 2) != 0 )
        v73 = v69;
      if ( (v71 & 1) != 0 )
      {
        if ( v75 )
        {
          v65 = v73;
          v75 = 0;
        }
        else
        {
          v65 &= v73;
        }
      }
      else
      {
        v30 |= v73;
        if ( v30 == 1 )
          break;
      }
      v66 = ++v76;
      v64 += 2;
      v61 = v89;
    }
    *a7 = v65 | v30;
    return 0LL;
  }
  return 3221225626LL;
}
