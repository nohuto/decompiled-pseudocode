/*
 * XREFs of SepAccessCheckEx @ 0x14014272C
 * Callers:
 *     SepCommonAccessCheckEx @ 0x14014204C (SepCommonAccessCheckEx.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140087BC0 (SepPrivilegeCheck.c)
 *     AuthzBasepSetTypeListAccessReasons @ 0x140142A7C (AuthzBasepSetTypeListAccessReasons.c)
 *     SepMaximumAccessCheckEx @ 0x140142AD0 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140142BF0 (SepNormalAccessCheckEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SepAssemblePrivileges @ 0x14057F150 (SepAssemblePrivileges.c)
 */

char __fastcall SepAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        unsigned int a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        unsigned int *a11,
        _QWORD *a12,
        int *a13,
        __int64 a14,
        __int64 a15,
        char a16,
        char a17,
        __int64 a18,
        __int64 a19,
        _BYTE *a20)
{
  int v21; // r9d
  unsigned int v24; // r14d
  unsigned int v25; // r12d
  _QWORD *v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // edi
  int v29; // edx
  __int16 v30; // cx
  int v31; // r8d
  __int64 v32; // rax
  LUID v33; // rax
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // ebx
  char v38; // cl
  int v40; // eax
  int v41; // eax
  char v42; // al
  int v43; // r9d
  int v44; // ecx
  int v45; // r8d
  int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned int v49; // r8d
  char v50; // al
  int v51; // ecx
  int v52; // r10d
  int v53; // r14d
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  int v57; // edx
  unsigned int v58; // [rsp+20h] [rbp-E0h]
  int v59; // [rsp+28h] [rbp-D8h]
  int v60; // [rsp+28h] [rbp-D8h]
  char v61; // [rsp+28h] [rbp-D8h]
  char v62; // [rsp+71h] [rbp-8Fh]
  char v63; // [rsp+72h] [rbp-8Eh]
  char v64; // [rsp+73h] [rbp-8Dh]
  int v65; // [rsp+74h] [rbp-8Ch]
  __int64 v67; // [rsp+78h] [rbp-88h]
  int v68; // [rsp+88h] [rbp-78h]
  LUID v69; // [rsp+B8h] [rbp-48h] BYREF
  int v70; // [rsp+C0h] [rbp-40h]
  __int64 v71; // [rsp+C8h] [rbp-38h] BYREF
  int v72; // [rsp+D0h] [rbp-30h]
  _DWORD v73[12]; // [rsp+D8h] [rbp-28h] BYREF

  v21 = 0;
  v24 = a5;
  if ( !a4 )
    a4 = a3;
  v68 = a3;
  v65 = 0;
  v62 = 0;
  v64 = 0;
  v63 = 0;
  if ( a7 )
  {
    v25 = a7;
  }
  else
  {
    a6 = v73;
    v25 = 1;
    memset(v73, 0, sizeof(v73));
    v73[5] = -1;
    v21 = 0;
  }
  v26 = a6 + 10;
  v27 = v25;
  do
  {
    *v26 = a14;
    a14 += 128LL;
    v26 += 6;
    --v27;
  }
  while ( v27 );
  if ( (a5 & 0x1000000) == 0 )
  {
    v28 = a9;
    goto LABEL_9;
  }
  v70 = 0;
  v69 = SeSecurityPrivilege;
  v42 = SepPrivilegeCheck(a4, (__int64)&v69, 1u, 1, a10);
  v43 = (int)a6;
  v44 = 0x1000000;
  v58 = v25;
  v45 = 8;
  if ( !v42 )
  {
    v28 = 0;
    v37 = -1073741727;
    v46 = 0x100000;
    goto LABEL_48;
  }
  v28 = a9 | 0x1000000;
  AuthzBasepSetTypeListAccessReasons(0x1000000, 0x200000, 8, (_DWORD)a6, v25, 0);
  v36 = 1;
  v21 = 0;
  v65 = 1;
  LOBYTE(v29) = 1;
  v62 = 1;
  v24 = a5 & 0xFEFFFFFF;
  if ( (a5 & 0xFEFFFFFF) != 0 )
  {
LABEL_9:
    v29 = a1;
    v30 = *(_WORD *)(a1 + 2);
    v31 = (unsigned __int16)v30;
    LOWORD(v31) = v30 & 4;
    if ( (v30 & 4) != 0 )
    {
      if ( v30 >= 0 )
      {
        v33 = *(LUID *)(a1 + 32);
        goto LABEL_13;
      }
      v32 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v32 )
      {
        v33 = (LUID)(a1 + v32);
        goto LABEL_13;
      }
    }
    v33 = 0LL;
LABEL_13:
    v69 = v33;
    if ( (v30 & 0x10) == 0 )
    {
LABEL_14:
      v67 = 0LL;
LABEL_15:
      if ( (_WORD)v31 && *(_QWORD *)&v33 )
      {
        if ( (v24 & 0x80000) == 0 )
        {
LABEL_18:
          if ( *(_WORD *)(*(_QWORD *)&v33 + 4LL) )
          {
            if ( (a5 & 0x2000000) != 0 )
            {
              SepMaximumAccessCheckEx(a4, v68, v33.LowPart, v67, a19, v59, v25, (__int64)a6, a7, 0, 0, a16, a17, a18);
              AuthzBasepSetTypeListAccessReasons(-1, 0x800000, 0, (_DWORD)a6, v25, 0);
              v34 = *(_DWORD *)(a4 + 200);
              if ( (v34 & 0x10) != 0 )
              {
                if ( (v34 & 8) != 0 )
                  v57 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
                else
                  v57 = a8[3] | 0x1FFFFF;
                SepMaximumAccessCheckEx(
                  a4,
                  v68,
                  v69.LowPart,
                  v67,
                  a19,
                  v60,
                  v25,
                  (__int64)a6,
                  a7,
                  v57,
                  1,
                  a16,
                  a17,
                  a18);
              }
              v35 = *(_DWORD *)(a4 + 200);
              v29 = a6[7];
              if ( (v35 & 0x2000) == 0 )
              {
                if ( (v35 & 0x4000) == 0 )
                {
                  v21 = 0;
                  if ( *(_BYTE *)(a18 + 20) )
                  {
                    v29 &= *(_DWORD *)(a18 + 4);
                    v28 &= ~*(_DWORD *)a18;
                  }
LABEL_23:
                  if ( (~(v29 | 0x2000000) & v24) == 0 )
                  {
                    v28 |= v29;
LABEL_25:
                    v36 = v65;
LABEL_26:
                    LOBYTE(v29) = v62;
                    goto LABEL_27;
                  }
                  goto LABEL_36;
                }
                v29 &= *(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8);
                v28 &= ~*(_DWORD *)a18;
              }
              v21 = 0;
              goto LABEL_23;
            }
            SepNormalAccessCheckEx(v24, a4, v68, v33.LowPart, v67, a19);
            v21 = 0;
            *(_DWORD *)(a18 + 12) = a6[6];
            if ( a6[6] )
              goto LABEL_36;
            v40 = *(_DWORD *)(a4 + 200);
            if ( (v40 & 0x10) != 0 )
            {
              v52 = (v40 & 8) != 0 ? a8[1] & ~(*a8 | a8[2]) | 0x10D0000 : a8[3] | 0x1FFFFF;
              if ( (v52 & a5) != 0 )
              {
                SepNormalAccessCheckEx(v24 & v52, a4, v68, v69.LowPart, v67, a19);
                v21 = 0;
              }
            }
            *(_DWORD *)(a18 + 12) = a6[6];
            if ( a6[6] )
              goto LABEL_36;
            v41 = *(_DWORD *)(a4 + 200);
            if ( (v41 & 0x2000) != 0 )
            {
LABEL_43:
              v28 |= a5;
              goto LABEL_25;
            }
            v53 = a5 | v24;
            if ( (v41 & 0x4000) != 0 )
            {
              v54 = ~(*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8));
              v55 = v53 | *(_DWORD *)a18;
            }
            else
            {
              if ( !*(_BYTE *)(a18 + 20) )
              {
                v56 = 0;
                goto LABEL_84;
              }
              v54 = v53 | *(_DWORD *)a18;
              v55 = ~*(_DWORD *)(a18 + 4);
            }
            v56 = v55 & v54;
LABEL_84:
            a6[6] = v56;
            if ( !v56 )
              goto LABEL_43;
LABEL_36:
            v37 = -1073741790;
            v28 = 0;
LABEL_30:
            v38 = 1;
            goto LABEL_31;
          }
          *(_DWORD *)(a18 + 12) = v24;
          v51 = *(_DWORD *)(a4 + 200);
          if ( (v51 & 0x4000) != 0 )
            v28 &= ~*(_DWORD *)a18;
          if ( v24 == 0x2000000 )
          {
            if ( v28 )
              goto LABEL_25;
          }
          else if ( !v24 && *(_DWORD *)a18 && v28 && (v51 & 0x6000) == 0 )
          {
            goto LABEL_25;
          }
          v28 = 0;
          v58 = v25;
          v43 = (int)a6;
          v37 = -1073741790;
          v45 = 0;
          v46 = 6291456;
          v44 = -33554433;
LABEL_48:
          AuthzBasepSetTypeListAccessReasons(v44, v46, v45, v43, v58, 0);
          goto LABEL_30;
        }
        v72 = 0;
        v71 = SeTakeOwnershipPrivilege;
        if ( SepPrivilegeCheck(a4, (__int64)&v71, 1u, 1, a10) )
        {
          v28 |= 0x80000u;
          AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 9, (_DWORD)a6, v25, 0);
          v64 = 1;
        }
        else
        {
          v71 = (__int64)SeRelabelPrivilege;
          v72 = 0;
          v50 = SepPrivilegeCheck(a4, (__int64)&v71, v49, v49, a10);
          v21 = 0;
          if ( !v50 )
          {
LABEL_62:
            v33 = v69;
            goto LABEL_18;
          }
          v28 |= 0x80000u;
          AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 32, (_DWORD)a6, v25, 0);
          v63 = 1;
        }
        v21 = 0;
        v36 = ++v65;
        v24 &= ~0x80000u;
        if ( !v24 )
          goto LABEL_26;
        goto LABEL_62;
      }
      v28 |= a5;
      if ( (a5 & 0x2000000) != 0 )
      {
        v28 = a8[3] | v28 & 0xFDFFFFFF;
        AuthzBasepSetTypeListAccessReasons(v28, 5242880, 0, (_DWORD)a6, v25, 0);
        if ( (*(_DWORD *)(a4 + 200) & 0x4000) != 0 )
        {
          v61 = 1;
LABEL_98:
          v28 = 0;
          AuthzBasepSetTypeListAccessReasons(0, 5242880, v31, (_DWORD)a6, v25, v61);
          *(_BYTE *)(a18 + 21) = 0;
          *(_DWORD *)(a18 + 4) = 0;
          goto LABEL_99;
        }
      }
      else
      {
        AuthzBasepSetTypeListAccessReasons(a5, 5242880, 0, (_DWORD)a6, v25, 0);
        if ( (*(_DWORD *)(a4 + 200) & 0x4000) != 0 )
        {
          v61 = 0;
          goto LABEL_98;
        }
      }
      v21 = 0;
      goto LABEL_25;
    }
    if ( v30 >= 0 )
    {
      v48 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v47 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v47 )
        goto LABEL_14;
      v48 = a1 + v47;
    }
    v67 = v48;
    goto LABEL_15;
  }
LABEL_27:
  if ( !v28 )
  {
LABEL_99:
    v37 = -1073741790;
    goto LABEL_30;
  }
  v37 = 0;
  if ( KeGetCurrentIrql() >= 2u )
    goto LABEL_30;
  if ( !v36 )
    goto LABEL_30;
  LOBYTE(v21) = v63;
  LOBYTE(v31) = v64;
  SepAssemblePrivileges(v36, v29, v31, v21, (__int64)a12);
  v37 = 0;
  if ( !a12 || *a12 )
    goto LABEL_30;
  v38 = 0;
  v37 = -1073741801;
  v28 = 0;
LABEL_31:
  *a13 = v37;
  *a11 = v28;
  if ( v37 < 0 )
  {
    if ( a20 )
      *a20 = 0;
  }
  else if ( a20 )
  {
    *a20 = 1;
  }
  return v38;
}
