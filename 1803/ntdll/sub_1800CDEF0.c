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

int __fastcall sub_1800CDEF0(__int64 a1, void *a2)
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
  WCHAR *v12; // rdx
  USHORT Length; // r8
  PIMAGE_NT_HEADERS v14; // r15
  char v15; // al
  int result; // eax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  char v20; // al
  char v21; // cl
  int WowTebOffset; // ecx
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  unsigned int *v25; // rax
  unsigned int *v26; // r15
  ULONG v27; // r12d
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // rax
  char v32; // al
  _QWORD *v33; // rcx
  int v34; // ecx
  char v35; // al
  unsigned int v36; // eax
  NTSTATUS v37; // ecx
  unsigned __int64 v38; // r15
  SIZE_T SizeOfHeapReserve; // r8
  SIZE_T SizeOfHeapCommit; // r9
  PVOID Heap; // rax
  void *v42; // r12
  char v43; // al
  PVOID v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r13
  const WCHAR *NtSystemRoot; // rax
  USHORT v48; // r15
  WCHAR *v49; // rax
  SIZE_T v50; // r15
  int *v51; // rax
  int v52; // edx
  WCHAR *v53; // r13
  __m128i v54; // xmm0
  WCHAR *v55; // xmm0_8
  WCHAR *v56; // r15
  PWSTR v57; // rax
  unsigned __int64 v58; // r15
  SIZE_T v59; // r12
  __int64 v60; // rdx
  PVOID v61; // r12
  char *v62; // rax
  char *v63; // r15
  _UNICODE_STRING *v64; // rcx
  __int64 v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // rcx
  char *v68; // rax
  char *v69; // r11
  __int64 v70; // rdx
  __int64 v71; // rdx
  int v72; // eax
  char v73; // r12
  int v74; // eax
  WCHAR *v75; // r9
  WCHAR *v76; // r8
  WCHAR *v77; // rax
  WCHAR *v78; // r10
  __int16 v79; // r8
  void *v80; // rcx
  void *v81; // rax
  PIMAGE_NT_HEADERS v82; // r15
  int v83; // eax
  char v84; // cl
  char *v85; // rax
  __int64 v86; // r15
  __int64 v87; // r13
  char v88; // r13
  PVOID v89; // rcx
  __int64 v90; // r15
  char v91; // al
  unsigned int v92; // ecx
  __int64 v93; // rcx
  PULONG ReturnedLength; // [rsp+28h] [rbp-3F0h]
  PULONG ReturnedLengtha; // [rsp+28h] [rbp-3F0h]
  __int64 Wow64; // [rsp+30h] [rbp-3E8h]
  __int64 v97; // [rsp+38h] [rbp-3E0h]
  int v98; // [rsp+50h] [rbp-3C8h] BYREF
  int v99; // [rsp+54h] [rbp-3C4h]
  char v100; // [rsp+58h] [rbp-3C0h] BYREF
  char v101; // [rsp+59h] [rbp-3BFh] BYREF
  char v102[6]; // [rsp+5Ah] [rbp-3BEh] BYREF
  _UNICODE_STRING v103; // [rsp+60h] [rbp-3B8h] BYREF
  int Buffer; // [rsp+70h] [rbp-3A8h] BYREF
  int v105; // [rsp+74h] [rbp-3A4h] BYREF
  int v106; // [rsp+78h] [rbp-3A0h]
  HANDLE v107; // [rsp+80h] [rbp-398h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-388h] BYREF
  _UNICODE_STRING SubKey; // [rsp+A0h] [rbp-378h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B0h] [rbp-368h] BYREF
  PVOID DllHandle; // [rsp+B8h] [rbp-360h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-358h] BYREF
  _UNICODE_STRING Destination; // [rsp+C8h] [rbp-350h] BYREF
  _UNICODE_STRING ImagePathName; // [rsp+D8h] [rbp-340h] BYREF
  ULONG v115; // [rsp+E8h] [rbp-330h] BYREF
  PIMAGE_NT_HEADERS v116; // [rsp+F0h] [rbp-328h] BYREF
  PVOID BaseOfImage; // [rsp+F8h] [rbp-320h]
  __int64 v118; // [rsp+100h] [rbp-318h]
  __int64 v119; // [rsp+108h] [rbp-310h]
  _UNICODE_STRING DestinationString; // [rsp+110h] [rbp-308h] BYREF
  PVOID ProcedureAddress; // [rsp+120h] [rbp-2F8h] BYREF
  __int64 v122; // [rsp+128h] [rbp-2F0h] BYREF
  HANDLE LinkHandle; // [rsp+130h] [rbp-2E8h] BYREF
  struct _TEB *v124; // [rsp+138h] [rbp-2E0h]
  _QWORD *v125; // [rsp+140h] [rbp-2D8h] BYREF
  __int64 v126; // [rsp+148h] [rbp-2D0h]
  int v127; // [rsp+150h] [rbp-2C8h] BYREF
  const WCHAR *v128; // [rsp+158h] [rbp-2C0h]
  DWORD v129; // [rsp+160h] [rbp-2B8h] BYREF
  PIMAGE_NT_HEADERS v130; // [rsp+168h] [rbp-2B0h] BYREF
  __int64 SystemInformation; // [rsp+170h] [rbp-2A8h] BYREF
  __int64 v132; // [rsp+178h] [rbp-2A0h] BYREF
  char *v133; // [rsp+180h] [rbp-298h] BYREF
  PVOID v134; // [rsp+188h] [rbp-290h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+190h] [rbp-288h] BYREF
  __int64 v136; // [rsp+1C0h] [rbp-258h] BYREF
  int v137; // [rsp+1C8h] [rbp-250h]
  _BYTE v138[56]; // [rsp+1D0h] [rbp-248h] BYREF
  _OWORD v139[15]; // [rsp+210h] [rbp-208h] BYREF
  _QWORD Parameters[12]; // [rsp+300h] [rbp-118h] BYREF
  PWSTR Path[15]; // [rsp+360h] [rbp-B8h] BYREF
  char v142; // [rsp+3DCh] [rbp-3Ch]
  PVOID *retaddr; // [rsp+418h] [rbp+0h]

  BaseOfImage = a2;
  v119 = a1;
  v127 = 1441812;
  v128 = L"\\KnownDlls";
  Ptr = RtlEncodePointer(0LL);
  v3 = NtCurrentTeb();
  v124 = v3;
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
  sub_1800CDEB8((PUSHORT *)ProcessEnvironmentBlock);
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
  v12 = (WCHAR *)(*(_QWORD *)(v11 + 104) + v11);
  if ( (*(_BYTE *)(v11 + 8) & 1) != 0 )
    v12 = *(WCHAR **)(v11 + 104);
  SubKey.Buffer = v12;
  SubKey.Length = *(_WORD *)(v11 + 96);
  Length = SubKey.Length;
  SubKey.MaximumLength = SubKey.Length + 2;
  if ( SubKey.Length >= 8u && *v12 == 92 && v12[1] == 63 && v12[2] == 63 && v12[3] == 92 )
  {
    SubKey.Length -= 8;
    SubKey.MaximumLength = Length - 6;
    SubKey.Buffer = v12 + 4;
    *(_WORD *)(v11 + 96) -= 8;
    *(_WORD *)(v11 + 98) -= 8;
    *(_QWORD *)(v11 + 104) += 8LL;
  }
  v106 = 1;
  byte_18015C308 = 0;
  LOBYTE(v99) = 0;
  v105 = 0;
  RtlImageNtHeaderEx(3u, *(PVOID *)(ProcessEnvironmentBlock + 16), 0LL, &OutHeaders);
  v14 = OutHeaders;
  qword_18015C2A8 = (__int64)OutHeaders;
  if ( byte_18015C298 && (OutHeaders->FileHeader.Characteristics & 0x20) == 0 )
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
    return -1073741637;
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
  RtlImageNtHeaderEx(3u, a2, 0LL, &v130);
  sub_18002AE58((unsigned __int64)a2, v130->OptionalHeader.SizeOfImage);
  sub_1800DAFC0(a2);
  sub_1800D078C();
  sub_1800259B4(1);
  if ( (unsigned int)sub_18001F704() == 1 )
    qword_18015C300 = (__int64)&off_1801110E0;
  v139[12] = *(_OWORD *)LdrSystemDllInitBlock.MitigationOptionsMap.Map;
  v19 = (_mm_srli_si128(*(__m128i *)LdrSystemDllInitBlock.MitigationOptionsMap.Map, 8).m128i_u64[0] >> 4) & 3;
  byte_18015C2B0 = (_BYTE)v19 == 1;
  if ( (_BYTE)v19 == 1
    || (v139[13] = *(_OWORD *)LdrSystemDllInitBlock.MitigationOptionsMap.Map, v20 = 0, (_BYTE)v19 == 3) )
  {
    v20 = 1;
  }
  byte_18015C2F8 = v20;
  result = sub_1800CD0D8(&SubKey.Length, ProcessEnvironmentBlock, (__int64)a2, &Handle, &v107, (__int64)&v132);
  v98 = result;
  if ( result < 0 )
  {
    v21 = dword_180156A70;
    if ( (dword_180156A70 & 3) == 0 )
      goto LABEL_33;
    LODWORD(ReturnedLength) = v3->ClientId.UniqueProcess;
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3735,
      (unsigned int)"LdrpInitializeProcess",
      0,
      "Initializing the execution options for the process %lx failed with status 0x%08lx\n",
      ReturnedLength,
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
  v126 = 0LL;
  WowTebOffset = v3->WowTebOffset;
  dword_18015C290 = WowTebOffset > 0;
  if ( v14 && v14->OptionalHeader.Magic == 267 && WowTebOffset <= 0 )
  {
    byte_18015C308 = 1;
    LOBYTE(v14) = 1;
    v99 = (int)v14;
    v5 = 1;
    result = sub_1800CAFA8(*(void **)(ProcessEnvironmentBlock + 16));
    v98 = result;
    if ( result < 0 )
      return result;
  }
  else
  {
    LOBYTE(v14) = v99;
  }
  if ( !dword_18015C290 && !byte_18015C308 )
  {
    v23 = sub_18001014C(*(_QWORD *)(ProcessEnvironmentBlock + 16), 1, 0xEu, &v129, (char **)&v122);
    v24 = v122;
    if ( v23 < 0 )
      v24 = 0LL;
    v122 = v24;
    if ( v24 )
    {
      byte_18015C308 = 1;
      LODWORD(v14) = (unsigned __int8)v14;
      if ( (*(_BYTE *)(v24 + 16) & 1) != 0 )
        LODWORD(v14) = 1;
      v99 = (int)v14;
    }
  }
  qword_18015C350 = (__int64)BaseOfImage;
  if ( !dword_18015C290 )
    v126 = *(_QWORD *)(ProcessEnvironmentBlock + 728);
  Timeout = *(LARGE_INTEGER *)(ProcessEnvironmentBlock + 192);
  ImagePathName = RtlNormalizeProcessParams(*(PRTL_USER_PROCESS_PARAMETERS *)(ProcessEnvironmentBlock + 32))->ImagePathName;
  v25 = 0LL;
  if ( !dword_18015C290 && (!byte_18015C308 || !v5) )
    v25 = sub_18002B3EC(*(PVOID *)(ProcessEnvironmentBlock + 16));
  v26 = v25;
  memset(Parameters, 0, sizeof(Parameters));
  v27 = 2;
  LODWORD(Parameters[0]) = 96;
  if ( v26 )
  {
    v28 = *v26;
    if ( *v26 >= 0x10 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) &= ~v26[3];
      v28 = *v26;
    }
    if ( v28 >= 0x14 )
    {
      *(_DWORD *)(ProcessEnvironmentBlock + 188) |= v26[4];
      v28 = *v26;
    }
    if ( v28 >= 0x18 && v26[5] )
    {
      Timeout.QuadPart = -10000LL * (int)v26[5];
      v28 = *v26;
    }
    if ( v28 >= 0x4C )
    {
      v29 = v26[18];
      if ( v29 )
      {
        v30 = v29 & 0xFFFF0FFF;
        if ( v30 )
          v27 = v30;
      }
    }
    if ( v28 >= 0x20 && *((_QWORD *)v26 + 3) )
    {
      Parameters[3] = *((_QWORD *)v26 + 3);
      v28 = *v26;
    }
    if ( v28 >= 0x28 && *((_QWORD *)v26 + 4) )
    {
      Parameters[4] = *((_QWORD *)v26 + 4);
      v28 = *v26;
    }
    if ( v28 >= 0x38 && *((_QWORD *)v26 + 6) )
    {
      Parameters[5] = *((_QWORD *)v26 + 6);
      v28 = *v26;
    }
    if ( v28 >= 0x40 )
    {
      v31 = Parameters[6];
      if ( *((_QWORD *)v26 + 7) )
        v31 = *((_QWORD *)v26 + 7);
      Parameters[6] = v31;
    }
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 188) & 2) != 0 )
    dword_180156A70 |= 1u;
  v32 = byte_18015BEB8;
  if ( Timeout.QuadPart < -36000000000LL )
    v32 = 1;
  byte_18015BEB8 = v32;
  dword_18015BEA8 = 0;
  RtlInitializeSListHead(&stru_18015D0E0);
  v33 = &unk_18015AC20;
  do
  {
    *v33 = v33 + 6;
    v33 += 6;
  }
  while ( v33 <= qword_18015AD40 );
  *v33 = 0LL;
  RtlInterlockedPushListSList(&stru_18015D0E0, (signed __int64)&unk_18015AC20, qword_18015AD70, 8);
  v98 = 0;
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
    RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0, 0x13u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 4u, 1u);
  RtlSetBits(*(PRTL_BITMAP *)(ProcessEnvironmentBlock + 120), 0x10u, 1u);
  v34 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
  if ( (v34 & 0x1000) != 0 || (v35 = byte_18015D404) != 0 )
  {
    v36 = 24;
    Buffer = 24;
    if ( byte_18015C298 )
    {
      v37 = -1073741772;
    }
    else
    {
      v37 = LdrQueryImageFileExecutionOptionsEx(&SubKey, L"StackTraceDatabaseSizeInMb", 4u, &Buffer, 4u, 0LL, 0);
      v36 = Buffer;
    }
    v98 = v37;
    if ( v37 >= 0 && v36 >= 0x18 )
    {
      if ( v36 <= 0x80 )
        v38 = v36 << 20;
      else
        v38 = 0x8000000LL;
    }
    else
    {
      v38 = 25165824LL;
    }
    if ( (dword_180156A70 & 5) != 0 )
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4071,
        (unsigned int)"LdrpInitializeProcess",
        2,
        "Stack trace database size is %Id Mb\n",
        v38 >> 20);
    v98 = sub_1800F6B98(0LL, 0LL, v38);
    v34 = *(_DWORD *)(ProcessEnvironmentBlock + 188);
    v35 = byte_18015D404;
  }
  if ( (v34 & 0x1000) != 0 || v35 )
    byte_18015AC08 = 1;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
  {
    byte_18015AC08 = 1;
    byte_18015AC09 = 1;
  }
  result = RtlInitializeCriticalSectionEx(&stru_18015BE80, 0, 0);
  v98 = result;
  if ( result < 0 )
    return result;
  *(_QWORD *)(ProcessEnvironmentBlock + 56) = &stru_18015BE80;
  result = sub_1800EB1A0(&SubKey);
  v98 = result;
  if ( result < 0 )
    return result;
  v139[14] = *(_OWORD *)LdrSystemDllInitBlock.MitigationOptionsMap.Map;
  if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[0] >> 12) & 3) == 1 )
    RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  if ( dword_18015C290 || OutHeaders->OptionalHeader.Magic == 267 )
  {
    SizeOfHeapReserve = 0LL;
    SizeOfHeapCommit = 0LL;
  }
  else
  {
    if ( OutHeaders->OptionalHeader.MajorSubsystemVersion <= 3u
      && OutHeaders->OptionalHeader.MinorSubsystemVersion < 0x33u )
    {
      v27 |= 0x10000u;
    }
    SizeOfHeapReserve = OutHeaders->OptionalHeader.SizeOfHeapReserve;
    SizeOfHeapCommit = OutHeaders->OptionalHeader.SizeOfHeapCommit;
  }
  Heap = RtlCreateHeap(v27, 0LL, SizeOfHeapReserve, SizeOfHeapCommit, 0LL, Parameters);
  v42 = Heap;
  if ( !Heap )
  {
    v43 = dword_180156A70;
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
  RtlInitializeCriticalSection(&CriticalSection);
  qword_18015CA78 = (__int64)&qword_18015CA70;
  qword_18015CA70 = (__int64)&qword_18015CA70;
  if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x800000) != 0 )
  {
    v44 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x11620uLL);
    qword_18015D448 = (__int64)v44;
    if ( v44 )
      memset(v44, 0, 0x11620uLL);
  }
  sub_180072AD0((__int64)v124);
  HeapHandle = v42;
  if ( ((unsigned __int8)&ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  ListHead = 0uLL;
  qword_18015A418 = 0LL;
  v98 = ZwQuerySystemInformation(SystemHypervisorSharedPageInformation, &SystemInformation, 8u, 0LL);
  v45 = qword_18015ADA8;
  if ( v98 >= 0 )
    v45 = SystemInformation;
  qword_18015ADA8 = v45;
  Flags = RtlCreateTagHeap(v42, 0, (PWSTR)L"NTDLL!", (PWSTR)L"!Process");
  result = sub_18007D0E0();
  v98 = result;
  if ( result < 0 )
    return result;
  EtwEventRegister(&stru_180114528, 0LL, 0LL, &qword_18015A410);
  EtwEventRegister(&stru_180118380, sub_1800F2530, 0LL, &RegHandle);
  EtwEventRegister(&stru_180115DD8, sub_1800FD290, 0LL, &qword_18015D2D8);
  if ( (byte_18015D028 & 8) != 0 )
    sub_1800726B8((ULONGLONG *)&dword_180156650);
  result = sub_18004B9A4();
  v98 = result;
  if ( result < 0 )
    return result;
  result = sub_18007D464();
  v98 = result;
  if ( result < 0 )
    return result;
  v46 = *(_QWORD *)(ProcessEnvironmentBlock + 32);
  v118 = v46;
  ImagePathName = *(_UNICODE_STRING *)(v46 + 96);
  SubKey.Buffer = (PWCH)_mm_srli_si128((__m128i)ImagePathName, 8).m128i_u64[0];
  if ( Handle || v107 )
  {
    v98 = sub_18004AEE4(v107, Handle, L"DebugProcessHeapOnly", 4u, &v105, 4u, Wow64, 0LL);
    if ( v98 >= 0 && dword_1801563E8 && v105 )
    {
      dword_1801563E8 = 0;
      *Value &= ~0x400u;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlInitUnicodeStringEx(&DestinationString, NtSystemRoot);
  v48 = DestinationString.Length + 40;
  v49 = (WCHAR *)RtlAllocateHeap(v42, 0, (unsigned int)DestinationString.Length + 38 + 2LL);
  if ( !v49 )
    return -1073741801;
  Destination.Length = 0;
  Destination.MaximumLength = v48;
  Destination.Buffer = v49;
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  RtlAppendUnicodeStringToString(&Destination, &stru_180110350);
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x42) != 2 )
  {
    v50 = 48LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v127;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenDirectoryObject(&DirectoryHandle, 3u, &ObjectAttributes);
    v98 = result;
    if ( result != -1073741772 || (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 0x40) == 0 )
    {
      if ( result >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Attributes = 64;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180110B08;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
        v98 = result;
        if ( result >= 0 )
        {
          while ( 1 )
          {
            v53 = (WCHAR *)RtlAllocateHeap(v42, 0, v50);
            if ( !v53 )
              return -1073741801;
            LinkTarget.Length = 0;
            LinkTarget.MaximumLength = v50;
            LinkTarget.Buffer = v53;
            result = ZwQuerySymbolicLinkObject(LinkHandle, &LinkTarget, &v115);
            v98 = result;
            if ( result >= 0 )
            {
              ZwClose(LinkHandle);
              v46 = v118;
              goto LABEL_167;
            }
            if ( result != -1073741789 )
            {
              v21 = dword_180156A70;
              if ( (dword_180156A70 & 3) == 0 )
                goto LABEL_33;
              LODWORD(ReturnedLengtha) = result;
              sub_1800CA554(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                4490,
                (unsigned int)"LdrpInitializeProcess",
                0,
                "Querying the known DLL directory link object failed with status 0x%08lx\n",
                ReturnedLengtha);
              goto LABEL_32;
            }
            RtlFreeHeap(v42, 0, v53);
            v50 = v115;
          }
        }
        v21 = dword_180156A70;
        if ( (dword_180156A70 & 3) == 0 )
          goto LABEL_33;
        LODWORD(Wow64) = result;
        v51 = (int *)&unk_180110B08;
        v52 = 4455;
      }
      else
      {
        v21 = dword_180156A70;
        if ( (dword_180156A70 & 3) == 0 )
          goto LABEL_33;
        LODWORD(Wow64) = result;
        v51 = &v127;
        v52 = 4432;
      }
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        v52,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to open %wZ with status 0x%08lx\n",
        v51,
        Wow64);
LABEL_32:
      result = v98;
      v21 = dword_180156A70;
      goto LABEL_33;
    }
    if ( (dword_180156A70 & 5) != 0 )
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4422,
        (unsigned int)"LdrpInitializeProcess",
        2,
        "KnownDLL directory does not yet exist.  SMSS will create it.\n");
    v98 = 0;
  }
