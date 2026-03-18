/*
 * XREFs of AdtpPackageParameters @ 0x14014C5B0
 * Callers:
 *     AdtpWriteToEtwEx @ 0x14028E7F0 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x1405D08F8 (AdtpWriteToEtw.c)
 * Callees:
 *     AdtpIsCorrectlyFormedUnicodeString @ 0x14014CA9C (AdtpIsCorrectlyFormedUnicodeString.c)
 *     AdtpBuildMultiSzStringListString @ 0x14014CAB8 (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x14028EA0C (AdtpBuildAccessReasonAuditString.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x140486030 (RtlValidSid.c)
 *     AdtpEtwBuildDashString @ 0x14059EFB8 (AdtpEtwBuildDashString.c)
 *     AdtpEtwBuildString @ 0x1405D0BF4 (AdtpEtwBuildString.c)
 *     AdtpBuildMessageString @ 0x1405D0CB8 (AdtpBuildMessageString.c)
 *     AdtpSubstituteDriveLetter @ 0x1405D0D68 (AdtpSubstituteDriveLetter.c)
 *     AdtpBuildLogonIdStrings @ 0x1405D0E98 (AdtpBuildLogonIdStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x140777224 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x1407776CC (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140777798 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x14077799C (AdtpBuildSidListString.c)
 *     AdtpBuildSockAddrString @ 0x140777BF8 (AdtpBuildSockAddrString.c)
 *     AdtpBuildStringListString @ 0x140777CB4 (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x140777E20 (AdtpBuildUlongString.c)
 *     AdtpBuildAccessesString @ 0x140778114 (AdtpBuildAccessesString.c)
 *     AdtpBuildObjectTypeStrings @ 0x1407785A8 (AdtpBuildObjectTypeStrings.c)
 *     AdtpBuildUserAccountControlString @ 0x14077882C (AdtpBuildUserAccountControlString.c)
 */

__int64 __fastcall AdtpPackageParameters(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 *a7,
        __int64 a8)
{
  __int64 v8; // r10
  UNICODE_STRING *v9; // r9
  unsigned __int16 v10; // si
  unsigned __int16 v11; // r11
  unsigned int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rdx
  unsigned int v16; // edi
  __int64 v17; // r13
  __int64 v18; // r8
  __int64 v19; // r12
  int v20; // ebx
  UNICODE_STRING *v21; // rdx
  unsigned __int16 *v22; // rdi
  int v23; // eax
  unsigned __int8 *v24; // r8
  char v25; // r9
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r9
  int v31; // edx
  __int64 v32; // r10
  unsigned __int16 v33; // r11
  __int64 v34; // rcx
  unsigned __int16 v35; // si
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // edx
  unsigned __int16 v39; // si
  __int64 v40; // rax
  __int64 v41; // rbx
  int v42; // edx
  int v43; // r8d
  int v44; // eax
  int v46; // ebx
  int v47; // ebx
  int v48; // ebx
  __int64 v49; // rcx
  __int64 v50; // rcx
  unsigned __int16 v51; // si
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rbx
  unsigned int v56; // edi
  BOOLEAN valid; // al
  __int64 v58; // rax
  int v59; // ecx
  int v60; // ecx
  int v61; // r10d
  unsigned int v62; // eax
  __int64 v63; // rdx
  unsigned int *v64; // r10
  unsigned int v65; // ecx
  unsigned int v66; // eax
  int v67; // ebx
  int v68; // ebx
  void *v69; // rcx
  __int64 v70; // rax
  unsigned int v71; // eax
  __int64 v72; // r10
  unsigned __int16 *v73; // rbx
  __int64 v74; // rdi
  __int16 v75; // r11
  int v76; // ecx
  int v77; // ecx
  int v78; // ecx
  bool v79; // zf
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // r12
  unsigned __int16 *v83; // rdi
  int v84; // eax
  __int64 v85; // rbx
  int v86; // ecx
  unsigned __int16 v87; // r11
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rdx
  int v92; // eax
  __int64 v93; // r8
  __int64 v94; // r12
  __int64 v95; // rax
  __int64 v96; // rcx
  int v97; // edx
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdx
  int v101; // ecx
  __int64 v102; // rax
  __int64 v103; // r8
  unsigned int v104; // eax
  int v105; // r9d
  __int64 v106; // rdx
  unsigned __int16 *v107; // rdi
  int v108; // eax
  __int64 v109; // rbx
  unsigned int v110; // ecx
  PUNICODE_STRING Destination; // [rsp+20h] [rbp-60h]
  PUNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h]
  char v113; // [rsp+60h] [rbp-20h] BYREF
  __int16 v114; // [rsp+62h] [rbp-1Eh]
  int v115; // [rsp+64h] [rbp-1Ch] BYREF
  int v116; // [rsp+68h] [rbp-18h]
  unsigned int v117; // [rsp+6Ch] [rbp-14h]
  unsigned __int8 *v118; // [rsp+70h] [rbp-10h] BYREF
  char v119; // [rsp+C0h] [rbp+40h] BYREF
  int v120; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v121; // [rsp+D8h] [rbp+58h]

  v121 = a4;
  v120 = a3;
  v8 = a4;
  v9 = 0LL;
  v114 = 0;
  v10 = 0;
  v115 = 0;
  v11 = 0;
  v12 = 0;
  if ( a1 )
  {
    if ( !a2 )
    {
      v13 = *(_DWORD *)(a1 + 8);
      v14 = a1 + 24;
      goto LABEL_4;
    }
LABEL_88:
    v12 = -1073741811;
    goto LABEL_39;
  }
  if ( !a2 )
    goto LABEL_88;
  v13 = *(_DWORD *)(a2 + 12);
  v14 = a2 + 32;
