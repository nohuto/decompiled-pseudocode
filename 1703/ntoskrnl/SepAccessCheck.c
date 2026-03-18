/*
 * XREFs of SepAccessCheck @ 0x14008E970
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140092020 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046B2C0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepNormalAccessCheck @ 0x140090270 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x140090C10 (SepMaximumAccessCheck.c)
 *     SepPrivilegeCheck @ 0x1400EDD50 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SepAssemblePrivileges @ 0x140443F78 (SepAssemblePrivileges.c)
 */

__int64 __fastcall SepAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned int a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        unsigned int *a11,
        _QWORD *a12,
        int *a13,
        char a14,
        char a15,
        int *a16,
        __int64 a17,
        char *a18,
        char *a19)
{
  __int64 v20; // r9
  int v21; // r11d
  unsigned int v23; // r10d
  unsigned int v24; // esi
  __int16 v25; // dx
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rbx
  int v29; // r8d
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // r8
  int v33; // eax
  int v34; // eax
  int v35; // ebp
  unsigned int v36; // r15d
  unsigned __int8 v37; // cl
  int v38; // ebx
  int v39; // edx
  unsigned __int8 v40; // bp
  int v42; // eax
  __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  _DWORD *v46; // r8
  int v47; // edx
  int v48; // edi
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  char v52; // al
  int v53; // r10d
  int v54; // eax
  int v55; // edx
  int v56; // r8d
  _DWORD *v57; // rax
  int v58; // ecx
  char v59; // r9
  char v60; // r15
  int v61; // ecx
  unsigned int v62; // r13d
  __int64 v63; // r10
  int *v64; // rdx
  bool v65; // zf
  int v66; // eax
  __int64 v67; // rsi
  char *v68; // r10
  char *v69; // rdi
  __int64 v70; // rax
  unsigned int v71; // eax
  size_t v72; // r8
  size_t k; // rcx
  signed __int64 v74; // rdi
  char *v75; // rcx
  __int64 v76; // rax
  int *v77; // rdi
  __int64 v78; // rax
  unsigned int v79; // eax
  unsigned __int64 v80; // rdx
  unsigned __int64 i; // rcx
  unsigned int *v82; // rdi
  unsigned __int64 j; // rcx
  signed __int64 v84; // rdi
  unsigned int *v85; // rcx
  __int64 v86; // rax
  unsigned __int8 v87; // [rsp+70h] [rbp-E8h]
  char v88; // [rsp+71h] [rbp-E7h]
  unsigned __int8 v89; // [rsp+72h] [rbp-E6h]
  unsigned __int8 v90; // [rsp+73h] [rbp-E5h]
  int v91; // [rsp+74h] [rbp-E4h]
  unsigned int v92; // [rsp+78h] [rbp-E0h]
  unsigned int v93; // [rsp+7Ch] [rbp-DCh]
  _QWORD *v94; // [rsp+98h] [rbp-C0h]
  int v96; // [rsp+B0h] [rbp-A8h]
  __int64 v97; // [rsp+C8h] [rbp-90h] BYREF
  int v98; // [rsp+D0h] [rbp-88h]
  _QWORD v99[6]; // [rsp+D8h] [rbp-80h] BYREF

  v20 = (__int64)a16;
  v21 = 1;
  v94 = a6;
  v96 = a3;
  if ( !a4 )
    a4 = a3;
  v23 = a5;
  v91 = 0;
  v87 = 0;
  v89 = 0;
  v90 = 0;
  v92 = a5;
  v93 = 1;
  if ( (a5 & 0x1000000) != 0 )
  {
    v97 = (__int64)SeSecurityPrivilege;
    v98 = 0;
    if ( !(unsigned __int8)SepPrivilegeCheck(a4, (unsigned int)&v97, 1, 1, a10) )
    {
      v36 = 0;
      v38 = -1073741727;
      v24 = 0;
      v40 = v56;
LABEL_30:
      if ( a14 )
      {
        if ( a7 )
        {
          v77 = a13;
          if ( a7 >= 4 )
          {
            v78 = a7 - 1;
            if ( a11 > (unsigned int *)&a13[v78] || &a11[v78] < (unsigned int *)a13 )
            {
              v79 = a7 & 0xFFFFFFFC;
              do
                v36 += 4;
              while ( v36 < v79 );
              v80 = 4LL * ((v79 + 3) & 0xFFFFFFFC);
              for ( i = v80 >> 2; i; --i )
                *v77++ = v38;
              v82 = a11;
              for ( j = v80 >> 2; j; --j )
                *v82++ = v24;
              v77 = a13;
            }
          }
          if ( v36 < a7 )
          {
            v84 = (char *)v77 - (char *)a11;
            v85 = &a11[v36];
            v86 = a7 - v36;
            do
            {
              *(unsigned int *)((char *)v85 + v84) = v38;
              *v85++ = v24;
              --v86;
            }
            while ( v86 );
          }
        }
        goto LABEL_32;
      }
LABEL_31:
      *a13 = v38;
      *a11 = v24;
LABEL_32:
      if ( v38 < 0 )
      {
        if ( a18 )
          *a18 = 0;
        if ( a19 )
          *a19 = 1;
      }
      else
      {
        if ( a18 )
          *a18 = 1;
        if ( a19 )
          *a19 = 0;
      }
      return v40;
    }
    v23 = a5 & 0xFEFFFFFF;
    v91 = v56;
    v24 = a9 | 0x1000000;
    v92 = a5 & 0xFEFFFFFF;
    v39 = (unsigned __int8)v56;
    v21 = v56;
    v87 = v56;
    v35 = v56;
    if ( (a5 & 0xFEFFFFFF) == 0 )
    {
      v36 = 0;
      v38 = 0;
      goto LABEL_43;
    }
    v20 = (__int64)a16;
  }
  else
  {
    v24 = a9;
  }
  v25 = *(_WORD *)(a1 + 2);
  if ( (v25 & 4) != 0 )
  {
    if ( v25 >= 0 )
    {
      v27 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v26 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v26 )
        v27 = a1 + v26;
      else
        v27 = 0LL;
    }
  }
  else
  {
    v27 = 0LL;
  }
  if ( (~(_BYTE)v25 & 0x10) != 0 )
  {
    v28 = 0LL;
  }
  else if ( v25 < 0 )
  {
    v43 = *(unsigned int *)(a1 + 12);
    if ( (_DWORD)v43 )
      v28 = a1 + v43;
    else
      v28 = 0LL;
  }
  else
  {
    v28 = *(_QWORD *)(a1 + 24);
  }
  if ( (v25 & 4) == 0 || !v27 )
  {
    v24 |= a5;
    if ( (a5 & 0x2000000) != 0 )
      v24 = a8[3] | v24 & 0xFDFFFFFF;
    v42 = *(_DWORD *)(a4 + 200);
    v36 = 0;
    if ( (v42 & 0x4000) != 0 )
    {
      v24 = 0;
      *(_BYTE *)(v20 + 17) = 0;
      *(_DWORD *)(v20 + 4) = 0;
      goto LABEL_58;
    }
    v38 = 0;
    goto LABEL_42;
  }
  if ( (v23 & 0x80000) == 0 )
  {
LABEL_15:
    v29 = 1;
    goto LABEL_16;
  }
  v98 = 0;
  v97 = SeTakeOwnershipPrivilege;
  if ( (unsigned __int8)SepPrivilegeCheck(a4, (unsigned int)&v97, v21, v21, a10) )
  {
    v24 |= 0x80000u;
    ++v91;
    v23 = v92 & 0xFFF7FFFF;
    v92 = v23;
    v37 = 1;
    v89 = 1;
    if ( !v23 )
    {
      v35 = v91;
      v36 = 0;
      v39 = v87;
      v38 = 0;
      goto LABEL_26;
    }
    goto LABEL_15;
  }
  v97 = (__int64)SeRelabelPrivilege;
  v98 = 0;
  v52 = SepPrivilegeCheck(a4, (unsigned int)&v97, 1, 1, a10);
  v23 = v92;
  if ( v52 )
  {
    ++v91;
    v23 = v92 & 0xFFF7FFFF;
    v24 |= 0x80000u;
    v92 = v23;
    v90 = v29;
    if ( !v23 )
    {
      v36 = 0;
      v38 = 0;
LABEL_42:
      v39 = v87;
      v35 = v91;
LABEL_43:
      v37 = 0;
      goto LABEL_26;
    }
  }
