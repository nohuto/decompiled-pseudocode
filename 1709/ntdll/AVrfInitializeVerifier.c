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

__int64 __fastcall AVrfInitializeVerifier(void *ProcessHeap, __int64 a2, __int64 a3, int a4, __int64 a5, _QWORD *a6)
{
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rdi
  struct _PEB *v9; // r14
  char v10; // r15
  int Dll; // ebx
  __int64 *v12; // rbx
  int LoadedDllByName; // eax
  __int64 v14; // rbx
  int ProcedureAddressForCaller; // ebx
  __int64 *i; // rdi
  __int64 v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // rdx
  unsigned int NtGlobalFlag; // r11d
  int v21; // r13d
  int v22; // ebx
  char *v23; // rbx
  int ValueKey; // eax
  unsigned __int64 v25; // rdi
  __int64 Heap; // rax
  int v27; // eax
  unsigned int v28; // eax
  char *v29; // rbx
  int v30; // eax
  unsigned __int64 v31; // rdi
  int v32; // ecx
  void *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  unsigned int v36; // eax
  char *v37; // rbx
  int v38; // eax
  unsigned __int64 v39; // rdi
  int v40; // ecx
  void *v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  unsigned int v44; // eax
  char *v45; // rbx
  int v46; // eax
  __int64 v47; // rax
  int v48; // eax
  size_t v49; // rax
  __int64 v51; // [rsp+20h] [rbp-E0h]
  char v52; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v53[3]; // [rsp+39h] [rbp-C7h] BYREF
  unsigned int v54; // [rsp+3Ch] [rbp-C4h]
  unsigned int v55; // [rsp+40h] [rbp-C0h]
  unsigned int v56; // [rsp+44h] [rbp-BCh]
  unsigned int v57; // [rsp+48h] [rbp-B8h]
  int v58[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int16 v59[4]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v60; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v61[4]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v62; // [rsp+70h] [rbp-90h]
  unsigned __int16 v63[4]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h] BYREF
  __int64 v66; // [rsp+90h] [rbp-70h] BYREF
  __int64 v67; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  _BYTE v69[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-48h] BYREF
  char v71; // [rsp+C0h] [rbp-40h] BYREF
  char v72; // [rsp+4C0h] [rbp+3C0h] BYREF
  char v73; // [rsp+8C0h] [rbp+7C0h] BYREF
  char v74; // [rsp+CC0h] [rbp+BC0h] BYREF
  __int64 retaddr; // [rsp+1108h] [rbp+1008h]

  v6 = 0LL;
  v7 = a6;
  v9 = NtCurrentPeb();
  v10 = (char)ProcessHeap;
  v68 = a2;
  v67 = a5;
  v58[0] = 0;
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
    if ( a3 && (int)RtlInitUnicodeStringEx((__int64)v59, (__int64)L"VerifierFlags") >= 0 )
    {
      v23 = &v71;
      ValueKey = NtQueryValueKey();
      if ( ValueKey < 0 )
      {
        if ( ValueKey == -2147483643 )
        {
          while ( 1 )
          {
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v54);
            v25 = Heap;
            if ( !Heap )
              break;
            v23 = (char *)Heap;
            v27 = NtQueryValueKey();
            if ( v27 >= 0 )
              goto LABEL_39;
            if ( v27 != -2147483643 )
              goto LABEL_55;
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v23);
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
              v54 = 4;
              v58[0] = *((_DWORD *)v23 + 3);
            }
          }
          else if ( (_DWORD)ProcessHeap == 1 && ((unsigned __int8)v58 & 3) == 0 )
          {
            v54 = 4;
            v60 = v23 + 12;
            v59[0] = *((_WORD *)v23 + 4);
            v59[1] = *((_WORD *)v23 + 4);
            RtlUnicodeStringToInteger(v59, 0, v58);
          }
        }
        else if ( (_DWORD)ProcessHeap == 4 )
        {
          v54 = *((_DWORD *)v23 + 2);
          v28 = *((_DWORD *)v23 + 2);
          if ( v28 <= 4 )
            memmove(v58, v23 + 12, v28);
        }
