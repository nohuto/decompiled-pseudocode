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

int __fastcall sub_180091AB4(__int64 a1, void *a2)
{
  struct _TEB *v3; // r12
  __int64 ProcessEnvironmentBlock; // rdi
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  ULONG v9; // r13d
  int result; // eax
  __int64 v11; // rcx
  char v12; // cl
  const WCHAR *v13; // rdx
  _UNICODE_STRING *p_DestinationString; // rax
  int v15; // edx
  PVOID v16; // rax
  SIZE_T v17; // r14
  unsigned __int64 Length; // r14
  SIZE_T v19; // r13
  char v20; // al
  __m128i v21; // xmm0
  WCHAR *v22; // xmm0_8
  WCHAR *v23; // r14
  USHORT v24; // dx
  PVOID v25; // r13
  char *v26; // rax
  char *v27; // r14
  _UNICODE_STRING *v28; // rcx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  char *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdx
  char *v35; // r11
  int v36; // eax
  _WORD *v37; // r9
  _WORD *v38; // rcx
  unsigned __int64 v39; // rax
  __int16 v40; // r8
  void *v41; // rcx
  PIMAGE_NT_HEADERS v42; // r13
  int v43; // eax
  char v44; // cl
  char *v45; // rax
  __int64 v46; // r14
  __int64 v47; // r13
  __int64 v48; // r13
  char v49; // al
  PWSTR v50; // rax
  PIMAGE_NT_HEADERS v51; // rsi
  int v52; // r14d
  unsigned int i; // ecx
  _QWORD *v54; // rax
  _QWORD *v55; // rcx
  NTSTATUS v56; // eax
  __int64 v57; // rcx
  _DWORD *v58; // rax
  _DWORD *v59; // r14
  int v60; // eax
  unsigned int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  char v66; // al
  SIZE_T SizeOfHeapCommit; // r9
  SIZE_T SizeOfHeapReserve; // r8
  __int64 v69; // rcx
  WCHAR *v70; // rax
  __int16 v71; // r8
  unsigned __int64 v72; // rax
  int v73; // eax
  char v74; // al
  unsigned int v75; // eax
  NTSTATUS v76; // ecx
  unsigned __int64 v77; // r14
  PVOID Heap; // rax
  void *v79; // r13
  const WCHAR *NtSystemRoot; // rax
  USHORT v81; // r14
  WCHAR *v82; // rax
  PVOID v83; // rax
  PVOID *Callback; // [rsp+28h] [rbp-400h]
  __int64 Wow64; // [rsp+30h] [rbp-3F8h]
  __int64 v86; // [rsp+38h] [rbp-3F0h]
  int v87; // [rsp+50h] [rbp-3D8h] BYREF
  int v88; // [rsp+54h] [rbp-3D4h]
  char v89; // [rsp+58h] [rbp-3D0h] BYREF
  char v90; // [rsp+59h] [rbp-3CFh] BYREF
  _BYTE v91[2]; // [rsp+5Ah] [rbp-3CEh] BYREF
  __int16 v92; // [rsp+5Ch] [rbp-3CCh] BYREF
  _UNICODE_STRING v93; // [rsp+60h] [rbp-3C8h] BYREF
  int Buffer; // [rsp+70h] [rbp-3B8h] BYREF
  int v95; // [rsp+74h] [rbp-3B4h] BYREF
  int v96; // [rsp+78h] [rbp-3B0h]
  HANDLE v97; // [rsp+80h] [rbp-3A8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-398h] BYREF
  _UNICODE_STRING SubKey; // [rsp+A0h] [rbp-388h] BYREF
  PIMAGE_NT_HEADERS v100; // [rsp+B0h] [rbp-378h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-370h] BYREF
  _UNICODE_STRING Destination; // [rsp+C0h] [rbp-368h] BYREF
  __m128i ImagePathName; // [rsp+D0h] [rbp-358h] BYREF
  ULONG ReturnedLength; // [rsp+E0h] [rbp-348h] BYREF
  PVOID BaseAddress; // [rsp+E8h] [rbp-340h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+F0h] [rbp-338h] BYREF
  PVOID BaseOfImage; // [rsp+F8h] [rbp-330h]
  PVOID DllHandle; // [rsp+100h] [rbp-328h] BYREF
  __int64 v109; // [rsp+108h] [rbp-320h]
  __int64 v110; // [rsp+110h] [rbp-318h]
  UNICODE_STRING Source; // [rsp+120h] [rbp-308h] BYREF
  __int64 v112; // [rsp+130h] [rbp-2F8h] BYREF
  HANDLE LinkHandle; // [rsp+138h] [rbp-2F0h] BYREF
  struct _TEB *v114; // [rsp+140h] [rbp-2E8h]
  _QWORD *v115; // [rsp+148h] [rbp-2E0h] BYREF
  __int64 v116; // [rsp+150h] [rbp-2D8h]
  PVOID ProcedureAddress; // [rsp+158h] [rbp-2D0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+160h] [rbp-2C8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+170h] [rbp-2B8h] BYREF
  __int64 v120; // [rsp+1A0h] [rbp-288h] BYREF
  __int64 ProcessInformation; // [rsp+1A8h] [rbp-280h] BYREF
  DWORD v122; // [rsp+1B0h] [rbp-278h] BYREF
  _QWORD v123[3]; // [rsp+1B8h] [rbp-270h] BYREF
  __int64 v124; // [rsp+1D0h] [rbp-258h] BYREF
  int v125; // [rsp+1D8h] [rbp-250h]
  _BYTE v126[56]; // [rsp+1E0h] [rbp-248h] BYREF
  _OWORD v127[13]; // [rsp+220h] [rbp-208h] BYREF
  _QWORD Parameters[12]; // [rsp+2F0h] [rbp-138h] BYREF
  _BYTE SystemInformation[4]; // [rsp+350h] [rbp-D8h] BYREF
  unsigned int v130; // [rsp+354h] [rbp-D4h]
  PWSTR Path[15]; // [rsp+370h] [rbp-B8h] BYREF
  char v132; // [rsp+3ECh] [rbp-3Ch]
  PVOID *retaddr; // [rsp+428h] [rbp+0h]

  BaseOfImage = a2;
  v110 = a1;
  Ptr = RtlEncodePointer(0LL);
  v3 = NtCurrentTeb();
  v114 = v3;
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
  if ( ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    if ( (SystemInformation[0] & 4) != 0 )
    {
      dword_180158E08 = 2;
      byte_18015C778 = 1;
    }
    else if ( (SystemInformation[0] & 2) != 0 )
    {
      dword_180158E08 = 3;
      byte_18015C778 = 1;
    }
    qword_180158E10 = v130;
  }
  v69 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v70 = *(WCHAR **)(v69 + 104);
  if ( (*(_BYTE *)(v69 + 8) & 1) == 0 )
    v70 = (WCHAR *)((char *)v70 + v69);
  SubKey.Buffer = v70;
  SubKey.Length = *(_WORD *)(v69 + 96);
  v71 = SubKey.Length + 2;
  SubKey.MaximumLength = SubKey.Length + 2;
  if ( SubKey.Length >= 8u && *v70 == 92 && v70[1] == 63 && v70[2] == 63 && v70[3] == 92 )
  {
    SubKey.Length -= 8;
    SubKey.MaximumLength = v71 - 8;
    SubKey.Buffer = v70 + 4;
    *(_WORD *)(v69 + 96) -= 8;
    *(_WORD *)(v69 + 98) -= 8;
    *(_QWORD *)(v69 + 104) += 8LL;
  }
  v96 = 1;
  byte_18015B2D8 = 0;
  LOBYTE(v88) = 0;
  v95 = 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(ProcessEnvironmentBlock + 16), 0LL, &v100);
  v51 = v100;
  qword_18015B278 = (__int64)v100;
  v52 = 0;
  for ( i = 0; i < 0x20; ++i )
  {
    v54 = (_QWORD *)((char *)&unk_18015AFA0 + 16 * i);
    v54[1] = v54;
    *v54 = v54;
  }
  sub_1800D75C8(a2);
  sub_18008AA3C();
  sub_18001DEA8(1);
  if ( sub_180030138() )
    qword_18015B2D0 = (__int64)&off_180111280;
  v127[10] = *(_OWORD *)LdrSystemDllInitBlock.MitigationOptionsMap.Map;
  v72 = (_mm_srli_si128(*(__m128i *)LdrSystemDllInitBlock.MitigationOptionsMap.Map, 8).m128i_u64[0] >> 4) & 3;
  if ( (_BYTE)v72 == 1 )
  {
    byte_18015B280 = 1;
  }
  else
  {
    byte_18015B280 = 0;
    v127[11] = *(_OWORD *)LdrSystemDllInitBlock.MitigationOptionsMap.Map;
    byte_18015B2C8 = 0;
    if ( (_BYTE)v72 != 3 )
      goto LABEL_269;
  }
  byte_18015B2C8 = 1;
