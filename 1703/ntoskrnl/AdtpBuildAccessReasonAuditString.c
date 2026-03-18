/*
 * XREFs of AdtpBuildAccessReasonAuditString @ 0x1402646C0
 * Callers:
 *     AdtpPackageParameters @ 0x140155F00 (AdtpPackageParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140264B94 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14026559C (AdtpBuildContextFromSecurityDescriptor.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140265628 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     AdtpEtwBuildDashString @ 0x14045E754 (AdtpEtwBuildDashString.c)
 *     RtlLengthSecurityDescriptor @ 0x14050E880 (RtlLengthSecurityDescriptor.c)
 */

__int64 __fastcall AdtpBuildAccessReasonAuditString(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        char a4,
        int a5,
        _QWORD *a6,
        __int64 a7,
        _DWORD *a8,
        _BYTE *a9)
{
  char *v9; // rbx
  void *v10; // rsi
  __int64 v12; // r8
  int v13; // r9d
  unsigned int v14; // edi
  __int64 v15; // r13
  char v16; // r14
  char v17; // r12
  char v18; // cl
  unsigned int v19; // r14d
  int v21; // eax
  _DWORD *v22; // rsi
  ULONG v23; // eax
  char v24; // r8
  unsigned int *v25; // rbx
  __int64 v26; // r12
  unsigned int v27; // r14d
  unsigned __int8 v28; // cl
  unsigned int v29; // eax
  unsigned __int16 *v30; // rsi
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  __int64 v34; // rdx
  unsigned int v35; // r14d
  int *v36; // rsi
  int v37; // ebx
  unsigned __int16 *v38; // r12
  int v39; // eax
  unsigned int v40; // edi
  __int64 v41; // rax
  _WORD *v42; // rsi
  _WORD *PoolWithTag; // rax
  unsigned int v44; // r12d
  unsigned __int16 *v45; // r14
  const void *v46; // rdx
  int v47; // ebx
  PVOID *v48; // rbx
  __int64 v49; // rdi
  int v50; // [rsp+28h] [rbp-D8h]
  int v51; // [rsp+40h] [rbp-C0h]
  int v52; // [rsp+48h] [rbp-B8h]
  int v53; // [rsp+50h] [rbp-B0h]
  unsigned int v55; // [rsp+64h] [rbp-9Ch]
  _BYTE v56[4]; // [rsp+68h] [rbp-98h] BYREF
  int v57; // [rsp+6Ch] [rbp-94h]
  _DWORD *v58; // [rsp+70h] [rbp-90h]
  _DWORD *v59; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-80h]
  char *v61; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+90h] [rbp-70h]
  char *v63; // [rsp+98h] [rbp-68h]
  __int64 v64; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-58h]
  void *v66; // [rsp+B0h] [rbp-50h]
  _BYTE *v67; // [rsp+B8h] [rbp-48h]
  _DWORD *v68; // [rsp+C0h] [rbp-40h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  _DWORD *v70; // [rsp+D0h] [rbp-30h]
  _OWORD v71[32]; // [rsp+E0h] [rbp-20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v60 = a1;
  v12 = (__int64)a8;
  v69 = a7;
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  v16 = 0;
  v67 = a9;
  v17 = 0;
  v58 = a3;
  v59 = a2;
  v18 = 1;
  v70 = a8;
  v55 = 0;
  v57 = 0;
  v56[0] = 0;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  if ( !*a3 )
    goto LABEL_2;
  v12 = 32LL;
  v68 = a3 + 1;
  a2 = a3 + 1;
  do
  {
    v21 = *a2 & 0xFF0000;
    switch ( v21 )
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
        v17 = 1;
LABEL_21:
        v16 = 1;
        break;
    }
    v18 = 0;
