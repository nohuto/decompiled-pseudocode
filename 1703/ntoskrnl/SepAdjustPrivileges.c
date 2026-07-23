/*
 * XREFs of SepAdjustPrivileges @ 0x14049D310
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x14049CF30 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     RtlSidDominates @ 0x140064060 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x140064158 (SepCopyTokenIntegrity.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SepAdtTokenRightAdjusted @ 0x14049DA88 (SepAdtTokenRightAdjusted.c)
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
  unsigned int v11; // r12d
  NTSTATUS result; // eax
  PSID v13; // rdi
  int v14; // r13d
  char v15; // si
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r11
  char v21; // r14
  int v22; // edi
  int v23; // ecx
  unsigned int v24; // r10d
  char v25; // al
  __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // xmm1_8
  __int64 v30; // rcx
  unsigned int v31; // edx
  bool v32; // zf
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // xmm1_8
  __int64 v39; // rcx
  __int64 v40; // rcx
  unsigned int v41; // edx
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  signed int v45; // edx
  BOOL v46; // r8d
  int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  BOOLEAN Dominates; // [rsp+31h] [rbp-CFh] BYREF
  BOOLEAN v54; // [rsp+32h] [rbp-CEh] BYREF
  char v55; // [rsp+33h] [rbp-CDh]
  int v56; // [rsp+34h] [rbp-CCh]
  unsigned int v57; // [rsp+38h] [rbp-C8h]
  __int64 v58; // [rsp+40h] [rbp-C0h]
  int v59; // [rsp+48h] [rbp-B8h]
  unsigned int v60; // [rsp+4Ch] [rbp-B4h]
  unsigned int v61; // [rsp+50h] [rbp-B0h]
  NTSTATUS v62; // [rsp+54h] [rbp-ACh]
  __int64 v63; // [rsp+58h] [rbp-A8h]
  __int64 v64; // [rsp+68h] [rbp-98h] BYREF
  __int64 v65; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v66; // [rsp+78h] [rbp-88h]
  int *v67; // [rsp+80h] [rbp-80h]
  PSID Sid1; // [rsp+88h] [rbp-78h]
  _QWORD v69[54]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v70[54]; // [rsp+250h] [rbp+150h] BYREF

  v58 = a6;
  v67 = a7;
  v11 = 0;
  v63 = 0LL;
  Dominates = 0;
  v54 = 0;
  LOBYTE(v59) = 0;
  v61 = a4;
  v66 = a9;
  v56 = 0;
  v64 = 0LL;
  v65 = 0LL;
  v57 = 0;
  v60 = 0;
  memset(v69, 0, sizeof(v69));
  memset(v70, 0, sizeof(v70));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity();
  result = AppContainerPrivilegesEnabledExt(*(_QWORD *)(a1 + 784), 0x200800000LL, &v64, &v65);
  if ( result == -1073741637 )
  {
    v55 = 0;
  }
  else
  {
    if ( result < 0 )
      return result;
    v55 = 1;
  }
  v13 = Sid1;
  result = RtlSidDominates(Sid1, SeHighMandatorySid, &Dominates);
  v62 = result;
  v14 = result;
  if ( result < 0 )
    return result;
  v15 = 1;
  if ( !Dominates )
  {
    result = RtlSidDominates(v13, SeMediumMandatorySid, &v54);
    v62 = result;
    v14 = result;
    if ( result < 0 )
      return result;
    v34 = (unsigned __int8)v59;
    if ( !v54 )
      v34 = 1;
    v59 = v34;
  }
  if ( a3 )
  {
    v25 = a2;
    v45 = 0;
    v26 = v58;
    v24 = 0;
    do
    {
      if ( ((1LL << v45) & *(_QWORD *)(a1 + 72)) != 0 )
      {
        if ( v25 )
        {
          v46 = ((1LL << v45) & *(_QWORD *)(a1 + 80)) != 0;
          v58 = v45;
          v47 = v46 | 2;
          v63 = v45;
          v48 = v24++;
          v49 = 3 * v48;
          *(_QWORD *)((char *)v69 + 4 * v49) = v45;
          *((_DWORD *)&v69[1] + v49) = v47;
          if ( v26 )
          {
            v50 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(v26 + 4 * v50 + 4) = v45;
            *(_DWORD *)(v26 + 4 * v50 + 12) = v47;
          }
          v51 = *(_QWORD *)(a1 + 72);
          _bittestandreset64(&v51, (unsigned int)v45);
          v25 = a2;
          *(_QWORD *)(a1 + 72) = v51;
        }
        ++*a8;
      }
      ++v45;
    }
    while ( (unsigned int)v45 <= 0x24 );
    goto LABEL_18;
  }
  if ( !v61 )
  {
    v24 = 0;
    goto LABEL_17;
  }
  v17 = v61;
  do
  {
    v18 = *(_QWORD *)(a1 + 64);
    v19 = 1LL << *a5;
    if ( (v19 & v18) == 0 )
      goto LABEL_13;
    ++v11;
    v20 = *(_QWORD *)(a1 + 72);
    v63 = *(_QWORD *)a5;
    v21 = v63;
    v22 = ((v20 & (1LL << v21)) != 0 ? 2 : 0) | (((1LL << v21) & *(_QWORD *)(a1 + 80)) != 0);
    if ( (a5[2] & 4) != 0 )
    {
      if ( a2 )
      {
        *(_QWORD *)(a1 + 72) = v20 & ~(1LL << v63);
        *(_DWORD *)(a1 + 200) |= 0x800u;
        *(_QWORD *)(a1 + 64) = v18 & ~(1LL << v21);
      }
    }
    else
    {
      v23 = a5[2] & 2;
      if ( v23 && (v19 & v20) == 0 )
      {
        if ( !a2 )
          goto LABEL_31;
        v28 = v58;
        v29 = v63;
        if ( v58 )
        {
          v35 = 3LL * (unsigned int)*a8;
          *(_QWORD *)(v58 + 4 * v35 + 4) = v63;
          *(_DWORD *)(v28 + 4 * v35 + 12) = v22;
        }
        v30 = 3LL * v60;
        v31 = v60 + 1;
        v32 = Dominates == 0;
        *(_QWORD *)((char *)v70 + 4 * v30) = v29;
        *((_DWORD *)&v70[1] + v30) = v22;
        v60 = v31;
        if ( !v32 )
        {
          v33 = *(_QWORD *)(a1 + 72) | (1LL << v21);
          goto LABEL_30;
        }
        if ( v54 )
        {
          v36 = 0x1120160684LL;
          if ( !_bittest64(&v36, *a5) )
            goto LABEL_45;
        }
        else
        {
          if ( !(_BYTE)v59 )
            goto LABEL_31;
          if ( v55 )
            v42 = v64;
          else
            v42 = 0x200800000LL;
          v43 = *a5;
          if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
          {
            if ( _bittest64(&v42, v43) )
            {
LABEL_45:
              *(_QWORD *)(a1 + 72) |= 1LL << v21;
              ++*a8;
              goto LABEL_13;
            }
          }
          else
          {
            v44 = 0x202800000LL;
            if ( _bittest64(&v44, v43) )
              goto LABEL_45;
          }
        }
        ++v56;
        ++*a8;
      }
      else if ( !v23 && (v19 & v20) != 0 )
      {
        if ( a2 )
        {
          v37 = v58;
          v38 = v63;
          if ( v58 )
          {
            v39 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(v58 + 4 * v39 + 4) = v63;
            *(_DWORD *)(v37 + 4 * v39 + 12) = v22;
          }
          v40 = 3LL * v57;
          v41 = v57 + 1;
          *(_QWORD *)((char *)v69 + 4 * v40) = v38;
          *((_DWORD *)&v69[1] + v40) = v22;
          v33 = *(_QWORD *)(a1 + 72) & ~(1LL << v21);
          v57 = v41;
LABEL_30:
          *(_QWORD *)(a1 + 72) = v33;
        }
LABEL_31:
        ++*a8;
      }
    }
LABEL_13:
    a5 += 3;
    --v17;
  }
  while ( v17 );
  v14 = v62;
  if ( v11 < v61 || v56 )
    v14 = 262;
  v24 = v57;
LABEL_17:
  v25 = a2;
  v26 = v58;
LABEL_18:
  if ( *a8 && v25 )
  {
    *v66 = 1;
    if ( v14 < 0 )
      v15 = 0;
    SepAdtTokenRightAdjusted(a1, (unsigned int)v69, v24, (unsigned int)v70, v60, v15);
  }
  if ( v26 )
  {
    if ( *a8 > 1u )
      v27 = 12 * *a8 + 4;
    else
      v27 = 16;
    *v67 = v27;
  }
  return v14;
}
