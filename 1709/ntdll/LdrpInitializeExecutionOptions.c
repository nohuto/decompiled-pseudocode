/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x1800D321C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004C800 (RtlQueryEnvironmentVariable_U.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToInteger @ 0x180070ED0 (RtlUnicodeStringToInteger.c)
 *     RtlQueryApplicationKeyOption @ 0x180076B30 (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileKeyOption @ 0x180076CB0 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180079A84 (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A4DD0 (_alloca_probe.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 *     LdrpConstructModernAppKeyName @ 0x1800D2AC0 (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2DEC (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D61A0 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800D6370 (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D6450 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D6570 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DA724 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800E0F30 (RtlOpenModernAppOptionsKey.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x1801024E0 (RtlSetLowFragHeapGlobalFlags.c)
 */

__int64 __fastcall LdrpInitializeExecutionOptions(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        HANDLE *a4,
        HANDLE *a5,
        __int64 a6)
{
  unsigned __int8 v6; // r12
  HANDLE *v7; // rsi
  HANDLE *v8; // r15
  HANDLE v10; // rbx
  unsigned int v11; // edi
  char v12; // r13
  __int64 v13; // rax
  int v14; // eax
  void *v15; // rdi
  ULONG v16; // ecx
  char v17; // al
  _BYTE *v18; // rsi
  NTSTATUS v19; // eax
  NTSTATUS v20; // edi
  void *v21; // r15
  int v22; // ecx
  ULONG v23; // ebx
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v26; // eax
  unsigned int v27; // eax
  NTSTATUS v28; // eax
  int v29; // edi
  _BYTE *v30; // rdi
  NTSTATUS v31; // eax
  void *v32; // rsi
  int v33; // ecx
  ULONG v34; // ebx
  void *v35; // rcx
  PVOID v36; // rax
  NTSTATUS v37; // eax
  unsigned int v38; // eax
  __int64 i; // rdi
  const WCHAR *v40; // rdx
  _BYTE *v41; // rax
  NTSTATUS inited; // eax
  _BYTE *v43; // rdi
  NTSTATUS v44; // eax
  void *v45; // rsi
  int v46; // ecx
  ULONG v47; // ebx
  void *v48; // rcx
  PVOID v49; // rax
  NTSTATUS v50; // eax
  unsigned int v51; // eax
  ULONG v52; // ecx
  void *v53; // rdi
  int v54; // eax
  __int64 v55; // rdx
  unsigned __int16 *v56; // r13
  HANDLE v57; // r13
  _BYTE *v58; // rsi
  NTSTATUS v59; // eax
  NTSTATUS v60; // edi
  void *v61; // r15
  ULONG v62; // ebx
  void *v63; // rcx
  PVOID v64; // rax
  NTSTATUS v65; // eax
  int v66; // ecx
  unsigned int v67; // eax
  __int64 v68; // rcx
  char v69; // al
  ULONG Length; // [rsp+20h] [rbp-E0h]
  ULONG Lengtha; // [rsp+20h] [rbp-E0h]
  ULONG Lengthb; // [rsp+20h] [rbp-E0h]
  __int64 v74; // [rsp+30h] [rbp-D0h]
  __int64 v75; // [rsp+30h] [rbp-D0h]
  __int64 v76; // [rsp+30h] [rbp-D0h]
  __int64 v77; // [rsp+30h] [rbp-D0h]
  __int64 v78; // [rsp+30h] [rbp-D0h]
  __int64 v79; // [rsp+30h] [rbp-D0h]
  __int64 v80; // [rsp+30h] [rbp-D0h]
  __int64 v81; // [rsp+30h] [rbp-D0h]
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v85; // [rsp+54h] [rbp-ACh] BYREF
  ULONG v86; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v87; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v88; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE *v89; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v90; // [rsp+70h] [rbp-90h]
  unsigned int v91; // [rsp+78h] [rbp-88h] BYREF
  HANDLE *v92; // [rsp+80h] [rbp-80h]
  void *v93; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v95; // [rsp+98h] [rbp-68h] BYREF
  int v96; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING ValueName; // [rsp+A8h] [rbp-58h] BYREF
  _UNICODE_STRING String; // [rsp+B8h] [rbp-48h] BYREF
  _UNICODE_STRING v99; // [rsp+C8h] [rbp-38h] BYREF
  _UNICODE_STRING v100; // [rsp+D8h] [rbp-28h] BYREF
  _UNICODE_STRING v101; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v102; // [rsp+F8h] [rbp-8h]
  __int64 v103; // [rsp+100h] [rbp+0h]
  _UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v107[1024]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v108[1024]; // [rsp+950h] [rbp+850h] BYREF
  _BYTE v109[1024]; // [rsp+D50h] [rbp+C50h] BYREF
  char v110; // [rsp+1150h] [rbp+1050h] BYREF
  WCHAR SourceString[200]; // [rsp+1170h] [rbp+1070h] BYREF

  v6 = 0;
  v7 = a5;
  v8 = a4;
  v102 = a6;
  v92 = a4;
  *a4 = 0LL;
  v10 = 0LL;
  *a5 = 0LL;
  v11 = 0;
  Handle = 0LL;
  v12 = 1;
  KeyHandle = 0LL;
  v91 = 0;
  v93 = 0LL;
  v95 = 0LL;
  v13 = *(_QWORD *)(a2 + 32);
  v103 = a3;
  v90 = a1;
  v89 = a5;
  if ( (*(_DWORD *)(v13 + 8) & 0x4000) != 0 )
    goto LABEL_121;
  v14 = RtlpOpenImageFileOptionsKeyEx(a1, 9LL, 0, &KeyHandle);
  v10 = KeyHandle;
  if ( v14 < 0 )
    goto LABEL_121;
  *v8 = KeyHandle;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && LdrpConstructModernAppKeyName(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( (int)RtlOpenModernAppOptionsKey(&DestinationString, v10, &v93) >= 0 )
      *a5 = v93;
  }
  v15 = v93;
  RtlQueryApplicationKeyOption(
    v93,
    v10,
    (__int64)L"DisableHeapLookaside",
    4LL,
    (__int64)&RtlpDisableHeapLookaside,
    4,
    v74,
    0LL);
  RtlQueryApplicationKeyOption(v15, v10, (__int64)L"FrontEndHeapDebugOptions", 4LL, (__int64)&v91, 4, v75, 0LL);
  RtlQueryApplicationKeyOption(
    v15,
    v10,
    (__int64)L"ShutdownFlags",
    4LL,
    (__int64)&RtlpShutdownProcessFlags,
    4,
    v76,
    0LL);
  Value = 0;
  RtlQueryApplicationKeyOption(v15, v10, (__int64)L"UnloadEventTraceDepth", 4LL, (__int64)&Value, 4, v77, 0LL);
  v16 = RtlpUnloadEventTraceExNumber;
  if ( Value )
    v16 = Value;
  Value = 0;
  RtlpUnloadEventTraceExNumber = v16;
  RtlQueryApplicationKeyOption(v15, v10, (__int64)L"MaxLoaderThreads", 4LL, (__int64)&Value, 4, v78, 0LL);
  if ( Value )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = Value;
  Value = 0;
  RtlQueryApplicationKeyOption(v93, v10, (__int64)L"UseImpersonatedDeviceMap", 4LL, (__int64)&Value, 4, v79, 0LL);
  v17 = LdrpUseImpersonatedDeviceMap;
  if ( Value )
    v17 = 1;
  LdrpUseImpersonatedDeviceMap = v17;
  Value = 0;
  RtlQueryApplicationKeyOption(v93, v10, (__int64)L"TracingFlags", 4LL, (__int64)&Value, 4, v80, 0LL);
  if ( Value )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), Value);
    v10 = KeyHandle;
  }
  Value = 0;
  if ( RtlInitUnicodeStringEx(&ValueName, L"CFGOptions") >= 0 )
  {
    v18 = KeyValueInformation;
    v19 = NtQueryValueKey(v10, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength);
    v20 = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -2147483643 )
      {
        while ( 1 )
        {
          v23 = ResultLength;
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
          v21 = Heap;
          if ( !Heap )
            break;
          v18 = Heap;
          Length = v23;
          v10 = KeyHandle;
          v26 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
          v20 = v26;
          if ( v26 >= 0 )
            goto LABEL_18;
          if ( v26 != -2147483643 )
            goto LABEL_41;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
        }
        v10 = KeyHandle;
        v8 = v92;
        goto LABEL_47;
      }
    }
    else
    {
      v21 = 0LL;
LABEL_18:
      v22 = *((_DWORD *)v18 + 1);
      if ( ((v22 - 3) & 0xFFFFFFFB) != 0 )
      {
        switch ( v22 )
        {
          case 4:
            if ( *((_DWORD *)v18 + 2) == 4 )
            {
              ResultLength = 4;
              Value = *((_DWORD *)v18 + 3);
            }
            else
            {
              v20 = -1073741820;
            }
            break;
          case 11:
            v20 = -1073741788;
            break;
          case 1:
            if ( ((unsigned __int8)&Value & 3) != 0 )
            {
              v20 = -2147483646;
            }
            else
            {
              ResultLength = 4;
              ValueName.Buffer = (wchar_t *)(v18 + 12);
              ValueName.Length = *((_WORD *)v18 + 4);
              ValueName.MaximumLength = *((_WORD *)v18 + 4);
              v20 = RtlUnicodeStringToInteger(&ValueName, 0, &Value);
            }
            break;
          default:
            v20 = -1073741788;
            break;
        }
      }
      else if ( v22 == 4 )
      {
        ResultLength = *((_DWORD *)v18 + 2);
        v27 = *((_DWORD *)v18 + 2);
        if ( v27 > 4 )
          v20 = -2147483643;
        else
          memmove(&Value, v18 + 12, v27);
      }
      else
      {
        v20 = -1073741788;
      }
LABEL_41:
      if ( v21 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
        v10 = KeyHandle;
      }
      v8 = v92;
    }
    if ( v20 >= 0 && (Value & 1) != 0 )
    {
      LdrProtectMrdata(0);
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1);
    }
LABEL_47:
    v7 = v89;
  }
  if ( (*(_BYTE *)(a2 + 3) & 1) == 0 )
    goto LABEL_53;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801141F8;
  ObjectAttributes.RootDirectory = v10;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v28 = NtOpenKey(&LdrpLargePageDllKeyHandle, 1u, &ObjectAttributes);
  v29 = v28;
  if ( v28 == -1073741772 )
  {
    LdrpLargePageDllKeyHandle = 0LL;
    goto LABEL_53;
  }
  if ( v28 >= 0 )
  {
LABEL_53:
    if ( RtlInitUnicodeStringEx(&String, L"MinimumStackCommitInBytes") < 0 )
      goto LABEL_76;
    v30 = v107;
    v31 = NtQueryValueKey(v10, &String, KeyValuePartialInformation, v107, 0x400u, &v85);
    if ( v31 < 0 )
    {
      if ( v31 != -2147483643 )
        goto LABEL_76;
      while ( 1 )
      {
        v34 = v85;
        v35 = NtCurrentPeb()->ProcessHeap;
        if ( !v35 )
          break;
        v36 = RtlAllocateHeap(v35, NtdllBaseTag + 1572864, v85);
        v32 = v36;
        if ( !v36 )
          break;
        v30 = v36;
        Lengtha = v34;
        v10 = KeyHandle;
        v37 = NtQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, v36, Lengtha, &v85);
        if ( v37 >= 0 )
          goto LABEL_56;
        if ( v37 != -2147483643 )
          goto LABEL_72;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v30);
      }
    }
    else
    {
      v32 = 0LL;
LABEL_56:
      v33 = *((_DWORD *)v30 + 1);
      if ( ((v33 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v33 == 4 )
        {
          if ( *((_DWORD *)v30 + 2) == 4 )
          {
            v85 = 4;
            Value = *((_DWORD *)v30 + 3);
          }
        }
        else if ( v33 == 1 && ((unsigned __int8)&Value & 3) == 0 )
        {
          v85 = 4;
          String.Buffer = (wchar_t *)(v30 + 12);
          String.Length = *((_WORD *)v30 + 4);
          String.MaximumLength = *((_WORD *)v30 + 4);
          RtlUnicodeStringToInteger(&String, 0, &Value);
        }
      }
      else if ( v33 == 4 )
      {
        v85 = *((_DWORD *)v30 + 2);
        v38 = *((_DWORD *)v30 + 2);
        if ( v38 <= 4 )
          memmove(&Value, v30 + 12, v38);
      }
LABEL_72:
      if ( !v32 )
        goto LABEL_75;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v32);
    }
    v10 = KeyHandle;
LABEL_75:
    v7 = v89;
LABEL_76:
    if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)Value )
      *(_QWORD *)(a2 + 792) = Value;
    for ( i = 0LL; i != 6; i += 2LL )
    {
      v40 = (&off_1801141C0)[i];
      Value = 0;
      RtlQueryImageFileKeyOption(v10, v40, 4, &Value, 4u, 0LL);
      v41 = *(&off_1801141C0 + i + 1);
      if ( Value )
        *v41 = 1;
      else
        *v41 = 0;
    }
    Value = 0;
    inited = RtlInitUnicodeStringEx(&v99, L"MaxDeadActivationContexts");
    v8 = v92;
    if ( inited >= 0 )
    {
      v43 = v108;
      v44 = NtQueryValueKey(v10, &v99, KeyValuePartialInformation, v108, 0x400u, &v86);
      if ( v44 < 0 )
      {
        if ( v44 != -2147483643 )
          goto LABEL_109;
        while ( 1 )
        {
          v47 = v86;
          v48 = NtCurrentPeb()->ProcessHeap;
          if ( !v48 )
            break;
          v49 = RtlAllocateHeap(v48, NtdllBaseTag + 1572864, v86);
          v45 = v49;
          if ( !v49 )
            break;
          v43 = v49;
          Lengthb = v47;
          v10 = KeyHandle;
          v50 = NtQueryValueKey(KeyHandle, &v99, KeyValuePartialInformation, v49, Lengthb, &v86);
          if ( v50 >= 0 )
            goto LABEL_86;
          if ( v50 != -2147483643 )
            goto LABEL_102;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v43);
        }
        v10 = KeyHandle;
      }
      else
      {
        v45 = 0LL;
LABEL_86:
        v46 = *((_DWORD *)v43 + 1);
        if ( ((v46 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v46 == 4 )
          {
            if ( *((_DWORD *)v43 + 2) == 4 )
            {
              v86 = 4;
              Value = *((_DWORD *)v43 + 3);
            }
          }
          else if ( v46 == 1 && ((unsigned __int8)&Value & 3) == 0 )
          {
            v86 = 4;
            v99.Buffer = (wchar_t *)(v43 + 12);
            v99.Length = *((_WORD *)v43 + 4);
            v99.MaximumLength = *((_WORD *)v43 + 4);
            RtlUnicodeStringToInteger(&v99, 0, &Value);
          }
        }
        else if ( v46 == 4 )
        {
          v86 = *((_DWORD *)v43 + 2);
          v51 = *((_DWORD *)v43 + 2);
          if ( v51 <= 4 )
            memmove(&Value, v43 + 12, v51);
        }
LABEL_102:
        if ( v45 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v45);
          v10 = KeyHandle;
        }
        v52 = g_SxsMaxDeadActivationContexts;
        if ( Value )
          v52 = Value;
        g_SxsMaxDeadActivationContexts = v52;
      }
      v7 = v89;
    }