LABEL_55:
        if ( v25 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v25);
        LOBYTE(v22) = v58[0];
        v7 = a6;
        if ( v58[0] )
        {
          AVrfpVerifierFlags = v58[0];
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
    if ( (v22 & 4) != 0 && (int)RtlInitUnicodeStringEx((__int64)v61, (__int64)L"HandleTraces") >= 0 )
    {
      v29 = &v72;
      v30 = NtQueryValueKey();
      if ( v30 < 0 )
      {
        if ( v30 != -2147483643 )
          goto LABEL_87;
        while ( 1 )
        {
          v33 = NtCurrentPeb()->ProcessHeap;
          if ( !v33 )
            break;
          v34 = RtlAllocateHeap((__int64)v33, NtdllBaseTag + 1572864, v55);
          v31 = v34;
          if ( !v34 )
            break;
          v29 = (char *)v34;
          v35 = NtQueryValueKey();
          if ( v35 >= 0 )
            goto LABEL_68;
          if ( v35 != -2147483643 )
            goto LABEL_84;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v29);
        }
      }
      else
      {
        v31 = 0LL;
LABEL_68:
        v32 = *((_DWORD *)v29 + 1);
        if ( ((v32 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v32 == 4 )
          {
            if ( *((_DWORD *)v29 + 2) == 4 )
            {
              v55 = 4;
              AVrfpHandleTraces = *((_DWORD *)v29 + 3);
            }
          }
          else if ( v32 == 1 && ((unsigned __int8)&AVrfpHandleTraces & 3) == 0 )
          {
            v55 = 4;
            v62 = v29 + 12;
            v61[0] = *((_WORD *)v29 + 4);
            v61[1] = *((_WORD *)v29 + 4);
            RtlUnicodeStringToInteger(v61, 0, &AVrfpHandleTraces);
          }
        }
        else if ( v32 == 4 )
        {
          v55 = *((_DWORD *)v29 + 2);
          v36 = *((_DWORD *)v29 + 2);
          if ( v36 <= 4 )
            memmove(&AVrfpHandleTraces, v29 + 12, v36);
        }
LABEL_84:
        if ( v31 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v31);
      }
      v7 = a6;
    }
LABEL_87:
    if ( (int)RtlInitUnicodeStringEx((__int64)v63, (__int64)L"VerifierDebug") < 0 )
      goto LABEL_109;
    v37 = &v73;
    v38 = NtQueryValueKey();
    if ( v38 < 0 )
    {
      if ( v38 != -2147483643 )
        goto LABEL_109;
      while ( 1 )
      {
        v41 = NtCurrentPeb()->ProcessHeap;
        if ( !v41 )
          break;
        v42 = RtlAllocateHeap((__int64)v41, NtdllBaseTag + 1572864, v56);
        v39 = v42;
        if ( !v42 )
          break;
        v37 = (char *)v42;
        v43 = NtQueryValueKey();
        if ( v43 >= 0 )
          goto LABEL_90;
        if ( v43 != -2147483643 )
          goto LABEL_106;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v37);
      }
    }
    else
    {
      v39 = 0LL;
LABEL_90:
      v40 = *((_DWORD *)v37 + 1);
      if ( ((v40 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v40 == 4 )
        {
          if ( *((_DWORD *)v37 + 2) == 4 )
          {
            v56 = 4;
            AVrfpDebug = *((_DWORD *)v37 + 3);
          }
        }
        else if ( v40 == 1 && ((unsigned __int8)&AVrfpDebug & 3) == 0 )
        {
          v56 = 4;
          v64 = v37 + 12;
          v63[0] = *((_WORD *)v37 + 4);
          v63[1] = *((_WORD *)v37 + 4);
          RtlUnicodeStringToInteger(v63, 0, &AVrfpDebug);
        }
      }
      else if ( v40 == 4 )
      {
        v56 = *((_DWORD *)v37 + 2);
        v44 = *((_DWORD *)v37 + 2);
        if ( v44 <= 4 )
          memmove(&AVrfpDebug, v37 + 12, v44);
      }
LABEL_106:
      if ( v39 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v39);
    }
    v7 = a6;
LABEL_109:
    if ( (int)RtlInitUnicodeStringEx((__int64)v69, (__int64)L"VerifierDlls") >= 0 )
    {
      v45 = &v74;
      v46 = NtQueryValueKey();
      if ( v46 < 0 )
      {
        if ( v46 == -2147483643 )
        {
          while ( 1 )
          {
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            v47 = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v57);
            v6 = v47;
            if ( !v47 )
              break;
            v45 = (char *)v47;
            v48 = NtQueryValueKey();
            if ( v48 >= 0 )
            {
              v7 = a6;
              goto LABEL_118;
            }
            if ( v48 != -2147483643 )
            {
              v7 = a6;
              goto LABEL_126;
            }
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v45);
          }
          v7 = a6;
        }
        goto LABEL_129;
      }