LABEL_167:
  if ( dword_18015C290 || byte_18015C298 )
  {
    UnicodeString = DestinationString;
  }
  else
  {
    v54 = *(__m128i *)(v46 + 56);
    *(_QWORD *)&UnicodeString.Length = *(_QWORD *)(v46 + 56);
    v55 = (WCHAR *)_mm_srli_si128(v54, 8).m128i_u64[0];
    UnicodeString.Buffer = v55;
    if ( !v55 || !UnicodeString.Length || !*v55 )
    {
      v56 = (WCHAR *)RtlAllocateHeap(v42, 0, 8uLL);
      UnicodeString.Buffer = v56;
      if ( !v56 )
      {
        v43 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            4538,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Allocating a buffer to hold the current working directory failed\n");
LABEL_125:
          v43 = dword_180156A70;
          goto LABEL_126;
        }
        goto LABEL_126;
      }
      v106 = 0;
      v57 = RtlGetNtSystemRoot();
      *(_DWORD *)v56 = *(_DWORD *)v57;
      v56[2] = v57[2];
      UnicodeString.Buffer[3] = 0;
      *(_DWORD *)&UnicodeString.Length = 524294;
    }
  }
  sub_18007F528();
  v58 = Destination.Length;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
    v58 = 2LL * Destination.Length + 22;
  v59 = v58;
  if ( (dword_1801596D4 & 1) == 0 )
  {
    v59 = v58 + 2 * (DestinationString.Length + 9LL);
    if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 2) != 0 )
      *(_WORD *)(v46 + 80) = 0;
  }
  v103.Buffer = (PWCH)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v59);
  if ( !v103.Buffer )
  {
    v43 = dword_180156A70;
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
    if ( (v43 & 0x10) != 0 )
      __debugbreak();
    return -1073741801;
  }
  v103.Length = 0;
  v103.MaximumLength = v59;
  RtlAppendUnicodeStringToString(&v103, &Destination);
  v60 = v103.Length;
  v103.Buffer[((unsigned __int64)v103.Length >> 1) - 1] = 59;
  xmmword_18015CFC0 = (__int128)v103;
  xmmword_18015C2D0 = (__int128)v103;
  LOWORD(v60) = v60 - 2;
  LOWORD(xmmword_18015C2D0) = v60;
  if ( (*(_DWORD *)(*(_QWORD *)(ProcessEnvironmentBlock + 32) + 8LL) & 0x20000000) != 0 )
  {
    RtlAppendUnicodeStringToString(&v103, &Destination);
    RtlAppendUnicodeToString(&v103, L"forwarders;");
  }
  if ( v59 > v58 )
  {
    RtlAppendUnicodeStringToString(&v103, &DestinationString);
    RtlAppendUnicodeToString(&v103, L"\\system;");
    RtlAppendUnicodeStringToString(&v103, &DestinationString);
    RtlAppendUnicodeToString(&v103, ";");
    stru_18015CFD0 = v103;
  }
  if ( (unsigned int)(dword_18015D400 - 1) <= 0xFFFFFFFD )
    sub_1800CC838(&ImagePathName, v60);
  v61 = BaseOfImage;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v116);
  v62 = sub_180040F58(0LL);
  v63 = v62;
  if ( !v62 )
  {
    v43 = dword_180156A70;
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
  qword_18015C348 = (__int64)v62;
  *(_DWORD *)(*((_QWORD *)v62 + 19) + 24LL) = -1;
  *(_WORD *)(**(_QWORD **)(qword_18015C348 + 152) - 52LL) = -1;
  v64 = (_UNICODE_STRING *)qword_18015C348;
  *(_DWORD *)(qword_18015C348 + 104) |= 0x204u;
  v64[15].Buffer = (PWCH)((char *)v64[15].Buffer - LdrSystemDllInitBlock.SystemDllNativeRelocation);
  v64 = (_UNICODE_STRING *)((char *)v64 + 72);
  *v64 = Destination;
  RtlAppendUnicodeStringToString(v64, &stru_180110B38);
  v65 = qword_18015C348;
  *(UNICODE_STRING *)(qword_18015C348 + 88) = stru_180110B38;
  *(_QWORD *)(v65 + 48) = v61;
  sub_18002C268(v65);
  sub_18003BC9C(*(_QWORD *)(qword_18015C348 + 48), qword_18015C348 + 72, 0x14A5u);
  sub_18007F390(qword_18015C348, (__int64)v116);
  result = sub_18002AFBC(qword_18015C348, 0, 1);
  v98 = result;
  if ( result < 0 )
    return result;
  sub_18003BC9C(*(_QWORD *)(qword_18015C348 + 48), qword_18015C348 + 72, 0x14AEu);
  *(_DWORD *)(*(_QWORD *)(qword_18015C348 + 152) + 56LL) = 9;
  sub_18007A78C();
  v66 = v63 + 32;
  v67 = qword_18015C390;
  if ( *(__int64 **)(qword_18015C390 + 8) != &qword_18015C390 )
    __fastfail(3u);
  *v66 = qword_18015C390;
  *((_QWORD *)v63 + 5) = &qword_18015C390;
  *(_QWORD *)(v67 + 8) = v66;
  qword_18015C390 = (__int64)(v63 + 32);
  result = sub_180059D2C();
  v98 = result;
  if ( result < 0 )
  {
    v21 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      LODWORD(ReturnedLengtha) = result;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4807,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Failed to initialize Parallel loader, st = 0x%x\n",
        ReturnedLengtha);
      goto LABEL_32;
    }
