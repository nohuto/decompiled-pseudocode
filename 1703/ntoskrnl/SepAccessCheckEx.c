/*
 * XREFs of SepAccessCheckEx @ 0x140132DE0
 * Callers:
 *     SepCommonAccessCheckEx @ 0x1401326AC (SepCommonAccessCheckEx.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1400EDD50 (SepPrivilegeCheck.c)
 *     AuthzBasepSetTypeListAccessReasons @ 0x14013315C (AuthzBasepSetTypeListAccessReasons.c)
 *     SepMaximumAccessCheckEx @ 0x1401331B0 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1401332E0 (SepNormalAccessCheckEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SepAssemblePrivileges @ 0x140443F78 (SepAssemblePrivileges.c)
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
  __int64 v21; // r15
  unsigned int v23; // r14d
  unsigned int v24; // r12d
  _QWORD *v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // edi
  int v28; // r8d
  int v29; // edx
  int v30; // r9d
  __int64 v31; // rax
  LUID v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  int v36; // ebx
  char v37; // cl
  int v39; // eax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  char v43; // al
  int v44; // r9d
  int v45; // ecx
  int v46; // r8d
  int v47; // edx
  unsigned int v48; // r8d
  int v49; // ecx
  int v50; // r10d
  int v51; // r14d
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  int v55; // edx
  unsigned int v56; // [rsp+20h] [rbp-E0h]
  int v57; // [rsp+28h] [rbp-D8h]
  int v58; // [rsp+28h] [rbp-D8h]
  char v59; // [rsp+28h] [rbp-D8h]
  char v60; // [rsp+71h] [rbp-8Fh]
  char v61; // [rsp+72h] [rbp-8Eh]
  char v62; // [rsp+73h] [rbp-8Dh]
  int v63; // [rsp+74h] [rbp-8Ch]
  __int64 v65; // [rsp+78h] [rbp-88h]
  int v66; // [rsp+88h] [rbp-78h]
  LUID v67; // [rsp+B8h] [rbp-48h] BYREF
  int v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h] BYREF
  int v70; // [rsp+D0h] [rbp-30h]
  _DWORD v71[12]; // [rsp+D8h] [rbp-28h] BYREF

  v21 = a4;
  if ( !a4 )
    v21 = a3;
  v23 = a5;
  v66 = a3;
  v63 = 0;
  v60 = 0;
  v62 = 0;
  v61 = 0;
  if ( a7 )
  {
    v24 = a7;
  }
  else
  {
    a6 = v71;
    v24 = 1;
    memset(v71, 0, sizeof(v71));
    v71[5] = -1;
  }
  v25 = a6 + 10;
  v26 = v24;
  do
  {
    *v25 = a14;
    a14 += 128LL;
    v25 += 6;
    --v26;
  }
  while ( v26 );
  if ( (a5 & 0x1000000) == 0 )
  {
    v27 = a9;
    goto LABEL_9;
  }
  v67 = SeSecurityPrivilege;
  v68 = 0;
  v43 = SepPrivilegeCheck(v21, (__int64)&v67, 1u, 1, a10);
  v44 = (int)a6;
  v45 = 0x1000000;
  v56 = v24;
  v46 = 8;
  if ( !v43 )
  {
    v27 = 0;
    v36 = -1073741727;
    v47 = 0x100000;
    goto LABEL_52;
  }
  v27 = a9 | 0x1000000;
  AuthzBasepSetTypeListAccessReasons(0x1000000, 0x200000, 8, (_DWORD)a6, v24, 0);
  v35 = 1;
  v63 = 1;
  LOBYTE(v29) = 1;
  v60 = 1;
  v23 = a5 & 0xFEFFFFFF;
  if ( (a5 & 0xFEFFFFFF) != 0 )
  {
LABEL_9:
    v28 = a1;
    v29 = *(unsigned __int16 *)(a1 + 2);
    v30 = (unsigned __int16)v29;
    LOWORD(v30) = *(_WORD *)(a1 + 2) & 4;
    if ( (v29 & 4) != 0 )
    {
      if ( (v29 & 0x8000u) == 0 )
      {
        v32 = *(LUID *)(a1 + 32);
        goto LABEL_13;
      }
      v31 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v31 )
      {
        v32 = (LUID)(a1 + v31);
        goto LABEL_13;
      }
    }
    v32 = 0LL;
LABEL_13:
    v67 = v32;
    if ( (~(_BYTE)v29 & 0x10) != 0 )
    {
LABEL_14:
      v65 = 0LL;
LABEL_15:
      if ( !(_WORD)v30 || !*(_QWORD *)&v32 )
      {
        v27 |= a5;
        if ( (a5 & 0x2000000) != 0 )
        {
          v27 = a8[3] | v27 & 0xFDFFFFFF;
          AuthzBasepSetTypeListAccessReasons(v27, 5242880, 0, (_DWORD)a6, v24, 0);
          if ( (*(_DWORD *)(v21 + 200) & 0x4000) == 0 )
            goto LABEL_24;
          v59 = 1;
        }
        else
        {
          AuthzBasepSetTypeListAccessReasons(a5, 5242880, 0, (_DWORD)a6, v24, 0);
          if ( (*(_DWORD *)(v21 + 200) & 0x4000) == 0 )
            goto LABEL_24;
          v59 = 0;
        }
        v27 = 0;
        AuthzBasepSetTypeListAccessReasons(0, 5242880, v28, (_DWORD)a6, v24, v59);
        *(_BYTE *)(a18 + 17) = 0;
        *(_DWORD *)(a18 + 4) = 0;
        goto LABEL_99;
      }
      if ( (v23 & 0x80000) == 0 )
        goto LABEL_18;
      v69 = SeTakeOwnershipPrivilege;
      v70 = 0;
      if ( SepPrivilegeCheck(v21, (__int64)&v69, 1u, 1, a10) )
      {
        v27 |= 0x80000u;
        AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 9, (_DWORD)a6, v24, 0);
        v62 = 1;
      }
      else
      {
        v69 = (__int64)SeRelabelPrivilege;
        v70 = 0;
        if ( !SepPrivilegeCheck(v21, (__int64)&v69, v48, v48, a10) )
        {
LABEL_62:
          v32 = v67;
LABEL_18:
          if ( *(_WORD *)(*(_QWORD *)&v32 + 4LL) )
          {
            if ( (a5 & 0x2000000) != 0 )
            {
              SepMaximumAccessCheckEx(v21, v66, v32.LowPart, v65, a19, v57, v24, (__int64)a6, a7, 0, 0, a16, a17, a18);
              AuthzBasepSetTypeListAccessReasons(-1, 0x800000, 0, (_DWORD)a6, v24, 0);
              v33 = *(_DWORD *)(v21 + 200);
              if ( (v33 & 0x10) != 0 )
              {
                if ( (v33 & 8) != 0 )
                  v55 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
                else
                  v55 = a8[3] | 0x1FFFFF;
                SepMaximumAccessCheckEx(
                  v21,
                  v66,
                  v67.LowPart,
                  v65,
                  a19,
                  v58,
                  v24,
                  (__int64)a6,
                  a7,
                  v55,
                  1,
                  a16,
                  a17,
                  a18);
              }
              v34 = *(_DWORD *)(v21 + 200);
              v29 = a6[7];
              if ( (v34 & 0x2000) == 0 )
              {
                if ( (v34 & 0x4000) != 0 )
                {
                  v29 &= *(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8);
                  v27 &= ~*(_DWORD *)a18;
                }
                else if ( *(_BYTE *)(a18 + 16) )
                {
                  v29 &= *(_DWORD *)(a18 + 4);
                  v27 &= ~*(_DWORD *)a18;
                }
              }
              if ( (~(v29 | 0x2000000) & v23) == 0 )
              {
                v27 |= v29;
LABEL_24:
                v35 = v63;
LABEL_25:
                LOBYTE(v29) = v60;
                goto LABEL_26;
              }
              goto LABEL_40;
            }
            SepNormalAccessCheckEx(v23, v21, v66, v32.LowPart, v65, a19);
            *(_DWORD *)(a18 + 12) = a6[6];
            if ( a6[6] )
              goto LABEL_40;
            v39 = *(_DWORD *)(v21 + 200);
            if ( (v39 & 0x10) != 0 )
            {
              v50 = (v39 & 8) != 0 ? a8[1] & ~(*a8 | a8[2]) | 0x10D0000 : a8[3] | 0x1FFFFF;
              if ( (v50 & a5) != 0 )
                SepNormalAccessCheckEx(v23 & v50, v21, v66, v67.LowPart, v65, a19);
            }
            *(_DWORD *)(a18 + 12) = a6[6];
            if ( a6[6] )
              goto LABEL_40;
            v40 = *(_DWORD *)(v21 + 200);
            if ( (v40 & 0x2000) != 0 )
            {
LABEL_38:
              v27 |= a5;
              goto LABEL_24;
            }
            v51 = a5 | v23;
            if ( (v40 & 0x4000) != 0 )
            {
              v52 = ~(*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8));
              v53 = v51 | *(_DWORD *)a18;
            }
            else
            {
              if ( !*(_BYTE *)(a18 + 16) )
              {
                v54 = 0;
                goto LABEL_84;
              }
              v52 = v51 | *(_DWORD *)a18;
              v53 = ~*(_DWORD *)(a18 + 4);
            }
            v54 = v53 & v52;
LABEL_84:
            a6[6] = v54;
            if ( !v54 )
              goto LABEL_38;
LABEL_40:
            v36 = -1073741790;
            v27 = 0;
LABEL_29:
            v37 = 1;
            goto LABEL_30;
          }
          *(_DWORD *)(a18 + 12) = v23;
          v49 = *(_DWORD *)(v21 + 200);
          if ( (v49 & 0x4000) != 0 )
            v27 &= ~*(_DWORD *)a18;
          if ( v23 == 0x2000000 )
          {
            if ( v27 )
              goto LABEL_24;
          }
          else if ( !v23 && *(_DWORD *)a18 && v27 && (v49 & 0x6000) == 0 )
          {
            goto LABEL_24;
          }
          v27 = 0;
          v56 = v24;
          v36 = -1073741790;
          v44 = (int)a6;
          v46 = 0;
          v47 = 6291456;
          v45 = -33554433;
LABEL_52:
          AuthzBasepSetTypeListAccessReasons(v45, v47, v46, v44, v56, 0);
          goto LABEL_29;
        }
        v27 |= 0x80000u;
        AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 32, (_DWORD)a6, v24, 0);
        v61 = 1;
      }
      v35 = ++v63;
      v23 &= ~0x80000u;
      if ( !v23 )
        goto LABEL_25;
      goto LABEL_62;
    }
    if ( (v29 & 0x8000u) == 0 )
    {
      v42 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v41 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v41 )
        goto LABEL_14;
      v42 = a1 + v41;
    }
    v65 = v42;
    goto LABEL_15;
  }
LABEL_26:
  v36 = 0;
  if ( !v27 )
  {
LABEL_99:
    v36 = -1073741790;
    goto LABEL_29;
  }
  if ( KeGetCurrentIrql() >= 2u )
    goto LABEL_29;
  if ( !v35 )
    goto LABEL_29;
  LOBYTE(v30) = v61;
  LOBYTE(v28) = v62;
  SepAssemblePrivileges(v35, v29, v28, v30, (__int64)a12);
  if ( !a12 || *a12 )
    goto LABEL_29;
  v37 = 0;
  v36 = -1073741801;
  v27 = 0;
LABEL_30:
  *a13 = v36;
  *a11 = v27;
  if ( v36 < 0 )
  {
    if ( a20 )
      *a20 = 0;
  }
  else if ( a20 )
  {
    *a20 = 1;
  }
  return v37;
}
