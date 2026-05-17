/*
 * XREFs of sub_1800CDEF0 @ 0x1800CDEF0
 * Callers:
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 * Callees:
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18001F704 @ 0x18001F704 (sub_18001F704.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     EtwEventRegister @ 0x180029F50 (EtwEventRegister.c)
 *     sub_18002AE58 @ 0x18002AE58 (sub_18002AE58.c)
 *     sub_18002AFBC @ 0x18002AFBC (sub_18002AFBC.c)
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18002C268 @ 0x18002C268 (sub_18002C268.c)
 *     sub_18002DF14 @ 0x18002DF14 (sub_18002DF14.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     sub_180039100 @ 0x180039100 (sub_180039100.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_18003B5F8 @ 0x18003B5F8 (sub_18003B5F8.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_18003F7F8 @ 0x18003F7F8 (sub_18003F7F8.c)
 *     RtlGetNtSystemRoot @ 0x18003FAD0 (RtlGetNtSystemRoot.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     sub_180040F58 @ 0x180040F58 (sub_180040F58.c)
 *     LdrLoadDll @ 0x180041BB0 (LdrLoadDll.c)
 *     sub_180041E34 @ 0x180041E34 (sub_180041E34.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     LdrUnloadDll @ 0x180046DB0 (LdrUnloadDll.c)
 *     sub_180046F60 @ 0x180046F60 (sub_180046F60.c)
 *     sub_180046FBC @ 0x180046FBC (sub_180046FBC.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 *     sub_18004AEE4 @ 0x18004AEE4 (sub_18004AEE4.c)
 *     LdrQueryImageFileExecutionOptionsEx @ 0x18004AFC0 (LdrQueryImageFileExecutionOptionsEx.c)
 *     sub_18004B9A4 @ 0x18004B9A4 (sub_18004B9A4.c)
 *     sub_18004F9F4 @ 0x18004F9F4 (sub_18004F9F4.c)
 *     RtlSetBits @ 0x1800510C0 (RtlSetBits.c)
 *     sub_180054D18 @ 0x180054D18 (sub_180054D18.c)
 *     sub_180055808 @ 0x180055808 (sub_180055808.c)
 *     sub_180056E90 @ 0x180056E90 (sub_180056E90.c)
 *     sub_180059D2C @ 0x180059D2C (sub_180059D2C.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     RtlInitializeCriticalSectionEx @ 0x18005C890 (RtlInitializeCriticalSectionEx.c)
 *     RtlInitializeCriticalSection @ 0x180067700 (RtlInitializeCriticalSection.c)
 *     sub_18006B490 @ 0x18006B490 (sub_18006B490.c)
 *     RtlEncodePointer @ 0x180071270 (RtlEncodePointer.c)
 *     sub_1800726B8 @ 0x1800726B8 (sub_1800726B8.c)
 *     sub_180072AD0 @ 0x180072AD0 (sub_180072AD0.c)
 *     RtlInitializeSListHead @ 0x1800766F0 (RtlInitializeSListHead.c)
 *     sub_180076B24 @ 0x180076B24 (sub_180076B24.c)
 *     sub_18007A78C @ 0x18007A78C (sub_18007A78C.c)
 *     RtlSetHeapInformation @ 0x18007B300 (RtlSetHeapInformation.c)
 *     sub_18007BD78 @ 0x18007BD78 (sub_18007BD78.c)
 *     sub_18007D0E0 @ 0x18007D0E0 (sub_18007D0E0.c)
 *     RtlCreateTagHeap @ 0x18007D190 (RtlCreateTagHeap.c)
 *     sub_18007D464 @ 0x18007D464 (sub_18007D464.c)
 *     sub_18007EDB4 @ 0x18007EDB4 (sub_18007EDB4.c)
 *     sub_18007F390 @ 0x18007F390 (sub_18007F390.c)
 *     sub_18007F528 @ 0x18007F528 (sub_18007F528.c)
 *     sub_180080B70 @ 0x180080B70 (sub_180080B70.c)
 *     sub_180081044 @ 0x180081044 (sub_180081044.c)
 *     sub_180081A8C @ 0x180081A8C (sub_180081A8C.c)
 *     sub_1800828E0 @ 0x1800828E0 (sub_1800828E0.c)
 *     sub_180082EDC @ 0x180082EDC (sub_180082EDC.c)
 *     sub_18008325C @ 0x18008325C (sub_18008325C.c)
 *     RtlNormalizeProcessParams @ 0x180087260 (RtlNormalizeProcessParams.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x18009B5C0 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x18009CF70 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x18009D570 (ZwQuerySymbolicLinkObject.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlInterlockedPushListSList @ 0x18009E600 (RtlInterlockedPushListSList.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800CAFA8 @ 0x1800CAFA8 (sub_1800CAFA8.c)
 *     sub_1800CC838 @ 0x1800CC838 (sub_1800CC838.c)
 *     sub_1800CCA4C @ 0x1800CCA4C (sub_1800CCA4C.c)
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800CDEB8 @ 0x1800CDEB8 (sub_1800CDEB8.c)
 *     sub_1800D078C @ 0x1800D078C (sub_1800D078C.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 *     sub_1800DAFC0 @ 0x1800DAFC0 (sub_1800DAFC0.c)
 *     sub_1800EB1A0 @ 0x1800EB1A0 (sub_1800EB1A0.c)
 *     sub_1800F110C @ 0x1800F110C (sub_1800F110C.c)
 *     sub_1800F6B98 @ 0x1800F6B98 (sub_1800F6B98.c)
 */

