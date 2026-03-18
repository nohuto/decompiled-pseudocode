/*
 * XREFs of SepAccessCheck @ 0x14007F5F0
 * Callers:
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046A8D0 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepMaximumAccessCheck @ 0x14007D5C0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14007DC40 (SepNormalAccessCheck.c)
 *     SepPrivilegeCheck @ 0x140087BC0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SepAssemblePrivileges @ 0x14057F150 (SepAssemblePrivileges.c)
 */

__int64 __fastcall SepAccessCheck(
        __int64 a1,
        void *a2,
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
        __int64 *a17,
        char *a18,
        char *a19)
{
  unsigned int v19; // ebp
  _QWORD *v20; // r15
  __int64 v22; // r9
  unsigned int v24; // r8d
  unsigned int v25; // r10d
  unsigned int v26; // esi
  __int16 v27; // cx
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 v30; // rbx
  int v31; // edx
  unsigned int v32; // r8d
  _QWORD *v33; // rax
  _QWORD *v34; // r8
  __int64 v35; // r9
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  unsigned __int8 v39; // cl
  int v40; // ebx
  unsigned __int8 v41; // r15
  __int64 v43; // rcx
  int v44; // eax
  int v45; // eax
  _DWORD *v46; // r8
  int v47; // edx
  int v48; // edi
  int v49; // edx
  int v50; // eax
  int v51; // edx
  char v52; // al
  int v53; // r10d
  int v54; // eax
  int v55; // edx
  unsigned __int8 v56; // r8
  _DWORD *v57; // rax
  int v58; // ecx
  char v59; // r13
  int v60; // edx
  unsigned int v61; // eax
  __int64 v62; // r10
  int *v63; // rdi
  bool v64; // zf
  int v65; // ecx
  char v66; // cl
  unsigned int v67; // r8d
  unsigned int v68; // esi
  char *v69; // r9
  char *v70; // rdi
  __int64 v71; // rax
  unsigned int v72; // eax
  unsigned __int64 k; // rcx
  signed __int64 v74; // rdi
  char *v75; // rcx
  __int64 v76; // rax
  int *v77; // rdi
  __int64 v78; // rax
  unsigned int v79; // eax
  unsigned __int64 i; // rcx
  unsigned int *v81; // rdi
  unsigned __int64 j; // rcx
  signed __int64 v83; // rdi
  unsigned int *v84; // rcx
  __int64 v85; // rax
  char v86; // [rsp+70h] [rbp-E8h]
  unsigned __int8 v87; // [rsp+71h] [rbp-E7h]
  unsigned __int8 v88; // [rsp+72h] [rbp-E6h]
  unsigned __int8 v89; // [rsp+73h] [rbp-E5h]
  int v90; // [rsp+74h] [rbp-E4h]
  unsigned int v91; // [rsp+78h] [rbp-E0h]
  unsigned int v92; // [rsp+7Ch] [rbp-DCh]
  _QWORD *v93; // [rsp+A0h] [rbp-B8h]
  __int64 v96; // [rsp+C0h] [rbp-98h] BYREF
  int v97; // [rsp+C8h] [rbp-90h]
  _QWORD v98[6]; // [rsp+D0h] [rbp-88h] BYREF

  v19 = 0;
  v20 = a12;
  v22 = (__int64)a16;
  if ( !a4 )
    a4 = a3;
  v93 = a6;
  v24 = a5;
  v25 = a5;
  v90 = 0;
  v89 = 0;
  v87 = 0;
  v88 = 0;
  v91 = a5;
  v92 = 1;
  if ( (a5 & 0x1000000) != 0 )
  {
    v96 = (__int64)SeSecurityPrivilege;
    v97 = 0;
    if ( !(unsigned __int8)SepPrivilegeCheck(a4, (unsigned int)&v96, 1, 1, a10) )
    {
      v26 = 0;
      v40 = -1073741727;
      v41 = v56;
LABEL_33:
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
                v19 += 4;
              while ( v19 < v79 );
              for ( i = (4 * (unsigned __int64)v79) >> 2; i; --i )
                *v77++ = v40;
              v81 = a11;
              for ( j = (4 * (unsigned __int64)v79) >> 2; j; --j )
                *v81++ = v26;
              v77 = a13;
            }
          }
          if ( v19 < a7 )
          {
            v83 = (char *)v77 - (char *)a11;
            v84 = &a11[v19];
            v85 = a7 - v19;
            do
            {
              *(unsigned int *)((char *)v84 + v83) = v40;
              *v84++ = v26;
              --v85;
            }
            while ( v85 );
          }
        }
        goto LABEL_35;
      }
