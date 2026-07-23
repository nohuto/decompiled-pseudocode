/*
 * XREFs of AVrfInitializeVerifier @ 0x1800D9BE0
 * Callers:
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2DEC (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180009D10 (RtlInitializeCriticalSectionEx.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByName @ 0x18002E330 (LdrpFindLoadedDllByName.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     DbgPrintEx @ 0x18006C580 (DbgPrintEx.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlUnicodeStringToInteger @ 0x180070ED0 (RtlUnicodeStringToInteger.c)
 *     LdrpInitializeGraphRecurse @ 0x180072BC0 (LdrpInitializeGraphRecurse.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A4DD0 (_alloca_probe.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800D6370 (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800DA91C (AVrfpChainDuplicateVerificationLayers.c)
 *     AVrfpEnableVerifierOptions @ 0x1800DADE0 (AVrfpEnableVerifierOptions.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DB028 (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpParseVerifierDllsString @ 0x1800DB354 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800DB5F8 (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DB874 (AVrfpVerifierStopInitialize.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 */

__int64 __fastcall AVrfInitializeVerifier(void *ProcessHeap, __int64 a2, void *a3, int a4, __int64 a5, _QWORD *a6)
{
  void *v6; // rsi
  _QWORD *v7; // rdi
  struct _PEB *v9; // r14
  char v10; // r15
  int Dll; // ebx
  __int64 *v12; // rbx
  int LoadedDllByName; // eax
  void *v14; // rbx
  NTSTATUS ProcedureAddressForCaller; // ebx
  __int64 *i; // rdi
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // rdx
  unsigned int NtGlobalFlag; // r11d
  int v21; // r13d
  int v22; // ebx
  unsigned __int16 *v23; // rbx
  NTSTATUS v24; // eax
  void *v25; // rdi
  ULONG v26; // r14d
  PVOID Heap; // rax
  NTSTATUS v28; // eax
  unsigned int v29; // eax
  unsigned __int16 *v30; // rbx
  NTSTATUS v31; // eax
  void *v32; // rdi
  int v33; // ecx
  ULONG v34; // r14d
  void *v35; // rcx
  PVOID v36; // rax
  NTSTATUS v37; // eax
  unsigned int v38; // eax
  unsigned __int16 *v39; // rbx
  NTSTATUS v40; // eax
  void *v41; // rdi
  int v42; // ecx
  ULONG v43; // r14d
  void *v44; // rcx
  PVOID v45; // rax
  NTSTATUS v46; // eax
  unsigned int v47; // eax
  _DWORD *v48; // rbx
  NTSTATUS v49; // eax
  ULONG v50; // edi
  PVOID v51; // rax
  NTSTATUS v52; // eax
  size_t v53; // rax
  ULONG Flags[2]; // [rsp+20h] [rbp-E0h]
  char v56; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v57[3]; // [rsp+39h] [rbp-C7h] BYREF
  ULONG ResultLength; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONG Length; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v60; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v61; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Value[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING String; // [rsp+78h] [rbp-88h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-78h] BYREF
  PVOID ProcedureAddress; // [rsp+90h] [rbp-70h] BYREF
  __int64 v68; // [rsp+98h] [rbp-68h]
  __int64 v69; // [rsp+A0h] [rbp-60h]
  _UNICODE_STRING v70; // [rsp+A8h] [rbp-58h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v73[1024]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _BYTE v74[1024]; // [rsp+8C0h] [rbp+7C0h] BYREF
  _BYTE v75[1024]; // [rsp+CC0h] [rbp+BC0h] BYREF
  PVOID *Callback; // [rsp+1108h] [rbp+1008h]

  v6 = 0LL;
  v7 = a6;
  v9 = NtCurrentPeb();
  v10 = (char)ProcessHeap;
  v69 = a2;
  v68 = a5;
  Value[0] = 0;
  if ( !a4 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    *a6 = 0LL;
    NtGlobalFlag = v9->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x2000100) != 0 )
    {
      v21 = 1;
    }
    else
    {
      v21 = 0;
      if ( LdrpPayloadRestrictionMitigationsEnabled() )
        v21 = 2;
    }
    if ( (NtGlobalFlag & 0x100) != 0 || (v22 = 0, v10) )
      v22 = 294916;
    AVrfpVerifierFlags = v22;
    AVrfpVerifierDllsString = 0;
    if ( a3 && RtlInitUnicodeStringEx(&DestinationString, L"VerifierFlags") >= 0 )
    {
      v23 = (unsigned __int16 *)KeyValueInformation;
      v24 = NtQueryValueKey(
              a3,
              &DestinationString,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x400u,
              &ResultLength);
      if ( v24 < 0 )
      {
        if ( v24 == -2147483643 )
        {
          while ( 1 )
          {
            v26 = ResultLength;
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
            v25 = Heap;
            if ( !Heap )
              break;
            v23 = (unsigned __int16 *)Heap;
            v28 = NtQueryValueKey(a3, &DestinationString, KeyValuePartialInformation, Heap, v26, &ResultLength);
            if ( v28 >= 0 )
              goto LABEL_39;
            if ( v28 != -2147483643 )
              goto LABEL_55;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v23);
          }
          v7 = a6;
        }
      }
      else
      {
        v25 = 0LL;
LABEL_39:
        LODWORD(ProcessHeap) = *((_DWORD *)v23 + 1);
        if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( (_DWORD)ProcessHeap == 4 )
          {
            if ( *((_DWORD *)v23 + 2) == 4 )
            {
              ResultLength = 4;
              Value[0] = *((_DWORD *)v23 + 3);
            }
          }
          else if ( (_DWORD)ProcessHeap == 1 && ((unsigned __int8)Value & 3) == 0 )
          {
            ResultLength = 4;
            DestinationString.Buffer = v23 + 6;
            DestinationString.Length = v23[4];
            DestinationString.MaximumLength = v23[4];
            RtlUnicodeStringToInteger(&DestinationString, 0, Value);
          }
        }
        else if ( (_DWORD)ProcessHeap == 4 )
        {
          ResultLength = *((_DWORD *)v23 + 2);
          v29 = *((_DWORD *)v23 + 2);
          if ( v29 <= 4 )
            memmove(Value, v23 + 6, v29);
        }
LABEL_55:
        if ( v25 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v25);
        LOBYTE(v22) = Value[0];
        v7 = a6;
        if ( Value[0] )
        {
          AVrfpVerifierFlags = Value[0];
          goto LABEL_63;
        }
      }
      LOBYTE(v22) = AVrfpVerifierFlags;
    }
    if ( v10 )
      AVrfpEnabledSystemWide = 1;
