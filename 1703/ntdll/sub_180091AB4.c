/*
 * XREFs of sub_180091AB4 @ 0x180091AB4
 * Callers:
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 * Callees:
 *     sub_18000BBF4 @ 0x18000BBF4 (sub_18000BBF4.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     RtlInitializeCriticalSectionEx @ 0x18000F440 (RtlInitializeCriticalSectionEx.c)
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     LdrUnloadDll @ 0x180011CF0 (LdrUnloadDll.c)
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_18001A028 @ 0x18001A028 (sub_18001A028.c)
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_18001A58C @ 0x18001A58C (sub_18001A58C.c)
 *     sub_18001A828 @ 0x18001A828 (sub_18001A828.c)
 *     EtwEventRegister @ 0x18001ADD0 (EtwEventRegister.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180030138 @ 0x180030138 (sub_180030138.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     RtlImageNtHeaderEx @ 0x180033760 (RtlImageNtHeaderEx.c)
 *     sub_180039C9C @ 0x180039C9C (sub_180039C9C.c)
 *     sub_18003A72C @ 0x18003A72C (sub_18003A72C.c)
 *     sub_18003A7B0 @ 0x18003A7B0 (sub_18003A7B0.c)
 *     sub_18003A99C @ 0x18003A99C (sub_18003A99C.c)
 *     LdrLoadDll @ 0x18003AED0 (LdrLoadDll.c)
 *     RtlGetNtSystemRoot @ 0x18003BA70 (RtlGetNtSystemRoot.c)
 *     sub_18003BE90 @ 0x18003BE90 (sub_18003BE90.c)
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     sub_18003C49C @ 0x18003C49C (sub_18003C49C.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800416D0 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_1800417FC @ 0x1800417FC (sub_1800417FC.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180043B20 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_1800584E4 @ 0x1800584E4 (sub_1800584E4.c)
 *     RtlSetBits @ 0x180059A60 (RtlSetBits.c)
 *     sub_180061420 @ 0x180061420 (sub_180061420.c)
 *     sub_180062A14 @ 0x180062A14 (sub_180062A14.c)
 *     RtlWow64GetCurrentCpuArea @ 0x180068BF0 (RtlWow64GetCurrentCpuArea.c)
 *     sub_18006EEF8 @ 0x18006EEF8 (sub_18006EEF8.c)
 *     RtlReleasePath @ 0x18006F830 (RtlReleasePath.c)
 *     sub_18006FC38 @ 0x18006FC38 (sub_18006FC38.c)
 *     sub_18006FF7C @ 0x18006FF7C (sub_18006FF7C.c)
 *     RtlEncodePointer @ 0x180077840 (RtlEncodePointer.c)
 *     RtlInitializeSListHead @ 0x1800779F0 (RtlInitializeSListHead.c)
 *     sub_180078290 @ 0x180078290 (sub_180078290.c)
 *     sub_18007B1E4 @ 0x18007B1E4 (sub_18007B1E4.c)
 *     sub_18007C1E0 @ 0x18007C1E0 (sub_18007C1E0.c)
 *     LdrQueryImageFileExecutionOptionsEx @ 0x18007C2C0 (LdrQueryImageFileExecutionOptionsEx.c)
 *     sub_18007DCD4 @ 0x18007DCD4 (sub_18007DCD4.c)
 *     RtlSetHeapInformation @ 0x18007EF50 (RtlSetHeapInformation.c)
 *     sub_18007FE68 @ 0x18007FE68 (sub_18007FE68.c)
 *     sub_180081774 @ 0x180081774 (sub_180081774.c)
 *     RtlCreateTagHeap @ 0x180081820 (RtlCreateTagHeap.c)
 *     sub_1800819C4 @ 0x1800819C4 (sub_1800819C4.c)
 *     sub_1800831CC @ 0x1800831CC (sub_1800831CC.c)
 *     sub_18008350C @ 0x18008350C (sub_18008350C.c)
 *     sub_1800841E4 @ 0x1800841E4 (sub_1800841E4.c)
 *     sub_180085C94 @ 0x180085C94 (sub_180085C94.c)
 *     sub_180085EDC @ 0x180085EDC (sub_180085EDC.c)
 *     sub_1800867F4 @ 0x1800867F4 (sub_1800867F4.c)
 *     sub_1800874C4 @ 0x1800874C4 (sub_1800874C4.c)
 *     sub_1800888F8 @ 0x1800888F8 (sub_1800888F8.c)
 *     sub_180088E9C @ 0x180088E9C (sub_180088E9C.c)
 *     sub_18008AA3C @ 0x18008AA3C (sub_18008AA3C.c)
 *     RtlNormalizeProcessParams @ 0x18008D7E0 (RtlNormalizeProcessParams.c)
 *     sub_1800900A4 @ 0x1800900A4 (sub_1800900A4.c)
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 *     sub_1800939F0 @ 0x1800939F0 (sub_1800939F0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 *     ZwOpenDirectoryObject @ 0x1800A5E00 (ZwOpenDirectoryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1800A7730 (ZwOpenSymbolicLinkObject.c)
 *     ZwQuerySymbolicLinkObject @ 0x1800A7D10 (ZwQuerySymbolicLinkObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     RtlInterlockedPushListSList @ 0x1800A8E30 (RtlInterlockedPushListSList.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800D6D28 @ 0x1800D6D28 (sub_1800D6D28.c)
 *     sub_1800D6F48 @ 0x1800D6F48 (sub_1800D6F48.c)
 *     sub_1800D75C8 @ 0x1800D75C8 (sub_1800D75C8.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 *     sub_1800F8C24 @ 0x1800F8C24 (sub_1800F8C24.c)
 */

