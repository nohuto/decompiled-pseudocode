/*
 * XREFs of ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18002B280
 * Callers:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18002C1E0 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002F7B0 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x1800977A0 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18002B1A0 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18002B4B0 (-PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@PEAXPEAU_FILETIME@@@Z @ 0x180035DF0 (-SetWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@PEAXPEAU_FILETIME@@@Z.c)
 *     ?CreateWait@CAudioThreadPool@@UEAAPEAU_TP_WAIT@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@J@Z1@Z @ 0x180035E10 (-CreateWait@CAudioThreadPool@@UEAAPEAU_TP_WAIT@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@J@Z1@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x180107AD4 (-ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::InstantiateADG(CAudioDGProcess *this)
{
  int v2; // ebx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // eax
  CAudioThreadPool *v7; // rbx
  struct _TP_WAIT *(__fastcall *v8)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), void *); // rax
  struct _TP_WAIT *Wait; // rax
  struct _TP_WAIT *v10; // rdx
  void *v11; // r8
  void (__fastcall *v12)(CAudioThreadPool *__hidden, struct _TP_WAIT *, void *, struct _FILETIME *); // rax
  bool v13; // al
  bool v14; // [rsp+48h] [rbp-49h] BYREF
  int v15; // [rsp+4Ch] [rbp-45h] BYREF
  int pvData; // [rsp+50h] [rbp-41h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-3Dh] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-39h] BYREF
  char v19; // [rsp+60h] [rbp-31h]
  __int64 v20; // [rsp+68h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-19h] BYREF
  bool *v22; // [rsp+98h] [rbp+7h]
  __int64 v23; // [rsp+A0h] [rbp+Fh]
  int *p_pvData; // [rsp+A8h] [rbp+17h]
  __int64 v25; // [rsp+B0h] [rbp+1Fh]
  int *v26; // [rsp+B8h] [rbp+27h]
  __int64 v27; // [rsp+C0h] [rbp+2Fh]

  v20 = -2LL;
  v14 = 1;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v19 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_QWORD *)this + 11) )
  {
    v2 = 0;
    v15 = 0;
  }
  else
  {
    *((_BYTE *)this + 100) = 0;
    v14 = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"EnableProtectedAudioDG",
            0x18u,
            0LL,
            &pvData,
            &pcbData) )
    {
      v13 = v14;
      if ( pvData )
        v13 = 1;
      v14 = v13;
    }
    v2 = CAudioDGProcess::PrepareToWaitForADGStartup(this);
    v15 = v2;
    if ( v2 < 0 )
      goto LABEL_31;
    if ( (unsigned int)dword_1801884D0 > 4 )
    {
      v22 = &v14;
      v23 = 1LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801884D0, &unk_1801495CF, v4, v5, 3u, &pData);
    }
    v6 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, v14);
    v2 = v6;
    v15 = v6;
    if ( v6 < 0 )
    {
      if ( v6 == -2147024319 )
      {
        OutputDebugStringW(L"********************************************************************************\n");
        OutputDebugStringW(L"********************************************************************************\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
        OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"Launch of AudioDG.EXE as a protected process failed with STATUS_INVALID_IMAGE_HASH\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"This usually means that there is a problem with PEAUTH, because an unexpected \n");
        OutputDebugStringW(L" DLL was added to the audiodg.exe process\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L" To find the offending binary, please do the following:\n");
        OutputDebugStringW(L" \t1. Start Event Viewer (type eventvwr from command line\n");
        OutputDebugStringW(L" \t2. Navigate to Applications and Services Log/Microsoft/Windows/CodeIntegrity/Operational node\n");
        OutputDebugStringW(L" \t3. Check the error level events with ID 3002; you'll see the offending binary path.\n");
        OutputDebugStringW(L" The event text should read as: Code Integrity is unable to verify the image integrity of the file ...\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"To get the build to boot, audiodg is being restarted outside of the protected \n");
        OutputDebugStringW(L" environment, audio will continue to function, but playback of protected \n");
        OutputDebugStringW(L" content will be disabled \n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L" For more information, please see:\n");
        OutputDebugStringW(L"    http://dmd/wmpg/mf/cp/PMP/Lists/Protected%20Environment%20FAQ/Flat.aspx\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"********************************************************************************\n");
        OutputDebugStringW(L"********************************************************************************\n");
        v2 = v15;
      }
      if ( v14 )
      {
        v2 = CAudioDGProcess::ResetAfterWaitingForADGStartup(this);
        v15 = v2;
        if ( v2 < 0 )
          goto LABEL_31;
        v2 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, !v14);
        v15 = v2;
        if ( v2 < 0 )
          goto LABEL_31;
      }
      if ( v2 < 0 )
        goto LABEL_31;
    }
    if ( *((_QWORD *)this + 11) )
    {
      v7 = ThreadPool;
      v8 = *(struct _TP_WAIT *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), void *))(*(_QWORD *)ThreadPool + 80LL);
      if ( v8 == CAudioThreadPool::CreateWait )
        Wait = CAudioThreadPool::CreateWait(
                 ThreadPool,
                 (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int))CAudioDGProcess::OnADGProcessTerminatedHandler,
                 this);
      else
        Wait = v8(
                 ThreadPool,
                 (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int))CAudioDGProcess::OnADGProcessTerminatedHandler,
                 this);
      v10 = Wait;
      *((_QWORD *)this + 15) = Wait;
      if ( Wait )
      {
        v11 = (void *)*((_QWORD *)this + 11);
        v12 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WAIT *, void *, struct _FILETIME *))(*(_QWORD *)v7 + 88LL);
        if ( v12 == CAudioThreadPool::SetWait )
          CAudioThreadPool::SetWait(v7, v10, v11, 0LL);
        else
          v12(v7, v10, v11, 0LL);
      }
      v2 = v15;
    }
    if ( v2 < 0 )
    {
LABEL_31:
      if ( (unsigned int)dword_1801884D0 > 2 )
      {
        v22 = (bool *)"CAudioDGProcess::InstantiateADG";
        v23 = 32LL;
        pvData = 655;
        p_pvData = &pvData;
        v25 = 4LL;
        v26 = &v15;
        v27 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801884D0, &unk_1801494DA, v4, v5, 5u, &pData);
        v2 = v15;
      }
    }
  }
  if ( v19 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v19 = 0;
  }
  return (unsigned int)v2;
}