__int64 __fastcall sub_1800CDEF0(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // r13
  __int64 ProcessEnvironmentBlock; // r14
  int v5; // r12d
  int v6; // eax
  bool v7; // zf
  bool v8; // cc
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  _WORD *v12; // rdx
  unsigned __int16 v13; // r8
  __int64 v14; // r15
  char v15; // al
  __int64 result; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  unsigned __int64 v20; // rcx
  char v21; // al
  char v22; // cl
  int SpareUlong0; // ecx
  int v24; // eax
  __int64 v25; // rcx
  unsigned int *v26; // rax
  unsigned int *v27; // r15
  int v28; // r12d
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  __int64 v32; // rax
  char v33; // al
  _QWORD *v34; // rcx
  int v35; // ecx
  char v36; // al
  unsigned int v37; // eax
  int ImageFileExecutionOptions; // ecx
  unsigned __int64 v39; // r15
  unsigned __int64 *v40; // r8
  unsigned __int64 v41; // r9
  __int64 Heap; // rax
  void *v43; // r12
  char v44; // al
  void *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r13
  __int64 NtSystemRoot; // rax
  __int16 v49; // r15
  __int64 v50; // rax
  __int64 v51; // r15
  int *v52; // rax
  int v53; // edx
  unsigned __int64 v54; // r13
  __m128i v55; // xmm0
  wchar_t *v56; // xmm0_8
  wchar_t *v57; // r15
  __int64 v58; // rax
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // r12
  __int64 v61; // rdx
  __int64 v62; // r12
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r15
  __int64 v65; // rcx
  __int64 v66; // rcx
  unsigned __int64 *v67; // r8
  __int64 v68; // r9
  _QWORD *v69; // rax
  __int64 v70; // rcx
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // r11
  __int64 v73; // rdx
  __int64 v74; // rdx
  int v75; // eax
  char v76; // r12
  int v77; // eax
  _WORD *v78; // r9
  unsigned __int64 v79; // r8
  _WORD *v80; // rax
  _WORD *v81; // r10
  __int16 v82; // r8
  const void *v83; // rcx
  const void *v84; // rax
  unsigned __int64 v85; // r15
  unsigned __int64 *v86; // r8
  __int64 v87; // r9
  int v88; // eax
  char v89; // cl
  unsigned __int64 v90; // rax
  _QWORD *v91; // r15
  __int64 v92; // r13
  unsigned __int64 *v93; // r8
  __int64 v94; // r9
  char v95; // r13
  unsigned __int64 v96; // rcx
  __int64 v97; // r15
  char v98; // al
  unsigned int v99; // ecx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // [rsp+28h] [rbp-3F0h]
  __int64 v104; // [rsp+28h] [rbp-3F0h]
  __int64 v105; // [rsp+30h] [rbp-3E8h]
  __int64 v106; // [rsp+38h] [rbp-3E0h]
  int SystemInformation; // [rsp+50h] [rbp-3C8h] BYREF
  int v108; // [rsp+54h] [rbp-3C4h]
  char v109; // [rsp+58h] [rbp-3C0h] BYREF
  char v110; // [rsp+59h] [rbp-3BFh] BYREF
  char v111[6]; // [rsp+5Ah] [rbp-3BEh] BYREF
  __int128 v112; // [rsp+60h] [rbp-3B8h] BYREF
  int v113; // [rsp+70h] [rbp-3A8h] BYREF
  int v114; // [rsp+74h] [rbp-3A4h] BYREF
  int v115; // [rsp+78h] [rbp-3A0h]
  __int64 v116; // [rsp+80h] [rbp-398h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-388h] BYREF
  unsigned __int16 v118; // [rsp+A0h] [rbp-378h] BYREF
  __int16 v119; // [rsp+A2h] [rbp-376h]
  unsigned __int64 v120; // [rsp+A8h] [rbp-370h]
  __int64 v121; // [rsp+B0h] [rbp-368h] BYREF
  unsigned __int64 v122; // [rsp+B8h] [rbp-360h] BYREF
  __int64 v123; // [rsp+C0h] [rbp-358h] BYREF
  __int128 v124; // [rsp+C8h] [rbp-350h] BYREF
  __m128i v125; // [rsp+D8h] [rbp-340h] BYREF
  unsigned int v126; // [rsp+E8h] [rbp-330h]
  unsigned __int64 v127; // [rsp+F0h] [rbp-328h] BYREF
  __int64 v128; // [rsp+F8h] [rbp-320h]
  __int64 v129; // [rsp+100h] [rbp-318h]
  __int64 v130; // [rsp+108h] [rbp-310h]
  UNICODE_STRING v131; // [rsp+110h] [rbp-308h] BYREF
  __int64 (__fastcall *v132)(_BYTE *, __int64); // [rsp+120h] [rbp-2F8h] BYREF
  __int64 v133; // [rsp+128h] [rbp-2F0h] BYREF
  struct _TEB *v134; // [rsp+138h] [rbp-2E0h]
  unsigned __int64 v135; // [rsp+140h] [rbp-2D8h] BYREF
  __int64 v136; // [rsp+148h] [rbp-2D0h]
  int v137; // [rsp+150h] [rbp-2C8h] BYREF
  const WCHAR *v138; // [rsp+158h] [rbp-2C0h]
  int v139; // [rsp+160h] [rbp-2B8h] BYREF
  _QWORD v140[2]; // [rsp+168h] [rbp-2B0h] BYREF
  __int64 v141; // [rsp+178h] [rbp-2A0h] BYREF
  unsigned __int64 v142; // [rsp+180h] [rbp-298h] BYREF
  __int64 v143; // [rsp+188h] [rbp-290h] BYREF
  int v144; // [rsp+190h] [rbp-288h]
  __int64 v145; // [rsp+198h] [rbp-280h]
  int *v146; // [rsp+1A0h] [rbp-278h]
  int v147; // [rsp+1A8h] [rbp-270h]
  __int128 v148; // [rsp+1B0h] [rbp-268h]
  __int64 v149; // [rsp+1C0h] [rbp-258h] BYREF
  int v150; // [rsp+1C8h] [rbp-250h]
  _BYTE v151[56]; // [rsp+1D0h] [rbp-248h] BYREF
  _OWORD v152[15]; // [rsp+210h] [rbp-208h] BYREF
  _QWORD v153[12]; // [rsp+300h] [rbp-118h] BYREF
  __int64 v154[15]; // [rsp+360h] [rbp-B8h] BYREF
  char v155; // [rsp+3DCh] [rbp-3Ch]
  __int64 retaddr; // [rsp+418h] [rbp+0h]

  v128 = a2;
  v130 = a1;
  v137 = 1441812;
  v138 = L"\\KnownDlls";
  qword_18015C2F0 = RtlEncodePointer(0LL);
  v3 = NtCurrentTeb();
  v134 = v3;
  ProcessEnvironmentBlock = (__int64)v3->ProcessEnvironmentBlock;
  dword_18015C360 = 88;
  byte_18015C364 = 1;
  qword_18015C378 = (__int64)&qword_18015C370;
  qword_18015C370 = (__int64)&qword_18015C370;
  qword_18015C388 = (__int64)&qword_18015C380;
  qword_18015C380 = (__int64)&qword_18015C380;
  qword_18015C398 = (__int64)&qword_18015C390;
  qword_18015C390 = (__int64)&qword_18015C390;
  v5 = 0;
  byte_18015C3A8 = 0;
  qword_18015C3B0 = 0LL;
  *(_QWORD *)(ProcessEnvironmentBlock + 24) = &dword_18015C360;
  sub_1800CDEB8((_QWORD *)ProcessEnvironmentBlock);
  v6 = 0;
  v7 = *(_DWORD *)(ProcessEnvironmentBlock + 184) == 1;
  v8 = *(_DWORD *)(ProcessEnvironmentBlock + 184) <= 1u;
  if ( *(_DWORD *)(ProcessEnvironmentBlock + 184) > 1u )
    v6 = 1024;
  dword_18015ADA0 = v6;
  v9 = 0;
  if ( !v8 )
    v9 = 1024;
  dword_18015AA5C = v9;
  v10 = dword_1801596D8;
  if ( v7 )
    v10 = 0;
  dword_1801596D8 = v10;
  sub_1800F110C();
  v11 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v12 = (_WORD *)(*(_QWORD *)(v11 + 104) + v11);
  if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
    v12 = *(_WORD **)(v11 + 104);
  v120 = (unsigned __int64)v12;
  v118 = *(_WORD *)(v11 + 96);
  v13 = v118;
  v119 = v118 + 2;
  if ( v118 >= 8u && *v12 == 92 && v12[1] == 63 && v12[2] == 63 && v12[3] == 92 )
  {
    v118 -= 8;
    v119 = v13 - 6;
    v120 = (unsigned __int64)(v12 + 4);
    *(_WORD *)(v11 + 96) -= 8;
    *(_WORD *)(v11 + 98) -= 8;
    *(_QWORD *)(v11 + 104) += 8LL;
  }
  v115 = 1;
  byte_18015C308 = 0;
  LOBYTE(v108) = 0;
  v114 = 0;
  RtlImageNtHeaderEx(3, *(_QWORD *)(ProcessEnvironmentBlock + 16), 0LL, &v121);
  v14 = v121;
  qword_18015C2A8 = v121;
  if ( byte_18015C298 && (*(_BYTE *)(v121 + 22) & 0x20) == 0 )
  {
    v15 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3589,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Secure processes must be large address aware\n");
      v15 = dword_180156A70;
    }
    if ( (v15 & 0x10) != 0 )
      __debugbreak();
    return 3221225659LL;
  }
  v17 = &unk_18015BFC0;
  v18 = 32LL;
  do
  {
    v17[1] = v17;
    *v17 = v17;
    v17 += 2;
    --v18;
  }
  while ( v18 );
  RtlImageNtHeaderEx(3, a2, 0LL, v140);
  v19 = *(_DWORD *)(v140[0] + 80LL);
  sub_18002AE58(a2, v19);
  sub_1800DAFC0(a2, v19);
  sub_1800D078C();
  sub_1800259B4(1);
  if ( (unsigned int)sub_18001F704() == 1 )
    qword_18015C300 = (__int64)&off_1801110E0;
  v152[12] = xmmword_18016F370;
  v20 = (_mm_srli_si128((__m128i)xmmword_18016F370, 8).m128i_u64[0] >> 4) & 3;
  byte_18015C2B0 = (_BYTE)v20 == 1;
  if ( (_BYTE)v20 == 1 || (v152[13] = xmmword_18016F370, v21 = 0, (_BYTE)v20 == 3) )
    v21 = 1;
  byte_18015C2F8 = v21;
  result = sub_1800CD0D8(&v118, ProcessEnvironmentBlock, a2, &v123, &v116, (__int64)&v141);
  SystemInformation = result;
  if ( (int)result < 0 )
  {
    v22 = dword_180156A70;
    if ( (dword_180156A70 & 3) == 0 )
      goto LABEL_33;
    LODWORD(v103) = v3->ClientId.UniqueProcess;
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3735,
      (unsigned int)"LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      v103,
      result);
    goto LABEL_32;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    dword_180156A70 |= 1u;
  if ( (dword_180156A70 & 5) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3782,
      (unsigned int)"LdrpInitializeProcess",
      2,
      "Initializing process 0x%p\n",
      v3->ClientId.UniqueProcess);
  v136 = 0LL;
  SpareUlong0 = v3->SpareUlong0;
  dword_18015C290 = SpareUlong0 > 0;
  if ( v14 && *(_WORD *)(v14 + 24) == 267 && SpareUlong0 <= 0 )
  {
    byte_18015C308 = 1;
    LOBYTE(v14) = 1;
    v108 = v14;
    v5 = 1;
    result = sub_1800CAFA8(*(_QWORD *)(ProcessEnvironmentBlock + 16));
    SystemInformation = result;
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    LOBYTE(v14) = v108;
  }
  if ( !dword_18015C290 && !byte_18015C308 )
  {
    v24 = sub_18001014C(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v139, &v133);
    v25 = v133;
    if ( v24 < 0 )
      v25 = 0LL;
    v133 = v25;
    if ( v25 )
    {
      byte_18015C308 = 1;
      LODWORD(v14) = (unsigned __int8)v14;
      if ( (*(_BYTE *)(v25 + 16) & 1) != 0 )
        LODWORD(v14) = 1;
      v108 = v14;
    }
  }
  qword_18015C350 = v128;
  if ( !dword_18015C290 )
    v136 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  qword_18015BEC0 = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v125 = *(__m128i *)(RtlNormalizeProcessParams(*(_QWORD *)(ProcessEnvironmentBlock + 32)) + 96);
  v26 = 0LL;
  if ( !dword_18015C290 && (!byte_18015C308 || !v5) )
    v26 = sub_18002B3EC(*(_QWORD *)(ProcessEnvironmentBlock + 16));
  v27 = v26;
  memset(v153, 0, sizeof(v153));
  v28 = 2;
  LODWORD(v153[0]) = 96;
  if ( v27 )
  {
    v29 = *v27;
    if ( *v27 >= 0x10 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~v27[3];
      v29 = *v27;
    }
    if ( v29 >= 0x14 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= v27[4];
      v29 = *v27;
    }
    if ( v29 >= 0x18 && v27[5] )
    {
      qword_18015BEC0 = -10000LL * (int)v27[5];
      v29 = *v27;
    }
    if ( v29 >= 0x4C )
    {
      v30 = v27[18];
      if ( v30 )
      {
        v31 = v30 & 0xFFFF0FFF;
        if ( v31 )
          v28 = v31;
      }
    }
    if ( v29 >= 0x20 && *((_QWORD *)v27 + 3) )
    {
      v153[3] = *((_QWORD *)v27 + 3);
      v29 = *v27;
    }
    if ( v29 >= 0x28 && *((_QWORD *)v27 + 4) )
    {
      v153[4] = *((_QWORD *)v27 + 4);
      v29 = *v27;
    }
    if ( v29 >= 0x38 && *((_QWORD *)v27 + 6) )
    {
      v153[5] = *((_QWORD *)v27 + 6);
      v29 = *v27;
    }
    if ( v29 >= 0x40 )
    {
      v32 = v153[6];
      if ( *((_QWORD *)v27 + 7) )
        v32 = *((_QWORD *)v27 + 7);
      v153[6] = v32;
    }
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    dword_180156A70 |= 1u;
  v33 = byte_18015BEB8;
  if ( qword_18015BEC0 < -36000000000LL )
    v33 = 1;
  byte_18015BEB8 = v33;
  dword_18015BEA8 = 0;
  RtlInitializeSListHead(&stru_18015D0E0);
  v34 = &unk_18015AC20;
  do
  {
    *v34 = v34 + 6;
    v34 += 6;
  }
  while ( v34 <= qword_18015AD40 );
  *v34 = 0LL;
  RtlInterlockedPushListSList(&stru_18015D0E0, (signed __int64)&unk_18015AC20, qword_18015AD70, 8);
  SystemInformation = 0;
  *(_QWORD *)(ProcessEnvironmentBlock + 824) = &dword_18015C330;
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &dword_18015C2E0;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &dword_18015C2C0;
  dword_18015C330 = 128;
  qword_18015C338 = ProcessEnvironmentBlock + 832;
  *(_DWORD *)(ProcessEnvironmentBlock + 832) |= 1u;
  *(_QWORD *)(ProcessEnvironmentBlock + 816) = ProcessEnvironmentBlock + 808;
  *(_QWORD *)(ProcessEnvironmentBlock + 808) = ProcessEnvironmentBlock + 808;
  dword_18015C2E0 = 64;
  qword_18015C2E8 = ProcessEnvironmentBlock + 128;
  *(_DWORD *)(ProcessEnvironmentBlock + 128) |= 1u;
  dword_18015C2C0 = 1024;
  qword_18015C2C8 = ProcessEnvironmentBlock + 576;
  *(_DWORD *)(ProcessEnvironmentBlock + 576) |= 1u;
  if ( dword_18015C290 )
    RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  v35 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
  if ( (v35 & 0x1000) != 0 || (v36 = byte_18015D404) != 0 )
  {
    v37 = 24;
    v113 = 24;
    if ( byte_18015C298 )
    {
      ImageFileExecutionOptions = -1073741772;
    }
    else
    {
      LOBYTE(v105) = 0;
      ImageFileExecutionOptions = LdrQueryImageFileExecutionOptionsEx(
                                    (__int64)&v118,
                                    (__int64)L"StackTraceDatabaseSizeInMb",
                                    4u,
                                    (__int64)&v113,
                                    4,
                                    0LL);
      v37 = v113;
    }
    SystemInformation = ImageFileExecutionOptions;
    if ( ImageFileExecutionOptions >= 0 && v37 >= 0x18 )
    {
      if ( v37 <= 0x80 )
        v39 = v37 << 20;
      else
        v39 = 0x8000000LL;
    }
    else
    {
      v39 = 25165824LL;
    }
    if ( (dword_180156A70 & 5) != 0 )
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4071,
        (unsigned int)"LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v39 >> 20);
    SystemInformation = sub_1800F6B98(0LL, 0LL, v39);
    v35 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
    v36 = byte_18015D404;
  }
  if ( (v35 & 0x1000) != 0 || v36 )
    byte_18015AC08 = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    byte_18015AC08 = 1;
    byte_18015AC09 = 1;
  }
  result = RtlInitializeCriticalSectionEx((__int64)&unk_18015BE80, 0, 0);
  SystemInformation = result;
  if ( (int)result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &unk_18015BE80;
  result = sub_1800EB1A0(&v118);
  SystemInformation = result;
  if ( (int)result < 0 )
    return result;
  v152[14] = xmmword_18016F370;
  if ( (((unsigned __int64)xmmword_18016F370 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  if ( dword_18015C290 || *(_WORD *)(v121 + 24) == 267 )
  {
    v40 = 0LL;
    v41 = 0LL;
  }
  else
  {
    if ( *(_WORD *)(v121 + 72) <= 3u && *(_WORD *)(v121 + 74) < 0x33u )
      v28 |= 0x10000u;
    v40 = *(unsigned __int64 **)(v121 + 112);
    v41 = *(_QWORD *)(v121 + 120);
  }
  Heap = RtlCreateHeap(v28, 0LL, v40, v41, 0LL, (__int64)v153);
  v43 = (void *)Heap;
  if ( !Heap )
  {
    v44 = dword_180156A70;
    if ( (dword_180156A70 & 3) == 0 )
      goto LABEL_126;
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4173,
      (unsigned int)"LdrpInitializeProcess",
      0,
      "Creating the process heap failed\n");
    goto LABEL_125;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = Heap;
  RtlInitializeCriticalSection((__int64)&unk_18015CA80);
  qword_18015CA78 = (__int64)&qword_18015CA70;
  qword_18015CA70 = (__int64)&qword_18015CA70;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
  {
    v45 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 71200LL);
    qword_18015D448 = (__int64)v45;
    if ( v45 )
      memset(v45, 0, 0x11620uLL);
  }
  sub_180072AD0((__int64)v134);
  qword_18015C288 = (__int64)v43;
  if ( ((unsigned __int8)&ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  ListHead = 0uLL;
  qword_18015A418 = 0LL;
  SystemInformation = ZwQuerySystemInformation();
  v46 = qword_18015ADA8;
  if ( SystemInformation >= 0 )
    v46 = v140[1];
  qword_18015ADA8 = v46;
  dword_18015C294 = RtlCreateTagHeap(v43, 0, (__int64)L"NTDLL!", L"!Process");
  result = sub_18007D0E0();
  SystemInformation = result;
  if ( (int)result < 0 )
    return result;
  EtwEventRegister(&qword_180114528, 0LL, 0LL, &qword_18015A410);
  EtwEventRegister(qword_180118380, (__int64)sub_1800F2530, 0LL, (unsigned __int64 *)&qword_18015AA68);
  EtwEventRegister(qword_180115DD8, (__int64)sub_1800FD290, 0LL, (unsigned __int64 *)&qword_18015D2D8);
  if ( (byte_18015D028 & 8) != 0 )
    sub_1800726B8(&dword_180156650);
  result = sub_18004B9A4();
  SystemInformation = result;
  if ( (int)result < 0 )
    return result;
  result = sub_18007D464();
  SystemInformation = result;
  if ( (int)result < 0 )
    return result;
  v47 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v129 = v47;
  v125 = *(__m128i *)(v47 + 96);
  v120 = _mm_srli_si128(v125, 8).m128i_u64[0];
  if ( v123 || v116 )
  {
    SystemInformation = sub_18004AEE4(v116, v123, (__int64)L"DebugProcessHeapOnly", 4u, (__int64)&v114, 4, v105, 0LL);
    if ( SystemInformation >= 0 && dword_1801563E8 && v114 )
    {
      dword_1801563E8 = 0;
      *(_DWORD *)off_1801563E0 &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx((__int64)&v131, NtSystemRoot);
  v49 = v131.Length + 40;
  v50 = RtlAllocateHeap((__int64)v43, 0, (unsigned int)v131.Length + 38 + 2LL);
  if ( !v50 )
    return 3221225495LL;
  LOWORD(v124) = 0;
  WORD1(v124) = v49;
  *((_QWORD *)&v124 + 1) = v50;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v124, (__int16 *)&v131);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v124, word_180110350);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x42) != 2 )
  {
    v51 = 48LL;
    v144 = 48;
    v145 = 0LL;
    v147 = 64;
    v146 = &v137;
    v148 = 0LL;
    result = ZwOpenDirectoryObject();
    SystemInformation = result;
    if ( (_DWORD)result != -1073741772 || (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x40) == 0 )
    {
      if ( (int)result >= 0 )
      {
        v144 = 48;
        v145 = qword_18015BEF0;
        v147 = 64;
        v146 = (int *)&unk_180110B08;
        v148 = 0LL;
        result = ZwOpenSymbolicLinkObject();
        SystemInformation = result;
        if ( (int)result >= 0 )
        {
          while ( 1 )
          {
            v54 = RtlAllocateHeap((__int64)v43, 0, v51);
            if ( !v54 )
              return 3221225495LL;
            word_18015BED0 = 0;
            word_18015BED2 = v51;
            qword_18015BED8 = v54;
            result = ZwQuerySymbolicLinkObject();
            SystemInformation = result;
            if ( (int)result >= 0 )
            {
              ZwClose();
              v47 = v129;
              goto LABEL_167;
            }
            if ( (_DWORD)result != -1073741789 )
            {
              v22 = dword_180156A70;
              if ( (dword_180156A70 & 3) == 0 )
                goto LABEL_33;
              LODWORD(v104) = result;
              sub_1800CA554(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                4490,
                (unsigned int)"LdrpInitializeProcess",
                0,
                "Querying the known DLL directory link object failed with status 0x%08lx\n",
                v104);
              goto LABEL_32;
            }
            RtlFreeHeap((__int64)v43, 0, v54);
            v51 = v126;
          }
        }
        v22 = dword_180156A70;
        if ( (dword_180156A70 & 3) == 0 )
          goto LABEL_33;
        LODWORD(v105) = result;
        v52 = (int *)&unk_180110B08;
        v53 = 4455;
      }
      else
      {
        v22 = dword_180156A70;
        if ( (dword_180156A70 & 3) == 0 )
          goto LABEL_33;
        LODWORD(v105) = result;
        v52 = &v137;
        v53 = 4432;
      }
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v53,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        v52,
        v105);
LABEL_32:
      result = (unsigned int)SystemInformation;
      v22 = dword_180156A70;
      goto LABEL_33;
    }
    if ( (dword_180156A70 & 5) != 0 )
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4422,
        (unsigned int)"LdrpInitializeProcess",
        2,
        "KnownDLL directory does not yet exist.  SMSS will create it.\n");
    SystemInformation = 0;
  }
LABEL_167:
  if ( dword_18015C290 || byte_18015C298 )
  {
    UnicodeString = v131;
  }
  else
  {
    v55 = *(__m128i *)(v47 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v47 + 56);
    v56 = (wchar_t *)_mm_srli_si128(v55, 8).m128i_u64[0];
    UnicodeString.Buffer = v56;
    if ( !v56 || !UnicodeString.Length || !*v56 )
    {
      v57 = (wchar_t *)RtlAllocateHeap((__int64)v43, 0, 8LL);
      UnicodeString.Buffer = v57;
      if ( !v57 )
      {
        v44 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            4538,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Allocating a buffer to hold the current working directory failed\n");
LABEL_125:
          v44 = dword_180156A70;
          goto LABEL_126;
        }
        goto LABEL_126;
      }
      v115 = 0;
      v58 = RtlGetNtSystemRoot();
      *(_DWORD *)v57 = *(_DWORD *)v58;
      v57[2] = *(_WORD *)(v58 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  sub_18007F528();
  v59 = (unsigned __int16)v124;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
    v59 = 2LL * (unsigned __int16)v124 + 22;
  v60 = v59;
  if ( (dword_1801596D4 & 1) == 0 )
  {
    v60 = v59 + 2 * (v131.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v47 + 80) = 0;
  }
  *((_QWORD *)&v112 + 1) = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v60);
  if ( !*((_QWORD *)&v112 + 1) )
  {
    v44 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4621,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to allocate the system dirs string!\n");
      goto LABEL_125;
    }
LABEL_126:
    if ( (v44 & 0x10) != 0 )
      __debugbreak();
    return 3221225495LL;
  }
  LOWORD(v112) = 0;
  WORD1(v112) = v60;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v112, (__int16 *)&v124);
  v61 = (unsigned __int16)v112;
  *(_WORD *)(*((_QWORD *)&v112 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v112 >> 1) - 2) = 59;
  xmmword_18015CFC0 = v112;
  xmmword_18015C2D0 = v112;
  LOWORD(v61) = v61 - 2;
  LOWORD(xmmword_18015C2D0) = v61;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v112, (__int16 *)&v124);
    RtlAppendUnicodeToString((unsigned __int16 *)&v112, L"forwarders;");
  }
  if ( v60 > v59 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v112, (__int16 *)&v131);
    RtlAppendUnicodeToString((unsigned __int16 *)&v112, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v112, (__int16 *)&v131);
    RtlAppendUnicodeToString((unsigned __int16 *)&v112, ";");
    xmmword_18015CFD0 = v112;
  }
  if ( (unsigned int)(dword_18015D400 - 1) <= 0xFFFFFFFD )
    sub_1800CC838((__int128 *)v125.m128i_i8, v61);
  v62 = v128;
  RtlImageNtHeaderEx(3, v128, 0LL, &v127);
  v63 = sub_180040F58(0LL);
  v64 = v63;
  if ( !v63 )
  {
    v44 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4728,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the system DLL failed\n");
      goto LABEL_125;
    }
    goto LABEL_126;
  }
  qword_18015C348 = v63;
  *(_DWORD *)(*(_QWORD *)(v63 + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(qword_18015C348 + 152) - 52LL) = -1;
  v65 = qword_18015C348;
  *(_DWORD *)(qword_18015C348 + 104) |= 0x204u;
  *(_QWORD *)(v65 + 248) -= qword_18016F2E0;
  v65 += 72LL;
  *(_OWORD *)v65 = v124;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v65, word_180110B38);
  v66 = qword_18015C348;
  *(_OWORD *)(qword_18015C348 + 88) = *(_OWORD *)word_180110B38;
  *(_QWORD *)(v66 + 48) = v62;
  sub_18002C268(v66);
  sub_18003BC9C(*(_QWORD *)(qword_18015C348 + 48), qword_18015C348 + 72, 0x14A5u);
  sub_18007F390(qword_18015C348, v127, v67, v68);
  result = sub_18002AFBC(qword_18015C348, 0, 1);
  SystemInformation = result;
  if ( (int)result < 0 )
    return result;
  sub_18003BC9C(*(_QWORD *)(qword_18015C348 + 48), qword_18015C348 + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(qword_18015C348 + 152) + 56LL) = 9;
  sub_18007A78C();
  v69 = (_QWORD *)(v64 + 32);
  v70 = qword_18015C390;
  if ( *(__int64 **)(qword_18015C390 + 8) != &qword_18015C390 )
    __fastfail(3u);
  *v69 = qword_18015C390;
  *(_QWORD *)(v64 + 40) = &qword_18015C390;
  *(_QWORD *)(v70 + 8) = v69;
  qword_18015C390 = v64 + 32;
  result = sub_180059D2C();
  SystemInformation = result;
  if ( (int)result < 0 )
  {
    v22 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      LODWORD(v104) = result;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4807,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to initialize Parallel loader, st = 0x%x\n",
        v104);
      goto LABEL_32;
    }
