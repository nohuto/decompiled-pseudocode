/*
 * XREFs of SepAdjustPrivileges @ 0x1404EC418
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1404EC040 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     RtlSidDominates @ 0x14005CC30 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14006A264 (SepCopyTokenIntegrity.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SepAdtTokenRightAdjusted @ 0x1404ECBE0 (SepAdtTokenRightAdjusted.c)
 */

__int64 __fastcall SepAdjustPrivileges(
        __int64 a1,
        char a2,
        char a3,
        int a4,
        unsigned int *a5,
        __int64 a6,
        int *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v9; // r15d
  int v11; // r14d
  char v12; // r12
  __int64 result; // rax
  int v14; // esi
  char v16; // si
  unsigned __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned int v21; // r15d
  bool v22; // zf
  int v23; // r14d
  int v24; // eax
  __int64 v25; // rcx
  int v26; // edx
  unsigned int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 v33; // r8
  __int64 v34; // rdx
  signed int v35; // edx
  unsigned int v36; // r14d
  __int64 v37; // r8
  int v38; // r9d
  int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v44; // [rsp+3Ch] [rbp-CCh]
  __int16 v45; // [rsp+40h] [rbp-C8h] BYREF
  char v46; // [rsp+42h] [rbp-C6h]
  char v47; // [rsp+43h] [rbp-C5h]
  unsigned int v48; // [rsp+44h] [rbp-C4h]
  __int64 v49; // [rsp+48h] [rbp-C0h]
  __int64 v50; // [rsp+50h] [rbp-B8h]
  __int64 v51; // [rsp+60h] [rbp-A8h]
  __int64 v52; // [rsp+68h] [rbp-A0h]
  __int64 v53; // [rsp+70h] [rbp-98h]
  __int64 v54; // [rsp+78h] [rbp-90h] BYREF
  void *Buf1; // [rsp+80h] [rbp-88h]
  __int64 v56; // [rsp+90h] [rbp-78h] BYREF
  _BYTE *v57; // [rsp+98h] [rbp-70h]
  int *v58; // [rsp+A0h] [rbp-68h]
  _QWORD v59[54]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v60[54]; // [rsp+258h] [rbp+150h] BYREF

  LOBYTE(v9) = 0;
  v11 = 0;
  v58 = a7;
  v12 = a2;
  v49 = 0LL;
  v44 = 0;
  v45 = 0;
  v54 = 0LL;
  v56 = 0LL;
  v48 = 0;
  v47 = a3;
  v50 = 0LL;
  LODWORD(v51) = v9;
  LODWORD(v53) = a4;
  v57 = a9;
  memset(v59, 0, sizeof(v59));
  memset(v60, 0, sizeof(v60));
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity(a1);
  result = AppContainerPrivilegesEnabledExt(*(_QWORD *)(a1 + 784), 0x200800000LL, &v54, &v56);
  if ( (_DWORD)result == -1073741637 )
  {
    v46 = 0;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    v46 = 1;
  }
  result = RtlSidDominates((char *)Buf1, (char *)SeHighMandatorySid, (char *)&v45);
  LODWORD(v52) = result;
  v14 = result;
  if ( (int)result < 0 )
    return result;
  if ( !(_BYTE)v45 )
  {
    result = RtlSidDominates((char *)Buf1, *(char **)&SeMediumMandatorySid, (char *)&v45 + 1);
    LODWORD(v52) = result;
    v14 = result;
    if ( (int)result < 0 )
      return result;
    LODWORD(v51) = HIBYTE(v45) == 0;
  }
  if ( v47 )
  {
    v35 = 0;
    v36 = 0;
    do
    {
      v37 = *(_QWORD *)(a1 + 72);
      if ( (v37 & (1LL << v35)) != 0 )
      {
        if ( v12 )
        {
          v38 = -(((1LL << v35) & *(_QWORD *)(a1 + 80)) != 0);
          v52 = v35;
          v39 = 2 - v38;
          v50 = v35;
          v40 = v36++;
          v41 = 3 * v40;
          *(_QWORD *)((char *)v59 + 4 * v41) = v35;
          *((_DWORD *)&v59[1] + v41) = v39;
          if ( a6 )
          {
            v42 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(a6 + 4 * v42 + 4) = v35;
            *(_DWORD *)(a6 + 4 * v42 + 12) = v39;
            v37 = *(_QWORD *)(a1 + 72);
          }
          _bittestandreset64(&v37, (unsigned int)v35);
          *(_QWORD *)(a1 + 72) = v37;
        }
        ++*a8;
      }
      ++v35;
    }
    while ( (unsigned int)v35 <= 0x24 );
    v48 = v36;
    v11 = 0;
LABEL_18:
    if ( !v47 && ((unsigned int)v49 < (unsigned int)v53 || v11) )
      v14 = 262;
  }
  else if ( (_DWORD)v53 )
  {
    v16 = v51;
    Buf1 = (void *)(unsigned int)v53;
    while ( 1 )
    {
      v17 = *a5;
      v18 = *(_QWORD *)(a1 + 64);
      if ( _bittest64(&v18, v17) )
        break;
LABEL_16:
      a5 += 3;
      Buf1 = (char *)Buf1 - 1;
      if ( !Buf1 )
      {
        v14 = v52;
        v12 = a2;
        goto LABEL_18;
      }
    }
    v19 = *(_QWORD *)a5;
    LODWORD(v49) = v49 + 1;
    v20 = *(_QWORD *)(a1 + 72);
    v21 = a5[2];
    v22 = ((1LL << v19) & *(_QWORD *)(a1 + 80)) == 0;
    v50 = v19;
    v23 = (((1LL << v19) & v20) != 0 ? 2 : 0) | !v22;
    if ( (v21 & 4) != 0 )
    {
      v11 = v44;
      if ( a2 )
      {
        *(_QWORD *)(a1 + 72) = v20 & ~(1LL << v19);
        *(_DWORD *)(a1 + 200) |= 0x800u;
        *(_QWORD *)(a1 + 64) = v18 & ~(1LL << v19);
      }
      goto LABEL_16;
    }
    if ( _bittest64(&v20, (unsigned int)v17) || (v21 & 2) == 0 )
    {
      if ( (_bittest64(&v20, (unsigned int)v17) & ((v21 & 2) == 0)) != 0 )
      {
        if ( a2 )
        {
          if ( a6 )
          {
            v30 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(a6 + 4 * v30 + 4) = v50;
            *(_DWORD *)(a6 + 4 * v30 + 12) = v23;
            v20 = *(_QWORD *)(a1 + 72);
          }
          v31 = 3LL * v48;
          v32 = v48 + 1;
          *(_QWORD *)((char *)v59 + 4 * v31) = v50;
          *(_QWORD *)(a1 + 72) = v20 & ~(1LL << v19);
          *((_DWORD *)&v59[1] + v31) = v23;
          v48 = v32;
        }
        ++*a8;
        v11 = v44;
      }
      else
      {
        v11 = v44;
      }
      goto LABEL_16;
    }
    if ( !a2 )
      goto LABEL_12;
    if ( a6 )
    {
      v28 = 3LL * (unsigned int)*a8;
      *(_QWORD *)(a6 + 4 * v28 + 4) = v50;
      *(_DWORD *)(a6 + 4 * v28 + 12) = v23;
    }
    v25 = 3LL * HIDWORD(v49);
    v26 = HIDWORD(v49) + 1;
    v22 = (_BYTE)v45 == 0;
    *(_QWORD *)((char *)v60 + 4 * v25) = v50;
    *((_DWORD *)&v60[1] + v25) = v23;
    HIDWORD(v49) = v26;
    if ( !v22 )
    {
      *(_QWORD *)(a1 + 72) |= 1LL << v19;
LABEL_12:
      v11 = v44;
LABEL_13:
      ++*a8;
      goto LABEL_16;
    }
    if ( HIBYTE(v45) )
    {
      v29 = 0x1120160684LL;
      v11 = v44;
      if ( !_bittest64(&v29, *a5) )
      {
LABEL_42:
        *(_QWORD *)(a1 + 72) |= 1LL << v19;
        goto LABEL_13;
      }
    }
    else
    {
      if ( !v16 )
        goto LABEL_12;
      v33 = v54;
      if ( !v46 )
        v33 = 0x200800000LL;
      v11 = v44;
      v34 = 1LL << *a5;
      if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
      {
        if ( (v34 & v33) != 0 )
          goto LABEL_42;
      }
      else if ( (v34 & 0x202800000LL) != 0 )
      {
        goto LABEL_42;
      }
    }
    v44 = ++v11;
    goto LABEL_13;
  }
  if ( *a8 && v12 )
  {
    v27 = v48;
    *v57 = 1;
    SepAdtTokenRightAdjusted(a1, (unsigned int)v59, v27, (unsigned int)v60, HIDWORD(v49), v14 >= 0);
  }
  if ( a6 )
  {
    if ( *a8 > 1u )
      v24 = 12 * *a8 + 4;
    else
      v24 = 16;
    *v58 = v24;
  }
  return (unsigned int)v14;
}