__int64 __fastcall sub_180091AB4(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // r12
  __int64 ProcessEnvironmentBlock; // rdi
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // r13d
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  char v16; // cl
  const WCHAR *v17; // rdx
  UNICODE_STRING *v18; // rax
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // r14
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r13
  char v24; // al
  __m128i v25; // xmm0
  wchar_t *v26; // xmm0_8
  wchar_t *v27; // r14
  __int16 v28; // dx
  __int64 v29; // r13
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned __int64 v39; // r11
  int v40; // eax
  _WORD *v41; // r9
  _WORD *v42; // rcx
  unsigned __int64 v43; // rax
  __int16 v44; // r8
  const void *v45; // rcx
  __int64 v46; // r13
  int v47; // eax
  char v48; // cl
  unsigned __int64 v49; // rax
  _QWORD *v50; // r14
  __int64 v51; // r13
  __int64 v52; // r13
  char v53; // al
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rsi
  int v58; // r14d
  unsigned int i; // ecx
  _QWORD *v60; // rax
  _QWORD *v61; // rcx
  int v62; // eax
  __int64 v63; // rcx
  _DWORD *v64; // rax
  _DWORD *v65; // r14
  int v66; // eax
  unsigned int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  char v72; // al
  unsigned __int64 v73; // r9
  __int64 v74; // r8
  __int64 v75; // rcx
  _WORD *v76; // rax
  __int16 v77; // r8
  unsigned __int64 v78; // rax
  int v79; // eax
  __int64 v80; // r9
  char v81; // al
  unsigned int v82; // eax
  int ImageFileExecutionOptions; // ecx
  unsigned __int64 v84; // r14
  __int64 Heap; // rax
  void *v86; // r13
  __int64 NtSystemRoot; // rax
  __int16 v88; // r14
  __int64 v89; // rax
  void *v90; // rax
  __int64 v91; // [rsp+28h] [rbp-400h]
  __int64 v92; // [rsp+30h] [rbp-3F8h]
  __int64 v93; // [rsp+38h] [rbp-3F0h]
  unsigned int v94; // [rsp+50h] [rbp-3D8h] BYREF
  int v95; // [rsp+54h] [rbp-3D4h]
  char v96; // [rsp+58h] [rbp-3D0h] BYREF
  char v97; // [rsp+59h] [rbp-3CFh] BYREF
  _BYTE v98[2]; // [rsp+5Ah] [rbp-3CEh] BYREF
  __int16 v99; // [rsp+5Ch] [rbp-3CCh] BYREF
  __int128 v100; // [rsp+60h] [rbp-3C8h] BYREF
  int v101; // [rsp+70h] [rbp-3B8h] BYREF
  int v102; // [rsp+74h] [rbp-3B4h] BYREF
  int v103; // [rsp+78h] [rbp-3B0h]
  __int64 v104; // [rsp+80h] [rbp-3A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-398h] BYREF
  unsigned __int16 v106; // [rsp+A0h] [rbp-388h] BYREF
  __int16 v107; // [rsp+A2h] [rbp-386h]
  unsigned __int64 v108; // [rsp+A8h] [rbp-380h]
  __int64 v109; // [rsp+B0h] [rbp-378h] BYREF
  __int64 v110; // [rsp+B8h] [rbp-370h] BYREF
  __int128 v111; // [rsp+C0h] [rbp-368h] BYREF
  __m128i v112; // [rsp+D0h] [rbp-358h] BYREF
  unsigned int v113; // [rsp+E0h] [rbp-348h] BYREF
  unsigned __int64 v114; // [rsp+E8h] [rbp-340h]
  __int64 v115; // [rsp+F0h] [rbp-338h] BYREF
  __int64 v116; // [rsp+F8h] [rbp-330h]
  unsigned __int64 v117; // [rsp+100h] [rbp-328h] BYREF
  __int64 v118; // [rsp+108h] [rbp-320h]
  __int64 v119; // [rsp+110h] [rbp-318h]
  UNICODE_STRING v120; // [rsp+120h] [rbp-308h] BYREF
  __int64 v121; // [rsp+130h] [rbp-2F8h] BYREF
  __int64 v122; // [rsp+138h] [rbp-2F0h] BYREF
  struct _TEB *v123; // [rsp+140h] [rbp-2E8h]
  unsigned __int64 v124; // [rsp+148h] [rbp-2E0h] BYREF
  __int64 v125; // [rsp+150h] [rbp-2D8h]
  __int64 (__fastcall *v126)(_BYTE *, __int64); // [rsp+158h] [rbp-2D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+160h] [rbp-2C8h] BYREF
  int v128; // [rsp+170h] [rbp-2B8h] BYREF
  __int64 v129; // [rsp+178h] [rbp-2B0h]
  UNICODE_STRING *p_DestinationString; // [rsp+180h] [rbp-2A8h]
  int v131; // [rsp+188h] [rbp-2A0h]
  __int128 v132; // [rsp+190h] [rbp-298h]
  __int64 v133; // [rsp+1A0h] [rbp-288h] BYREF
  __int64 v134; // [rsp+1A8h] [rbp-280h] BYREF
  int v135; // [rsp+1B0h] [rbp-278h] BYREF
  _QWORD v136[3]; // [rsp+1B8h] [rbp-270h] BYREF
  __int64 v137; // [rsp+1D0h] [rbp-258h] BYREF
  int v138; // [rsp+1D8h] [rbp-250h]
  _BYTE v139[56]; // [rsp+1E0h] [rbp-248h] BYREF
  _OWORD v140[13]; // [rsp+220h] [rbp-208h] BYREF
  _QWORD v141[12]; // [rsp+2F0h] [rbp-138h] BYREF
  _BYTE v142[4]; // [rsp+350h] [rbp-D8h] BYREF
  unsigned int v143; // [rsp+354h] [rbp-D4h]
  __int64 v144[15]; // [rsp+370h] [rbp-B8h] BYREF
  char v145; // [rsp+3ECh] [rbp-3Ch]
  __int64 retaddr; // [rsp+428h] [rbp+0h]

  v116 = a2;
  v119 = a1;
  qword_18015B2C0 = RtlEncodePointer(0LL);
  v3 = NtCurrentTeb();
  v123 = v3;
  ProcessEnvironmentBlock = (__int64)v3->ProcessEnvironmentBlock;
  dword_18015B340 = 88;
  byte_18015B344 = 1;
  qword_18015B358 = (__int64)&qword_18015B350;
  qword_18015B350 = (__int64)&qword_18015B350;
  qword_18015B368 = (__int64)&qword_18015B360;
  qword_18015B360 = (__int64)&qword_18015B360;
  qword_18015B378 = (__int64)&qword_18015B370;
  qword_18015B370 = (__int64)&qword_18015B370;
  byte_18015B388 = 0;
  qword_18015B390 = 0LL;
  *(_QWORD *)(ProcessEnvironmentBlock + 24) = &dword_18015B340;
  sub_1800939F0(ProcessEnvironmentBlock);
  v5 = *(_DWORD *)(ProcessEnvironmentBlock + 184);
  v6 = 0;
  if ( v5 > 1 )
    v6 = 1024;
  dword_180159D60 = v6;
  v7 = 0;
  if ( v5 > 1 )
    v7 = 1024;
  dword_180159A14 = v7;
  v8 = dword_180158680;
  if ( v5 == 1 )
    v8 = 0;
  dword_180158680 = v8;
  v9 = 2;
  if ( (int)ZwQuerySystemInformation(192LL, v142, 32LL, 0LL) >= 0 )
  {
    if ( (v142[0] & 4) != 0 )
    {
      dword_180158E08 = 2;
      byte_18015C778 = 1;
    }
    else if ( (v142[0] & 2) != 0 )
    {
      dword_180158E08 = 3;
      byte_18015C778 = 1;
    }
    qword_180158E10 = v143;
  }
  v75 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v76 = *(_WORD **)(v75 + 104);
  if ( (*(_BYTE *)(v75 + 8) & 1) == 0 )
    v76 = (_WORD *)((char *)v76 + v75);
  v108 = (unsigned __int64)v76;
  v106 = *(_WORD *)(v75 + 96);
  v77 = v106 + 2;
  v107 = v106 + 2;
  if ( v106 >= 8u && *v76 == 92 && v76[1] == 63 && v76[2] == 63 && v76[3] == 92 )
  {
    v106 -= 8;
    v107 = v77 - 8;
    v108 = (unsigned __int64)(v76 + 4);
    *(_WORD *)(v75 + 96) -= 8;
    *(_WORD *)(v75 + 98) -= 8;
    *(_QWORD *)(v75 + 104) += 8LL;
  }
  v103 = 1;
  byte_18015B2D8 = 0;
  LOBYTE(v95) = 0;
  v102 = 0;
  RtlImageNtHeaderEx(3, *(_QWORD *)(ProcessEnvironmentBlock + 16), 0LL, &v109);
  v57 = v109;
  qword_18015B278 = v109;
  v58 = 0;
  for ( i = 0; i < 0x20; ++i )
  {
    v60 = (_QWORD *)((char *)&unk_18015AFA0 + 16 * i);
    v60[1] = v60;
    *v60 = v60;
  }
  sub_1800D75C8(a2);
  sub_18008AA3C();
  sub_18001DEA8(1);
  if ( sub_180030138() )
    qword_18015B2D0 = (__int64)&off_180111280;
  v140[10] = xmmword_18016B360;
  v78 = (_mm_srli_si128((__m128i)xmmword_18016B360, 8).m128i_u64[0] >> 4) & 3;
  if ( (_BYTE)v78 == 1 )
  {
    byte_18015B280 = 1;
  }
  else
  {
    byte_18015B280 = 0;
    v140[11] = xmmword_18016B360;
    byte_18015B2C8 = 0;
    if ( (_BYTE)v78 != 3 )
      goto LABEL_269;
  }
  byte_18015B2C8 = 1;
LABEL_269:
  result = sub_1800912E0(&v106, ProcessEnvironmentBlock, a2, &v110, &v104, (__int64)&v133);
  v94 = result;
  if ( (int)result < 0 )
  {
    v16 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        3764,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
        LODWORD(v3->ClientId.UniqueProcess),
        result);
      result = v94;
      v16 = dword_180155A10;
    }
    goto LABEL_19;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    dword_180155A10 |= 1u;
  if ( (dword_180155A10 & 5) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3805,
      (unsigned int)"LdrpInitializeProcess",
      2,
      "Initializing process 0x%p\n",
      v3->ClientId.UniqueProcess);
  v125 = 0LL;
  result = ZwQueryInformationProcess(-1LL, 26LL, &v134, 8LL, 0LL);
  v94 = result;
  if ( (int)result < 0 )
    return result;
  v79 = dword_18015B264;
  if ( v134 )
    v79 = 1;
  dword_18015B264 = v79;
  if ( v57 && *(_WORD *)(v57 + 24) == 267 && !v79 )
  {
    byte_18015B2D8 = 1;
    LOBYTE(v57) = 1;
    v95 = v57;
    v58 = 1;
    result = sub_1800900A4(*(_QWORD *)(ProcessEnvironmentBlock + 16));
    v94 = result;
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    LOBYTE(v57) = v95;
  }
  if ( !dword_18015B264 && !byte_18015B2D8 )
  {
    v62 = sub_180032C0C(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v135, &v121);
    v63 = v121;
    if ( v62 < 0 )
      v63 = 0LL;
    v121 = v63;
    if ( v63 )
    {
      byte_18015B2D8 = 1;
      LODWORD(v57) = (unsigned __int8)v57;
      if ( (*(_BYTE *)(v63 + 16) & 1) != 0 )
        LODWORD(v57) = 1;
      v95 = v57;
    }
  }
  qword_18015B320 = v116;
  if ( !dword_18015B264 )
    v125 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  qword_18015AEA0 = *(_QWORD *)(ProcessEnvironmentBlock + 192);
  v112 = *(__m128i *)(RtlNormalizeProcessParams(*(_QWORD *)(ProcessEnvironmentBlock + 32)) + 96);
  v64 = 0LL;
  if ( !dword_18015B264 && (!byte_18015B2D8 || !v58) )
    v64 = sub_18003A72C(*(_QWORD *)(ProcessEnvironmentBlock + 16));
  v65 = v64;
  memset(v141, 0, sizeof(v141));
  LODWORD(v141[0]) = 96;
  if ( v65 )
  {
    if ( *v65 >= 0x10u )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~v65[3];
    if ( *v65 >= 0x14u )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= v65[4];
    if ( *v65 >= 0x18u && v65[5] )
      qword_18015AEA0 = -10000LL * (int)v65[5];
    if ( *v65 >= 0x4Cu )
    {
      v66 = v65[18];
      if ( v66 )
      {
        v67 = v66 & 0xFFFF0FFF;
        if ( v67 )
          v9 = v67;
      }
    }
    if ( *v65 >= 0x20u )
    {
      v68 = v141[3];
      if ( *((_QWORD *)v65 + 3) )
        v68 = *((_QWORD *)v65 + 3);
      v141[3] = v68;
    }
    if ( *v65 >= 0x28u )
    {
      v69 = v141[4];
      if ( *((_QWORD *)v65 + 4) )
        v69 = *((_QWORD *)v65 + 4);
      v141[4] = v69;
    }
    if ( *v65 >= 0x38u )
    {
      v70 = v141[5];
      if ( *((_QWORD *)v65 + 6) )
        v70 = *((_QWORD *)v65 + 6);
      v141[5] = v70;
    }
    if ( *v65 >= 0x40u )
    {
      v71 = v141[6];
      if ( *((_QWORD *)v65 + 7) )
        v71 = *((_QWORD *)v65 + 7);
      v141[6] = v71;
    }
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    dword_180155A10 |= 1u;
  v72 = byte_18015AE98;
  if ( qword_18015AEA0 < -36000000000LL )
    v72 = 1;
  byte_18015AE98 = v72;
  dword_18015AE88 = 0;
  RtlInitializeSListHead(&ListHead);
  v61 = &unk_180159BE0;
  do
  {
    *v61 = v61 + 6;
    v61 += 6;
  }
  while ( v61 <= qword_180159D00 );
  *v61 = 0LL;
  RtlInterlockedPushListSList(&ListHead, &unk_180159BE0, &unk_180159D30, 8LL);
  v94 = 0;
  *(_QWORD *)(ProcessEnvironmentBlock + 824) = &dword_18015B300;
  *(_QWORD *)(ProcessEnvironmentBlock + 120) = &dword_18015B2B0;
  *(_QWORD *)(ProcessEnvironmentBlock + 568) = &dword_18015B290;
  dword_18015B300 = 128;
  qword_18015B308 = ProcessEnvironmentBlock + 832;
  *(_DWORD *)(ProcessEnvironmentBlock + 832) |= 1u;
  *(_QWORD *)(ProcessEnvironmentBlock + 816) = ProcessEnvironmentBlock + 808;
  *(_QWORD *)(ProcessEnvironmentBlock + 808) = ProcessEnvironmentBlock + 808;
  dword_18015B2B0 = 64;
  qword_18015B2B8 = ProcessEnvironmentBlock + 128;
  *(_DWORD *)(ProcessEnvironmentBlock + 128) |= 1u;
  dword_18015B290 = 1024;
  qword_18015B298 = ProcessEnvironmentBlock + 576;
  *(_DWORD *)(ProcessEnvironmentBlock + 576) |= 1u;
  if ( dword_18015B264 )
    RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(_QWORD *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || (v81 = byte_18015C460) != 0 )
  {
    v82 = 24;
    v101 = 24;
    if ( byte_18015B26C )
    {
      ImageFileExecutionOptions = -1073741772;
      v94 = -1073741772;
    }
    else
    {
      LOBYTE(v92) = 0;
      ImageFileExecutionOptions = LdrQueryImageFileExecutionOptionsEx(
                                    (__int64)&v106,
                                    (__int64)L"StackTraceDatabaseSizeInMb",
                                    4u,
                                    (__int64)&v101,
                                    4,
                                    0LL);
      v94 = ImageFileExecutionOptions;
      v82 = v101;
    }
    if ( ImageFileExecutionOptions >= 0 && v82 >= 0x18 )
    {
      if ( v82 <= 0x80 )
        v84 = v82 << 20;
      else
        v84 = 0x8000000LL;
    }
    else
    {
      v84 = 25165824LL;
    }
    if ( (dword_180155A10 & 5) != 0 )
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4110,
        (unsigned int)"LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v84 >> 20);
    v136[0] = 0LL;
    v136[1] = 0LL;
    v136[2] = v84;
    v94 = sub_1800F8C24(0LL, 24LL, v136);
    v81 = byte_18015C460;
  }
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || v81 )
    byte_180159BC8 = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    byte_180159BC8 = 1;
    byte_180159BC9 = 1;
  }
  result = RtlInitializeCriticalSectionEx((__int64)&unk_18015AE60, 0LL, 0LL, v80);
  v94 = result;
  if ( (int)result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &unk_18015AE60;
  sub_180061420();
  v140[12] = xmmword_18016B360;
  if ( (((unsigned __int64)xmmword_18016B360 >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, 1, 0LL, 0LL);
  if ( dword_18015B264 || *(_WORD *)(v109 + 24) == 267 )
  {
    v73 = 0LL;
    v74 = 0LL;
  }
  else
  {
    if ( *(_WORD *)(v109 + 72) <= 3u && *(_WORD *)(v109 + 74) < 0x33u )
      v9 |= 0x10000u;
    v73 = *(_QWORD *)(v109 + 120);
    v74 = *(_QWORD *)(v109 + 112);
  }
  Heap = RtlCreateHeap(v9, 0LL, v74, v73, 0LL, (__int64)v141);
  v86 = (void *)Heap;
  if ( !Heap )
  {
    v24 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4208,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Creating the process heap failed\n");
      goto LABEL_63;
    }
LABEL_64:
    if ( (v24 & 0x10) != 0 )
      __debugbreak();
    return 3221225495LL;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = Heap;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
  {
    v90 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 71200LL);
    qword_18015C418 = (__int64)v90;
    if ( v90 )
      memset(v90, 0, 0x11620uLL);
  }
  sub_180078290((__int64)v123);
  qword_18015B328 = (__int64)v86;
  RtlInitializeSListHead(&stru_18015C0C0);
  qword_1801593B0 = 0LL;
  dword_18015B268 = RtlCreateTagHeap(v86, 0, (__int64)L"NTDLL!", L"!Process");
  result = sub_180081774();
  v94 = result;
  if ( (int)result < 0 )
    return result;
  EtwEventRegister((int)&qword_1801146C8, 0LL, 0LL, (__int64)&unk_1801593B8);
  EtwEventRegister((int)&unk_180116510, (__int64)sub_1800F4FA0, 0LL, (__int64)&qword_180159A20);
  EtwEventRegister((int)&unk_180116500, (__int64)sub_1800FEA80, 0LL, (__int64)&qword_18015C2F8);
  result = sub_180062A14();
  v94 = result;
  if ( (int)result < 0 )
    return result;
  result = sub_1800819C4();
  v94 = result;
  if ( (int)result < 0 )
    return result;
  v118 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v112 = *(__m128i *)(v118 + 96);
  v108 = _mm_srli_si128(v112, 8).m128i_u64[0];
  if ( v110 || v104 )
  {
    v94 = sub_18007C1E0(v104, v110, (__int64)L"DebugProcessHeapOnly", 4u, (__int64)&v102, 4, v92, 0LL);
    if ( (v94 & 0x80000000) == 0 && dword_1801553F8 && v102 )
    {
      dword_1801553F8 = 0;
      *(_DWORD *)off_1801553F0 &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx((__int64)&v120, NtSystemRoot);
  v88 = v120.Length + 40;
  v89 = RtlAllocateHeap((__int64)v86, 0, v120.Length + 40LL);
  if ( !v89 )
    return 3221225495LL;
  LOWORD(v111) = 0;
  WORD1(v111) = v88;
  *((_QWORD *)&v111 + 1) = v89;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v111, (__int16 *)&v120);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v111, word_180110370);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x42) != 2 )
  {
    v21 = 48LL;
    v128 = 48;
    v129 = 0LL;
    v131 = 64;
    p_DestinationString = (UNICODE_STRING *)&unk_180110900;
    v132 = 0LL;
    result = ZwOpenDirectoryObject(&qword_18015AED8, 3LL, &v128);
    v94 = result;
    if ( (_DWORD)result == -1073741772 && (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x40) != 0 )
    {
      if ( (dword_180155A10 & 5) != 0 )
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4443,
          (unsigned int)"LdrpInitializeProcess",
          2,
          "KnownDLL directory does not yet exist.  SMSS will create it.\n");
      v94 = 0;
      goto LABEL_52;
    }
    if ( (int)result < 0 )
    {
      v16 = dword_180155A10;
      if ( (dword_180155A10 & 3) == 0 )
        goto LABEL_19;
      LODWORD(v92) = result;
      v18 = (UNICODE_STRING *)&unk_180110900;
      v19 = 4453;
      goto LABEL_39;
    }
    if ( !dword_18015B264 )
    {
LABEL_40:
      v128 = 48;
      v129 = qword_18015AED8;
      v131 = 64;
      p_DestinationString = (UNICODE_STRING *)&unk_1801108F0;
      v132 = 0LL;
      result = ZwOpenSymbolicLinkObject(&v122, 1LL, &v128);
      v94 = result;
      if ( (int)result >= 0 )
      {
        while ( 1 )
        {
          v20 = RtlAllocateHeap((__int64)v86, 0, v21);
          v114 = v20;
          if ( !v20 )
            return 3221225495LL;
          word_18015AEB0 = 0;
          word_18015AEB2 = v21;
          qword_18015AEB8 = v20;
          result = ZwQuerySymbolicLinkObject(v122, &word_18015AEB0, &v113);
          v94 = result;
          if ( (int)result >= 0 )
          {
            ZwClose(v122);
            goto LABEL_52;
          }
          if ( (_DWORD)result != -1073741789 )
          {
            v16 = dword_180155A10;
            if ( (dword_180155A10 & 3) == 0 )
              goto LABEL_19;
            LODWORD(v91) = result;
            sub_1800D5274(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              4555,
              (unsigned int)"LdrpInitializeProcess",
              0,
              "Querying the known DLL directory link object failed with status 0x%08lx\n",
              v91);
            goto LABEL_18;
          }
          RtlFreeHeap((__int64)v86, 0, v114);
          v21 = v113;
        }
      }
      v16 = dword_180155A10;
      if ( (dword_180155A10 & 3) == 0 )
        goto LABEL_19;
      LODWORD(v92) = result;
      v18 = (UNICODE_STRING *)&unk_1801108F0;
      v19 = 4520;
LABEL_39:
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v19,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        v18,
        v92);