LABEL_16:
  if ( !*(_WORD *)(v27 + 4) )
  {
    v57 = a16;
    a16[3] = v23;
    v58 = *(_DWORD *)(a4 + 200);
    if ( (v58 & 0x4000) != 0 )
    {
      v24 &= ~*a16;
      v57 = a16;
    }
    if ( v23 == 0x2000000 )
    {
      if ( v24 )
      {
        v35 = v91;
        v36 = 0;
        v37 = v89;
        v38 = 0;
        v39 = v87;
        goto LABEL_26;
      }
    }
    else if ( !v23 && *v57 && v24 && (v58 & 0x6000) == 0 )
    {
      v35 = v91;
      v36 = 0;
      v37 = v89;
      v38 = 0;
      v39 = v87;
      goto LABEL_26;
    }
    v36 = 0;
    v24 = 0;
    goto LABEL_58;
  }
  if ( a7 )
  {
    v30 = a6;
    v29 = a7;
    v93 = a7;
  }
  else
  {
    v30 = v99;
    v99[2] = 0xFFFFFFFF00000000uLL;
    v94 = v99;
    v99[0] = 0LL;
    v99[1] = 0LL;
    memset(&v99[3], 0, 24);
  }
  if ( (a5 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(v23, a4, v96, v27, v28, a17, a2, v29, (__int64)v30, a7, 0, a15, (__int64)a16);
    v31 = v94;
    v32 = (__int64)a16;
    a16[3] = *((_DWORD *)v94 + 6);
    if ( *((_DWORD *)v94 + 6) )
      goto LABEL_63;
    v33 = *(_DWORD *)(a4 + 200);
    if ( (v33 & 0x10) != 0 )
    {
      v53 = (v33 & 8) != 0 ? a8[1] & ~(*a8 | a8[2]) | 0x10D0000 : a8[3] | 0x1FFFFF;
      if ( (v53 & a5) != 0 )
      {
        SepNormalAccessCheck(v53 & v92, a4, v96, v27, v28, a17, a2, v93, (__int64)v94, a7, 1, a15, (__int64)a16);
        v31 = v94;
        v32 = (__int64)a16;
      }
    }
    *(_DWORD *)(v32 + 12) = *((_DWORD *)v31 + 6);
    if ( *((_DWORD *)v31 + 6) )
      goto LABEL_63;
    v34 = *(_DWORD *)(a4 + 200);
    if ( (v34 & 0x2000) != 0 )
    {
LABEL_25:
      v35 = v91;
      v36 = 0;
      v37 = v89;
      v38 = 0;
      v39 = v87;
      v24 |= a5;
      goto LABEL_26;
    }
    v48 = a5 | v92;
    if ( (v34 & 0x4000) != 0 )
    {
      v49 = ~(*(_DWORD *)(v32 + 4) | *(_DWORD *)(v32 + 8));
      v50 = v48 | *(_DWORD *)v32;
    }
    else
    {
      if ( !*(_BYTE *)(v32 + 16) )
      {
        v51 = 0;
LABEL_62:
        *((_DWORD *)v31 + 6) = v51;
        if ( !v51 )
          goto LABEL_25;
LABEL_63:
        v38 = -1073741790;
        v24 = 0;
        v40 = 1;
        goto LABEL_31;
      }
      v49 = v48 | *(_DWORD *)v32;
      v50 = ~*(_DWORD *)(v32 + 4);
    }
    v51 = v50 & v49;
    goto LABEL_62;
  }
  SepMaximumAccessCheck(a4, v96, v27, v28, a17, a2, v29, (__int64)v30, a7, 0, 0, a15, (__int64)a16);
  v44 = *(_DWORD *)(a4 + 200);
  if ( (v44 & 0x10) != 0 )
  {
    if ( (v44 & 8) != 0 )
      v55 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
    else
      v55 = a8[3] | 0x1FFFFF;
    SepMaximumAccessCheck(a4, v96, v27, v28, a17, a2, v93, (__int64)v94, a7, v55, 1, a15, (__int64)a16);
  }
  v45 = *(_DWORD *)(a4 + 200);
  v46 = (_DWORD *)v94 + 7;
  v47 = *((_DWORD *)v94 + 7);
  if ( (v45 & 0x2000) == 0 )
  {
    if ( (v45 & 0x4000) != 0 )
    {
      v54 = *a16;
      v47 &= a16[1] | a16[2];
    }
    else
    {
      if ( !*((_BYTE *)a16 + 16) )
        goto LABEL_54;
      v47 &= a16[1];
      v54 = *a16;
    }
    v24 &= ~v54;
  }
LABEL_54:
  if ( !a14 )
  {
    if ( (~(v47 | 0x2000000) & v92) != 0 )
      goto LABEL_63;
    v35 = v91;
    v24 |= v47;
    v37 = v89;
    v36 = 0;
    v39 = v87;
    v38 = 0;
LABEL_26:
    if ( v24 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        if ( v35 )
        {
          SepAssemblePrivileges(v35, v39, v37, v90, (__int64)a12);
          if ( a12 )
          {
            if ( !*a12 )
            {
              v40 = 0;
              v38 = -1073741801;
              v24 = 0;
              goto LABEL_30;
            }
          }
        }
      }
LABEL_29:
      v40 = 1;
      goto LABEL_30;
    }
LABEL_58:
    v38 = -1073741790;
    goto LABEL_29;
  }
  v59 = 0;
  v60 = 0;
  if ( (a5 & 0x2000000) != 0 )
  {
    v61 = -33554433;
    v62 = (v24 | a5) & 0xFDFFFFFF;
  }
  else
  {
    v61 = v24 | a5;
    v62 = v24 | a5;
  }
  v63 = v93;
  v64 = a13;
  do
  {
    v65 = (v61 & (v24 | *v46)) == 0;
    v66 = v61 & (v24 | *v46);
    *(int *)((char *)v64 + (char *)a11 - (char *)a13) = v66;
    if ( v65 )
    {
      *v64 = -1073741790;
      v59 = 1;
    }
    else if ( (~v66 & v62) != 0 )
    {
      *v64 = -1073741790;
      v59 = 1;
    }
    else
    {
      *v64 = 0;
      v60 = 1;
    }
    v46 += 12;
    ++v64;
    --v63;
  }
  while ( v63 );
  v88 = v59;
  if ( KeGetCurrentIrql() < 2u && v60 && v91 )
  {
    SepAssemblePrivileges(v91, v87, v89, v90, (__int64)a12);
    if ( a12 && !*a12 )
    {
      v40 = 0;
      v60 = 0;
      v67 = 0LL;
      v59 = 1;
      v68 = (char *)a11;
      v69 = (char *)a13;
      if ( v93 >= 4 )
      {
        v70 = v93 - 1;
        if ( a11 > (unsigned int *)&a13[v70] || &a11[v70] < (unsigned int *)a13 )
        {
          v71 = v93 & 0xFFFFFFFC;
          do
            v67 = (unsigned int)(v67 + 4);
          while ( (unsigned int)v67 < v71 );
          v72 = 4LL * ((v71 + 3) & 0xFFFFFFFC);
          for ( k = v72 >> 2; k; --k )
          {
            *(_DWORD *)v69 = -1073741801;
            v69 += 4;
          }
          memset(a11, 0, v72);
          v59 = 1;
          v68 = (char *)a11;
          v69 = (char *)a13;
        }
      }
      if ( (unsigned int)v67 < v93 )
      {
        v74 = v69 - v68;
        v75 = &v68[4 * v67];
        v76 = v93 - (unsigned int)v67;
        do
        {
          *(_DWORD *)&v75[v74] = -1073741801;
          *(_DWORD *)v75 = 0;
          v75 += 4;
          --v76;
        }
        while ( v76 );
      }
      goto LABEL_141;
    }
    v59 = v88;
  }
  v40 = 1;
LABEL_141:
  if ( a18 )
    *a18 = v60;
  if ( a19 )
    *a19 = v59;
  return v40;
}