LABEL_109:
    v53 = v93;
    v6 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
    if ( (int)RtlQueryApplicationKeyOption(v93, v10, (__int64)L"GlobalFlag", 4LL, (__int64)&v88, 4, v81, &v95) < 0 )
      goto LABEL_118;
    if ( (v88 & 0x2000100) != 0 )
    {
      if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v53, v10) )
        v88 &= 0xFDFFFEFF;
      if ( (v88 & 0x2000100) != 0 )
      {
        if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter(v90, &v96) < 0 )
          goto LABEL_118;
        if ( !v96 )
          v88 &= 0xFDFFFEFF;
      }
    }
    *(_DWORD *)(a2 + 188) = v88;
LABEL_118:
    v11 = v91;
    if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
      v12 = 0;
    else
      v95 = 0LL;
LABEL_121:
    LOBYTE(v54) = LdrControlFlowGuardEnforced();
    if ( v54 )
      v11 |= 1u;
    RtlSetLowFragHeapGlobalFlags(v11, *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL));
    if ( v12 && !LdrpIsSecureProcess )
    {
      v56 = v90;
      if ( (MEMORY[0x7FFE03A0] & 1) == 0 )
        goto LABEL_162;
      if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(v90, v55, &Handle) < 0 )
      {
        Handle = 0LL;
        goto LABEL_162;
      }
      v57 = Handle;
      if ( RtlInitUnicodeStringEx(&v100, L"GlobalFlag") >= 0 )
      {
        v58 = v109;
        v59 = NtQueryValueKey(v57, &v100, KeyValuePartialInformation, v109, 0x400u, &v87);
        v60 = v59;
        if ( v59 >= 0 )
        {
          v61 = 0LL;
LABEL_138:
          v66 = *((_DWORD *)v58 + 1);
          if ( ((v66 - 3) & 0xFFFFFFFB) != 0 )
          {
            switch ( v66 )
            {
              case 4:
                if ( *((_DWORD *)v58 + 2) == 4 )
                {
                  v87 = 4;
                  v88 = *((_DWORD *)v58 + 3);
                }
                else
                {
                  v60 = -1073741820;
                }
                break;
              case 11:
                v60 = -1073741788;
                break;
              case 1:
                if ( ((unsigned __int8)&v88 & 3) != 0 )
                {
                  v60 = -2147483646;
                }
                else
                {
                  v87 = 4;
                  v100.Buffer = (wchar_t *)(v58 + 12);
                  v100.Length = *((_WORD *)v58 + 4);
                  v100.MaximumLength = *((_WORD *)v58 + 4);
                  v60 = RtlUnicodeStringToInteger(&v100, 0, &v88);
                }
                break;
              default:
                v60 = -1073741788;
                break;
            }
          }
          else if ( v66 == 4 )
          {
            v87 = *((_DWORD *)v58 + 2);
            v67 = *((_DWORD *)v58 + 2);
            if ( v67 > 4 )
              v60 = -2147483643;
            else
              memmove(&v88, v58 + 12, v67);
          }
          else
          {
            v60 = -1073741788;
          }
LABEL_155:
          if ( v61 )
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v61);
            v10 = KeyHandle;
          }
          v8 = v92;
          goto LABEL_158;
        }
        if ( v59 != -2147483643 )
        {
LABEL_158:
          v7 = v89;
          v56 = v90;
          if ( v60 >= 0 )
          {
            *(_DWORD *)(a2 + 188) |= v88 & 0x2000100;
            v95 = Handle;
          }
LABEL_162:
          v29 = 0;
          if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 || (unsigned __int8)LdrpPayloadRestrictionMitigationsEnabled() )
          {
            v29 = LdrpInitializeApplicationVerifierPackage(v56, a2, v6, v95, v103, v102);
            if ( v29 >= 0 )
              goto LABEL_182;
            v69 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) != 0 )
            {
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                7769,
                "LdrpInitializeExecutionOptions",
                0,
                "Initializing the application verifier package failed with status 0x%08lx\n",
                v29);
              v69 = LdrpDebugFlags;
            }
            if ( (v69 & 0x10) != 0 )
              __debugbreak();
          }
          else
          {
            if ( v93 || v10 || !*(_BYTE *)(a2 + 2) )
              goto LABEL_182;
            v68 = *(_QWORD *)(a2 + 32);
            v101.Buffer = (wchar_t *)&v110;
            *(_DWORD *)&v101.Length = 0x200000;
            if ( RtlQueryEnvironmentVariable_U(*(PVOID *)(v68 + 128), (PUNICODE_STRING)&stru_1801141B0, &v101) < 0
              || (v29 = RtlUnicodeStringToInteger(&v101, 0, &Value), v29 < 0)
              || !Value )
            {
              *(_DWORD *)(a2 + 188) |= 0x70u;
            }
          }
          if ( v29 < 0 )
            goto LABEL_178;
LABEL_182:
          LdrpQueryIllegalCWDDevices(v10);
          goto LABEL_183;
        }
        while ( 1 )
        {
          v62 = v87;
          v63 = NtCurrentPeb()->ProcessHeap;
          if ( !v63 )
            break;
          v64 = RtlAllocateHeap(v63, NtdllBaseTag + 1572864, v87);
          v61 = v64;
          if ( !v64 )
            break;
          v58 = v64;
          v65 = NtQueryValueKey(v57, &v100, KeyValuePartialInformation, v64, v62, &v87);
          v60 = v65;
          if ( v65 >= 0 )
          {
            v10 = KeyHandle;
            goto LABEL_138;
          }
          if ( v65 != -2147483643 )
          {
            v10 = KeyHandle;
            goto LABEL_155;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v58);
        }
        v10 = KeyHandle;
        v7 = v89;
        v8 = v92;
      }
    }
    v56 = v90;
    goto LABEL_162;
  }
LABEL_178:
  if ( *v8 )
  {
    NtClose(*v8);
    *v8 = 0LL;
  }
  if ( *v7 )
  {
    NtClose(*v7);
    *v7 = 0LL;
  }
LABEL_183:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v29;
}