LABEL_33:
    if ( (v22 & 0x10) != 0 )
      __debugbreak();
    return result;
  }
  sub_1800435B4(0);
  sub_180042054(0LL, 0LL, v154);
  memset(v152, 0, 0xC0uLL);
  *(_QWORD *)&v152[1] = v154;
  LODWORD(v152[2]) = 512;
  v152[0] = v125;
  *((_QWORD *)&v152[2] + 1) = &SystemInformation;
  v71 = sub_180040F58((__int64)v152);
  v72 = v71;
  if ( !v71 )
  {
    v44 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4828,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the executable failed\n");
      goto LABEL_125;
    }
    goto LABEL_126;
  }
  qword_18015BF88 = v71;
  v73 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(qword_18015BF88 + 152) + 24LL) = -1;
    --v73;
  }
  while ( v73 );
  *(_WORD *)(**(_QWORD **)(qword_18015BF88 + 152) - 52LL) = -1;
  v74 = qword_18015BF88;
  *(__m128i *)(qword_18015BF88 + 72) = v125;
  v75 = *(_DWORD *)(v74 + 104) | 4;
  *(_DWORD *)(v74 + 104) = v75;
  v76 = v108;
  if ( byte_18015C308 )
  {
    v77 = v75 | 0x400000;
    *(_DWORD *)(v74 + 104) = v77;
    if ( v76 )
      *(_DWORD *)(v74 + 104) = v77 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v74 + 248) = 0LL;
  v78 = 0LL;
  v79 = v125.m128i_i64[1] + v125.m128i_u16[0];
  v80 = (_WORD *)v79;
  if ( v79 && v79 > v125.m128i_i64[1] )
  {
    while ( 1 )
    {
      v81 = v80--;
      if ( *v80 == 92 )
        break;
      if ( (unsigned __int64)v80 <= v125.m128i_i64[1] )
        goto LABEL_216;
    }
    v78 = v81;
  }