LABEL_34:
      *a13 = v40;
      *a11 = v26;
LABEL_35:
      if ( v40 < 0 )
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
      return v41;
    }
    v24 = a5;
    v31 = 1;
    v90 = 1;
    v25 = a5 & 0xFEFFFFFF;
    v89 = 1;
    v26 = a9 | 0x1000000;
    v91 = a5 & 0xFEFFFFFF;
    if ( (a5 & 0xFEFFFFFF) == 0 )
      goto LABEL_47;
    v22 = (__int64)a16;
  }
  else
  {
    v26 = a9;
  }
  v27 = *(_WORD *)(a1 + 2);
  if ( (v27 & 4) != 0 )
  {
    if ( v27 >= 0 )
    {
      v29 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v28 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v28 )
        v29 = a1 + v28;
      else
        v29 = 0LL;
    }
  }
  else
  {
    v29 = 0LL;
  }
  if ( (v27 & 0x10) != 0 )
  {
    if ( v27 < 0 )
    {
      v43 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v43 )
        v30 = a1 + v43;
      else
        v30 = 0LL;
    }
    else
    {
      v30 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v30 = 0LL;
  }
  if ( (*(_WORD *)(a1 + 2) & 4) == 0 || !v29 )
  {
    v26 |= v24;
    if ( (v24 & 0x2000000) != 0 )
      v26 = a8[3] | v26 & 0xFDFFFFFF;
    if ( (*(_DWORD *)(a4 + 200) & 0x4000) != 0 )
    {
      v26 = 0;
      *(_DWORD *)(v22 + 4) = 0;
      *(_BYTE *)(v22 + 21) = 0;
      goto LABEL_61;
    }
    v31 = v90;
LABEL_46:
    v20 = a12;
LABEL_47:
    v39 = 0;
    goto LABEL_29;
  }
  if ( (v25 & 0x80000) == 0 )
  {
    v31 = v90;
LABEL_17:
    v32 = 1;
    goto LABEL_18;
  }
  v96 = SeTakeOwnershipPrivilege;
  v97 = 0;
  if ( (unsigned __int8)SepPrivilegeCheck(a4, (unsigned int)&v96, 1, 1, a10) )
  {
    v26 |= 0x80000u;
    v25 = v91 & 0xFFF7FFFF;
    v31 = v90 + 1;
    v91 = v25;
    ++v90;
    v39 = 1;
    v87 = 1;
    if ( !v25 )
    {
      v20 = a12;
      goto LABEL_29;
    }
    goto LABEL_17;
  }
  v96 = (__int64)SeRelabelPrivilege;
  v97 = 0;
  v52 = SepPrivilegeCheck(a4, (unsigned int)&v96, 1, 1, a10);
  v25 = v91;
  v31 = v90;
  if ( v52 )
  {
    v25 = v91 & 0xFFF7FFFF;
    v88 = v32;
    v31 = v90 + 1;
    v91 = v25;
    v26 |= 0x80000u;
    ++v90;
    if ( !v25 )
      goto LABEL_46;
  }