LABEL_18:
      result = v94;
      v16 = dword_180155A10;
      goto LABEL_19;
    }
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlWow64GetCurrentCpuArea(&v99, 0LL, 0LL);
    if ( v99 == 332 )
    {
      v17 = L"\\KnownDlls32";
    }
    else
    {
      if ( v99 != 452 )
      {
LABEL_36:
        v128 = 48;
        v129 = 0LL;
        v131 = 64;
        p_DestinationString = &DestinationString;
        v132 = 0LL;
        result = ZwOpenDirectoryObject(&qword_18015AED0, 3LL, &v128);
        v94 = result;
        if ( (int)result < 0 )
        {
          v16 = dword_180155A10;
          if ( (dword_180155A10 & 3) == 0 )
            goto LABEL_19;
          LODWORD(v92) = result;
          v18 = &DestinationString;
          v19 = 4494;
          goto LABEL_39;
        }
        goto LABEL_40;
      }
      v17 = L"\\KnownDllsArm32";
    }
    RtlInitUnicodeString(&DestinationString, v17);
    goto LABEL_36;
  }
LABEL_52:
  if ( dword_18015B264 || byte_18015B26C )
  {
    UnicodeString = v120;
  }
  else
  {
    v25 = *(__m128i *)(v118 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v118 + 56);
    v26 = (wchar_t *)_mm_srli_si128(v25, 8).m128i_u64[0];
    UnicodeString.Buffer = v26;
    if ( !v26 || !UnicodeString.Length || !*v26 )
    {
      v27 = (wchar_t *)RtlAllocateHeap((__int64)v86, 0, 8LL);
      UnicodeString.Buffer = v27;
      if ( !v27 )
      {
        v24 = dword_180155A10;
        if ( (dword_180155A10 & 3) == 0 )
          goto LABEL_64;
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4605,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Allocating a buffer to hold the current working directory failed\n");
        goto LABEL_63;
      }
      v103 = 0;
      v56 = RtlGetNtSystemRoot();
      *(_DWORD *)v27 = *(_DWORD *)v56;
      v27[2] = *(_WORD *)(v56 + 4);
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  sub_1800841E4();
  v22 = (unsigned __int16)v111;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
    v22 = 2LL * (unsigned __int16)v111 + 22;
  v23 = v22;
  if ( (dword_180158674 & 1) == 0 )
  {
    v23 = v22 + 2 * (v120.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v118 + 80) = 0;
  }
  *((_QWORD *)&v100 + 1) = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v23);
  if ( !*((_QWORD *)&v100 + 1) )
  {
    v24 = dword_180155A10;
    if ( (dword_180155A10 & 3) == 0 )
      goto LABEL_64;
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4688,
      (unsigned int)"LdrpInitializeProcess",
      0,
      "Failed to allocate the system dirs string!\n");
    goto LABEL_63;
  }
  LOWORD(v100) = 0;
  WORD1(v100) = v23;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v100, (__int16 *)&v111);
  v28 = v100;
  *(_WORD *)(*((_QWORD *)&v100 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v100 >> 1) - 2) = 59;
  xmmword_18015C020 = v100;
  xmmword_18015B2A0 = v100;
  LOWORD(xmmword_18015B2A0) = v28 - 2;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v100, (__int16 *)&v111);
    RtlAppendUnicodeToString((unsigned __int16 *)&v100, L"forwarders;");
  }
  if ( v23 > v22 )
  {
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v100, (__int16 *)&v120);
    RtlAppendUnicodeToString((unsigned __int16 *)&v100, L"\\system;");
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v100, (__int16 *)&v120);
    RtlAppendUnicodeToString((unsigned __int16 *)&v100, ";");
    xmmword_18015C030 = v100;
  }
  if ( (unsigned int)(dword_18015C448 - 1) <= 0xFFFFFFFD )
    sub_1800D6D28(&v112);
  v29 = v116;
  RtlImageNtHeaderEx(3, v116, 0LL, &v115);
  v30 = sub_180039C9C(0LL);
  v31 = v30;
  if ( !v30 )
  {
    v24 = dword_180155A10;
    if ( (dword_180155A10 & 3) == 0 )
      goto LABEL_64;
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4795,
      (unsigned int)"LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the system DLL failed\n");
    goto LABEL_63;
  }
  qword_18015B318 = v30;
  *(_DWORD *)(*(_QWORD *)(v30 + 152) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(qword_18015B318 + 152) - 52LL) = -1;
  v32 = qword_18015B318;
  *(_DWORD *)(qword_18015B318 + 104) |= 0x204u;
  *(_QWORD *)(v32 + 248) -= qword_18016B2D0;
  v32 += 72LL;
  *(_OWORD *)v32 = v111;
  RtlAppendUnicodeStringToString((unsigned __int16 *)v32, word_1801108C0);
  v33 = qword_18015B318;
  *(_OWORD *)(qword_18015B318 + 88) = *(_OWORD *)word_1801108C0;
  *(_QWORD *)(v33 + 48) = v29;
  sub_18003A99C(v33);
  sub_18003CA5C(*(_QWORD *)(qword_18015B318 + 48), qword_18015B318 + 72, 0x14A5u);
  sub_18008350C(qword_18015B318, v115);
  result = sub_18003A7B0(qword_18015B318, 1);
  v94 = result;
  if ( (int)result < 0 )
    return result;
  sub_18003CA5C(*(_QWORD *)(qword_18015B318 + 48), qword_18015B318 + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(qword_18015B318 + 152) + 56LL) = 9;
  sub_18007DCD4();
  v34 = (_QWORD *)(v31 + 32);
  v35 = qword_18015B370;
  if ( *(__int64 **)(qword_18015B370 + 8) != &qword_18015B370 )
    __fastfail(3u);
  *v34 = qword_18015B370;
  *(_QWORD *)(v31 + 40) = &qword_18015B370;
  *(_QWORD *)(v35 + 8) = v34;
  qword_18015B370 = v31 + 32;
  result = sub_18000BBF4();
  v94 = result;
  if ( (int)result < 0 )
  {
    v16 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      LODWORD(v91) = result;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4874,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to initialize Parallel loader, st = 0x%x\n",
        v91);
      goto LABEL_18;
    }
