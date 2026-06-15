/*
 * XREFs of ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18001746C
 * Callers:
 *     ?LockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180016FF0 (-LockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001738C (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18001789C (-PrepareToWaitForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@PEAXPEAU_FILETIME@@@Z @ 0x1800241D0 (-SetWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@PEAXPEAU_FILETIME@@@Z.c)
 *     ?CreateWait@CAudioThreadPool@@UEAAPEAU_TP_WAIT@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@J@Z1@Z @ 0x1800241F0 (-CreateWait@CAudioThreadPool@@UEAAPEAU_TP_WAIT@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@J@Z1@Z.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     Template_q @ 0x18002F3A4 (Template_q.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x1800CD7DC (-ResetAfterWaitingForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::InstantiateADG(CAudioDGProcess *this)
{
  int v2; // ebx
  DWORD v4; // ebx
  bool v5; // si
  __int64 v6; // rcx
  int v7; // eax
  CAudioThreadPool *v8; // rbx
  struct _TP_WAIT *(__fastcall *v9)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), void *); // rax
  struct _TP_WAIT *Wait; // rax
  struct _TP_WAIT *v11; // rdx
  void *v12; // r8
  void (__fastcall *v13)(CAudioThreadPool *__hidden, struct _TP_WAIT *, void *, struct _FILETIME *); // rax
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  int v16; // [rsp+48h] [rbp-69h] BYREF
  int pvData; // [rsp+4Ch] [rbp-65h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-61h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-59h] BYREF
  char v20; // [rsp+60h] [rbp-51h]
  _DWORD v21[4]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v22; // [rsp+78h] [rbp-39h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A8h] [rbp-9h] BYREF
  int *p_pvData; // [rsp+B8h] [rbp+7h]
  __int64 v26; // [rsp+C0h] [rbp+Fh]
  int *v27; // [rsp+C8h] [rbp+17h]
  __int64 v28; // [rsp+D0h] [rbp+1Fh]

  v22 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v20 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_QWORD *)this + 11) )
  {
    v2 = 0;
    v16 = 0;
  }
  else
  {
    if ( *((_BYTE *)this + 97) )
    {
      v4 = -1;
      if ( GetTickCount() >= *((_DWORD *)this + 32) )
        v4 = (GetTickCount() - *((_DWORD *)this + 32)) / 0x3E8;
      v21[0] = 16;
      v21[2] = v4;
      v21[1] = 1;
      WinSqmAddToStreamEx(*(_QWORD *)&g_SqmSession.Data1, 6396LL, 1LL, v21, 0);
    }
    *((_BYTE *)this + 96) = 0;
    v5 = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"EnableProtectedAudioDG",
            0x18u,
            0LL,
            &pvData,
            &pcbData) )
      v5 = pvData != 0;
    v2 = CAudioDGProcess::PrepareToWaitForADGStartup(this);
    v16 = v2;
    if ( v2 < 0 )
      goto LABEL_33;
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      Template_q(v6, &EVT_AUDIOSRV_LAUNCH_AUDIODG, *((unsigned int *)this + 26));
    v7 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, v5);
    v2 = v7;
    v16 = v7;
    if ( v7 < 0 )
    {
      if ( v7 == -2147024319 )
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
        v2 = v16;
      }
      if ( v5 )
      {
        v2 = CAudioDGProcess::ResetAfterWaitingForADGStartup(this);
        v16 = v2;
        if ( v2 < 0 )
          goto LABEL_33;
        v2 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, !v5);
        v16 = v2;
        if ( v2 < 0 )
          goto LABEL_33;
      }
      if ( v2 < 0 )
        goto LABEL_33;
    }
    if ( *((_QWORD *)this + 11) )
    {
      v8 = ThreadPool;
      v9 = *(struct _TP_WAIT *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), void *))(*(_QWORD *)ThreadPool + 80LL);
      if ( v9 == CAudioThreadPool::CreateWait )
        Wait = CAudioThreadPool::CreateWait(
                 ThreadPool,
                 (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int))CAudioDGProcess::OnADGProcessTerminatedHandler,
                 this);
      else
        Wait = v9(
                 ThreadPool,
                 (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int))CAudioDGProcess::OnADGProcessTerminatedHandler,
                 this);
      v11 = Wait;
      *((_QWORD *)this + 14) = Wait;
      if ( Wait )
      {
        v12 = (void *)*((_QWORD *)this + 11);
        v13 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WAIT *, void *, struct _FILETIME *))(*(_QWORD *)v8 + 88LL);
        if ( v13 == CAudioThreadPool::SetWait )
          CAudioThreadPool::SetWait(v8, v11, v12, 0LL);
        else
          v13(v8, v11, v12, 0LL);
      }
      v2 = v16;
    }
    if ( v2 < 0 )
    {
LABEL_33:
      if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
      {
        Template_q(v6, &EVT_AUDIOSRV_FAIL_AUDIODG_FAILED_STARTUP, (unsigned int)v2);
        v2 = v16;
      }
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          39LL,
          &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
          (unsigned int)v2);
        v2 = v16;
      }
      if ( (unsigned int)dword_18012A2A0 > 2 )
      {
        TlgCreateSz(&pDesc, "CAudioDGProcess::InstantiateADG");
        pvData = 788;
        p_pvData = &pvData;
        v26 = 4LL;
        v27 = &v16;
        v28 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v14, v15, 5u, &pData);
        v2 = v16;
      }
    }
  }
  if ( v20 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v20 = 0;
  }
  return (unsigned int)v2;
}