LABEL_63:
    if ( !a3 )
      goto LABEL_129;
    if ( (v22 & 4) != 0 && RtlInitUnicodeStringEx(&ValueName, L"HandleTraces") >= 0 )
    {
      v30 = (unsigned __int16 *)v73;
      v31 = NtQueryValueKey(a3, &ValueName, KeyValuePartialInformation, v73, 0x400u, &Length);
      if ( v31 < 0 )
      {
        if ( v31 != -2147483643 )
          goto LABEL_87;
        while ( 1 )
        {
          v34 = Length;
          v35 = NtCurrentPeb()->ProcessHeap;
          if ( !v35 )
            break;
          v36 = RtlAllocateHeap(v35, NtdllBaseTag + 1572864, Length);
          v32 = v36;
          if ( !v36 )
            break;
          v30 = (unsigned __int16 *)v36;
          v37 = NtQueryValueKey(a3, &ValueName, KeyValuePartialInformation, v36, v34, &Length);
          if ( v37 >= 0 )
            goto LABEL_68;
          if ( v37 != -2147483643 )
            goto LABEL_84;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v30);
        }
      }
      else
      {
        v32 = 0LL;
LABEL_68:
        v33 = *((_DWORD *)v30 + 1);
        if ( ((v33 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v33 == 4 )
          {
            if ( *((_DWORD *)v30 + 2) == 4 )
            {
              Length = 4;
              AVrfpHandleTraces = *((_DWORD *)v30 + 3);
            }
          }
          else if ( v33 == 1 && ((unsigned __int8)&AVrfpHandleTraces & 3) == 0 )
          {
            Length = 4;
            ValueName.Buffer = v30 + 6;
            ValueName.Length = v30[4];
            ValueName.MaximumLength = v30[4];
            RtlUnicodeStringToInteger(&ValueName, 0, &AVrfpHandleTraces);
          }
        }
        else if ( v33 == 4 )
        {
          Length = *((_DWORD *)v30 + 2);
          v38 = *((_DWORD *)v30 + 2);
          if ( v38 <= 4 )
            memmove(&AVrfpHandleTraces, v30 + 6, v38);
        }
LABEL_84:
        if ( v32 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v32);
      }
      v7 = a6;
    }