LABEL_4:
  v15 = 2LL;
  v117 = v13;
  v116 = 2;
  v16 = 2;
  if ( v13 > 2 )
  {
    v17 = a6;
    v18 = 1LL;
    do
    {
      if ( v10 >= 0x2Au || v11 >= 0xEu )
        goto LABEL_88;
      v19 = 32LL * v16;
      v20 = *(_DWORD *)(v19 + v14);
      if ( v20 > 16 )
      {
        if ( v20 <= 27 )
        {
          switch ( v20 )
          {
            case 27:
              goto LABEL_115;
            case 17:
              v44 = AdtpBuildSidListString(
                      *(_QWORD *)(v19 + v14 + 24),
                      v15,
                      (unsigned int)v17 + 16 * v10,
                      v8,
                      (__int64)&v115,
                      v10 + a8);
              goto LABEL_35;
            case 18:
              v98 = 2LL * v10;
              *(_QWORD *)(v17 + 8 * v98) = &v119;
              *(_QWORD *)(v17 + 8 * v98 + 8) = 8LL;
              goto LABEL_52;
            case 19:
              v92 = AdtpBuildUserAccountControlString(
                      *(_DWORD *)(v19 + v14 + 8),
                      (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v11 + 1)),
                      a8 + (unsigned int)v10 + 1,
                      (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v11 + 2)),
                      a8 + (unsigned int)v10 + 2);
              v9 = 0LL;
              v12 = v92;
              if ( v92 < 0 )
                goto LABEL_39;
              v11 = v114;
              v93 = 3LL;
              v94 = a5;
              do
              {
                v95 = v11++;
                v95 *= 2LL;
                v96 = 2LL * v10++;
                v97 = *(unsigned __int16 *)(v94 + 8 * v95);
                *(_QWORD *)(v17 + 8 * v96) = *(_QWORD *)(v94 + 8 * v95 + 8);
                *(_QWORD *)(v17 + 8 * v96 + 8) = (unsigned int)(v97 + 2);
                --v93;
              }
              while ( v93 );
              v15 = 2LL;
              v18 = 1LL;
              goto LABEL_30;
            case 20:
              v90 = 3LL;
              do
              {
                AdtpEtwBuildDashString(v17 + 16LL * v10, v90, v18);
                v10 += v18;
                v90 = v91 - v18;
              }
              while ( v90 );
              goto LABEL_57;
            case 21:
              v44 = AdtpBuildMessageString(
                      *(_DWORD *)(v19 + v14 + 8),
                      v15,
                      (unsigned int)v17 + 16 * v10,
                      v8,
                      (__int64)&v115,
                      v10 + a8);
              goto LABEL_35;
          }
          v77 = v20 - 21 - v15;
          if ( !v77 )
          {
            v81 = *(_QWORD *)(v19 + v14 + 24);
            v82 = a5;
            LODWORD(Destination) = a8 + v18 + v10;
            v83 = (unsigned __int16 *)(a5 + 16LL * v11);
            v84 = AdtpBuildSockAddrString(v81, v83, v10 + a8, a5 + 16LL * ((unsigned int)v11 + 1));
            v9 = 0LL;
            v12 = v84;
            if ( v84 < 0 )
              break;
            v18 = 1LL;
            v85 = 2LL * v10;
            v86 = *v83 + 2;
            v87 = v114 + 1;
            v39 = v10 + 1;
            *(_QWORD *)(v17 + 8 * v85) = *((_QWORD *)v83 + 1);
            *(_DWORD *)(v17 + 8 * v85 + 8) = v86;
            *(_DWORD *)(v17 + 8 * v85 + 12) = 0;
            v88 = 2LL * v39;
            v89 = *(_QWORD *)(v82 + 16LL * v87 + 8);
            *(_DWORD *)(v17 + 8 * v88 + 8) = *(unsigned __int16 *)(v82 + 16LL * v87) + 2;
            v11 = v87 + 1;
            *(_QWORD *)(v17 + 8 * v88) = v89;
            *(_DWORD *)(v17 + 8 * v88 + 12) = 0;
            goto LABEL_29;
          }
          v78 = v77 - 1;
          if ( !v78 )
          {
            v80 = AdtpBuildSecurityDescriptorChangeString(
                    *(_DWORD *)(v19 + v14 + 8),
                    *(_QWORD *)(v19 + v14 + 24),
                    *(_QWORD *)(32LL * ++v16 + v14 + 24),
                    v17 + 16 * (v18 + v10),
                    v17 + 16LL * v10,
                    v10 + a8,
                    (_DWORD)DestinationString,
                    v17 + 16LL * ((unsigned int)v18 + v10),
                    (unsigned int)v18 + v10 + a8,
                    v121,
                    (__int64)&v115);
            v9 = 0LL;
            v12 = v80;
            if ( v80 < 0 )
              break;
            v11 = v114;
            v15 = 2LL;
            v10 += 2;
            v18 = 1LL;
            goto LABEL_37;
          }
          v79 = v78 == (_DWORD)v15;
          goto LABEL_100;
        }
        switch ( v20 )
        {
          case 28:
            LODWORD(Destination) = (_DWORD)v9;
            v107 = (unsigned __int16 *)(a5 + 16LL * v11);
            v108 = AdtpBuildSockAddrString(*(_QWORD *)(v19 + v14 + 24), v107, v10 + a8, 0LL);
            v9 = 0LL;
            v12 = v108;
            if ( v108 < 0 )
              goto LABEL_39;
            v18 = 1LL;
            v15 = 2LL;
            v109 = 2LL * v10;
            v110 = *v107 + 2;
            ++v10;
            v11 = v114 + 1;
            *(_QWORD *)(v17 + 8 * v109) = *((_QWORD *)v107 + 1);
            *(_QWORD *)(v17 + 8 * v109 + 8) = v110;
            goto LABEL_30;
          case 29:
            goto LABEL_128;
          case 30:
            if ( *(UNICODE_STRING **)(v19 + v14 + 8) != v9 || *(UNICODE_STRING **)(v19 + v14 + 16) != v9 )
              goto LABEL_88;
LABEL_128:
            v103 = *(_QWORD *)(v19 + v14 + 24);
            v104 = *(_DWORD *)(v103 + 132);
            if ( v104 >= v16 )
              goto LABEL_88;
            v105 = 1;
            v106 = 32LL * v104;
            if ( *(_DWORD *)(v106 + v14) != 1 )
              goto LABEL_88;
            LOBYTE(v105) = v20 == 30;
            v44 = AdtpBuildAccessReasonAuditString(
                    *(_QWORD *)(v14 + 56),
                    *(_QWORD *)(v106 + v14 + 24),
                    v103,
                    v105,
                    (_DWORD)Destination,
                    v17 + 16LL * v10,
                    v8,
                    (__int64)&v115,
                    v10 + a8);
            goto LABEL_35;
          case 31:
            if ( *(_DWORD *)(v19 + v14 + 8) != 32 || *(UNICODE_STRING **)(v19 + v14 + 16) != v9 )
              goto LABEL_88;
            v44 = AdtpBuildSecurityDescriptorUnicodeString(
                    32,
                    *(_QWORD *)(v19 + v14 + 24),
                    0,
                    (unsigned int)v17 + 16 * v10,
                    v8,
                    (__int64)&v115,
                    v10 + a8);
            goto LABEL_35;
        }
        v59 = v20 - 31 - v15;
        if ( v59 )
        {
          v60 = v59 - 1;
          if ( !v60 )
          {
            v44 = AdtpBuildMultiSzStringListString(*(_QWORD *)(v19 + v14 + 24), v17 + 16LL * v10, v10 + a8);
            goto LABEL_35;
          }
          v79 = v60 == 1;
LABEL_100:
          if ( !v79 )
            goto LABEL_88;
        }
      }
      else
      {
        if ( v20 == 16 )
        {
          v44 = AdtpBuildStringListString(
                  *(_QWORD *)(v19 + v14 + 24),
                  v15,
                  (unsigned int)v17 + 16 * v10,
                  v8,
                  (__int64)&v115,
                  v10 + a8);
          goto LABEL_35;
        }
        if ( v20 > 8 )
        {
          v46 = v20 - 9;
          if ( v46 )
          {
            v47 = v46 - 1;
            if ( v47 )
            {
              v48 = v47 - 1;
              if ( !v48 )
                goto LABEL_51;
              v67 = v48 - 1;
              if ( !v67 )
                goto LABEL_51;
              v68 = v67 - 1;
              if ( v68 )
              {
                if ( (unsigned int)(v68 - 1) >= 2 )
                  goto LABEL_88;
LABEL_51:
                v49 = 2LL * v10;
                *(_QWORD *)(v17 + 8 * v49) = v19 + v14 + 8;
                *(_QWORD *)(v17 + 8 * v49 + 8) = 8LL;
              }
              else
              {
                v69 = &AdtpNullGuid;
                if ( *(_QWORD *)(v19 + v14 + 24) )
                  v69 = *(void **)(v19 + v14 + 24);
                v70 = 2LL * v10;
                *(_QWORD *)(v17 + 8 * v70) = v69;
                *(_QWORD *)(v17 + 8 * v70 + 8) = 16LL;
              }
            }
            else
            {
LABEL_115:
              v99 = 2LL * v10;
              *(_QWORD *)(v17 + 8 * v99) = v19 + v14 + 8;
              *(_QWORD *)(v17 + 8 * v99 + 8) = 4LL;
            }
LABEL_52:
            v10 += v18;
            goto LABEL_38;
          }
          v71 = *(_DWORD *)(v19 + v14 + 16);
          if ( v71 >= v16 )
            goto LABEL_88;
          v72 = 32LL * v71;
          if ( *(_DWORD *)(v72 + v14) != (_DWORD)v18 )
            goto LABEL_88;
          v73 = (unsigned __int16 *)(a5 + 16LL * v11);
          LODWORD(Destination) = a5 + 16 * v11;
          AdtpBuildObjectTypeStrings(
            *(_QWORD *)(v14 + 56),
            *(_QWORD *)(v72 + v14 + 24),
            *(_QWORD *)(v19 + v14 + 24),
            *(_DWORD *)(v19 + v14 + 4) / 0x18u);
          v74 = 2LL * v10;
          v15 = 2LL;
          v75 = v114;
          v76 = *v73 + 2;
          v9 = 0LL;
          *(_QWORD *)(v17 + 8 * v74) = *((_QWORD *)v73 + 1);
          v18 = 1LL;
          *(_DWORD *)(v17 + 8 * v74 + 8) = v76;
          v11 = v75 + 1;
          *(_DWORD *)(v17 + 8 * v74 + 12) = 0;
          ++v10;
          goto LABEL_30;
        }
        switch ( v20 )
        {
          case 8:
            v64 = *(unsigned int **)(v19 + v14 + 24);
            if ( !v64 )
              goto LABEL_88;
            v65 = *v64;
            v66 = *v64 ? 12 * v65 + 8 : 8;
            if ( *(_DWORD *)(v19 + v14 + 4) < v66 || v65 > 0x42 )
              goto LABEL_88;
            Destination = (PUNICODE_STRING)&v115;
            v44 = AdtpBuildPrivilegeAuditString(*(_QWORD *)(v19 + v14 + 24), 0LL, v17 + 16LL * v10, v121);
            goto LABEL_35;
          case 0:
            AdtpEtwBuildDashString(v17 + 16LL * v10, v15, v18);
            goto LABEL_52;
          case 1:
            if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(*(_QWORD *)(v19 + v14 + 24)) )
              goto LABEL_88;
            v43 = v61;
LABEL_34:
            v44 = AdtpEtwBuildString((unsigned int)v17 + 16 * v10, v42, v43, (unsigned int)&v115, v10 + a8);
LABEL_35:
            v9 = 0LL;
            v12 = v44;
            if ( v44 < 0 )
              goto LABEL_39;
            v11 = v114;
            v18 = 1LL;
            ++v10;
            v15 = 2LL;
            goto LABEL_37;
          case 2:
            v41 = *(_QWORD *)(v19 + v14 + 24);
            if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(v41) )
              goto LABEL_88;
            AdtpSubstituteDriveLetter();
            v42 = v41;
            v43 = v121;
            goto LABEL_34;
          case 3:
            v44 = AdtpBuildUlongString(*(_DWORD *)(v19 + v14 + 8), (__int64)&v115, v10 + a8);
            goto LABEL_35;
          case 4:
            v55 = *(_QWORD *)(v19 + v14 + 24);
            v56 = 4 * *(unsigned __int8 *)(v55 + 1) + 8;
            if ( *(_DWORD *)(v19 + v14 + 4) < v56 || (valid = RtlValidSid(*(PSID *)(v19 + v14 + 24)), v9 = 0LL, !valid) )
            {
              v12 = -1073741704;
              goto LABEL_39;
            }
            v11 = v114;
            v18 = 1LL;
            v15 = 2LL;
            v58 = 2LL * v10++;
            *(_QWORD *)(v17 + 8 * v58) = v55;
            *(_DWORD *)(v17 + 8 * v58 + 8) = v56;
            *(_DWORD *)(v17 + 8 * v58 + 12) = 0;
            goto LABEL_31;
        }
        if ( v20 != 5 )
        {
          if ( v20 == 6 )
          {
            v50 = 2LL * v10;
            v51 = v18 + v10;
            v52 = 4 * (unsigned __int8)byte_1407F3F19 + 8;
            *(_QWORD *)(v17 + 8 * v50) = &AdtpNullSid;
            *(_DWORD *)(v17 + 8 * v50 + 8) = v52;
            *(_DWORD *)(v17 + 8 * v50 + 12) = (_DWORD)v9;
            do
            {
              AdtpEtwBuildDashString(v17 + 16LL * v51, v15, v18);
              v51 += v18;
              v15 = v53 - v18;
            }
            while ( v15 );
            v54 = 2LL * v51;
            v10 = v18 + v51;
            *(_QWORD *)(v17 + 8 * v54) = &AdtpNullLuid;
            *(_QWORD *)(v17 + 8 * v54 + 8) = 8LL;
LABEL_57:
            v15 = 2LL;
            goto LABEL_38;
          }
          if ( v20 != 7 )
            goto LABEL_88;
          v62 = *(_DWORD *)(v19 + v14 + 16);
          if ( v62 >= v16 )
            goto LABEL_88;
          v63 = 32LL * v62;
          if ( *(_DWORD *)(v63 + v14) != (_DWORD)v18 )
            goto LABEL_88;
          v44 = AdtpBuildAccessesString(
                  *(_QWORD *)(v14 + 56),
                  *(_QWORD *)(v63 + v14 + 24),
                  *(_DWORD *)(v19 + v14 + 8),
                  0,
                  v9,
                  v17 + 16LL * v10,
                  v8,
                  (__int64)&v115,
                  v10 + a8);
          goto LABEL_35;
        }
      }
      DestinationString = (PUNICODE_STRING)&v113;
      v21 = (UNICODE_STRING *)&v118;
      v22 = (unsigned __int16 *)(a5 + 16LL * v11);
      LOBYTE(v120) = (_BYTE)v9;
      v119 = (char)v9;
      if ( v20 != 35 )
        v21 = v9;
      v113 = (char)v9;
      v118 = (unsigned __int8 *)v9;
      Destination = (PUNICODE_STRING)&v119;
      v23 = AdtpBuildLogonIdStrings(v14 + 8 + v19, v21, &v120, a5 + 16LL * v11);
      v12 = v23;
      if ( v20 == 35 )
      {
        v25 = v120;
        v24 = v118;
      }
      else
      {
        v24 = *(unsigned __int8 **)(v14 + 24);
        v25 = 0;
      }
      if ( v23 < 0 )
        break;
      v26 = *(_DWORD *)(v19 + v14);
      if ( v26 == 5 || v26 == 35 )
      {
        if ( !v24 )
        {
          v24 = (unsigned __int8 *)&AdtpNullSid;
          v25 = 0;
        }
        v27 = 4 * v24[1] + 8;
        v28 = v17 + 16LL * v10;
        *(_DWORD *)(v28 + 12) = 0;
        *(_QWORD *)v28 = v24;
        *(_DWORD *)(v28 + 8) = v27;
        *(_BYTE *)(v10 + a8) = v25;
      }
      else
      {
        if ( v20 != 33 )
        {
          if ( v25 && v24 )
            ExFreePoolWithTag(v24, 0);
          goto LABEL_28;
        }
        v100 = *(_QWORD *)(v19 + v14 + 24);
        v101 = 4 * *(unsigned __int8 *)(v100 + 1) + 8;
        v102 = v17 + 16LL * v10;
        *(_DWORD *)(v102 + 12) = 0;
        *(_QWORD *)v102 = v100;
        *(_DWORD *)(v102 + 8) = v101;
        *(_BYTE *)(v10 + a8) = v25;
      }
      ++v10;
