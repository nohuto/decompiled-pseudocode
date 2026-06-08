/*
 * XREFs of AcpiParseLpiObject @ 0x1C0019FC4
 * Callers:
 *     AcpiParseProcessorContainer @ 0x1C001A8C8 (AcpiParseProcessorContainer.c)
 *     InitAcpiLpiStates @ 0x1C002BAAC (InitAcpiLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C0002230 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C000238C (WPP_RECORDER_SF_SD.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C00024D0 (WPP_RECORDER_SF_Sd.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 *     memmove @ 0x1C000C080 (memmove.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 *     AcpiParseCore @ 0x1C001AB1C (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C001B70C (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiParseLpiObject(__int64 a1, const wchar_t *a2, char a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 v8; // rax
  int v9; // r12d
  _WORD *v10; // rdi
  unsigned __int16 v11; // ax
  __int64 v12; // rax
  char *v13; // r14
  int v14; // r13d
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rdi
  __int64 v17; // r9
  __int64 v18; // rax
  char *v19; // r15
  unsigned int v20; // r14d
  char *v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r8
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  __int64 v28; // rax
  unsigned __int16 v29; // r9
  unsigned int v30; // esi
  __int64 v31; // rcx
  int v33; // [rsp+20h] [rbp-E0h]
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v37; // [rsp+50h] [rbp-B0h]
  char v38; // [rsp+60h] [rbp-A0h] BYREF
  int v39; // [rsp+62h] [rbp-9Eh]
  const char *v40; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v41)(); // [rsp+70h] [rbp-90h]
  char v42; // [rsp+78h] [rbp-88h]
  int v43; // [rsp+7Ah] [rbp-86h]
  const char *v44; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v45)(); // [rsp+88h] [rbp-78h]
  char v46; // [rsp+90h] [rbp-70h]
  int v47; // [rsp+92h] [rbp-6Eh]
  const char *v48; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v49)(); // [rsp+A0h] [rbp-60h]
  char v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+AAh] [rbp-56h]
  const char *v52; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v53)(); // [rsp+B8h] [rbp-48h]
  char v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+C2h] [rbp-3Eh]
  const char *v56; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v57)(); // [rsp+D0h] [rbp-30h]
  char v58; // [rsp+D8h] [rbp-28h]
  int v59; // [rsp+DAh] [rbp-26h]
  const char *v60; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v61)(); // [rsp+E8h] [rbp-18h]
  char v62; // [rsp+F0h] [rbp-10h]
  int v63; // [rsp+F2h] [rbp-Eh]
  const char *v64; // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v65)(); // [rsp+100h] [rbp+0h]
  char v66; // [rsp+108h] [rbp+8h]
  int v67; // [rsp+10Ah] [rbp+Ah]
  const char *v68; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v69)(); // [rsp+118h] [rbp+18h]
  char v70; // [rsp+120h] [rbp+20h]
  int v71; // [rsp+122h] [rbp+22h]
  const char *v72; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v73)(); // [rsp+130h] [rbp+30h]
  char v74; // [rsp+138h] [rbp+38h]
  int v75; // [rsp+13Ah] [rbp+3Ah]
  const char *v76; // [rsp+140h] [rbp+40h]
  void *v77; // [rsp+148h] [rbp+48h]
  char v78; // [rsp+150h] [rbp+50h] BYREF
  int v79; // [rsp+152h] [rbp+52h]
  const char *v80; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v81)(); // [rsp+160h] [rbp+60h]
  char v82; // [rsp+168h] [rbp+68h]
  int v83; // [rsp+16Ah] [rbp+6Ah]
  const char *v84; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v85)(); // [rsp+178h] [rbp+78h]
  char v86; // [rsp+180h] [rbp+80h]
  int v87; // [rsp+182h] [rbp+82h]
  const char *v88; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v89)(); // [rsp+190h] [rbp+90h]
  char v90; // [rsp+198h] [rbp+98h]
  int v91; // [rsp+19Ah] [rbp+9Ah]
  const char *v92; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v93)(); // [rsp+1A8h] [rbp+A8h]
  char v94; // [rsp+1B0h] [rbp+B0h]
  int v95; // [rsp+1B2h] [rbp+B2h]
  const char *v96; // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v97)(); // [rsp+1C0h] [rbp+C0h]
  char v98; // [rsp+1C8h] [rbp+C8h]
  int v99; // [rsp+1CAh] [rbp+CAh]
  const char *v100; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v101)(); // [rsp+1D8h] [rbp+D8h]
  char v102; // [rsp+1E0h] [rbp+E0h]
  int v103; // [rsp+1E2h] [rbp+E2h]
  const char *v104; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v105)(); // [rsp+1F0h] [rbp+F0h]
  char v106; // [rsp+1F8h] [rbp+F8h]
  int v107; // [rsp+1FAh] [rbp+FAh]
  const char *v108; // [rsp+200h] [rbp+100h]
  __int64 (__fastcall *v109)(); // [rsp+208h] [rbp+108h]
  char v110; // [rsp+210h] [rbp+110h]
  int v111; // [rsp+212h] [rbp+112h]
  const char *v112; // [rsp+218h] [rbp+118h]
  __int64 (__fastcall *v113)(); // [rsp+220h] [rbp+120h]
  char v114; // [rsp+228h] [rbp+128h]
  int v115; // [rsp+22Ah] [rbp+12Ah]
  const char *v116; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v117)(); // [rsp+238h] [rbp+138h]
  char v118; // [rsp+240h] [rbp+140h]
  int v119; // [rsp+242h] [rbp+142h]
  const char *v120; // [rsp+248h] [rbp+148h]
  void *v121; // [rsp+250h] [rbp+150h]

  v37 = a4;
  v41 = AcpiParseULong;
  v45 = AcpiParseULong;
  v49 = AcpiParseULong;
  v52 = "ArchitectureFlags";
  v40 = "MinimumResidency";
  v78 = 0;
  v79 = 0;
  v53 = AcpiParseULong;
  v57 = AcpiParseULong;
  v80 = "MinimumResidency";
  v44 = "WakeupLatency";
  v81 = AcpiParseULong;
  v61 = AcpiParseULong;
  v84 = "WakeupLatency";
  v38 = 0;
  v85 = AcpiParseULong;
  v39 = 0;
  v88 = "Flags";
  v42 = 1;
  v48 = "Flags";
  v54 = 4;
  v65 = AcpiParseRegister;
  v69 = AcpiParseRegister;
  v73 = AcpiParseRegister;
  v89 = AcpiParseULong;
  v43 = 0x40000;
  v46 = 2;
  v47 = 0x80000;
  v50 = 3;
  v51 = 786432;
  v55 = 0x100000;
  v56 = "ResidencyCounterFrequency";
  v58 = 5;
  v59 = 1310720;
  v60 = "EnabledParentState";
  v62 = 6;
  v63 = 1572866;
  v64 = "EntryMethod";
  v66 = 7;
  v67 = 2359298;
  v68 = "ResidencyCounter";
  v70 = 8;
  v71 = 3145730;
  v72 = "UsageCounter";
  v74 = 9;
  v75 = 4194305;
  v76 = "StateName";
  v77 = &AcpiParseAnsiString;
  v82 = 1;
  v83 = 0x40000;
  v86 = 2;
  v87 = 0x80000;
  v100 = "EnabledParentState";
  v92 = "ArchitectureFlags";
  v105 = AcpiParseRegisterOrQword;
  v93 = AcpiParseULong;
  v109 = AcpiParseStaticRegister;
  v96 = "ResidencyCounterFrequency";
  v112 = "ResidencyCounter";
  v104 = "EntryMethod";
  v108 = "EntryMethod";
  v116 = "UsageCounter";
  v113 = AcpiParseRegister;
  v117 = AcpiParseRegister;
  v90 = 3;
  v91 = 786432;
  v94 = 4;
  v95 = 0x100000;
  v97 = AcpiParseULong;
  v98 = 5;
  v99 = 1310720;
  v101 = AcpiParseULong;
  v102 = 6;
  v103 = 1572866;
  v106 = 6;
  v107 = 1572864;
  v110 = 7;
  v111 = 2359298;
  v114 = 8;
  v115 = 3145730;
  v118 = 9;
  v119 = 4194305;
  v120 = "StateName";
  v121 = &AcpiParseAnsiString;
  if ( !*(_DWORD *)(a1 + 8) )
  {
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x33u,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
      a2);
    return (unsigned int)-1073741275;
  }
  if ( *(_WORD *)(a1 + 12) )
  {
    v7 = 52;
LABEL_5:
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v7,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
      a2);
    return (unsigned int)-1072431096;
  }
  LOWORD(v8) = *(_WORD *)(a1 + 14);
  v9 = *(_DWORD *)(a1 + 16);
  if ( (unsigned __int16)v8 >= 4u )
    v8 = (unsigned __int16)v8;
  else
    v8 = 4LL;
  v10 = (_WORD *)(v8 + a1 + 16);
  if ( (unsigned __int64)v10 >= a1 + (unsigned __int64)*(unsigned int *)(a1 + 4) )
  {
    v7 = 53;
    goto LABEL_5;
  }
  if ( *v10 )
  {
    if ( *v10 != 2 )
    {
      v7 = 54;
      goto LABEL_5;
    }
    v11 = v10[1];
    if ( v11 > 8u )
    {
      v7 = 55;
      goto LABEL_5;
    }
    v36 = 0LL;
    memmove(&v36, v10 + 2, v11);
  }
  else
  {
    v36 = *((unsigned int *)v10 + 1);
  }
  if ( v10[1] >= 4u )
  {
    _mm_lfence();
    v12 = (unsigned __int16)v10[1];
  }
  else
  {
    v12 = 4LL;
  }
  v13 = (char *)v10 + v12 + 4;
  if ( (unsigned __int64)v13 >= a1 + (unsigned __int64)*(unsigned int *)(a1 + 4) )
  {
    v7 = 56;
    goto LABEL_5;
  }
  if ( *(_WORD *)v13 )
  {
    v7 = 57;
    goto LABEL_5;
  }
  _mm_lfence();
  v14 = *((_DWORD *)v13 + 1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(80 * v14 + 24), 0x72637250u);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, (unsigned int)(80 * v14 + 24));
  v16[1] = v36;
  *(_DWORD *)v16 = v9;
  *((_DWORD *)v16 + 4) = v14;
  if ( *((_WORD *)v13 + 1) >= 4u )
  {
    _mm_lfence();
    v18 = *((unsigned __int16 *)v13 + 1);
  }
  else
  {
    v18 = 4LL;
  }
  v19 = &v13[v18 + 4];
  v20 = 0;
  if ( (unsigned __int64)v19 < a1 + (unsigned __int64)*(unsigned int *)(a1 + 4) )
  {
    while ( v20 != v14 )
    {
      if ( *(_WORD *)v19 != 3 )
      {
        WPP_RECORDER_SF_SD((__int64)WPP_GLOBAL_Control->DeviceExtension, 1LL, 4LL, v17, v33, a2);
        goto LABEL_50;
      }
      v21 = &v78;
      v22 = 10LL * v20;
      if ( !a3 )
        v21 = &v38;
      if ( (int)AcpiParseCore(
                  (_DWORD)v21,
                  (unsigned int)(a3 != 0) + 10,
                  (int)v19 + 4,
                  *((unsigned __int16 *)v19 + 1),
                  (__int64)&v16[v22 + 3],
                  80,
                  (__int64)"_LPI",
                  1) < 0 )
      {
        LODWORD(v34) = v20 + 3;
        WPP_RECORDER_SF_Sd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v23,
          v24,
          0x3Cu,
          (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
          a2,
          v34);
        v6 = -1072431089;
        goto LABEL_56;
      }
      v25 = &v16[v22 + 6];
      if ( *v25 != 127 )
        AcpiTranslateAccessSize(v25, v23);
      v26 = (char *)&v16[v22 + 7] + 4;
      if ( *v26 != 127 )
        AcpiTranslateAccessSize(v26, v23);
      v27 = &v16[v22 + 9];
      if ( *v27 != 127 )
        AcpiTranslateAccessSize(v27, v23);
      LOWORD(v28) = *((_WORD *)v19 + 1);
      if ( (unsigned __int16)v28 >= 4u )
        v28 = (unsigned __int16)v28;
      else
        v28 = 4LL;
      v19 += v28 + 4;
      ++v20;
      if ( (unsigned __int64)v19 >= a1 + (unsigned __int64)*(unsigned int *)(a1 + 4) )
        goto LABEL_46;
    }
    v29 = 58;
    goto LABEL_52;
  }
LABEL_46:
  if ( v20 != v14 )
  {
    v29 = 61;
    goto LABEL_52;
  }
  if ( !v20 )
  {
    v29 = 62;
LABEL_52:
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v29,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
      a2);
LABEL_50:
    v6 = -1072431096;
    goto LABEL_56;
  }
  v6 = 0;
  *v37 = v16;
  v16 = 0LL;
LABEL_56:
  LODWORD(v36) = v6;
  if ( v16 )
  {
    v30 = 0;
    if ( *((_DWORD *)v16 + 4) )
    {
      do
      {
        v31 = 10LL * v30;
        if ( v16[v31 + 12] )
          RtlFreeUnicodeString((PUNICODE_STRING)&v16[v31 + 11]);
        ++v30;
      }
      while ( v30 < *((_DWORD *)v16 + 4) );
      v6 = v36;
    }
    ExFreePoolWithTag(v16, 0);
  }
  return v6;
}