LABEL_87:
    if ( RtlInitUnicodeStringEx(&String, L"VerifierDebug") < 0 )
      goto LABEL_109;
    v39 = (unsigned __int16 *)v74;
    v40 = NtQueryValueKey(a3, &String, KeyValuePartialInformation, v74, 0x400u, &v60);
    if ( v40 < 0 )
    {
      if ( v40 != -2147483643 )
        goto LABEL_109;
      while ( 1 )
      {
        v43 = v60;
        v44 = NtCurrentPeb()->ProcessHeap;
        if ( !v44 )
          break;
        v45 = RtlAllocateHeap(v44, NtdllBaseTag + 1572864, v60);
        v41 = v45;
        if ( !v45 )
          break;
        v39 = (unsigned __int16 *)v45;
        v46 = NtQueryValueKey(a3, &String, KeyValuePartialInformation, v45, v43, &v60);
        if ( v46 >= 0 )
          goto LABEL_90;
        if ( v46 != -2147483643 )
          goto LABEL_106;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v39);
      }
    }
    else
    {
      v41 = 0LL;
LABEL_90:
      v42 = *((_DWORD *)v39 + 1);
      if ( ((v42 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v42 == 4 )
        {
          if ( *((_DWORD *)v39 + 2) == 4 )
          {
            v60 = 4;
            AVrfpDebug = *((_DWORD *)v39 + 3);
          }
        }
        else if ( v42 == 1 && ((unsigned __int8)&AVrfpDebug & 3) == 0 )
        {
          v60 = 4;
          String.Buffer = v39 + 6;
          String.Length = v39[4];
          String.MaximumLength = v39[4];
          RtlUnicodeStringToInteger(&String, 0, &AVrfpDebug);
        }
      }
      else if ( v42 == 4 )
      {
        v60 = *((_DWORD *)v39 + 2);
        v47 = *((_DWORD *)v39 + 2);
        if ( v47 <= 4 )
          memmove(&AVrfpDebug, v39 + 6, v47);
      }
LABEL_106:
      if ( v41 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v41);
    }
    v7 = a6;
LABEL_109:
    if ( RtlInitUnicodeStringEx(&v70, L"VerifierDlls") >= 0 )
    {
      v48 = v75;
      v49 = NtQueryValueKey(a3, &v70, KeyValuePartialInformation, v75, 0x400u, &v61);
      if ( v49 < 0 )
      {
        if ( v49 == -2147483643 )
        {
          while ( 1 )
          {
            v50 = v61;
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            v51 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, v61);
            v6 = v51;
            if ( !v51 )
              break;
            v48 = v51;
            v52 = NtQueryValueKey(a3, &v70, KeyValuePartialInformation, v51, v50, &v61);
            if ( v52 >= 0 )
            {
              v7 = a6;
              goto LABEL_118;
            }
            if ( v52 != -2147483643 )
            {
              v7 = a6;
              goto LABEL_126;
            }
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v48);
          }
          v7 = a6;
        }
        goto LABEL_129;
      }
LABEL_118:
      LODWORD(ProcessHeap) = v48[1];
      if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( (_DWORD)ProcessHeap == 1 )
        {
          v53 = (unsigned int)v48[2];
          v61 = v48[2];
          goto LABEL_123;
        }
      }
      else if ( (_DWORD)ProcessHeap == 1 )
      {
        v61 = v48[2];
        v53 = (unsigned int)v48[2];
LABEL_123:
        if ( (unsigned int)v53 <= 0x200 )
          memmove(&AVrfpVerifierDllsString, v48 + 3, v53);
      }