LABEL_23:
    ++a2;
    --v12;
  }
  while ( v12 );
  if ( v18 == 1 )
  {
LABEL_2:
    if ( a6 )
      AdtpEtwBuildDashString(a6, a2, v12);
    v19 = 0;
    goto LABEL_5;
  }
  memset(v71, 0, sizeof(v71));
  v22 = v58;
  if ( v16 == 1 )
  {
    AdtpBuildContextFromSecurityDescriptor(v58 + 36, &v61);
    v9 = v61;
  }
  if ( v17 == 1 )
  {
    v23 = RtlLengthSecurityDescriptor(v9);
    AdtpBuildContextFromSecurityDescriptor(&v9[v23], &v64);
  }
  v24 = a4;
  v25 = (unsigned int *)&AdtpStandardAccessTypes;
  v13 = 0;
  v26 = (__int64)(v58 + 1);
  v27 = 0;
  while ( 2 )
  {
    if ( v24 == 1 )
    {
      v28 = 0;
      v29 = *v25;
      while ( 1 )
      {
        v29 >>= 1;
        if ( !v29 )
          break;
        ++v28;
      }
      if ( (int)v22[v28 + 1] < 0 )
      {
        v30 = (unsigned __int16 *)&v71[(unsigned int)v15];
        v31 = AdtpBuildStagingReasonAuditStringInternal(
                v60,
                (_DWORD)v59,
                (unsigned int)&v61,
                (unsigned int)&v64,
                *v25,
                v50,
                v26,
                (__int64)v30);
        goto LABEL_38;
      }
LABEL_40:
      ++v27;
      ++v25;
      if ( v27 < 7 )
        continue;
      if ( (unsigned __int16)*v22 )
      {
        v34 = (__int64)(v22 + 1);
        v35 = 0;
        v36 = v22 + 1;
        v37 = 1;
        do
        {
          if ( v24 == 1 )
          {
            if ( *v36 < 0 )
            {
              v38 = (unsigned __int16 *)&v71[(unsigned int)v15];
              v39 = AdtpBuildStagingReasonAuditStringInternal(
                      v60,
                      (_DWORD)v59,
                      (unsigned int)&v61,
                      (unsigned int)&v64,
                      v37,
                      v50,
                      v34,
                      (__int64)v38);
LABEL_48:
              v13 = 0;
              v55 = v39;
              if ( v39 < 0 )
                goto LABEL_67;
              v34 = (__int64)v68;
              v14 += *v38;
              v24 = a4;
              v15 = (unsigned int)(v15 + 1);
              v57 = v15;
            }
          }
          else if ( (v37 & *v58) != 0 )
          {
            v38 = (unsigned __int16 *)&v71[(unsigned int)v15];
            v39 = AdtpBuildAccessReasonAuditStringInternal(
                    v60,
                    (_DWORD)v59,
                    (unsigned int)&v61,
                    (unsigned int)&v64,
                    (unsigned int)v37 & *v58,
                    v50,
                    v34,
                    (__int64)v38,
                    v51,
                    v52,
                    v53,
                    (__int64)v56);
            goto LABEL_48;
          }
          ++v35;
          ++v36;
          v37 *= 2;
        }
        while ( v35 < 0x10 );
      }
      v40 = (v14 >> 1) + 1;
      if ( v69 )
      {
        if ( v70 )
        {
          v41 = (unsigned int)*v70;
          if ( (unsigned int)v41 + v40 < 0x400 )
          {
            v42 = (_WORD *)(v69 + 2 * v41);
            *v70 = v41 + v40;
            *v67 = 0;
            goto LABEL_58;
          }
        }
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v40, 0x6B416553u);
      v13 = 0;
      v42 = PoolWithTag;
      if ( PoolWithTag )
      {
        *v67 = 1;
LABEL_58:
        v44 = 0;
        if ( (_DWORD)v15 )
        {
          v45 = (unsigned __int16 *)v71;
          do
          {
            v46 = (const void *)*((_QWORD *)v45 + 1);
            if ( v46 )
            {
              v47 = *v45;
              memmove((char *)v42 + v44, v46, *v45);
              v44 += v47;
              v13 = 0;
            }
            v45 += 8;
            --v15;
          }
          while ( v15 );
          LODWORD(v15) = v57;
        }
        v19 = v55;
        v42[v40 - 1] = 0;
        if ( a6 )
        {
          *a6 = v42;
          a6[1] = 2 * v40;
        }
        else
        {
          MEMORY[8] = v42;
          MEMORY[0] = 2 * (v40 - 1);
          MEMORY[2] = MEMORY[0] + 2;
        }
      }
      else
      {
        v19 = -1073741801;
      }
    }
    else
    {
      v32 = *v25 & *v22;
      if ( !v32 )
        goto LABEL_40;
      v30 = (unsigned __int16 *)&v71[(unsigned int)v15];
      v31 = AdtpBuildAccessReasonAuditStringInternal(
              v60,
              (_DWORD)v59,
              (unsigned int)&v61,
              (unsigned int)&v64,
              v32,
              v50,
              v26,
              (__int64)v30,
              v51,
              v52,
              v53,
              (__int64)v56);
LABEL_38:
      v13 = 0;
      v55 = v31;
      if ( v31 >= 0 )
      {
        v33 = *v30;
        v22 = v58;
        v14 += v33;
        v24 = a4;
        v15 = (unsigned int)(v15 + 1);
        v57 = v15;
        goto LABEL_40;
      }
LABEL_67:
      v19 = v55;
    }
    break;
  }
  if ( (_DWORD)v15 )
  {
    v48 = (PVOID *)v71 + 1;
    v49 = (unsigned int)v15;
    do
    {
      if ( *v48 )
      {
        ExFreePoolWithTag(*v48, 0);
        v13 = 0;
      }
      v48 += 2;
      --v49;
    }
    while ( v49 );
  }
  v9 = v63;
  v10 = v66;
LABEL_5:
  if ( (_DWORD)v62 != v13 && v9 )
  {
    ExFreePoolWithTag(v9, 0);
    v13 = 0;
  }
  if ( (_DWORD)v65 != v13 && v10 )
    ExFreePoolWithTag(v10, 0);
  return v19;
}
