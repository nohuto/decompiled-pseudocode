/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x1402C4674
 * Callers:
 *     AdtpPackageParameters @ 0x14017E5D8 (AdtpPackageParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402C4B50 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x1402C5550 (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1402C55DC (AdtpBuildStagingReasonAuditStringInternal.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C7070 (RtlLengthSecurityDescriptor.c)
 *     AdtpEtwBuildDashString @ 0x140584A2C (AdtpEtwBuildDashString.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditString(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        char a4,
        int a5,
        _QWORD *a6,
        __int64 a7,
        _DWORD *a8,
        char *a9)
{
  int v9; // r10d
  char *v10; // rbx
  void *v11; // rsi
  _WORD *v12; // r12
  unsigned int v13; // r13d
  unsigned int v14; // edi
  char v15; // r14
  char v16; // cl
  unsigned int v17; // r14d
  _DWORD *v19; // rax
  int v20; // eax
  ULONG v21; // eax
  char v22; // r9
  unsigned int *v23; // rsi
  unsigned int v24; // r14d
  unsigned int v25; // edx
  unsigned __int8 v26; // cl
  unsigned int v27; // eax
  unsigned __int16 *v28; // rbx
  int v29; // eax
  __int64 v30; // r8
  unsigned int v31; // r12d
  int *v32; // r14
  int v33; // esi
  __int64 v34; // rbx
  int v35; // eax
  unsigned int v36; // edi
  __int64 v37; // rax
  _WORD *v38; // rsi
  char v39; // al
  _WORD *PoolWithTag; // rax
  unsigned int v41; // r12d
  __int64 v42; // rax
  unsigned __int16 *v43; // r14
  const void *v44; // rdx
  int v45; // ebx
  PVOID *v46; // rbx
  __int64 v47; // rdi
  int v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+40h] [rbp-C0h]
  int v50; // [rsp+48h] [rbp-B8h]
  int v51; // [rsp+50h] [rbp-B0h]
  unsigned int v53; // [rsp+64h] [rbp-9Ch]
  char v54; // [rsp+68h] [rbp-98h]
  _BYTE v55[7]; // [rsp+69h] [rbp-97h] BYREF
  __int64 v56; // [rsp+70h] [rbp-90h]
  _DWORD *v57; // [rsp+78h] [rbp-88h]
  __int64 v58; // [rsp+80h] [rbp-80h]
  char *v59; // [rsp+88h] [rbp-78h] BYREF
  __int64 v60; // [rsp+90h] [rbp-70h]
  char *v61; // [rsp+98h] [rbp-68h]
  __int64 v62; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-58h]
  void *v64; // [rsp+B0h] [rbp-50h]
  _DWORD *v65; // [rsp+B8h] [rbp-48h]
  __int64 v66; // [rsp+C0h] [rbp-40h]
  _DWORD *v67; // [rsp+C8h] [rbp-38h]
  char *v68; // [rsp+D0h] [rbp-30h]
  _OWORD v69[32]; // [rsp+E0h] [rbp-20h] BYREF

  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v68 = a9;
  v12 = (_WORD *)a3;
  v13 = 0;
  v66 = a7;
  v14 = 0;
  v15 = 0;
  v58 = a1;
  v16 = 1;
  v67 = a8;
  v65 = (_DWORD *)a3;
  v57 = a2;
  v53 = 0;
  v55[0] = 0;
  v54 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  if ( !*(_DWORD *)a3 )
    goto LABEL_2;
  v19 = (_DWORD *)(a3 + 4);
  a3 = 32LL;
  v56 = (__int64)v19;
  a2 = v19;
  do
  {
    v20 = *a2 & 0xFF0000;
    switch ( v20 )
    {
      case 0:
        goto LABEL_23;
      case 65536:
      case 131072:
        goto LABEL_21;
      case 196608:
      case 262144:
        goto LABEL_20;
      case 327680:
        goto LABEL_21;
      case 393216:
LABEL_20:
        v54 = 1;
LABEL_21:
        v15 = 1;
        break;
    }
    v16 = 0;
LABEL_23:
    ++a2;
    --a3;
  }
  while ( a3 );
  if ( v16 == 1 )
  {
LABEL_2:
    if ( a6 )
      AdtpEtwBuildDashString(a6, a2, a3);
    v17 = 0;
    goto LABEL_5;
  }
  memset(v69, 0, sizeof(v69));
  if ( v15 == 1 )
  {
    AdtpBuildContextFromSecurityDescriptor(v12 + 72, &v59);
    v10 = v59;
  }
  if ( v54 == 1 )
  {
    v21 = RtlLengthSecurityDescriptor(v10);
    AdtpBuildContextFromSecurityDescriptor(&v10[v21], &v62);
  }
  v22 = a4;
  v23 = (unsigned int *)&AdtpStandardAccessTypes;
  v9 = 0;
  v24 = 0;
  while ( 2 )
  {
    v25 = *v23;
    if ( v22 == 1 )
    {
      v26 = 0;
      v27 = *v23;
      while ( 1 )
      {
        v27 >>= 1;
        if ( !v27 )
          break;
        ++v26;
      }
      if ( *(int *)&v12[2 * v26 + 2] < 0 )
      {
        v28 = (unsigned __int16 *)&v69[v13];
        v29 = AdtpBuildStagingReasonAuditStringInternal(
                v58,
                (_DWORD)v57,
                (unsigned int)&v59,
                (unsigned int)&v62,
                v25,
                v48,
                (__int64)(v12 + 2),
                (__int64)v28);
        goto LABEL_38;
      }
LABEL_40:
      ++v24;
      ++v23;
      if ( v24 < 7 )
        continue;
      if ( *v12 )
      {
        v30 = v56;
        v31 = 0;
        v32 = (int *)v56;
        v33 = 1;
        do
        {
          if ( v22 == 1 )
          {
            if ( *v32 < 0 )
            {
              v34 = v13;
              v35 = AdtpBuildStagingReasonAuditStringInternal(
                      v58,
                      (_DWORD)v57,
                      (unsigned int)&v59,
                      (unsigned int)&v62,
                      v33,
                      v48,
                      v30,
                      (__int64)&v69[v13]);
LABEL_48:
              v9 = 0;
              v53 = v35;
              if ( v35 < 0 )
                goto LABEL_66;
              v30 = v56;
              v22 = a4;
              v14 += LOWORD(v69[v34]);
              ++v13;
            }
          }
          else if ( (v33 & *v65) != 0 )
          {
            v34 = v13;
            v35 = AdtpBuildAccessReasonAuditStringInternal(
                    v58,
                    (_DWORD)v57,
                    (unsigned int)&v59,
                    (unsigned int)&v62,
                    (unsigned int)v33 & *v65,
                    v48,
                    v30,
                    (__int64)&v69[v13],
                    v49,
                    v50,
                    v51,
                    (__int64)v55);
            goto LABEL_48;
          }
          ++v31;
          ++v32;
          v33 *= 2;
        }
        while ( v31 < 0x10 );
      }
      v36 = (v14 >> 1) + 1;
      if ( v66 )
      {
        if ( v67 )
        {
          v37 = (unsigned int)*v67;
          if ( (unsigned int)v37 + v36 < 0x400 )
          {
            v38 = (_WORD *)(v66 + 2 * v37);
            *v67 = v37 + v36;
            v39 = 0;
            goto LABEL_58;
          }
        }
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v36, 0x6B416553u);
      v9 = 0;
      v38 = PoolWithTag;
      if ( PoolWithTag )
      {
        v39 = 1;
LABEL_58:
        v41 = 0;
        *v68 = v39;
        if ( v13 )
        {
          v42 = v13;
          v43 = (unsigned __int16 *)v69;
          v56 = v13;
          do
          {
            v44 = (const void *)*((_QWORD *)v43 + 1);
            if ( v44 )
            {
              v45 = *v43;
              memmove((char *)v38 + v41, v44, *v43);
              v42 = v56;
              v41 += v45;
              v9 = 0;
            }
            v43 += 8;
            v56 = --v42;
          }
          while ( v42 );
        }
        v17 = v53;
        v38[v36 - 1] = 0;
        if ( a6 )
        {
          *a6 = v38;
          a6[1] = 2 * v36;
        }
        else
        {
          MEMORY[8] = v38;
          MEMORY[0] = 2 * (v36 - 1);
          MEMORY[2] = MEMORY[0] + 2;
        }
      }
      else
      {
        v17 = -1073741801;
      }
    }
    else
    {
      if ( (v25 & *(_DWORD *)v12) == 0 )
        goto LABEL_40;
      v28 = (unsigned __int16 *)&v69[v13];
      v29 = AdtpBuildAccessReasonAuditStringInternal(
              v58,
              (_DWORD)v57,
              (unsigned int)&v59,
              (unsigned int)&v62,
              v25 & *(_DWORD *)v12,
              v48,
              (__int64)(v12 + 2),
              (__int64)v28,
              v49,
              v50,
              v51,
              (__int64)v55);
LABEL_38:
      v9 = 0;
      v53 = v29;
      if ( v29 >= 0 )
      {
        v22 = a4;
        v14 += *v28;
        ++v13;
        goto LABEL_40;
      }
LABEL_66:
      v17 = v53;
    }
    break;
  }
  if ( v13 )
  {
    v46 = (PVOID *)v69 + 1;
    v47 = v13;
    do
    {
      if ( *v46 )
      {
        ExFreePoolWithTag(*v46, 0);
        v9 = 0;
      }
      v46 += 2;
      --v47;
    }
    while ( v47 );
  }
  v10 = v61;
  v11 = v64;
LABEL_5:
  if ( (_DWORD)v60 != v9 && v10 )
  {
    ExFreePoolWithTag(v10, 0);
    v9 = 0;
  }
  if ( (_DWORD)v63 != v9 && v11 )
    ExFreePoolWithTag(v11, 0);
  return v17;
}
