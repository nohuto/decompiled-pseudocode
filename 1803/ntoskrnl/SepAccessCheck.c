/*
 * XREFs of SepAccessCheck @ 0x140101F00
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14005CED0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x140100CF0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1404D7FE0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     SepMaximumAccessCheck @ 0x14005EAA0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14005F060 (SepNormalAccessCheck.c)
 *     SepPrivilegeCheck @ 0x140105560 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SepAssemblePrivileges @ 0x14056D420 (SepAssemblePrivileges.c)
 */

__int64 __fastcall SepAccessCheck(
        __int64 a1,
        unsigned __int8 *a2,
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
        char *a19,
        char a20)
{
  unsigned int v20; // ebp
  _QWORD *v21; // r15
  __int64 v23; // r9
  unsigned __int8 v25; // r13
  unsigned int v26; // r8d
  unsigned int v27; // r11d
  unsigned int v28; // esi
  __int16 v29; // cx
  __int64 v30; // rdx
  __int64 v31; // r15
  __int64 v32; // rbx
  unsigned int v33; // r8d
  int v34; // edx
  __int64 v35; // rdi
  _QWORD *v36; // rcx
  int v37; // edi
  _QWORD *v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  int v41; // eax
  int v42; // ecx
  unsigned int v43; // ecx
  int v44; // eax
  unsigned __int8 v45; // cl
  unsigned __int8 v46; // r10
  int v47; // ebx
  unsigned __int8 v48; // r8
  __int64 v50; // rcx
  int v51; // eax
  _DWORD *v52; // r8
  int v53; // edx
  int v54; // edi
  int v55; // edx
  int v56; // eax
  int v57; // edx
  int v58; // r10d
  char v59; // al
  int v60; // eax
  int v61; // edx
  _DWORD *v62; // rax
  int v63; // ecx
  char v64; // dl
  char v65; // r9
  int v66; // r10d
  unsigned int v67; // r10d
  int *v68; // rcx
  __int64 v69; // rdi
  bool v70; // zf
  int v71; // eax
  char *v72; // rdi
  unsigned int v73; // r10d
  unsigned int v74; // esi
  __int64 v75; // rax
  unsigned int v76; // eax
  int *v77; // rdi
  unsigned __int64 k; // rcx
  char *v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  unsigned int v82; // eax
  int *v83; // rdi
  unsigned __int64 i; // rcx
  unsigned int *v85; // rdi
  unsigned __int64 j; // rcx
  unsigned int *v87; // rcx
  __int64 v88; // rax
  unsigned __int8 v89; // [rsp+70h] [rbp-F8h]
  char v90; // [rsp+71h] [rbp-F7h]
  unsigned __int8 v91; // [rsp+72h] [rbp-F6h]
  char v92; // [rsp+73h] [rbp-F5h]
  unsigned __int8 v93; // [rsp+74h] [rbp-F4h]
  int v94; // [rsp+78h] [rbp-F0h]
  unsigned int v95; // [rsp+7Ch] [rbp-ECh]
  int v96; // [rsp+7Ch] [rbp-ECh]
  unsigned int v97; // [rsp+80h] [rbp-E8h]
  __int64 v98; // [rsp+88h] [rbp-E0h]
  _QWORD *v99; // [rsp+A8h] [rbp-C0h]
  int v101; // [rsp+C8h] [rbp-A0h]
  __int64 v102; // [rsp+D0h] [rbp-98h] BYREF
  int v103; // [rsp+D8h] [rbp-90h]
  _QWORD v104[6]; // [rsp+E0h] [rbp-88h] BYREF

  v20 = 0;
  v21 = a12;
  v23 = (__int64)a16;
  if ( !a4 )
    a4 = a3;
  v25 = 1;
  v99 = a6;
  v101 = a3;
  v26 = a5;
  v27 = a5;
  v94 = 0;
  v89 = 0;
  v91 = 0;
  v93 = 0;
  v98 = a4;
  v95 = a5;
  v97 = 1;
  if ( (a5 & 0x1000000) != 0 )
  {
    v102 = (__int64)SeSecurityPrivilege;
    v103 = 0;
    if ( !(unsigned __int8)SepPrivilegeCheck(a4, (unsigned int)&v102, 1, 1, a10) )
    {
      v28 = 0;
      v47 = -1073741727;
LABEL_32:
      if ( a14 )
      {
        if ( a7 )
        {
          if ( a7 >= 4 )
          {
            v81 = a7 - 1;
            if ( a11 > (unsigned int *)&a13[v81] || &a11[v81] < (unsigned int *)a13 )
            {
              v82 = a7 & 0xFFFFFFFC;
              do
                v20 += 4;
              while ( v20 < v82 );
              v83 = a13;
              for ( i = (4 * (unsigned __int64)v82) >> 2; i; --i )
                *v83++ = v47;
              v85 = a11;
              for ( j = (4 * (unsigned __int64)v82) >> 2; j; --j )
                *v85++ = v28;
            }
          }
          if ( v20 < a7 )
          {
            v87 = &a11[v20];
            v88 = a7 - v20;
            do
            {
              *(unsigned int *)((char *)v87 + (char *)a13 - (char *)a11) = v47;
              *v87++ = v28;
              --v88;
            }
            while ( v88 );
          }
        }
        goto LABEL_34;
      }
LABEL_33:
      *a13 = v47;
      *a11 = v28;
LABEL_34:
      if ( v47 < 0 )
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
      return v48;
    }
    v26 = a5;
    v34 = 1;
    v27 = a5 & 0xFEFFFFFF;
    v94 = 1;
    v28 = a9 | 0x1000000;
    v95 = a5 & 0xFEFFFFFF;
    v89 = 1;
    v46 = 1;
    if ( (a5 & 0xFEFFFFFF) == 0 )
      goto LABEL_46;
    a4 = v98;
    v23 = (__int64)a16;
  }
  else
  {
    v28 = a9;
  }
  v29 = *(_WORD *)(a1 + 2);
  if ( (v29 & 4) != 0 )
  {
    if ( v29 >= 0 )
    {
      v31 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v30 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v30 )
        v31 = a1 + v30;
      else
        v31 = 0LL;
    }
  }
  else
  {
    v31 = 0LL;
  }
  if ( (v29 & 0x10) != 0 )
  {
    if ( v29 < 0 )
    {
      v50 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v50 )
        v32 = a1 + v50;
      else
        v32 = 0LL;
    }
    else
    {
      v32 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v32 = 0LL;
  }
  if ( (*(_WORD *)(a1 + 2) & 4) == 0 || !v31 )
  {
    v28 |= v26;
    if ( (v26 & 0x2000000) != 0 )
      v28 = a8[3] | v28 & 0xFDFFFFFF;
    if ( (*(_DWORD *)(a4 + 200) & 0x4000) != 0 )
    {
      v28 = 0;
      *(_DWORD *)(v23 + 4) = 0;
      *(_BYTE *)(v23 + 21) = 0;
      goto LABEL_55;
    }
    v34 = v94;
LABEL_45:
    v46 = v89;
    v21 = a12;
LABEL_46:
    v45 = 0;
    goto LABEL_28;
  }
  v33 = 1;
  if ( (v27 & 0x80000) == 0 )
  {
    v34 = v94;
LABEL_16:
    v35 = v98;
    goto LABEL_17;
  }
  v102 = SeTakeOwnershipPrivilege;
  v103 = 0;
  if ( (unsigned __int8)SepPrivilegeCheck(a4, (unsigned int)&v102, 1, 1, a10) )
  {
    v28 |= 0x80000u;
    v27 = v95 & 0xFFF7FFFF;
    v34 = v94 + 1;
    v95 = v27;
    ++v94;
    v45 = v33;
    v91 = v33;
    if ( !v27 )
    {
      v21 = a12;
      v46 = v89;
      goto LABEL_28;
    }
    goto LABEL_16;
  }
  v35 = v98;
  v102 = SeRelabelPrivilege;
  v103 = 0;
  v59 = SepPrivilegeCheck(v98, (unsigned int)&v102, v33, v33, a10);
  v27 = v95;
  v34 = v94;
  if ( v59 )
  {
    v27 = v95 & 0xFFF7FFFF;
    v93 = v33;
    v34 = v94 + 1;
    v95 = v27;
    v28 |= 0x80000u;
    ++v94;
    if ( !v27 )
      goto LABEL_45;
  }
