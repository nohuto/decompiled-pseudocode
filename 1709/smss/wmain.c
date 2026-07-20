/*
 * XREFs of wmain @ 0x1400014B0
 * Callers:
 *     NtProcessStartupW_AfterSecurityCookieInitialized @ 0x1400011C0 (NtProcessStartupW_AfterSecurityCookieInitialized.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x140001ACC (TraceLoggingRegisterEx.c)
 *     SmscMain @ 0x140002038 (SmscMain.c)
 *     SmpGetFirstSessionId @ 0x1400033EC (SmpGetFirstSessionId.c)
 *     SmpSearchKnownSubSysDatabase @ 0x1400045A8 (SmpSearchKnownSubSysDatabase.c)
 *     SmpUnlockKnownSubSysList @ 0x140004668 (SmpUnlockKnownSubSysList.c)
 *     SmpWaitForSubSysStartup @ 0x140004940 (SmpWaitForSubSysStartup.c)
 *     SmpDereferenceKnownSubSys @ 0x140004A94 (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForSingleSubSys @ 0x140004B24 (SmpWaitForSingleSubSys.c)
 *     SmpReadyBootSync @ 0x140007AF4 (SmpReadyBootSync.c)
 *     SmpInit @ 0x140009F54 (SmpInit.c)
 *     SmpGetCoreProcessIds @ 0x14000BFB0 (SmpGetCoreProcessIds.c)
 *     __security_check_cookie @ 0x14000C4E0 (__security_check_cookie.c)
 *     SmpTerminate @ 0x140012FDC (SmpTerminate.c)
 *     SmpUnhandledExceptionFilter @ 0x140013068 (SmpUnhandledExceptionFilter.c)
 */