LABEL_269:
  result = sub_1800912E0(&SubKey.Length, ProcessEnvironmentBlock, (__int64)a2, &Handle, &v97, (__int64)&v120);
  v87 = result;
  if ( result < 0 )
  {
    v12 = dword_180155A10;
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
      result = v87;
      v12 = dword_180155A10;
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
  v116 = 0LL;
  result = ZwQueryInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessWow64Information,
             &ProcessInformation,
             8u,
             0LL);
  v87 = result;
  if ( result < 0 )
    return result;
  v73 = dword_18015B264;
  if ( ProcessInformation )
    v73 = 1;
  dword_18015B264 = v73;
  if ( v51 && v51->OptionalHeader.Magic == 267 && !v73 )
  {
    byte_18015B2D8 = 1;
    LOBYTE(v51) = 1;
    v88 = (int)v51;
    v52 = 1;
    result = sub_1800900A4(*(void **)(ProcessEnvironmentBlock + 16));
    v87 = result;
    if ( result < 0 )
      return result;
  }
  else
  {
    LOBYTE(v51) = v88;
  }
  if ( !dword_18015B264 && !byte_18015B2D8 )
  {
    v56 = sub_180032C0C(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v122, (char **)&v112);
    v57 = v112;
    if ( v56 < 0 )
      v57 = 0LL;
    v112 = v57;
    if ( v57 )
    {
      byte_18015B2D8 = 1;
      LODWORD(v51) = (unsigned __int8)v51;
      if ( (*(_BYTE *)(v57 + 16) & 1) != 0 )
        LODWORD(v51) = 1;
      v88 = (int)v51;
    }
  }
  qword_18015B320 = (__int64)BaseOfImage;
  if ( !dword_18015B264 )
    v116 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  Timeout = *(LARGE_INTEGER *)(ProcessEnvironmentBlock + 192);
  ImagePathName = (__m128i)RtlNormalizeProcessParams(*(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32))->ImagePathName;
  v58 = 0LL;
  if ( !dword_18015B264 && (!byte_18015B2D8 || !v52) )
    v58 = sub_18003A72C(*(PVOID *)(ProcessEnvironmentBlock + 16));
  v59 = v58;
  memset(Parameters, 0, sizeof(Parameters));
  LODWORD(Parameters[0]) = 96;
  if ( v59 )
  {
    if ( *v59 >= 0x10u )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~v59[3];
    if ( *v59 >= 0x14u )
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= v59[4];
    if ( *v59 >= 0x18u && v59[5] )
      Timeout.QuadPart = -10000LL * (int)v59[5];
    if ( *v59 >= 0x4Cu )
    {
      v60 = v59[18];
      if ( v60 )
      {
        v61 = v60 & 0xFFFF0FFF;
        if ( v61 )
          v9 = v61;
      }
    }
    if ( *v59 >= 0x20u )
    {
      v62 = Parameters[3];
      if ( *((_QWORD *)v59 + 3) )
        v62 = *((_QWORD *)v59 + 3);
      Parameters[3] = v62;
    }
    if ( *v59 >= 0x28u )
    {
      v63 = Parameters[4];
      if ( *((_QWORD *)v59 + 4) )
        v63 = *((_QWORD *)v59 + 4);
      Parameters[4] = v63;
    }
    if ( *v59 >= 0x38u )
    {
      v64 = Parameters[5];
      if ( *((_QWORD *)v59 + 6) )
        v64 = *((_QWORD *)v59 + 6);
      Parameters[5] = v64;
    }
    if ( *v59 >= 0x40u )
    {
      v65 = Parameters[6];
      if ( *((_QWORD *)v59 + 7) )
        v65 = *((_QWORD *)v59 + 7);
      Parameters[6] = v65;
    }
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    dword_180155A10 |= 1u;
  v66 = byte_18015AE98;
  if ( Timeout.QuadPart < -36000000000LL )
    v66 = 1;
  byte_18015AE98 = v66;
  dword_18015AE88 = 0;
  RtlInitializeSListHead(&ListHead);
  v55 = &unk_180159BE0;
  do
  {
    *v55 = v55 + 6;
    v55 += 6;
  }
  while ( v55 <= qword_180159D00 );
  *v55 = 0LL;
  RtlInterlockedPushListSList(&ListHead, &unk_180159BE0, &unk_180159D30, 8LL);
  v87 = 0;
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
    RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || (v74 = byte_18015C460) != 0 )
  {
    v75 = 24;
    Buffer = 24;
    if ( byte_18015B26C )
    {
      v76 = -1073741772;
      v87 = -1073741772;
    }
    else
    {
      v76 = LdrQueryImageFileExecutionOptionsEx(&SubKey, L"StackTraceDatabaseSizeInMb", 4u, &Buffer, 4u, 0LL, 0);
      v87 = v76;
      v75 = Buffer;
    }
    if ( v76 >= 0 && v75 >= 0x18 )
    {
      if ( v75 <= 0x80 )
        v77 = v75 << 20;
      else
        v77 = 0x8000000LL;
    }
    else
    {
      v77 = 25165824LL;
    }
    if ( (dword_180155A10 & 5) != 0 )
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4110,
        (unsigned int)"LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v77 >> 20);
    v123[0] = 0LL;
    v123[1] = 0LL;
    v123[2] = v77;
    v87 = sub_1800F8C24(0LL, 24LL, v123);
    v74 = byte_18015C460;
  }
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x1000) != 0 || v74 )
    byte_180159BC8 = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    byte_180159BC8 = 1;
    byte_180159BC9 = 1;
  }
  result = RtlInitializeCriticalSectionEx(&stru_18015AE60, 0, 0);
  v87 = result;
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &stru_18015AE60;
  sub_180061420();
  v127[12] = *(_OWORD *)LdrSystemDllInitBlock.MitigationOptionsMap.Map;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  if ( dword_18015B264 || v100->OptionalHeader.Magic == 267 )
  {
    SizeOfHeapCommit = 0LL;
    SizeOfHeapReserve = 0LL;
  }
  else
  {
    if ( v100->OptionalHeader.MajorSubsystemVersion <= 3u && v100->OptionalHeader.MinorSubsystemVersion < 0x33u )
      v9 |= 0x10000u;
    SizeOfHeapCommit = v100->OptionalHeader.SizeOfHeapCommit;
    SizeOfHeapReserve = v100->OptionalHeader.SizeOfHeapReserve;
  }
  Heap = RtlCreateHeap(v9, 0LL, SizeOfHeapReserve, SizeOfHeapCommit, 0LL, Parameters);
  v79 = Heap;
  if ( !Heap )
  {
    v20 = dword_180155A10;
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
    if ( (v20 & 0x10) != 0 )
      __debugbreak();
    return -1073741801;
  }
  *(_QWORD *)(ProcessEnvironmentBlock + 48) = Heap;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
  {
    v83 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x11620uLL);
    qword_18015C418 = (__int64)v83;
    if ( v83 )
      memset(v83, 0, 0x11620uLL);
  }
  sub_180078290((__int64)v114);
  HeapHandle = v79;
  RtlInitializeSListHead(&stru_18015C0C0);
  qword_1801593B0 = 0LL;
  dword_18015B268 = RtlCreateTagHeap(v79, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
  result = sub_180081774();
  v87 = result;
  if ( result < 0 )
    return result;
  EtwEventRegister(&stru_1801146C8, 0LL, 0LL, &RegHandle);
  EtwEventRegister(&stru_180116510, sub_1800F4FA0, 0LL, &qword_180159A20);
  EtwEventRegister(&stru_180116500, sub_1800FEA80, 0LL, &qword_18015C2F8);
  result = sub_180062A14();
  v87 = result;
  if ( result < 0 )
    return result;
  result = sub_1800819C4();
  v87 = result;
  if ( result < 0 )
    return result;
  v109 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  ImagePathName = *(__m128i *)(v109 + 96);
  SubKey.Buffer = (PWCH)_mm_srli_si128(ImagePathName, 8).m128i_u64[0];
  if ( Handle || v97 )
  {
    v87 = sub_18007C1E0(v97, Handle, L"DebugProcessHeapOnly", 4u, &v95, 4u, Wow64, 0LL);
    if ( v87 >= 0 && dword_1801553F8 && v95 )
    {
      dword_1801553F8 = 0;
      *Value &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx(&Source, NtSystemRoot);
  v81 = Source.Length + 40;
  v82 = (WCHAR *)RtlAllocateHeap(v79, 0, Source.Length + 40LL);
  if ( !v82 )
    return -1073741801;
  Destination.Length = 0;
  Destination.MaximumLength = v81;
  Destination.Buffer = v82;
  RtlAppendUnicodeStringToString(&Destination, &Source);
  RtlAppendUnicodeStringToString(&Destination, &stru_180110370);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x42) != 2 )
  {
    v17 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180110900;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenDirectoryObject(&qword_18015AED8, 3u, &ObjectAttributes);
    v87 = result;
    if ( result == -1073741772 && (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x40) != 0 )
    {
      if ( (dword_180155A10 & 5) != 0 )
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          4443,
          (unsigned int)"LdrpInitializeProcess",
          2,
          "KnownDLL directory does not yet exist.  SMSS will create it.\n");
      v87 = 0;
      goto LABEL_52;
    }
    if ( result < 0 )
    {
      v12 = dword_180155A10;
      if ( (dword_180155A10 & 3) == 0 )
        goto LABEL_19;
      LODWORD(Wow64) = result;
      p_DestinationString = (_UNICODE_STRING *)&unk_180110900;
      v15 = 4453;
      goto LABEL_39;
    }
    if ( !dword_18015B264 )
    {
LABEL_40:
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = qword_18015AED8;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801108F0;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
      v87 = result;
      if ( result >= 0 )
      {
        while ( 1 )
        {
          v16 = RtlAllocateHeap(v79, 0, v17);
          BaseAddress = v16;
          if ( !v16 )
            return -1073741801;
          LinkTarget.Length = 0;
          LinkTarget.MaximumLength = v17;
          LinkTarget.Buffer = (PWCH)v16;
          result = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, &ReturnedLength);
          v87 = result;
          if ( result >= 0 )
          {
            ZwClose(LinkHandle);
            goto LABEL_52;
          }
          if ( result != -1073741789 )
          {
            v12 = dword_180155A10;
            if ( (dword_180155A10 & 3) == 0 )
              goto LABEL_19;
            LODWORD(Callback) = result;
            sub_1800D5274(
              (unsigned int)"minkernel\\ntdll\\ldrinit.c",
              4555,
              (unsigned int)"LdrpInitializeProcess",
              0,
              "Querying the known DLL directory link object failed with status 0x%08lx\n",
              Callback);
            goto LABEL_18;
          }
          RtlFreeHeap(v79, 0, BaseAddress);
          v17 = ReturnedLength;
        }
      }
      v12 = dword_180155A10;
      if ( (dword_180155A10 & 3) == 0 )
        goto LABEL_19;
      LODWORD(Wow64) = result;
      p_DestinationString = (_UNICODE_STRING *)&unk_1801108F0;
      v15 = 4520;
LABEL_39:
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v15,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        p_DestinationString,
        Wow64);