LABEL_216:
  if ( v78 )
  {
    v82 = v79 - (_WORD)v78;
    *(_WORD *)(v74 + 88) = v82;
    if ( v125.m128i_u16[1] - (unsigned int)v125.m128i_u16[0] >= 2 )
      v82 += 2;
    *(_WORD *)(v74 + 90) = v82;
    *(_QWORD *)(v74 + 96) = v78;
  }
  else
  {
    *(_OWORD *)(v74 + 88) = *(_OWORD *)(v72 + 72);
  }
  v83 = *(const void **)(ProcessEnvironmentBlock + 16);
  v84 = v83;
  v85 = v121;
  if ( *(const void **)(v121 + 48) != v83 && !v76 && !dword_18015C290 )
  {
    result = sub_1800828E0(v83);
    SystemInformation = result;
    if ( (int)result < 0 )
      return result;
    v84 = *(const void **)(ProcessEnvironmentBlock + 16);
    v74 = qword_18015BF88;
  }
  *(_QWORD *)(v74 + 48) = v84;
  sub_18002C268(v74);
  if ( (dword_180156A70 & 5) != 0 )
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4948,
      (unsigned int)"LdrpInitializeProcess",
      2,
      "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
      qword_18015BF88 + 88,
      qword_18015BF88 + 72,
      &UnicodeString,
      &DestinationString);
  sub_18003BC9C(*(_QWORD *)(qword_18015BF88 + 48), qword_18015BF88 + 72, 0x14A5u);
  sub_18007F390(qword_18015BF88, v85, v86, v87);
  result = sub_18002AFBC(qword_18015BF88, 0, dword_18015C290 == 0);
  SystemInformation = result;
  if ( (int)result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(qword_18015BF88 + 152) + 56LL) = 9;
  v88 = sub_180076B24(&UnicodeString.Length);
  SystemInformation = v88;
  if ( v88 < 0 )
  {
    v89 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      LODWORD(v105) = v88;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4985,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v105);
      v89 = dword_180156A70;
    }
    if ( (v89 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v115 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( dword_18016F29C )
  {
    v90 = sub_180040F58(0LL);
    v91 = (_QWORD *)v90;
    if ( !v90 )
    {
      v44 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5008,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Allocating a data table entry for the application verifier DLL failed\n");
        goto LABEL_125;
      }
      goto LABEL_126;
    }
    *(_DWORD *)(*(_QWORD *)(v90 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v90 + 152) - 52LL) = -1;
    v92 = v141;
    *(_DWORD *)(v90 + 104) |= *(_DWORD *)(v141 + 104);
    *(_QWORD *)(v90 + 248) = *(_QWORD *)(v92 + 248);
    *(_WORD *)(v90 + 110) = 0;
    *(_OWORD *)(v90 + 72) = *(_OWORD *)(v92 + 72);
    *(_OWORD *)(v90 + 88) = *(_OWORD *)(v92 + 88);
    *(_DWORD *)(v90 + 128) = *(_DWORD *)(v92 + 128);
    *(_QWORD *)(v90 + 48) = *(_QWORD *)(v92 + 48);
    sub_18002C268(v90);
    sub_18003BC9C(v91[6], (__int64)(v91 + 9), 0x14A5u);
    result = RtlImageNtHeaderEx(3, v91[6], 0LL, &v127);
    SystemInformation = result;
    if ( (int)result < 0 )
      return result;
    sub_18007F390((__int64)v91, v127, v93, v94);
    result = sub_18002AFBC((__int64)v91, 0, 1);
    SystemInformation = result;
    if ( (int)result < 0 )
      return result;
    v91[7] = *(_QWORD *)(v92 + 56);
    sub_18003BC9C(v91[6], (__int64)(v91 + 9), 0x14ADu);
    *(_DWORD *)(v91[19] + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (dword_18016F29C & 2) != 0 )
    {
      result = sub_1800D3DA8(0, 0, 0, 1, v128, 0LL);
      SystemInformation = result;
      if ( (int)result < 0 )
        return result;
      if ( (dword_18016F29C & 2) != 0 )
      {
        *(_DWORD *)(v91[19] + 56LL) = 9;
        result = (unsigned int)SystemInformation;
      }
    }
    else
    {
      v109 = 0;
      result = sub_180054D18(v91[19], 0LL, &v109);
      SystemInformation = result;
    }
    if ( (int)result < 0 )
      return result;
    v85 = v121;
  }
  sub_180047B2C();
  if ( dword_18015C290 )
  {
    if ( v123 )
    {
      ZwClose();
      v123 = 0LL;
      if ( qword_18015BEE0 )
      {
        ZwClose();
        qword_18015BEE0 = 0LL;
      }
    }
    if ( v116 )
    {
      ZwClose();
      v116 = 0LL;
    }
    result = sub_180081A8C((__int16 *)&v124);
    SystemInformation = result;
    if ( (int)result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        sub_1800CCA4C();
      dword_18015CFB8 = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      qword_18016F220(v130);
LABEL_335:
      if ( v123 )
        ZwClose();
      if ( v116 )
        ZwClose();
      return 0LL;
    }
    return result;
  }
  v135 = 0LL;
  if ( byte_18015C308 )
  {
    result = sub_180081044(&v135);
    SystemInformation = result;
    if ( (int)result < 0 )
      return result;
    v95 = v108;
    if ( (_BYTE)v108 )
    {
      result = sub_18008325C(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      SystemInformation = result;
      if ( (int)result < 0 )
        return result;
    }
    if ( (v134->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v130 + 128) = __ROR8__(qword_18015C3C0, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  else
  {
    v95 = v108;
  }
  result = sub_18004F9F4();
  SystemInformation = result;
  if ( (int)result < 0 )
  {
    v22 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      LODWORD(v104) = result;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5235,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing TLS slots failed with status 0x%08lx\n",
        v104);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  if ( v135 )
  {
    v110 = 0;
    result = sub_180054D18(*(_QWORD *)(v135 + 152), 0LL, &v110);
    SystemInformation = result;
    if ( (int)result < 0 )
    {
      v22 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        LODWORD(v104) = result;
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5254,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
          v104);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
  }
  v132 = 0LL;
  if ( (unsigned __int16)(*(_WORD *)(v85 + 92) - 2) <= 1u )
  {
    result = LdrLoadDll(16385LL, 0LL, (__int64)&unk_1801101B0, &v122);
    SystemInformation = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741515 )
      {
        v22 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          LODWORD(v105) = result;
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5413,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &unk_1801101B0,
            v105);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      result = LdrLoadDll(16385LL, 0LL, (__int64)word_180110020, &v122);
      SystemInformation = result;
      if ( (int)result < 0 )
      {
        v22 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          LODWORD(v105) = result;
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5386,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            word_180110020,
            v105);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      result = sub_18007BD78();
      SystemInformation = result;
      if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741515 )
      {
        v22 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          LODWORD(v104) = result;
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5402,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            v104);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      SystemInformation = 0;
      v96 = v122;
    }
    else
    {
      result = LdrGetProcedureAddressForCaller(v122, &qword_180110B18, 0, &qword_18015BEB0, 0, retaddr);
      SystemInformation = result;
      if ( (int)result < 0 )
      {
        v22 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          LODWORD(v106) = result;
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5300,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &qword_180110B18,
            &unk_1801101B0,
            v106);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      LdrGetProcedureAddressForCaller(v122, &qword_180110B28, 0, &v132, 0, retaddr);
      result = sub_18003F7F8();
      SystemInformation = result;
      if ( (int)result < 0 )
        return result;
      result = sub_18007BD78();
      SystemInformation = result;
      if ( (int)result < 0 )
        return result;
      result = sub_180041E34(word_180110020, 0, &v142);
      SystemInformation = result;
      if ( (int)result < 0 )
      {
        v22 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          LODWORD(v105) = result;
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5368,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Finding \"%wZ\" failed with status 0x%08lx\n",
            word_180110020,
            v105);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      v96 = *(_QWORD *)(v142 + 48);
    }
    result = LdrGetProcedureAddressForCaller(v96, &qword_180110B48, 0, &v143, 0, retaddr);
    SystemInformation = result;
    if ( (int)result < 0 )
    {
      v22 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        LODWORD(v104) = result;
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5431,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Finding KernelbasePostInit failed with status 0x%08lx\n",
          v104);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
    result = _guard_dispatch_icall_fptr();
    SystemInformation = result;
    if ( (int)result < 0 )
    {
      v22 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        LODWORD(v104) = result;
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5439,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Calling KernelbasePostInit failed with status 0x%08lx\n",
          v104);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
    SystemInformation = 0;
  }
  sub_1800435B4(0);
  sub_18007EDB4(0LL);
  v97 = v136;
  if ( v136 && *(_DWORD *)(v136 + 8) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    sub_180055808(v97);
  }
  v98 = byte_18015AC08;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v98 = 1;
  byte_18015AC08 = v98;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
  {
    *(_DWORD *)(v129 + 1036) = 1;
    v99 = 1;
  }
  else
  {
    v99 = *(_DWORD *)(v129 + 1036);
  }
  sub_180056E90(v99);
  dword_18015CFB8 = 1;
  *(_DWORD *)(*(_QWORD *)(qword_18015BF88 + 152) + 56LL) = 2;
  **((_DWORD **)&v152[2] + 1) = 0;
  if ( v95 )
  {
    result = sub_180082EDC(qword_18015BF88);
  }
  else
  {
    LODWORD(v152[2]) |= 1u;
    sub_180039100((__int64)v152);
    sub_1800435B4(1);
    result = (unsigned int)SystemInformation;
    if ( SystemInformation < 0 )
      goto LABEL_316;
    result = sub_18002DF14(qword_18015BF88, *((__int64 *)&v152[2] + 1));
  }
  SystemInformation = result;
  if ( (int)result < 0 )
  {
LABEL_316:
    v22 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      LODWORD(v104) = result;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5651,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
        v104);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  dword_18015CFB8 = 2;
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    sub_1800CCA4C();
  sub_180047B2C();
  if ( !qword_18015BEB0
    || (result = _guard_dispatch_icall_fptr(), SystemInformation = result, (int)result >= 0)
    && (result = sub_180080B70(v132), SystemInformation = result, (int)result >= 0) )
  {
    qword_18015C320 = v130;
    sub_1800435B4(0);
    sub_180046FBC();
    v111[0] = 0;
    SystemInformation = sub_180054D18(*(_QWORD *)(qword_18015BF88 + 152), *((__int64 *)&v152[2] + 1), v111);
    sub_180046F60(v100, 9, SystemInformation);
    sub_18006B490(*(_QWORD **)(qword_18015BF88 + 152), *((__int64 *)&v152[2] + 1));
    sub_180047B2C();
    qword_18015C320 = 0LL;
    if ( v155 )
      RtlReleasePath(v154[0]);
    result = (unsigned int)SystemInformation;
    if ( SystemInformation < 0 )
    {
      v22 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        LODWORD(v104) = SystemInformation;
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5786,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          v104);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
    if ( *(_WORD *)(qword_18015BF88 + 110) )
    {
      v149 = 72LL;
      v150 = 1;
      memset(v151, 0, sizeof(v151));
      RtlActivateActivationContextUnsafeFast((__int64)&v149, *(_QWORD *)(qword_18015BF88 + 136));
      sub_18003B5F8(1, qword_18015BF88, v101, v102);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v149);
    }
    if ( byte_18015CFB4 && !(unsigned __int8)_guard_dispatch_icall_fptr() )
    {
      byte_18015CFB4 = 0;
      LdrUnloadDll(qword_18015C340);
      qword_18015C340 = 0LL;
    }
    if ( *(_QWORD *)(ProcessEnvironmentBlock + 560) )
      _guard_dispatch_icall_fptr();
    goto LABEL_335;
  }
  return result;
}