__int64 __fastcall wmain(int a1, PCWSTR *a2, __int64 a3, unsigned int a4)
{
  TLG_PENABLECALLBACK v6; // rdx
  TraceLoggingHProvider v7; // rcx
  PVOID v8; // r8
  int v9; // eax
  REGHANDLE v10; // rcx
  __int64 *v11; // rdi
  __int64 *v12; // r14
  __int64 v13; // r8
  int v14; // esi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // edi
  unsigned int FirstSessionId; // eax
  unsigned int v25; // eax
  void *v26; // rsi
  int v27; // eax
  __int64 v28; // r14
  NTSTATUS v29; // edi
  __int64 (__fastcall *v30)(_QWORD); // rcx
  NTSTATUS InformationProcess; // eax
  NTSTATUS v32; // eax
  __int64 v33; // rdi
  int v34; // [rsp+40h] [rbp-128h] BYREF
  unsigned int v35; // [rsp+44h] [rbp-124h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-120h] BYREF
  int v37; // [rsp+58h] [rbp-110h] BYREF
  int v38; // [rsp+5Ch] [rbp-10Ch] BYREF
  unsigned int v39; // [rsp+60h] [rbp-108h]
  _DWORD ProcessInformation[2]; // [rsp+68h] [rbp-100h] BYREF
  __int64 v41; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v43; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+88h] [rbp-E0h]
  __int64 v45; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD v46[2]; // [rsp+98h] [rbp-D0h] BYREF
  _BYTE v47[16]; // [rsp+A8h] [rbp-C0h] BYREF
  int v48; // [rsp+B8h] [rbp-B0h] BYREF
  _BYTE *v49; // [rsp+C0h] [rbp-A8h]
  int v50; // [rsp+C8h] [rbp-A0h]
  char v51[16]; // [rsp+D0h] [rbp-98h] BYREF
  NTSTATUS v52[12]; // [rsp+E0h] [rbp-88h] BYREF
  unsigned __int64 Parameters; // [rsp+110h] [rbp-58h] BYREF
  __int64 v54; // [rsp+118h] [rbp-50h]
  __int64 v55; // [rsp+120h] [rbp-48h]
  __int64 v56; // [rsp+128h] [rbp-40h]

  v35 = a4;
  ProcessInformation[0] = 2;
  ProcessInformation[1] = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie|ProcessUserModeIOPL, ProcessInformation, 8u);
  v37 = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCycleTime|ProcessUserModeIOPL, &v37, 4u);
  RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  TraceLoggingRegisterEx(v7, v6, v8);
  v9 = EtwEventRegister(&SmssEventProvider, 0LL, 0LL, &SmpTraceHandle);
  v10 = SmpTraceHandle;
  if ( v9 )
    v10 = 0LL;
  SmpTraceHandle = v10;
  qword_140020C90 = 0LL;
  WPP_MAIN_CB = 0LL;
  qword_140020C98 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_Smss;
  v11 = &WPP_MAIN_CB;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  v12 = &WPP_REGISTRATION_GUIDS;
  do
  {
    v13 = *v12++;
    v46[0] = v13;
    v46[1] = 0LL;
    v11[4] = v13;
    EtwRegisterTraceGuidsW(WppControlCallback, v11, v13, 1LL, v46, 0LL, 0LL, v11 + 1);
    v11 = (__int64 *)*v11;
  }
  while ( v11 );
  SmpHostSmss = (unsigned int)RtlGetCurrentServiceSessionId() == 0;
  v14 = v35;
  if ( a1 <= 1 )
  {
    SmpPrimarySmss = 1;
    SmpReadyBootSync();
    RtlInitUnicodeStringEx(&SmpHelperCmd, *a2);
    RtlSetThreadIsCritical(1u, 0LL, 0);
    v38 = 11;
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBasePriority, &v38, 4u);
    Parameters = (unsigned __int64)&DestinationString;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    if ( (MEMORY[0x7FFE02F0] & 0x20) != 0 )
    {
      v34 = 3;
      v32 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityUpdateMode, &v34, 4u);
      v33 = (unsigned int)v32;
      if ( v32 < 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Session Manager failed to set affinity update mode");
        v54 = v33;
        goto LABEL_41;
      }
    }
    v16 = SmpDebug;
    if ( v14 )
      v16 = v14;
    SmpDebug = v16;
    v45 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    RtlInitializeSRWLock(&v42);
    v17 = TpAllocPool(&v43, 0LL);
    v18 = (unsigned int)v17;
    v35 = v17;
    if ( v17 < 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Thread pool allocation");
      SmpInitProgressByLine = 321;
      SmpInitReturnStatus = v18;
      v30 = (__int64 (__fastcall *)(_QWORD))TpAllocPool;
    }
    else
    {
      LODWORD(v44) = SmpNumberInitialSessions;
      v19 = TpSetPoolMinThreads(v43);
      v18 = v19;
      if ( v19 < 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Configuring thread pool minimum thread number");
        SmpInitProgressByLine = 347;
        SmpInitReturnStatus = v18;
        v30 = TpSetPoolMinThreads;
      }
      else
      {
        SmpCallbackEnviron = 3;
        xmmword_140020CC8 = 0LL;
        qword_140020CD8 = 0LL;
        xmmword_140020CE0 = 0LL;
        qword_140020CF0 = 0LL;
        dword_140020CF8 = 0;
        dword_140020CFC = 1;
        dword_140020D00 = 72;
        *(_QWORD *)&xmmword_140020CC8 = v43;
        v20 = SmpInit();
        v18 = (unsigned int)v20;
        if ( v20 < 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"Session Manager Initialization");
          goto LABEL_30;
        }
        v21 = TpAllocAlpcCompletion(&v45, SmpApiConnectionPort, SmpApiCallback, &v42, &SmpCallbackEnviron);
        v18 = (unsigned int)v21;
        if ( v21 < 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"ALPC Completion object allocation");
          SmpInitProgressByLine = 391;
          SmpInitReturnStatus = v18;
          v30 = (__int64 (__fastcall *)(_QWORD))TpAllocAlpcCompletion;
        }
        else
        {
          v22 = TpAllocWork(&v41, SmpCreateInitialSession, 0LL, &SmpCallbackEnviron);
          v18 = v22;
          if ( v22 >= 0 )
          {
            v23 = 0;
            v39 = 0;
            while ( v23 < SmpNumberInitialSessions )
            {
              TpPostWork(v41);
              if ( (unsigned int)SmpNumberInitialSessions > 1 && !v23 )
              {
                v48 = 1;
                v49 = v47;
                v50 = 2;
                do
                {
                  FirstSessionId = SmpGetFirstSessionId();
                  SmpWaitForSubSysStartup(FirstSessionId, 2LL, 0LL, v47);
                  v25 = SmpGetFirstSessionId();
                  v26 = (void *)SmpSearchKnownSubSysDatabase(v25, &v48);
                  SmpUnlockKnownSubSysList(v47);
                }
                while ( !v26 );
                v27 = SmpWaitForSingleSubSys(v26);
                v28 = v27;
                if ( v27 < 0 )
                {
                  RtlInitUnicodeString(&DestinationString, L"Failed to locate core GUI process.");
                  v54 = v28;
                  goto LABEL_41;
                }
                SmpDereferenceKnownSubSys(v26);
              }
              v39 = ++v23;
            }
            SmpGetCoreProcessIds(0LL, v51);
            v29 = NtWaitForMultipleObjects(1u, SmpCoreSubsysProcess, WaitAny, 0, 0LL);
            if ( v29 )
            {
              RtlInitUnicodeString(&DestinationString, L"Unexpected error code from NtWaitForMultipleObjects");
              v52[0] = v29;
              InformationProcess = 0;
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, L"Master Subsystem Process");
              InformationProcess = NtQueryInformationProcess(
                                     SmpCoreSubsysProcess[0],
                                     ProcessBasicInformation,
                                     v52,
                                     0x30u,
                                     0LL);
              v29 = v52[0];
            }
            if ( InformationProcess < 0 )
              v54 = -1073741823LL;
            else
              v54 = v29;
LABEL_41:
            SmpTerminate(&Parameters, 1u, 4u);
            JUMPOUT(0x14000C9D8LL);
          }
          RtlInitUnicodeString(&DestinationString, L"Thread pool work object allocation.");
          SmpInitProgressByLine = 423;
          SmpInitReturnStatus = v18;
          v30 = (__int64 (__fastcall *)(_QWORD))TpAllocWork;
        }
      }
    }
    SmpInitLastCall = (__int64)v30;
LABEL_30:
    v54 = v18;
    goto LABEL_41;
  }
  SmscMain((unsigned int)a1, a2, v35);
  return 0LL;
}