LABEL_18:
      result = v87;
      v12 = dword_180155A10;
      goto LABEL_19;
    }
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlWow64GetCurrentCpuArea(&v92, 0LL, 0LL);
    if ( v92 == 332 )
    {
      v13 = L"\\KnownDlls32";
    }
    else
    {
      if ( v92 != 452 )
      {
LABEL_36:
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 64;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        result = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
        v87 = result;
        if ( result < 0 )
        {
          v12 = dword_180155A10;
          if ( (dword_180155A10 & 3) == 0 )
            goto LABEL_19;
          LODWORD(Wow64) = result;
          p_DestinationString = &DestinationString;
          v15 = 4494;
          goto LABEL_39;
        }
        goto LABEL_40;
      }
      v13 = L"\\KnownDllsArm32";
    }
    RtlInitUnicodeString(&DestinationString, v13);
    goto LABEL_36;
  }
LABEL_52:
  if ( dword_18015B264 || byte_18015B26C )
  {
    UnicodeString = Source;
  }
  else
  {
    v21 = *(__m128i *)(v109 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v109 + 56);
    v22 = (WCHAR *)_mm_srli_si128(v21, 8).m128i_u64[0];
    UnicodeString.Buffer = v22;
    if ( !v22 || !UnicodeString.Length || !*v22 )
    {
      v23 = (WCHAR *)RtlAllocateHeap(v79, 0, 8uLL);
      UnicodeString.Buffer = v23;
      if ( !v23 )
      {
        v20 = dword_180155A10;
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
      v96 = 0;
      v50 = RtlGetNtSystemRoot();
      *(_DWORD *)v23 = *(_DWORD *)v50;
      v23[2] = v50[2];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  sub_1800841E4();
  Length = Destination.Length;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
    Length = 2LL * Destination.Length + 22;
  v19 = Length;
  if ( (dword_180158674 & 1) == 0 )
  {
    v19 = Length + 2 * (Source.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v109 + 80) = 0;
  }
  v93.Buffer = (PWCH)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
  if ( !v93.Buffer )
  {
    v20 = dword_180155A10;
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
  v93.Length = 0;
  v93.MaximumLength = v19;
  RtlAppendUnicodeStringToString(&v93, &Destination);
  v24 = v93.Length;
  v93.Buffer[((unsigned __int64)v93.Length >> 1) - 1] = 59;
  xmmword_18015C020 = (__int128)v93;
  xmmword_18015B2A0 = (__int128)v93;
  LOWORD(xmmword_18015B2A0) = v24 - 2;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    RtlAppendUnicodeStringToString(&v93, &Destination);
    RtlAppendUnicodeToString(&v93, L"forwarders;");
  }
  if ( v19 > Length )
  {
    RtlAppendUnicodeStringToString(&v93, &Source);
    RtlAppendUnicodeToString(&v93, L"\\system;");
    RtlAppendUnicodeStringToString(&v93, &Source);
    RtlAppendUnicodeToString(&v93, ";");
    stru_18015C030 = v93;
  }
  if ( (unsigned int)(dword_18015C448 - 1) <= 0xFFFFFFFD )
    sub_1800D6D28(&ImagePathName);
  v25 = BaseOfImage;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &OutHeaders);
  v26 = sub_180039C9C(0LL);
  v27 = v26;
  if ( !v26 )
  {
    v20 = dword_180155A10;
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
  qword_18015B318 = (__int64)v26;
  *(_DWORD *)(*((_QWORD *)v26 + 19) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(qword_18015B318 + 152) - 52LL) = -1;
  v28 = (_UNICODE_STRING *)qword_18015B318;
  *(_DWORD *)(qword_18015B318 + 104) |= 0x204u;
  v28[15].Buffer = (PWCH)((char *)v28[15].Buffer - LdrSystemDllInitBlock.SystemDllNativeRelocation);
  v28 = (_UNICODE_STRING *)((char *)v28 + 72);
  *v28 = Destination;
  RtlAppendUnicodeStringToString(v28, &stru_1801108C0);
  v29 = qword_18015B318;
  *(UNICODE_STRING *)(qword_18015B318 + 88) = stru_1801108C0;
  *(_QWORD *)(v29 + 48) = v25;
  sub_18003A99C(v29);
  sub_18003CA5C(*(_QWORD *)(qword_18015B318 + 48), qword_18015B318 + 72, 0x14A5u);
  sub_18008350C(qword_18015B318, (__int64)OutHeaders);
  result = sub_18003A7B0(qword_18015B318, 1);
  v87 = result;
  if ( result < 0 )
    return result;
  sub_18003CA5C(*(_QWORD *)(qword_18015B318 + 48), qword_18015B318 + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(qword_18015B318 + 152) + 56LL) = 9;
  sub_18007DCD4();
  v30 = v27 + 32;
  v31 = qword_18015B370;
  if ( *(__int64 **)(qword_18015B370 + 8) != &qword_18015B370 )
    __fastfail(3u);
  *v30 = qword_18015B370;
  *((_QWORD *)v27 + 5) = &qword_18015B370;
  *(_QWORD *)(v31 + 8) = v30;
  qword_18015B370 = (__int64)(v27 + 32);
  result = sub_18000BBF4();
  v87 = result;
  if ( result < 0 )
  {
    v12 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      LODWORD(Callback) = result;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4874,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to initialize Parallel loader, st = 0x%x\n",
        Callback);
      goto LABEL_18;
    }
LABEL_19:
    if ( (v12 & 0x10) != 0 )
      __debugbreak();
    return result;
  }
  sub_18001AE14(0);
  sub_18003BE90(0LL, 0LL, (__int64 *)Path);
  memset(v127, 0, 0xA0uLL);
  *(_QWORD *)&v127[1] = Path;
  DWORD2(v127[1]) = 512;
  v127[0] = ImagePathName;
  *(_QWORD *)&v127[2] = &v87;
  v32 = sub_180039C9C((__int64)v127);
  BaseAddress = v32;
  if ( !v32 )
  {
    v20 = dword_180155A10;
    if ( (dword_180155A10 & 3) == 0 )
      goto LABEL_64;
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      4895,
      (unsigned int)"LdrpInitializeProcess",
      0,
      "Allocating a data table entry for the executable failed\n");
LABEL_63:
    v20 = dword_180155A10;
    goto LABEL_64;
  }
  qword_18015AE50 = (__int64)v32;
  v33 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(qword_18015AE50 + 152) + 24LL) = -1;
    --v33;
  }
  while ( v33 );
  *(_WORD *)(**(_QWORD **)(qword_18015AE50 + 152) - 52LL) = -1;
  v34 = qword_18015AE50;
  *(__m128i *)(qword_18015AE50 + 72) = ImagePathName;
  *(_DWORD *)(v34 + 104) |= 4u;
  v35 = (char *)BaseAddress;
  if ( byte_18015B2D8 )
  {
    v36 = *(_DWORD *)(v34 + 104) | 0x400000;
    *(_DWORD *)(v34 + 104) = v36;
    if ( (_BYTE)v88 )
      *(_DWORD *)(v34 + 104) = v36 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v34 + 248) = 0LL;
  v37 = 0LL;
  v38 = (_WORD *)(ImagePathName.m128i_i64[1] + ImagePathName.m128i_u16[0]);
  if ( v38 )
  {
    while ( 1 )
    {
      v39 = (unsigned __int64)v38--;
      if ( v39 <= ImagePathName.m128i_i64[1] )
        break;
      if ( *v38 == 92 )
      {
        v37 = v38 + 1;
        break;
      }
    }
  }
  if ( v37 )
  {
    v40 = ImagePathName.m128i_i16[4] + ImagePathName.m128i_i16[0] - (_WORD)v37;
    *(_WORD *)(v34 + 88) = v40;
    if ( ImagePathName.m128i_u16[1] - (unsigned int)ImagePathName.m128i_u16[0] >= 2 )
      v40 += 2;
    *(_WORD *)(v34 + 90) = v40;
    *(_QWORD *)(v34 + 96) = v37;
  }
  else
  {
    *(_OWORD *)(v34 + 88) = *(_OWORD *)(v35 + 72);
  }
  v41 = *(void **)(ProcessEnvironmentBlock + 16);
  v42 = v100;
  if ( (void *)v100->OptionalHeader.ImageBase != v41 && !(_BYTE)v88 && !dword_18015B264 )
  {
    result = sub_1800867F4(v41);
    v87 = result;
    if ( result < 0 )
      return result;
    v34 = qword_18015AE50;
  }
  *(_QWORD *)(v34 + 48) = *(_QWORD *)(ProcessEnvironmentBlock + 16);
  sub_18003A99C(v34);
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
  sub_18008350C(qword_18015AE50, (__int64)v42);
  result = sub_18003A7B0(qword_18015AE50, dword_18015B264 == 0);
  v87 = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(qword_18015AE50 + 152) + 56LL) = 9;
  v43 = sub_18007B1E4(&UnicodeString.Length);
  v87 = v43;
  if ( v43 < 0 )
  {
    v44 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      LODWORD(Wow64) = v43;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5052,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        Wow64);
      v44 = dword_180155A10;
    }
    if ( (v44 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v96 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x2000100) != 0 )
  {
    v45 = sub_180039C9C(0LL);
    v46 = (__int64)v45;
    if ( !v45 )
    {
      v20 = dword_180155A10;
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
    *(_DWORD *)(*((_QWORD *)v45 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v45 + 19) - 52LL) = -1;
    v47 = v120;
    *((_DWORD *)v45 + 26) |= *(_DWORD *)(v120 + 104);
    *((_QWORD *)v45 + 31) = *(_QWORD *)(v47 + 248);
    *((_WORD *)v45 + 55) = 0;
    *(_OWORD *)(v45 + 72) = *(_OWORD *)(v47 + 72);
    *(_OWORD *)(v45 + 88) = *(_OWORD *)(v47 + 88);
    *((_DWORD *)v45 + 32) = *(_DWORD *)(v47 + 128);
    *((_QWORD *)v45 + 6) = *(_QWORD *)(v47 + 48);
    sub_18003A99C((__int64)v45);
    sub_18003CA5C(*(_QWORD *)(v46 + 48), v46 + 72, 0x14A5u);
    result = RtlImageNtHeaderEx(3u, *(PVOID *)(v46 + 48), 0LL, &OutHeaders);
    v87 = result;
    if ( result < 0 )
      return result;
    sub_18008350C(v46, (__int64)OutHeaders);
    result = sub_18003A7B0(v46, 1);
    v87 = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)(v46 + 56) = *(_QWORD *)(v47 + 56);
    sub_18003CA5C(*(_QWORD *)(v46 + 48), v46 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v46 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 )
    {
      result = sub_1800DA690(0, 0, 0, 1, (__int64)BaseOfImage, 0LL);
    }
    else
    {
      v91[0] = 0;
      result = sub_18006FC38(*(_QWORD *)(v46 + 152), 0LL, v91);
    }
    v87 = result;
    if ( result < 0 )
      return result;
    v42 = v100;
  }
  sub_18001A338();
  if ( dword_18015B264 )
  {
    if ( Handle )
    {
      ZwClose(Handle);
      Handle = 0LL;
      if ( qword_18015AEC0 )
      {
        ZwClose(qword_18015AEC0);
        qword_18015AEC0 = 0LL;
      }
    }
    if ( v97 )
    {
      ZwClose(v97);
      v97 = 0LL;
    }
    result = sub_180085C94(&Destination);
    v87 = result;
    if ( result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        sub_1800D6F48();
      dword_18015C018 = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      qword_18016B210(v110);
LABEL_28:
      if ( Handle )
        ZwClose(Handle);
      if ( v97 )
        ZwClose(v97);
      return 0;
    }
    return result;
  }
  v115 = 0LL;
  if ( byte_18015B2D8 )
  {
    result = sub_1800874C4((PVOID *)&v115);
    v87 = result;
    if ( result < 0 )
      return result;
    if ( (_BYTE)v88 )
    {
      result = sub_1800888F8(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      v87 = result;
      if ( result < 0 )
        return result;
    }
    if ( (v114->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v110 + 128) = __ROR8__(qword_18015B3A0, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  result = sub_1800584E4();
  v87 = result;
  if ( result < 0 )
  {
    v12 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      LODWORD(Callback) = result;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5291,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing TLS slots failed with status 0x%08lx\n",
        Callback);
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  if ( v115 )
  {
    v89 = 0;
    result = sub_18006FC38(v115[19], 0LL, &v89);
    v87 = result;
    if ( result < 0 )
    {
      v12 = dword_180155A10;
      if ( (dword_180155A10 & 3) != 0 )
      {
        LODWORD(Callback) = result;
        sub_1800D5274(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5310,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
          Callback);
        goto LABEL_18;
      }
      goto LABEL_19;
    }
  }
  ProcedureAddress = 0LL;
  if ( (unsigned __int16)(v42->OptionalHeader.Subsystem - 2) <= 1u )
  {
    result = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&stru_180110260, &DllHandle);
    v87 = result;
    if ( result < 0 )
    {
      if ( result != -1073741515 )
      {
        v12 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          LODWORD(Wow64) = result;
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5451,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &stru_180110260,
            Wow64);
          goto LABEL_18;
        }
        goto LABEL_19;
      }
      result = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&BaseDllName, &DllHandle);
      v87 = result;
      if ( result < 0 )
      {
        v12 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          LODWORD(Wow64) = result;
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5424,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &BaseDllName,
            Wow64);
          goto LABEL_18;
        }
        goto LABEL_19;
      }
      result = sub_18007FE68();
      v87 = result;
      if ( (int)(result + 0x80000000) >= 0 && result != -1073741515 )
      {
        v12 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          LODWORD(Callback) = result;
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5440,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            Callback);
          goto LABEL_18;
        }
        goto LABEL_19;
      }
      v87 = 0;
    }
    else
    {
      result = LdrGetProcedureAddressForCaller(
                 DllHandle,
                 (PANSI_STRING)&stru_1801108E0,
                 0,
                 &qword_18015AE90,
                 0,
                 retaddr);
      v87 = result;
      if ( result < 0 )
      {
        v12 = dword_180155A10;
        if ( (dword_180155A10 & 3) != 0 )
        {
          LODWORD(v86) = result;
          sub_1800D5274(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5356,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &stru_1801108E0,
            &stru_180110260,
            v86);
          goto LABEL_18;
        }
        goto LABEL_19;
      }
      LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_180110910, 0, &ProcedureAddress, 0, retaddr);
      result = sub_18003C49C();
      v87 = result;
      if ( result < 0 )
        return result;
      result = sub_18007FE68();
      v87 = result;
      if ( result < 0 )
        return result;
    }
  }
  sub_18001AE14(0);
  sub_1800831CC(0LL);
  v48 = v116;
  if ( v116 && *(_DWORD *)(v116 + 8) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    sub_18006EEF8(v48);
  }
  v49 = byte_180159BC8;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v49 = 1;
  byte_180159BC8 = v49;
  sub_18000FD48(*(_DWORD *)(v109 + 1036));
  dword_18015C018 = 1;
  *(_DWORD *)(*(_QWORD *)(qword_18015AE50 + 152) + 56LL) = 2;
  **(_DWORD **)&v127[2] = 0;
  if ( (_BYTE)v88 )
  {
    result = sub_180088E9C(qword_18015AE50);
  }
  else
  {
    DWORD2(v127[1]) |= 1u;
    sub_1800417FC((__int64)v127);
    sub_18001AE14(1);
    result = v87;
    if ( v87 < 0 )
      goto LABEL_174;
    result = sub_18001A58C(qword_18015AE50, *(__int64 *)&v127[2]);
  }
  v87 = result;
  if ( result < 0 )
  {
LABEL_174:
    v12 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      LODWORD(Callback) = result;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5657,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
        Callback);
      goto LABEL_18;
    }
    goto LABEL_19;
  }
  dword_18015C018 = 2;
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    sub_1800D6F48();
  sub_18001A338();
  if ( !qword_18015AE90
    || (result = _guard_dispatch_icall_fptr(), v87 = result, result >= 0)
    && (result = sub_180085EDC((__int64 (__fastcall *)(_BYTE *, __int64))ProcedureAddress), v87 = result, result >= 0) )
  {
    qword_18015B2F0 = v110;
    sub_18001AE14(0);
    sub_180019FC0();
    v90 = 0;
    v87 = sub_18006FC38(*(_QWORD *)(qword_18015AE50 + 152), *(__int64 *)&v127[2], &v90);
    sub_18001A028(v11, 9, v87);
    sub_18001A828(*(_QWORD **)(qword_18015AE50 + 152), *(__int64 *)&v127[2]);
    sub_18001A338();
    qword_18015B2F0 = 0LL;
    if ( v132 )
      RtlReleasePath(Path[0]);
    result = v87;
    if ( v87 < 0 )
    {
      v12 = dword_180155A10;
      if ( (dword_180155A10 & 3) == 0 )
        goto LABEL_19;
      LODWORD(Callback) = v87;
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5792,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
        Callback);
      goto LABEL_18;
    }
    if ( *(_WORD *)(qword_18015AE50 + 110) )
    {
      v124 = 72LL;
      v125 = 1;
      memset(v126, 0, sizeof(v126));
      RtlActivateActivationContextUnsafeFast((__int64)&v124, *(_QWORD *)(qword_18015AE50 + 136));
      sub_18006FF7C(1, qword_18015AE50);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v124);
    }
    if ( byte_18015BF54 && !(unsigned __int8)_guard_dispatch_icall_fptr() )
    {
      byte_18015BF54 = 0;
      LdrUnloadDll(::DllHandle);
      ::DllHandle = 0LL;
    }
    if ( *(_QWORD *)(ProcessEnvironmentBlock + 560) )
      _guard_dispatch_icall_fptr();
    goto LABEL_28;
  }
  return result;
}