LABEL_19:
    if ( (v16 & 0x10) != 0 )
      __debugbreak();
    return result;
  }
  sub_18001AE14(0);
  sub_18003BE90(0LL, 0LL, v144);
  memset(v140, 0, 0xA0uLL);
  *(_QWORD *)&v140[1] = v144;
  DWORD2(v140[1]) = 512;
  v140[0] = v112;
  *(_QWORD *)&v140[2] = &v94;
  v36 = sub_180039C9C((__int64)v140);
  v114 = v36;
  if ( !v36 )
  {
    v24 = dword_180155A10;
    if ( (dword_180155A10 & 3) == 0 )
      goto LABEL_64;
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4895,
      (unsigned int)"LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the executable failed\n");
LABEL_63:
    v24 = dword_180155A10;
    goto LABEL_64;
  }
  qword_18015AE50 = v36;
  v37 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(qword_18015AE50 + 152) + 24LL) = -1;
    --v37;
  }
  while ( v37 );
  *(_WORD *)(**(_QWORD **)(qword_18015AE50 + 152) - 52LL) = -1;
  v38 = qword_18015AE50;
  *(__m128i *)(qword_18015AE50 + 72) = v112;
  *(_DWORD *)(v38 + 104) |= 4u;
  v39 = v114;
  if ( byte_18015B2D8 )
  {
    v40 = *(_DWORD *)(v38 + 104) | 0x400000;
    *(_DWORD *)(v38 + 104) = v40;
    if ( (_BYTE)v95 )
      *(_DWORD *)(v38 + 104) = v40 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v38 + 248) = 0LL;
  v41 = 0LL;
  v42 = (_WORD *)(v112.m128i_i64[1] + v112.m128i_u16[0]);
  if ( v42 )
  {
    while ( 1 )
    {
      v43 = (unsigned __int64)v42--;
      if ( v43 <= v112.m128i_i64[1] )
        break;
      if ( *v42 == 92 )
      {
        v41 = v42 + 1;
        break;
      }
    }
  }
  if ( v41 )
  {
    v44 = v112.m128i_i16[4] + v112.m128i_i16[0] - (_WORD)v41;
    *(_WORD *)(v38 + 88) = v44;
    if ( v112.m128i_u16[1] - (unsigned int)v112.m128i_u16[0] >= 2 )
      v44 += 2;
    *(_WORD *)(v38 + 90) = v44;
    *(_QWORD *)(v38 + 96) = v41;
  }
  else
  {
    *(_OWORD *)(v38 + 88) = *(_OWORD *)(v39 + 72);
  }
  v45 = *(const void **)(ProcessEnvironmentBlock + 16);
  v46 = v109;
  if ( *(const void **)(v109 + 48) != v45 && !(_BYTE)v95 && !dword_18015B264 )
  {
    result = sub_1800867F4(v45);
    v94 = result;
    if ( (int)result < 0 )
      return result;
    v38 = qword_18015AE50;
  }
  *(_QWORD *)(v38 + 48) = *(_QWORD *)(ProcessEnvironmentBlock + 16);
  sub_18003A99C(v38);
  if ( (dword_180155A10 & 5) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      5015,
      (unsigned int)"LdrpInitializeProcess",
      2,
      "Beginning execution of %wZ (%wZ)\n\tCurrent directory: %wZ\n\tPackage directories: %wZ\n",
      qword_18015AE50 + 88,
      qword_18015AE50 + 72,
      &UnicodeString,
      &::DestinationString);
  sub_18003CA5C(*(_QWORD *)(qword_18015AE50 + 48), qword_18015AE50 + 72, 0x14A5u);
  sub_18008350C(qword_18015AE50, v46);
  result = sub_18003A7B0(qword_18015AE50, dword_18015B264 == 0);
  v94 = result;
  if ( (int)result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(qword_18015AE50 + 152) + 56LL) = 9;
  v47 = sub_18007B1E4(&UnicodeString.Length);
  v94 = v47;
  if ( v47 < 0 )
  {
    v48 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      LODWORD(v92) = v47;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5052,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        v92);
      v48 = dword_180155A10;
    }
    if ( (v48 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v103 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x2000100) != 0 )
  {
    v49 = sub_180039C9C(0LL);
    v50 = (_QWORD *)v49;
    if ( !v49 )
    {
      v24 = dword_180155A10;
      if ( (dword_180155A10 & 3) == 0 )
        goto LABEL_64;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5075,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Allocating a data table entry for the application verifier DLL failed\n");
      goto LABEL_63;
    }
    *(_DWORD *)(*(_QWORD *)(v49 + 152) + 24LL) = -1;
    *(_WORD *)(**(_QWORD **)(v49 + 152) - 52LL) = -1;
    v51 = v133;
    *(_DWORD *)(v49 + 104) |= *(_DWORD *)(v133 + 104);
    *(_QWORD *)(v49 + 248) = *(_QWORD *)(v51 + 248);
    *(_WORD *)(v49 + 110) = 0;
    *(_OWORD *)(v49 + 72) = *(_OWORD *)(v51 + 72);
    *(_OWORD *)(v49 + 88) = *(_OWORD *)(v51 + 88);
    *(_DWORD *)(v49 + 128) = *(_DWORD *)(v51 + 128);
    *(_QWORD *)(v49 + 48) = *(_QWORD *)(v51 + 48);
    sub_18003A99C(v49);
    sub_18003CA5C(v50[6], (__int64)(v50 + 9), 0x14A5u);
    result = RtlImageNtHeaderEx(3, v50[6], 0LL, &v115);
    v94 = result;
    if ( (int)result < 0 )
      return result;
    sub_18008350C((__int64)v50, v115);
    result = sub_18003A7B0((__int64)v50, 1);
    v94 = result;
    if ( (int)result < 0 )
      return result;
    v50[7] = *(_QWORD *)(v51 + 56);
    sub_18003CA5C(v50[6], (__int64)(v50 + 9), 0x14ADu);
    *(_DWORD *)(v50[19] + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 )
    {
      result = sub_1800DA690(0, 0, 0, 1, v116, 0LL);
    }
    else
    {
      v98[0] = 0;
      result = sub_18006FC38(v50[19], 0LL, v98);
    }
    v94 = result;
    if ( (int)result < 0 )
      return result;
    v46 = v109;
  }
  sub_18001A338();
  if ( dword_18015B264 )
  {
    if ( v110 )
    {
      ZwClose(v110);
      v110 = 0LL;
      if ( qword_18015AEC0 )
      {
        ZwClose(qword_18015AEC0);
        qword_18015AEC0 = 0LL;
      }
    }
    if ( v104 )
    {
      ZwClose(v104);
      v104 = 0LL;
    }
    result = sub_180085C94((__int16 *)&v111);
    v94 = result;
    if ( (int)result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        sub_1800D6F48();
      dword_18015C018 = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      qword_18016B210(v119);
LABEL_28:
      if ( v110 )
        ZwClose(v110);
      if ( v104 )
        ZwClose(v104);
      return 0LL;
    }
    return result;
  }
  v124 = 0LL;
  if ( byte_18015B2D8 )
  {
    result = sub_1800874C4(&v124);
    v94 = result;
    if ( (int)result < 0 )
      return result;
    if ( (_BYTE)v95 )
    {
      result = sub_1800888F8(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      v94 = result;
      if ( (int)result < 0 )
        return result;
    }
    if ( (v123->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v119 + 128) = __ROR8__(qword_18015B3A0, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  result = sub_1800584E4();
  v94 = result;
  if ( (int)result < 0 )
  {
    v16 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      LODWORD(v91) = result;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5291,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing TLS slots failed with status 0x%08lx\n",
        v91);
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  if ( v124 )
  {
    v96 = 0;
    result = sub_18006FC38(*(_QWORD *)(v124 + 152), 0LL, &v96);
    v94 = result;
    if ( (int)result < 0 )
    {
      v16 = dword_180155A10;
      if ( (dword_180155A10 & 3) != 0 )
      {
        LODWORD(v91) = result;
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5310,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
          v91);
        goto LABEL_18;
      }
      goto LABEL_19;
    }
  }
  v126 = 0LL;
  if ( (unsigned __int16)(*(_WORD *)(v46 + 92) - 2) <= 1u )
  {
    result = LdrLoadDll(16385LL, 0LL, (__int64)word_180110260, &v117);
    v94 = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741515 )
      {
        v16 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          LODWORD(v92) = result;
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5451,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            word_180110260,
            v92);
          goto LABEL_18;
        }
        goto LABEL_19;
      }
      result = LdrLoadDll(16385LL, 0LL, (__int64)&unk_1801108D0, &v117);
      v94 = result;
      if ( (int)result < 0 )
      {
        v16 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          LODWORD(v92) = result;
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5424,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &unk_1801108D0,
            v92);
          goto LABEL_18;
        }
        goto LABEL_19;
      }
      result = sub_18007FE68();
      v94 = result;
      if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741515 )
      {
        v16 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          LODWORD(v91) = result;
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5440,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            v91);
          goto LABEL_18;
        }
        goto LABEL_19;
      }
      v94 = 0;
    }
    else
    {
      result = LdrGetProcedureAddressForCaller(v117, &qword_1801108E0, 0, (__int64 *)&qword_18015AE90, 0, retaddr);
      v94 = result;
      if ( (int)result < 0 )
      {
        v16 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          LODWORD(v93) = result;
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5356,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &qword_1801108E0,
            word_180110260,
            v93);
          goto LABEL_18;
        }
        goto LABEL_19;
      }
      LdrGetProcedureAddressForCaller(v117, &qword_180110910, 0, (__int64 *)&v126, 0, retaddr);
      result = sub_18003C49C();
      v94 = result;
      if ( (int)result < 0 )
        return result;
      result = sub_18007FE68();
      v94 = result;
      if ( (int)result < 0 )
        return result;
    }
  }
  sub_18001AE14(0);
  sub_1800831CC(0LL);
  v52 = v125;
  if ( v125 && *(_DWORD *)(v125 + 8) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    sub_18006EEF8(v52);
  }
  v53 = byte_180159BC8;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v53 = 1;
  byte_180159BC8 = v53;
  sub_18000FD48(*(_DWORD *)(v118 + 1036));
  dword_18015C018 = 1;
  *(_DWORD *)(*(_QWORD *)(qword_18015AE50 + 152) + 56LL) = 2;
  **(_DWORD **)&v140[2] = 0;
  if ( (_BYTE)v95 )
  {
    result = sub_180088E9C(qword_18015AE50);
  }
  else
  {
    DWORD2(v140[1]) |= 1u;
    sub_1800417FC((__int64)v140);
    sub_18001AE14(1);
    result = v94;
    if ( (v94 & 0x80000000) != 0 )
      goto LABEL_174;
    result = sub_18001A58C(qword_18015AE50, *(__int64 *)&v140[2], v54, v55);
  }
  v94 = result;
  if ( (int)result < 0 )
  {
LABEL_174:
    v16 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      LODWORD(v91) = result;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5657,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
        v91);
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  dword_18015C018 = 2;
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    sub_1800D6F48();
  sub_18001A338();
  if ( !qword_18015AE90
    || (result = _guard_dispatch_icall_fptr(), v94 = result, (int)result >= 0)
    && (result = sub_180085EDC(v126), v94 = result, (int)result >= 0) )
  {
    qword_18015B2F0 = v119;
    sub_18001AE14(0);
    sub_180019FC0(v12, v11, v13, v14);
    v97 = 0;
    v94 = sub_18006FC38(*(_QWORD *)(qword_18015AE50 + 152), *(__int64 *)&v140[2], &v97);
    sub_18001A028(v15, 9, v94);
    sub_18001A828(*(_QWORD **)(qword_18015AE50 + 152), *(__int64 *)&v140[2]);
    sub_18001A338();
    qword_18015B2F0 = 0LL;
    if ( v145 )
      RtlReleasePath(v144[0]);
    result = v94;
    if ( (v94 & 0x80000000) != 0 )
    {
      v16 = dword_180155A10;
      if ( (dword_180155A10 & 3) == 0 )
        goto LABEL_19;
      LODWORD(v91) = v94;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5792,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
        v91);
      goto LABEL_18;
    }
    if ( *(_WORD *)(qword_18015AE50 + 110) )
    {
      v137 = 72LL;
      v138 = 1;
      memset(v139, 0, sizeof(v139));
      RtlActivateActivationContextUnsafeFast((__int64)&v137, *(_QWORD *)(qword_18015AE50 + 136));
      sub_18006FF7C(1, qword_18015AE50);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v137);
    }
    if ( byte_18015BF54 && !(unsigned __int8)_guard_dispatch_icall_fptr() )
    {
      byte_18015BF54 = 0;
      LdrUnloadDll(qword_18015B310);
      qword_18015B310 = 0LL;
    }
    if ( *(_QWORD *)(ProcessEnvironmentBlock + 560) )
      _guard_dispatch_icall_fptr();
    goto LABEL_28;
  }
  return result;
}