LABEL_17:
  if ( !*(_WORD *)(v31 + 4) )
  {
    v62 = a16;
    a16[3] = v27;
    v63 = *(_DWORD *)(v35 + 200);
    if ( (v63 & 0x4000) != 0 )
    {
      v28 &= ~*a16;
      v62 = a16;
    }
    if ( v27 == 0x2000000 )
    {
      if ( v28 )
      {
LABEL_104:
        v21 = a12;
        v45 = v91;
        v46 = v89;
        goto LABEL_28;
      }
    }
    else if ( !v27 && *v62 && v28 && (v63 & 0x6000) == 0 )
    {
      goto LABEL_104;
    }
    v28 = 0;
    goto LABEL_55;
  }
  if ( a7 )
  {
    v36 = a6;
    v33 = a7;
    v97 = a7;
  }
  else
  {
    v36 = v104;
    v104[2] = 0xFFFFFFFF00000000uLL;
    v99 = v104;
    v104[0] = 0LL;
    v104[1] = 0LL;
    memset(&v104[3], 0, 24);
  }
  v37 = a5 & 0x2000000;
  if ( (a5 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(v27, v98, v101, v31, v32, a17, a2, v33, (__int64)v36, a7, 0, a15, a16, a20);
    v38 = v99;
    v39 = (__int64)a16;
    a16[3] = *((_DWORD *)v99 + 6);
    if ( *((_DWORD *)v99 + 6) )
      goto LABEL_65;
    v40 = v98;
    v41 = 0;
    v42 = *(_DWORD *)(v98 + 200);
    if ( (v42 & 0x10) != 0 )
    {
      if ( (v42 & 8) != 0 )
        v58 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
      else
        v58 = a8[3] | 0x1FFFFF;
      v43 = a5;
      v41 = 0;
      if ( (v58 & a5) == 0 )
      {
LABEL_25:
        *(_DWORD *)(v39 + 12) = v41;
        if ( *((_DWORD *)v38 + 6) )
          goto LABEL_65;
        v44 = *(_DWORD *)(v40 + 200);
        if ( (v44 & 0x2000) != 0 )
        {
LABEL_27:
          v34 = v94;
          v28 |= v43;
          v45 = v91;
          v21 = a12;
          v46 = v89;
          goto LABEL_28;
        }
        v54 = v43 | v95;
        if ( (v44 & 0x4000) != 0 )
        {
          v55 = ~(*(_DWORD *)(v39 + 4) | *(_DWORD *)(v39 + 8));
          v56 = v54 | *(_DWORD *)v39;
        }
        else
        {
          if ( !*(_BYTE *)(v39 + 20) )
          {
            v57 = 0;
LABEL_64:
            *((_DWORD *)v38 + 6) = v57;
            if ( !v57 )
              goto LABEL_27;
LABEL_65:
            v47 = -1073741790;
            v28 = 0;
            v48 = 1;
            goto LABEL_33;
          }
          v55 = v54 | *(_DWORD *)v39;
          v56 = ~*(_DWORD *)(v39 + 4);
        }
        v57 = v56 & v55;
        goto LABEL_64;
      }
      SepNormalAccessCheck(v95 & v58, v98, v101, v31, v32, a17, a2, v97, (__int64)v99, a7, 1, a15, a16, a20);
      v38 = v99;
      v40 = v98;
      v39 = (__int64)a16;
      v41 = *((_DWORD *)v99 + 6);
    }
    v43 = a5;
    goto LABEL_25;
  }
  SepMaximumAccessCheck(v98, v101, v31, v32, a17, (__int64)a2, v33, (__int64)v36, a7, 0, 0, a15, a16, a20);
  v51 = *(_DWORD *)(v98 + 200);
  if ( (v51 & 0x10) != 0 )
  {
    if ( (v51 & 8) != 0 )
      v61 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
    else
      v61 = a8[3] | 0x1FFFFF;
    SepMaximumAccessCheck(v98, v101, v31, v32, a17, (__int64)a2, v97, (__int64)v99, a7, v61, 1, a15, a16, a20);
    v51 = *(_DWORD *)(v98 + 200);
  }
  v52 = (_DWORD *)v99 + 7;
  v53 = *((_DWORD *)v99 + 7);
  if ( (v51 & 0x2000) == 0 )
  {
    if ( (v51 & 0x4000) != 0 )
    {
      v60 = *a16;
      v53 &= a16[1] | a16[2];
    }
    else
    {
      if ( !*((_BYTE *)a16 + 20) )
        goto LABEL_58;
      v53 &= a16[1];
      v60 = *a16;
    }
    v28 &= ~v60;
  }
LABEL_58:
  if ( !a14 )
  {
    if ( (~(v53 | 0x2000000) & v95) != 0 )
      goto LABEL_65;
    v21 = a12;
    v28 |= v53;
    v34 = v94;
    v45 = v91;
    v46 = v89;
LABEL_28:
    if ( v28 )
    {
      v47 = 0;
      if ( KeGetCurrentIrql() < 2u )
      {
        if ( v34 )
        {
          SepAssemblePrivileges(v94, v46, v45, v93, (__int64)v21);
          if ( v21 )
          {
            if ( !*v21 )
            {
              v48 = 0;
              v47 = -1073741801;
              v28 = 0;
              goto LABEL_32;
            }
          }
        }
      }
LABEL_31:
      v48 = 1;
      goto LABEL_32;
    }
LABEL_55:
    v47 = -1073741790;
    goto LABEL_31;
  }
  v64 = 0;
  v65 = 0;
  v66 = v28 | a5;
  if ( v37 )
    v66 = -33554433;
  v96 = v66;
  v67 = (v28 | a5) & 0xFDFFFFFF;
  if ( !v37 )
    v67 = v28 | a5;
  v68 = a13;
  v69 = v97;
  do
  {
    v70 = (v96 & (v28 | *v52)) == 0;
    v71 = v96 & (v28 | *v52);
    *(int *)((char *)v68 + (char *)a11 - (char *)a13) = v71;
    if ( v70 )
    {
      *v68 = -1073741790;
      v65 = 1;
    }
    else if ( (~v71 & v67) != 0 )
    {
      *v68 = -1073741790;
      v65 = 1;
    }
    else
    {
      *v68 = 0;
      v64 = 1;
    }
    v52 += 12;
    ++v68;
    --v69;
  }
  while ( v69 );
  v90 = v65;
  v92 = v64;
  v72 = (char *)a11;
  if ( KeGetCurrentIrql() < 2u && v64 && v94 )
  {
    SepAssemblePrivileges(v94, v89, v91, v93, (__int64)a12);
    if ( !a12 || *a12 )
    {
      v65 = v90;
      v64 = v92;
    }
    else
    {
      v73 = v97;
      v25 = 0;
      v64 = 0;
      v65 = 1;
      v74 = 0;
      if ( v97 >= 4 )
      {
        v75 = v97 - 1;
        if ( a11 > (unsigned int *)&a13[v75] || &a11[v75] < (unsigned int *)a13 )
        {
          v76 = v97 & 0xFFFFFFFC;
          do
            v74 += 4;
          while ( v74 < v76 );
          v77 = a13;
          for ( k = (4 * (unsigned __int64)v76) >> 2; k; --k )
            *v77++ = -1073741801;
          v72 = (char *)a11;
          memset(a11, 0, 4LL * v76);
          v65 = 1;
          v64 = 0;
          v73 = v97;
        }
      }
      if ( v74 < v73 )
      {
        v79 = &v72[4 * v74];
        v80 = v73 - v74;
        do
        {
          *(_DWORD *)&v79[(char *)a13 - v72] = -1073741801;
          *(_DWORD *)v79 = 0;
          v79 += 4;
          --v80;
        }
        while ( v80 );
      }
    }
  }
  if ( a18 )
    *a18 = v64;
  if ( a19 )
    *a19 = v65;
  return v25;
}
