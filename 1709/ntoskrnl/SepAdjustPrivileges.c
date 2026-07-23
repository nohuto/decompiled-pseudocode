/*
 * XREFs of SepAdjustPrivileges @ 0x140539C70
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1405398A0 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     RtlSidDominates @ 0x140087AD0 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x1400E4A04 (SepCopyTokenIntegrity.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SepAdtTokenRightAdjusted @ 0x14053A1CC (SepAdtTokenRightAdjusted.c)
 */

NTSTATUS __fastcall SepAdjustPrivileges(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        int *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  unsigned int v12; // r15d
  NTSTATUS result; // eax
  PSID v14; // rdi
  int v15; // r12d
  __int64 v17; // r10
  __int64 v18; // r12
  __int64 v19; // r9
  __int64 v20; // rax
  char v21; // si
  __int64 v22; // r11
  int v23; // edi
  unsigned int v24; // ecx
  unsigned int v25; // r10d
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // xmm1_8
  __int64 v29; // rcx
  unsigned int v30; // edx
  bool v31; // zf
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // xmm1_8
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rcx
  signed int v43; // edx
  BOOL v44; // r8d
  int v45; // r8d
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  BOOLEAN Dominates; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN v51; // [rsp+31h] [rbp-CFh] BYREF
  char v52; // [rsp+32h] [rbp-CEh]
  int v53; // [rsp+34h] [rbp-CCh]
  unsigned int v54; // [rsp+38h] [rbp-C8h]
  __int64 v55; // [rsp+40h] [rbp-C0h]
  int v56; // [rsp+48h] [rbp-B8h]
  unsigned int v57; // [rsp+4Ch] [rbp-B4h]
  unsigned int v58; // [rsp+50h] [rbp-B0h]
  NTSTATUS v59; // [rsp+54h] [rbp-ACh]
  __int64 v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  __int64 v62; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v63; // [rsp+78h] [rbp-88h]
  int *v64; // [rsp+80h] [rbp-80h]
  PSID Sid1; // [rsp+88h] [rbp-78h]
  _QWORD v66[54]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v67[54]; // [rsp+250h] [rbp+150h] BYREF

  v55 = a6;
  v64 = a7;
  v58 = a4;
  v60 = 0LL;
  Dominates = 0;
  v12 = 0;
  v51 = 0;
  LOBYTE(v56) = 0;
  v63 = a9;
  v53 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v54 = 0;
  v57 = 0;
  memset(v66, 0, sizeof(v66));
  memset(v67, 0, sizeof(v67));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity(a1);
  result = AppContainerPrivilegesEnabledExt(*(_QWORD *)(a1 + 784), 0x200800000LL, &v61, &v62);
  if ( result == -1073741637 )
  {
    v52 = 0;
  }
  else
  {
    if ( result < 0 )
      return result;
    v52 = 1;
  }
  v14 = Sid1;
  result = RtlSidDominates(Sid1, SeHighMandatorySid, &Dominates);
  v59 = result;
  v15 = result;
  if ( result < 0 )
    return result;
  if ( !Dominates )
  {
    result = RtlSidDominates(v14, SeMediumMandatorySid, &v51);
    v59 = result;
    v15 = result;
    if ( result < 0 )
      return result;
    v33 = (unsigned __int8)v56;
    if ( !v51 )
      v33 = 1;
    v56 = v33;
  }
  if ( a3 )
  {
    v26 = v55;
    v43 = 0;
    v25 = 0;
    do
    {
      if ( ((1LL << v43) & *(_QWORD *)(a1 + 72)) != 0 )
      {
        if ( a2 )
        {
          v44 = ((1LL << v43) & *(_QWORD *)(a1 + 80)) != 0;
          v55 = v43;
          v45 = v44 + 2;
          v60 = v43;
          v46 = v25++;
          v47 = 3 * v46;
          *(_QWORD *)((char *)v66 + 4 * v47) = v43;
          *((_DWORD *)&v66[1] + v47) = v45;
          if ( v26 )
          {
            v48 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(v26 + 4 * v48 + 4) = v43;
            *(_DWORD *)(v26 + 4 * v48 + 12) = v45;
          }
          v49 = *(_QWORD *)(a1 + 72);
          _bittestandreset64(&v49, (unsigned int)v43);
          *(_QWORD *)(a1 + 72) = v49;
        }
        ++*a8;
      }
      ++v43;
    }
    while ( (unsigned int)v43 <= 0x24 );
    goto LABEL_17;
  }
  if ( !v58 )
  {
    v25 = 0;
    goto LABEL_16;
  }
  v17 = v58;
  v18 = v55;
  do
  {
    v19 = *(_QWORD *)(a1 + 64);
    v20 = 1LL << *a5;
    if ( (v20 & v19) == 0 )
      goto LABEL_12;
    ++v12;
    v22 = *(_QWORD *)(a1 + 72);
    v60 = *(_QWORD *)a5;
    v21 = v60;
    v23 = ((v22 & (1LL << v21)) != 0 ? 2 : 0) | (((1LL << v21) & *(_QWORD *)(a1 + 80)) != 0);
    v24 = a5[2];
    if ( (v24 & 4) != 0 )
    {
      if ( a2 )
      {
        *(_QWORD *)(a1 + 72) = v22 & ~(1LL << v60);
        *(_DWORD *)(a1 + 200) |= 0x800u;
        *(_QWORD *)(a1 + 64) = v19 & ~(1LL << v21);
      }
    }
    else if ( (v24 & 2) != 0 )
    {
      if ( (v20 & v22) != 0 )
        goto LABEL_12;
      if ( !a2 )
        goto LABEL_30;
      v28 = v60;
      if ( v18 )
      {
        v34 = 3LL * (unsigned int)*a8;
        *(_QWORD *)(v18 + 4 * v34 + 4) = v60;
        *(_DWORD *)(v18 + 4 * v34 + 12) = v23;
      }
      v29 = 3LL * v57;
      v30 = v57 + 1;
      v31 = Dominates == 0;
      *(_QWORD *)((char *)v67 + 4 * v29) = v28;
      *((_DWORD *)&v67[1] + v29) = v23;
      v57 = v30;
      if ( !v31 )
      {
        v32 = *(_QWORD *)(a1 + 72) | (1LL << v21);
        goto LABEL_29;
      }
      if ( v51 )
      {
        v39 = 0x1120160684LL;
        if ( !_bittest64(&v39, *a5) )
          goto LABEL_48;
      }
      else
      {
        if ( !(_BYTE)v56 )
          goto LABEL_30;
        if ( v52 )
          v40 = v61;
        else
          v40 = 0x200800000LL;
        v41 = *a5;
        if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
        {
          if ( _bittest64(&v40, v41) )
          {
LABEL_48:
            *(_QWORD *)(a1 + 72) |= 1LL << v21;
            ++*a8;
            goto LABEL_12;
          }
        }
        else
        {
          v42 = 0x202800000LL;
          if ( _bittest64(&v42, v41) )
            goto LABEL_48;
        }
      }
      ++v53;
      ++*a8;
    }
    else if ( (v20 & v22) != 0 )
    {
      if ( a2 )
      {
        v35 = v60;
        if ( v18 )
        {
          v36 = 3LL * (unsigned int)*a8;
          *(_QWORD *)(v18 + 4 * v36 + 4) = v60;
          *(_DWORD *)(v18 + 4 * v36 + 12) = v23;
        }
        v37 = 3LL * v54;
        v38 = v54 + 1;
        *(_QWORD *)((char *)v66 + 4 * v37) = v35;
        *((_DWORD *)&v66[1] + v37) = v23;
        v32 = *(_QWORD *)(a1 + 72) & ~(1LL << v21);
        v54 = v38;
LABEL_29:
        *(_QWORD *)(a1 + 72) = v32;
      }
LABEL_30:
      ++*a8;
    }
LABEL_12:
    a5 += 3;
    --v17;
  }
  while ( v17 );
  v15 = v59;
  if ( v12 < v58 || v53 )
    v15 = 262;
  v25 = v54;
LABEL_16:
  v26 = v55;
LABEL_17:
  if ( *a8 && a2 )
  {
    *v63 = 1;
    SepAdtTokenRightAdjusted(a1, (unsigned int)v66, v25, (unsigned int)v67, v57, v15 >= 0);
  }
  if ( v26 )
  {
    if ( *a8 > 1u )
      v27 = 12 * *a8 + 4;
    else
      v27 = 16;
    *v64 = v27;
  }
  return v15;
}