LABEL_28:
      v29 = *((_QWORD *)v22 + 1);
      v30 = a8;
      v31 = *v22 + 2;
      v32 = a5;
      v33 = v114;
      v34 = v17 + 16LL * v10;
      *(_DWORD *)(v34 + 12) = 0;
      *(_QWORD *)v34 = v29;
      LOBYTE(v29) = v119;
      *(_DWORD *)(v34 + 8) = v31;
      *(_BYTE *)(v10 + v30) = v29;
      v35 = v10 + 1;
      ++v33;
      v36 = v17 + 16LL * v35;
      v37 = *(_QWORD *)(v32 + 16LL * v33 + 8);
      v38 = *(unsigned __int16 *)(v32 + 16LL * v33) + 2;
      *(_DWORD *)(v36 + 12) = 0;
      *(_QWORD *)v36 = v37;
      LOBYTE(v37) = v113;
      *(_DWORD *)(v36 + 8) = v38;
      *(_BYTE *)(v35 + v30) = v37;
      v18 = 1LL;
      v39 = v35 + 1;
      v11 = v33 + 1;
      v40 = 2LL * v39;
      v9 = 0LL;
      *(_QWORD *)(v17 + 8 * v40) = v19 + v14 + 8;
      *(_QWORD *)(v17 + 8 * v40 + 8) = 8LL;
LABEL_29:
      v10 = v39 + 1;
      v15 = 2LL;
LABEL_30:
      v114 = v11;
LABEL_31:
      v16 = v116;
LABEL_37:
      v8 = v121;
LABEL_38:
      v16 += v18;
      v116 = v16;
    }
    while ( v16 < v117 );
  }
LABEL_39:
  *a7 = v10;
  return v12;
}
