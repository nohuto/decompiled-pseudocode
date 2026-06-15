/*
 * XREFs of ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x180008C54
 * Callers:
 *     ActivatePolicyManager @ 0x180008690 (ActivatePolicyManager.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002CA8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18000B178 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??0CDuckingManager@@AEAA@XZ @ 0x18000BC70 (--0CDuckingManager@@AEAA@XZ.c)
 *     ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x18001A6D4 (-CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z.c)
 *     ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x180021008 (-CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z.c)
 *     ?CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z @ 0x180022F7C (-CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x180027764 (-TS_ServiceStart@@YAXXZ.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 *     memset_0 @ 0x180035A50 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CWindowsPolicyManager::RuntimeClassInitialize(struct CStreamClassPolicyManager **this)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // esi
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int LastError; // eax
  const char *v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // edi
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int Instance; // eax
  int v15; // eax
  HANDLE v16; // rax
  CDuckingManager *v17; // rax
  CDuckingManager *v18; // rcx
  struct CApplicationManager *v19; // rbx
  CApplicationManager *v20; // rax
  DWORD v21; // eax
  void *v22; // rdx
  unsigned int v23; // r8d
  struct CApplicationManager *v24; // rbx
  unsigned int dwCreationFlags; // [rsp+28h] [rbp-69h]
  struct CApplicationManager *v26; // [rsp+38h] [rbp-59h] BYREF
  _QWORD Recipient[4]; // [rsp+48h] [rbp-49h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+68h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  Recipient[2] = -2LL;
  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x60uLL);
  if ( v3 )
  {
    *v3 = &CAudioThreadPool::`vftable';
    v3[10] = 0LL;
    *((_DWORD *)v3 + 2) = 3;
    v3[2] = 0LL;
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
    v3[7] = 0LL;
    *((_DWORD *)v3 + 16) = 0;
    *((_DWORD *)v3 + 17) = 1;
    *((_DWORD *)v3 + 18) = 72;
  }
  else
  {
    v3 = 0LL;
  }
  ThreadPool = (struct CAudioThreadPool *)v3;
  if ( !v3 )
  {
    v4 = -2147024882;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD7,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)v4);
    return v4;
  }
  v4 = 0;
  if ( RtlDllShutdownInProgress() )
  {
    v4 = -2147023781;
LABEL_14:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_b77572dd5afa3089b98c995db13dd032_Traceguids, v4);
    }
    goto LABEL_18;
  }
  ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
  v3[10] = ThreadpoolCleanupGroup;
  if ( ThreadpoolCleanupGroup )
  {
    v3[3] = ThreadpoolCleanupGroup;
    v3[4] = 0LL;
  }
  else
  {
    LastError = GetLastError();
    v4 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v4 = LastError;
  }
  if ( (v4 & 0x80000000) != 0 )
    goto LABEL_14;
  g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
  if ( !g_WorkerEventPort )
  {
    v9 = 218LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v9,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             v8);
  }
  g_EventWorkerThreadHandle = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)EventWorkerThread, 0LL, 0, 0LL);
  if ( !g_EventWorkerThreadHandle )
  {
    v9 = 221LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v9,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             v8);
  }
  TS_ServiceStart();
  v26 = 0LL;
  v10 = CApplicationManager::CreateInstance(&v26);
  v11 = v10;
  if ( v10 >= 0 )
  {
    Instance = CStreamClassPolicyManager::CreateInstance(this + 5);
    v11 = Instance;
    if ( Instance >= 0 )
    {
      v15 = CPlaybackManager::CreateInstance(this + 4);
      v11 = v15;
      if ( v15 >= 0 )
      {
        v16 = GetProcessHeap();
        v17 = (CDuckingManager *)HeapAlloc(v16, 0, 0x140uLL);
        if ( v17 )
          v18 = CDuckingManager::CDuckingManager(v17);
        else
          v18 = 0LL;
        this[6] = v18;
        v11 = v18 == 0LL ? 0x8007000E : 0;
        if ( v18 )
        {
          v20 = v26;
          v19 = 0LL;
          v26 = 0LL;
          g_ApplicationManager = v20;
          g_PlaybackManager = this[4];
          g_StreamClassPolicyManager = this[5];
          memset_0(&spc, 0, sizeof(spc));
          if ( GetPwrCapabilities(&spc) && spc.spare2[2] )
          {
            g_bIsAoAcSystem = 1;
            Recipient[0] = LowPowerEpochNotificationCallback;
            Recipient[1] = 0LL;
            v21 = PowerSettingRegisterNotification(
                    &GUID_LOW_POWER_EPOCH,
                    2u,
                    Recipient,
                    &g_hLowPowerEpochNotificationHandle);
            if ( v21 )
              wil::details::in1diag3::_Log_Win32(retaddr, v22, v23, (const char *)v21, dwCreationFlags);
          }
          else
          {
            g_bIsAoAcSystem = 0;
          }
          v11 = 0;
          goto LABEL_42;
        }
        v12 = v11;
        v13 = 232LL;
      }
      else
      {
        v12 = (unsigned int)v15;
        v13 = 230LL;
      }
    }
    else
    {
      v12 = (unsigned int)Instance;
      v13 = 228LL;
    }
  }
  else
  {
    v12 = (unsigned int)v10;
    v13 = 226LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    (const char *)v12);
  v19 = v26;
LABEL_42:
  if ( v19 && _InterlockedExchangeAdd((volatile signed __int32 *)v19 + 2, 0xFFFFFFFF) == 1 )
  {
    v24 = v26;
    (*(void (__fastcall **)(struct CApplicationManager *))(*(_QWORD *)v26 + 16LL))(v26);
    (*(void (__fastcall **)(struct CApplicationManager *, __int64))(*(_QWORD *)v24 + 8LL))(v24, 1LL);
  }
  return v11;
}