LABEL_18:
  if ( !*(_WORD *)(v29 + 4) )
  {
    v57 = a16;
    a16[3] = v25;
    v58 = *(_DWORD *)(a4 + 200);
    if ( (v58 & 0x4000) != 0 )
    {
      v26 &= ~*a16;
      v57 = a16;
    }
    if ( v25 == 0x2000000 )
    {
      if ( v26 )
      {
LABEL_103:
        v20 = a12;
        v39 = v87;
        goto LABEL_29;
      }
    }
    else if ( !v25 && *v57 && v26 && (v58 & 0x6000) == 0 )
    {
      goto LABEL_103;
    }
    v26 = 0;
    goto LABEL_61;
  }
  if ( a7 )
  {
    v33 = a6;
    v32 = a7;
    v92 = a7;
  }
  else
  {
    v33 = v98;
    v98[2] = 0xFFFFFFFF00000000uLL;
    v93 = v98;
    v98[0] = 0LL;
    v98[1] = 0LL;
    memset(&v98[3], 0, 24);
  }
  if ( (a5 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(v25, a4, a3, v29, v30, a17, a2, v32, (__int64)v33, a7, 0, a15, (__int64)a16);
    v34 = v93;
    v35 = (__int64)a16;
    a16[3] = *((_DWORD *)v93 + 6);
    if ( *((_DWORD *)v93 + 6) )
      goto LABEL_66;
    v36 = *(_DWORD *)(a4 + 200);
    if ( (v36 & 0x10) != 0 )
    {
      if ( (v36 & 8) != 0 )
        v53 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
      else
        v53 = a8[3] | 0x1FFFFF;
      v37 = a5;
      if ( (v53 & a5) == 0 )
      {
LABEL_26:
        *(_DWORD *)(v35 + 12) = *((_DWORD *)v34 + 6);
        if ( *((_DWORD *)v34 + 6) )
          goto LABEL_66;
        v38 = *(_DWORD *)(a4 + 200);
        if ( (v38 & 0x2000) != 0 )
        {
LABEL_28:
          v31 = v90;
          v26 |= v37;
          v39 = v87;
          v20 = a12;
          goto LABEL_29;
        }
        v48 = v37 | v91;
        if ( (v38 & 0x4000) != 0 )
        {
          v49 = ~(*(_DWORD *)(v35 + 4) | *(_DWORD *)(v35 + 8));
          v50 = v48 | *(_DWORD *)v35;
        }
        else
        {
          if ( !*(_BYTE *)(v35 + 20) )
          {
            v51 = 0;
LABEL_65:
            *((_DWORD *)v34 + 6) = v51;
            if ( !v51 )
              goto LABEL_28;
LABEL_66:
            v40 = -1073741790;
            v26 = 0;
            v41 = 1;
            goto LABEL_34;
          }
          v49 = v48 | *(_DWORD *)v35;
          v50 = ~*(_DWORD *)(v35 + 4);
        }
        v51 = v50 & v49;
        goto LABEL_65;
      }
      SepNormalAccessCheck(v53 & v91, a4, a3, v29, v30, a17, a2, v92, (__int64)v93, a7, 1, a15, (__int64)a16);
      v34 = v93;
      v35 = (__int64)a16;
    }
    v37 = a5;
    goto LABEL_26;
  }
  SepMaximumAccessCheck(a4, a3, v29, v30, a17, (unsigned __int8 *)a2, v32, (__int64)v33, a7, 0, 0, a15, a16);
  v44 = *(_DWORD *)(a4 + 200);
  if ( (v44 & 0x10) != 0 )
  {
    if ( (v44 & 8) != 0 )
      v55 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
    else
      v55 = a8[3] | 0x1FFFFF;
    SepMaximumAccessCheck(a4, a3, v29, v30, a17, (unsigned __int8 *)a2, v92, (__int64)v93, a7, v55, 1, a15, a16);
  }
  v45 = *(_DWORD *)(a4 + 200);
  v46 = (_DWORD *)v93 + 7;
  v47 = *((_DWORD *)v93 + 7);
  if ( (v45 & 0x2000) == 0 )
  {
    if ( (v45 & 0x4000) != 0 )
    {
      v54 = *a16;
      v47 &= a16[1] | a16[2];
    }
    else
    {
      if ( !*((_BYTE *)a16 + 20) )
        goto LABEL_56;
      v47 &= a16[1];
      v54 = *a16;
    }
    v26 &= ~v54;
  }
LABEL_56:
  if ( !a14 )
  {
    if ( (~(v47 | 0x2000000) & v91) != 0 )
      goto LABEL_66;
    v20 = a12;
    v26 |= v47;
    v31 = v90;
    v39 = v87;
LABEL_29:
    if ( v26 )
    {
      v40 = 0;
      if ( KeGetCurrentIrql() < 2u )
      {
        if ( v31 )
        {
          SepAssemblePrivileges(v90, v89, v39, v88, (__int64)v20);
          if ( v20 )
          {
            if ( !*v20 )
            {
              v41 = 0;
              v40 = -1073741801;
              v26 = 0;
              goto LABEL_33;
            }
          }
        }
      }
LABEL_32:
      v41 = 1;
      goto LABEL_33;
    }
LABEL_61:
    v40 = -1073741790;
    goto LABEL_32;
  }
  v59 = 0;
  v86 = 0;
  if ( (a5 & 0x2000000) != 0 )
  {
    v60 = -33554433;
    v61 = (v26 | a5) & 0xFDFFFFFF;
  }
  else
  {
    v60 = v26 | a5;
    v61 = v26 | a5;
  }
  v62 = v92;
  v63 = a13;
  do
  {
    v64 = (v60 & (v26 | *v46)) == 0;
    v65 = v60 & (v26 | *v46);
    *(int *)((char *)v63 + (char *)a11 - (char *)a13) = v65;
    if ( v64 )
    {
      v66 = 1;
      *v63 = -1073741790;
      v86 = 1;
    }
    else if ( (~v65 & v61) != 0 )
    {
      v66 = 1;
      *v63 = -1073741790;
      v86 = 1;
    }
    else
    {
      v66 = v86;
      v59 = 1;
      *v63 = 0;
    }
    v46 += 12;
    ++v63;
    --v62;
  }
  while ( v62 );
  if ( KeGetCurrentIrql() < 2u && v59 && v90 )
  {
    SepAssemblePrivileges(v90, v89, v87, v88, (__int64)a12);
    if ( !a12 || *a12 )
    {
      v41 = 1;
    }
    else
    {
      v67 = v92;
      v41 = 0;
      v59 = 0;
      v66 = 1;
      v86 = 1;
      v68 = 0;
      v69 = (char *)a11;
      v70 = (char *)a13;
      if ( v92 >= 4 )
      {
        v71 = v92 - 1;
        if ( a11 > (unsigned int *)&a13[v71] || &a11[v71] < (unsigned int *)a13 )
        {
          v72 = v92 & 0xFFFFFFFC;
          do
            v68 += 4;
          while ( v68 < v72 );
          for ( k = (4 * (unsigned __int64)v72) >> 2; k; --k )
          {
            *(_DWORD *)v70 = -1073741801;
            v70 += 4;
          }
          memset(a11, 0, 4LL * v72);
          v70 = (char *)a13;
          v69 = (char *)a11;
          v67 = v92;
        }
        v66 = 1;
      }
      if ( v68 >= v67 )
        goto LABEL_143;
      v74 = v70 - v69;
      v75 = &v69[4 * v68];
      v76 = v67 - v68;
      do
      {
        *(_DWORD *)&v75[v74] = -1073741801;
        *(_DWORD *)v75 = 0;
        v75 += 4;
        --v76;
      }
      while ( v76 );
    }
    v66 = v86;
  }
  else
  {
    v41 = 1;
  }
LABEL_143:
  if ( a18 )
    *a18 = v59;
  if ( a19 )
    *a19 = v66;
  return v41;
}