LABEL_33:
    if ( (v21 & 0x10) != 0 )
      __debugbreak();
    return result;
  }
  sub_1800435B4(0);
  sub_180042054(0LL, 0LL, (const WCHAR **)Path);
  memset(v139, 0, 0xC0uLL);
  *(_QWORD *)&v139[1] = Path;
  LODWORD(v139[2]) = 512;
  v139[0] = ImagePathName;
  *((_QWORD *)&v139[2] + 1) = &v98;
  v68 = sub_180040F58((__int64)v139);
  v69 = v68;
  if ( !v68 )
  {
    v43 = dword_180156A70;
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
  qword_18015BF88 = (__int64)v68;
  v70 = 2LL;
  do
  {
    *(_DWORD *)(*(_QWORD *)(qword_18015BF88 + 152) + 24LL) = -1;
    --v70;
  }
  while ( v70 );
  *(_WORD *)(**(_QWORD **)(qword_18015BF88 + 152) - 52LL) = -1;
  v71 = qword_18015BF88;
  *(_UNICODE_STRING *)(qword_18015BF88 + 72) = ImagePathName;
  v72 = *(_DWORD *)(v71 + 104) | 4;
  *(_DWORD *)(v71 + 104) = v72;
  v73 = v99;
  if ( byte_18015C308 )
  {
    v74 = v72 | 0x400000;
    *(_DWORD *)(v71 + 104) = v74;
    if ( v73 )
      *(_DWORD *)(v71 + 104) = v74 | 0x1000000;
  }
  if ( (*(_BYTE *)(ProcessEnvironmentBlock + 3) & 4) != 0 )
    *(_QWORD *)(v71 + 248) = 0LL;
  v75 = 0LL;
  v76 = (PWCH)((char *)ImagePathName.Buffer + ImagePathName.Length);
  v77 = v76;
  if ( v76 && v76 > ImagePathName.Buffer )
  {
    while ( 1 )
    {
      v78 = v77--;
      if ( *v77 == 92 )
        break;
      if ( v77 <= ImagePathName.Buffer )
        goto LABEL_216;
    }
    v75 = v78;
  }
LABEL_216:
  if ( v75 )
  {
    v79 = (_WORD)v76 - (_WORD)v75;
    *(_WORD *)(v71 + 88) = v79;
    if ( ImagePathName.MaximumLength - (unsigned int)ImagePathName.Length >= 2 )
      v79 += 2;
    *(_WORD *)(v71 + 90) = v79;
    *(_QWORD *)(v71 + 96) = v75;
  }
  else
  {
    *(_OWORD *)(v71 + 88) = *(_OWORD *)(v69 + 72);
  }
  v80 = *(void **)(ProcessEnvironmentBlock + 16);
  v81 = v80;
  v82 = OutHeaders;
  if ( (void *)OutHeaders->OptionalHeader.ImageBase != v80 && !v73 && !dword_18015C290 )
  {
    result = sub_1800828E0(v80);
    v98 = result;
    if ( result < 0 )
      return result;
    v81 = *(void **)(ProcessEnvironmentBlock + 16);
    v71 = qword_18015BF88;
  }
  *(_QWORD *)(v71 + 48) = v81;
  sub_18002C268(v71);
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
      &::DestinationString);
  sub_18003BC9C(*(_QWORD *)(qword_18015BF88 + 48), qword_18015BF88 + 72, 0x14A5u);
  sub_18007F390(qword_18015BF88, (__int64)v82);
  result = sub_18002AFBC(qword_18015BF88, 0, dword_18015C290 == 0);
  v98 = result;
  if ( result < 0 )
    return result;
  *(_DWORD *)(*(_QWORD *)(qword_18015BF88 + 152) + 56LL) = 9;
  v83 = sub_180076B24(&UnicodeString.Length);
  v98 = v83;
  if ( v83 < 0 )
  {
    v84 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      LODWORD(Wow64) = v83;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        4985,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing the current directory to \"%wZ\" failed with status 0x%08lx\n",
        &UnicodeString,
        Wow64);
      v84 = dword_180156A70;
    }
    if ( (v84 & 0x10) != 0 )
      __debugbreak();
  }
  if ( !v106 )
    RtlFreeUnicodeString(&UnicodeString);
  if ( dword_18016F29C )
  {
    v85 = sub_180040F58(0LL);
    v86 = (__int64)v85;
    if ( !v85 )
    {
      v43 = dword_180156A70;
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
    *(_DWORD *)(*((_QWORD *)v85 + 19) + 24LL) = -1;
    *(_WORD *)(**((_QWORD **)v85 + 19) - 52LL) = -1;
    v87 = v132;
    *((_DWORD *)v85 + 26) |= *(_DWORD *)(v132 + 104);
    *((_QWORD *)v85 + 31) = *(_QWORD *)(v87 + 248);
    *((_WORD *)v85 + 55) = 0;
    *(_OWORD *)(v85 + 72) = *(_OWORD *)(v87 + 72);
    *(_OWORD *)(v85 + 88) = *(_OWORD *)(v87 + 88);
    *((_DWORD *)v85 + 32) = *(_DWORD *)(v87 + 128);
    *((_QWORD *)v85 + 6) = *(_QWORD *)(v87 + 48);
    sub_18002C268((__int64)v85);
    sub_18003BC9C(*(_QWORD *)(v86 + 48), v86 + 72, 0x14A5u);
    result = RtlImageNtHeaderEx(3u, *(PVOID *)(v86 + 48), 0LL, &v116);
    v98 = result;
    if ( result < 0 )
      return result;
    sub_18007F390(v86, (__int64)v116);
    result = sub_18002AFBC(v86, 0, 1);
    v98 = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)(v86 + 56) = *(_QWORD *)(v87 + 56);
    sub_18003BC9C(*(_QWORD *)(v86 + 48), v86 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(v86 + 152) + 56LL) = 7;
    if ( (*(_DWORD *)(ProcessEnvironmentBlock + 188) & 0x100) != 0 || (dword_18016F29C & 2) != 0 )
    {
      result = sub_1800D3DA8(0, 0, 0, 1, (__int64)BaseOfImage, 0LL);
      v98 = result;
      if ( result < 0 )
        return result;
      if ( (dword_18016F29C & 2) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v86 + 152) + 56LL) = 9;
        result = v98;
      }
    }
    else
    {
      v100 = 0;
      result = sub_180054D18(*(_QWORD *)(v86 + 152), 0LL, &v100);
      v98 = result;
    }
    if ( result < 0 )
      return result;
    v82 = OutHeaders;
  }
  sub_180047B2C();
  if ( dword_18015C290 )
  {
    if ( Handle )
    {
      ZwClose(Handle);
      Handle = 0LL;
      if ( qword_18015BEE0 )
      {
        ZwClose(qword_18015BEE0);
        qword_18015BEE0 = 0LL;
      }
    }
    if ( v107 )
    {
      ZwClose(v107);
      v107 = 0LL;
    }
    result = sub_180081A8C(&Destination);
    v98 = result;
    if ( result >= 0 )
    {
      if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
        sub_1800CCA4C();
      dword_18015CFB8 = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(ProcessEnvironmentBlock + 80), 1u);
      qword_18016F220(v119);
LABEL_335:
      if ( Handle )
        ZwClose(Handle);
      if ( v107 )
        ZwClose(v107);
      return 0;
    }
    return result;
  }
  v125 = 0LL;
  if ( byte_18015C308 )
  {
    result = sub_180081044((PVOID *)&v125);
    v98 = result;
    if ( result < 0 )
      return result;
    v88 = v99;
    if ( (_BYTE)v99 )
    {
      result = sub_18008325C(*(_QWORD *)(ProcessEnvironmentBlock + 16));
      v98 = result;
      if ( result < 0 )
        return result;
    }
    if ( (v124->SameTebFlags & 0x400) != 0 )
      *(_QWORD *)(v119 + 128) = __ROR8__(qword_18015C3C0, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330];
  }
  else
  {
    v88 = v99;
  }
  result = sub_18004F9F4();
  v98 = result;
  if ( result < 0 )
  {
    v21 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      LODWORD(ReturnedLengtha) = result;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5235,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Initializing TLS slots failed with status 0x%08lx\n",
        ReturnedLengtha);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  if ( v125 )
  {
    v101 = 0;
    result = sub_180054D18(v125[19], 0LL, &v101);
    v98 = result;
    if ( result < 0 )
    {
      v21 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        LODWORD(ReturnedLengtha) = result;
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5254,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "DllMain of MSCOREE (or its dependents) failed with status 0x%08lx\n",
          ReturnedLengtha);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
  }
  ProcedureAddress = 0LL;
  if ( (unsigned __int16)(v82->OptionalHeader.Subsystem - 2) <= 1u )
  {
    result = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&String2, &DllHandle);
    v98 = result;
    if ( result < 0 )
    {
      if ( result != -1073741515 )
      {
        v21 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          LODWORD(Wow64) = result;
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5413,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &String2,
            Wow64);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      result = LdrLoadDll((PWSTR)0x4001, 0LL, (PUNICODE_STRING)&BaseDllName, &DllHandle);
      v98 = result;
      if ( result < 0 )
      {
        v21 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          LODWORD(Wow64) = result;
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5386,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Loading Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &BaseDllName,
            Wow64);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      result = sub_18007BD78();
      v98 = result;
      if ( (int)(result + 0x80000000) >= 0 && result != -1073741515 )
      {
        v21 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          LODWORD(ReturnedLengtha) = result;
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5402,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "LdrpCodeAuthzInitialize failed with status 0x%08lx\n",
            ReturnedLengtha);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      v98 = 0;
      v89 = DllHandle;
    }
    else
    {
      result = LdrGetProcedureAddressForCaller(
                 DllHandle,
                 (PANSI_STRING)&stru_180110B18,
                 0,
                 &qword_18015BEB0,
                 0,
                 retaddr);
      v98 = result;
      if ( result < 0 )
      {
        v21 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          LODWORD(v97) = result;
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5300,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Locating procedure \"%Z\" in Windows subsystem DLL \"%wZ\" failed with status 0x%08lx\n",
            &stru_180110B18,
            &String2,
            v97);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      LdrGetProcedureAddressForCaller(DllHandle, (PANSI_STRING)&stru_180110B28, 0, &ProcedureAddress, 0, retaddr);
      result = sub_18003F7F8();
      v98 = result;
      if ( result < 0 )
        return result;
      result = sub_18007BD78();
      v98 = result;
      if ( result < 0 )
        return result;
      result = sub_180041E34(&BaseDllName.Length, 0LL, &v133);
      v98 = result;
      if ( result < 0 )
      {
        v21 = dword_180156A70;
        if ( (dword_180156A70 & 3) != 0 )
        {
          LODWORD(Wow64) = result;
          sub_1800CA554(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            5368,
            (unsigned int)"LdrpInitializeProcess",
            0,
            "Finding \"%wZ\" failed with status 0x%08lx\n",
            &BaseDllName,
            Wow64);
          goto LABEL_32;
        }
        goto LABEL_33;
      }
      v89 = (PVOID)*((_QWORD *)v133 + 6);
    }
    result = LdrGetProcedureAddressForCaller(v89, (PANSI_STRING)&stru_180110B48, 0, &v134, 0, retaddr);
    v98 = result;
    if ( result < 0 )
    {
      v21 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        LODWORD(ReturnedLengtha) = result;
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5431,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Finding KernelbasePostInit failed with status 0x%08lx\n",
          ReturnedLengtha);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
    result = _guard_dispatch_icall_fptr();
    v98 = result;
    if ( result < 0 )
    {
      v21 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        LODWORD(ReturnedLengtha) = result;
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5439,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Calling KernelbasePostInit failed with status 0x%08lx\n",
          ReturnedLengtha);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
    v98 = 0;
  }
  sub_1800435B4(0);
  sub_18007EDB4(0LL);
  v90 = v126;
  if ( v126 && *(_DWORD *)(v126 + 8) )
  {
    *(_QWORD *)(ProcessEnvironmentBlock + 736) = 0LL;
    sub_180055808(v90);
  }
  v91 = byte_18015AC08;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x400000) != 0 )
    v91 = 1;
  byte_18015AC08 = v91;
  if ( (NtCurrentPeb()->AppCompatFlags.LowPart & 0x10000000) != 0 )
  {
    *(_DWORD *)(v118 + 1036) = 1;
    v92 = 1;
  }
  else
  {
    v92 = *(_DWORD *)(v118 + 1036);
  }
  sub_180056E90(v92);
  dword_18015CFB8 = 1;
  *(_DWORD *)(*(_QWORD *)(qword_18015BF88 + 152) + 56LL) = 2;
  **((_DWORD **)&v139[2] + 1) = 0;
  if ( v88 )
  {
    result = sub_180082EDC(qword_18015BF88);
  }
  else
  {
    LODWORD(v139[2]) |= 1u;
    sub_180039100((__int64)v139);
    sub_1800435B4(1);
    result = v98;
    if ( v98 < 0 )
      goto LABEL_316;
    result = sub_18002DF14(qword_18015BF88, *((__int64 *)&v139[2] + 1));
  }
  v98 = result;
  if ( result < 0 )
  {
LABEL_316:
    v21 = dword_180156A70;
    if ( (dword_180156A70 & 3) != 0 )
    {
      LODWORD(ReturnedLengtha) = result;
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        5651,
        (unsigned int)"LdrpInitializeProcess",
        0,
        "Walking the import tables of the executable and its static imports failed with status 0x%08lx\n",
        ReturnedLengtha);
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  dword_18015CFB8 = 2;
  if ( *(_BYTE *)(ProcessEnvironmentBlock + 2) )
    sub_1800CCA4C();
  sub_180047B2C();
  if ( !qword_18015BEB0
    || (result = _guard_dispatch_icall_fptr(), v98 = result, result >= 0)
    && (result = sub_180080B70((__int64 (__fastcall *)(_BYTE *, __int64))ProcedureAddress), v98 = result, result >= 0) )
  {
    qword_18015C320 = v119;
    sub_1800435B4(0);
    sub_180046FBC();
    v102[0] = 0;
    v98 = sub_180054D18(*(_QWORD *)(qword_18015BF88 + 152), *((__int64 *)&v139[2] + 1), v102);
    sub_180046F60(v93, 9, v98);
    sub_18006B490(*(_QWORD **)(qword_18015BF88 + 152), *((__int64 *)&v139[2] + 1));
    sub_180047B2C();
    qword_18015C320 = 0LL;
    if ( v142 )
      RtlReleasePath(Path[0]);
    result = v98;
    if ( v98 < 0 )
    {
      v21 = dword_180156A70;
      if ( (dword_180156A70 & 3) != 0 )
      {
        LODWORD(ReturnedLengtha) = v98;
        sub_1800CA554(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          5786,
          (unsigned int)"LdrpInitializeProcess",
          0,
          "Running the init routines of the executable's static imports failed with status 0x%08lx\n",
          ReturnedLengtha);
        goto LABEL_32;
      }
      goto LABEL_33;
    }
    if ( *(_WORD *)(qword_18015BF88 + 110) )
    {
      v136 = 72LL;
      v137 = 1;
      memset(v138, 0, sizeof(v138));
      RtlActivateActivationContextUnsafeFast((__int64)&v136, *(_QWORD *)(qword_18015BF88 + 136));
      sub_18003B5F8(1, qword_18015BF88);
      RtlDeactivateActivationContextUnsafeFast((__int64)&v136);
    }
    if ( byte_18015CFB4 && !(unsigned __int8)_guard_dispatch_icall_fptr() )
    {
      byte_18015CFB4 = 0;
      LdrUnloadDll(::DllHandle);
      ::DllHandle = 0LL;
    }
    if ( *(_QWORD *)(ProcessEnvironmentBlock + 560) )
      _guard_dispatch_icall_fptr();
    goto LABEL_335;
  }
  return result;
}