LABEL_118:
      LODWORD(ProcessHeap) = *((_DWORD *)v45 + 1);
      if ( (((_DWORD)ProcessHeap - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( (_DWORD)ProcessHeap == 1 )
        {
          v49 = *((unsigned int *)v45 + 2);
          v57 = *((_DWORD *)v45 + 2);
          goto LABEL_123;
        }
      }
      else if ( (_DWORD)ProcessHeap == 1 )
      {
        v57 = *((_DWORD *)v45 + 2);
        v49 = *((unsigned int *)v45 + 2);
LABEL_123:
        if ( (unsigned int)v49 <= 0x200 )
          memmove(&AVrfpVerifierDllsString, v45 + 12, v49);
      }
LABEL_126:
      if ( v6 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
    }
LABEL_129:
    Dll = AvrfMiniLoadDll((_BYTE)ProcessHeap, v68, a3, v67, (__int64)&AvrfpLoaderEntry);
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
  Dll = RtlInitializeCriticalSectionEx((__int64)&AVrfpVerifierLock, 0LL, 0);
  if ( Dll < 0 )
    return (unsigned int)Dll;
  if ( AvrfAppVerifierMode == 2 )
  {
    v53[0] = 0;
    Dll = LdrpInitializeGraphRecurse((__int64)&unk_18015E700, 0LL, v53);
    if ( Dll < 0 )
      return (unsigned int)Dll;
    return 0;
  }
  DbgPrintEx(
    93,
    0,
    "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
    *(_QWORD *)(qword_18015F3B0 + 96),
    LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
    AVrfpVerifierFlags);
  if ( (int)AVrfpParseVerifierDllsString() < 0 )
  {
    LODWORD(v51) = NtCurrentTeb()->ClientId.UniqueProcess;
    DbgPrintEx(
      93,
      0,
      "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
      *(_QWORD *)(qword_18015F3B0 + 96),
      v51);
    Dll = -1073741823;
    NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
    return (unsigned int)Dll;
  }
  v12 = (__int64 *)AVrfpVerifierProvidersList;
  if ( (__int64 *)AVrfpVerifierProvidersList == &AVrfpVerifierProvidersList )
  {
LABEL_10:
    AVrfpChainDuplicateVerificationLayers();
    LoadedDllByName = LdrpFindLoadedDllByName(VrfcoreDllString, 0LL, 0, (__int64)&v65, 0LL);
    Dll = LoadedDllByName;
    if ( LoadedDllByName < 0 )
    {
      if ( LoadedDllByName != -1073741515 )
        return (unsigned int)Dll;
      v14 = qword_18015E610;
    }
    else
    {
      v14 = *(_QWORD *)(v65 + 48);
      LdrpDereferenceModule(v65);
    }
    ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v14, AvrfpAPILookupCallbackName, 0, &v66, 1, retaddr);
    LdrProtectMrdata(0);
    if ( ProcedureAddressForCaller >= 0 )
    {
      AvrfpAPILookupCallbackRoutine = __ROR8__(v66 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
      AvrfpAPILookupCallbacksEnabled = 1;
    }
    AVrfpEnabled = 1;
    RtlGuardAllowSuppressedCalls = 1;
    LdrProtectMrdata(1);
    AVrfpSnapAlreadyLoadedDlls();
    for ( i = (__int64 *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (__int64 *)*i )
    {
      v17 = i[4];
      v52 = 0;
      Dll = LdrpInitializeGraphRecurse(*(_QWORD *)(v17 + 152), 0LL, &v52);
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
    RtlImageNtHeaderEx(3, (unsigned __int64)v9->ImageBaseAddress, 0LL, &v70);
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