LABEL_126:
      if ( v6 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
LABEL_129:
    Dll = AvrfMiniLoadDll((_BYTE)ProcessHeap, v69, (_DWORD)a3, v68, (__int64)&AvrfpLoaderEntry);
    if ( Dll >= 0 )
    {
      *v7 = &AvrfpLoaderEntry;
      Dll = AVrfpEnableVerifierOptions();
      if ( Dll >= 0 )
      {
        LdrProtectMrdata(0);
        AvrfAppVerifierMode = v21;
        LdrProtectMrdata(1);
      }
    }
    return (unsigned int)Dll;
  }
  if ( a4 != 1 )
    return 0;
  qword_18015E5D8 = (__int64)&AVrfpVerifierProvidersList;
  AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
  Dll = RtlInitializeCriticalSectionEx(&AVrfpVerifierLock, 0, 0);
  if ( Dll < 0 )
    return (unsigned int)Dll;
  if ( AvrfAppVerifierMode == 2 )
  {
    v57[0] = 0;
    Dll = LdrpInitializeGraphRecurse((__int64)&unk_18015E700, 0LL, v57);
    if ( Dll < 0 )
      return (unsigned int)Dll;
    return 0;
  }
  DbgPrintEx(
    0x5Du,
    0,
    "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
    *(_QWORD *)(qword_18015F3B0 + 96),
    LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
    AVrfpVerifierFlags);
  if ( (int)AVrfpParseVerifierDllsString() < 0 )
  {
    Flags[0] = (ULONG)NtCurrentTeb()->ClientId.UniqueProcess;
    DbgPrintEx(
      0x5Du,
      0,
      "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
      *(_QWORD *)(qword_18015F3B0 + 96),
      *(_QWORD *)Flags);
    Dll = -1073741823;
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
    return (unsigned int)Dll;
  }
  v12 = (__int64 *)AVrfpVerifierProvidersList;
  if ( (__int64 *)AVrfpVerifierProvidersList == &AVrfpVerifierProvidersList )
  {
LABEL_10:
    AVrfpChainDuplicateVerificationLayers();
    LoadedDllByName = LdrpFindLoadedDllByName((PUNICODE_STRING)&VrfcoreDllString, 0LL, 0, (__int64)&BaseAddress, 0LL);
    Dll = LoadedDllByName;
    if ( LoadedDllByName < 0 )
    {
      if ( LoadedDllByName != -1073741515 )
        return (unsigned int)Dll;
      v14 = (void *)qword_18015E610;
    }
    else
    {
      v14 = (void *)*((_QWORD *)BaseAddress + 6);
      LdrpDereferenceModule((char *)BaseAddress);
    }
    ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                  v14,
                                  (PANSI_STRING)&AvrfpAPILookupCallbackName,
                                  0,
                                  &ProcedureAddress,
                                  1u,
                                  Callback);
    LdrProtectMrdata(0);
    if ( ProcedureAddressForCaller >= 0 )
    {
      AvrfpAPILookupCallbackRoutine = __ROR8__(
                                        (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                        MEMORY[0x7FFE0330] & 0x3F);
      AvrfpAPILookupCallbacksEnabled = 1;
    }
    AVrfpEnabled = 1;
    RtlGuardAllowSuppressedCalls = 1;
    LdrProtectMrdata(1);
    AVrfpSnapAlreadyLoadedDlls();
    for ( i = (__int64 *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (__int64 *)*i )
    {
      v17 = i[4];
      v56 = 0;
      Dll = LdrpInitializeGraphRecurse(*(_QWORD *)(v17 + 152), 0LL, &v56);
      if ( Dll < 0 )
        return (unsigned int)Dll;
    }
    if ( (AVrfpDebug & 8) != 0 )
    {
      DbgPrint("AVRF: -*- final list of providers -*- \n");
      v18 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v18 != &AVrfpVerifierProvidersList )
      {
        v19 = v18[3];
        v18 = (__int64 *)*v18;
        DbgPrint("AVRF: provider %ws \n", v19);
      }
    }
    AVrfpVerifierStopInitialize();
    RtlImageNtHeaderEx(3u, v9->ImageBaseAddress, 0LL, &OutHeaders);
    return 0;
  }
  while ( (unsigned __int8)AVrfpLoadAndInitializeProvider(v12) )
  {
    v12 = (__int64 *)*v12;
    if ( v12 == &AVrfpVerifierProvidersList )
      goto LABEL_10;
  }
  return (unsigned int)-1073741502;
}
