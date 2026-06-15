/*
 * XREFs of ?Initialize@CWindowsPolicyManager@@IEAAJXZ @ 0x180004EB4
 * Callers:
 *     ?Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z @ 0x180004DEC (-Create@CWindowsPolicyManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0CDuckingManager@@AEAA@XZ @ 0x180006FAC (--0CDuckingManager@@AEAA@XZ.c)
 *     ?CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z @ 0x180012498 (-CreateInstance@CApplicationManager@@SAJPEAPEAV1@@Z.c)
 *     ?CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z @ 0x180017B3C (-CreateInstance@CPlaybackManager@@SAJPEAPEAV1@@Z.c)
 *     ?CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z @ 0x180019828 (-CreateInstance@CStreamClassPolicyManager@@SAJPEAPEAV1@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18001E3F4 (-TS_ServiceStart@@YAXXZ.c)
 *     __security_check_cookie @ 0x180026990 (__security_check_cookie.c)
 *     memset @ 0x1800275FE (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowsPolicyManager::Initialize(CWindowsPolicyManager *this)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rbx
  signed int Instance; // edi
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int LastError; // eax
  struct CApplicationManager *v7; // rbx
  signed int v8; // eax
  signed int v9; // eax
  HANDLE v10; // rax
  CDuckingManager *v11; // rax
  CDuckingManager *v12; // rcx
  CApplicationManager *v13; // rax
  signed int v14; // esi
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  struct CApplicationManager *v17; // rbx
  struct CApplicationManager *v19; // [rsp+38h] [rbp-59h] BYREF
  _QWORD Recipient[4]; // [rsp+48h] [rbp-49h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+68h] [rbp-29h] BYREF

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
    Instance = -2147024882;
    goto LABEL_18;
  }
  Instance = 0;
  if ( RtlDllShutdownInProgress() )
  {
    Instance = -2147023781;
LABEL_14:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_7685146492ce3ff18662de11fe191f6a_Traceguids, Instance);
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
    Instance = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      Instance = LastError;
  }
  if ( Instance < 0 )
    goto LABEL_14;
LABEL_18:
  v7 = 0LL;
  v19 = 0LL;
  if ( Instance >= 0 )
  {
    g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
    if ( !g_WorkerEventPort )
    {
      v8 = GetLastError();
      Instance = (unsigned __int16)v8 | 0x80070000;
      if ( v8 <= 0 )
        Instance = v8;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_78549fd881243d94e0ba2a0c198539a5_Traceguids, Instance);
      }
    }
    if ( Instance >= 0 )
    {
      g_EventWorkerThreadHandle = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)EventWorkerThread, 0LL, 0, 0LL);
      if ( !g_EventWorkerThreadHandle )
      {
        v9 = GetLastError();
        Instance = (unsigned __int16)v9 | 0x80070000;
        if ( v9 <= 0 )
          Instance = v9;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xDu,
            &WPP_78549fd881243d94e0ba2a0c198539a5_Traceguids,
            Instance);
        }
      }
      if ( Instance >= 0 )
      {
        TS_ServiceStart();
        Instance = CApplicationManager::CreateInstance(&v19);
        if ( Instance >= 0
          && (Instance = CStreamClassPolicyManager::CreateInstance((struct CStreamClassPolicyManager **)this + 5),
              Instance >= 0)
          && (Instance = CPlaybackManager::CreateInstance((struct CPlaybackManager **)this + 4), Instance >= 0)
          && ((v10 = GetProcessHeap(), (v11 = (CDuckingManager *)HeapAlloc(v10, 0, 0x140uLL)) == 0LL)
            ? (v12 = 0LL)
            : (v12 = CDuckingManager::CDuckingManager(v11)),
              *((_QWORD *)this + 6) = v12,
              Instance = v12 == 0LL ? 0x8007000E : 0,
              v12) )
        {
          v13 = v19;
          v7 = 0LL;
          v19 = 0LL;
          g_ApplicationManager = v13;
          g_PlaybackManager = (struct CPlaybackManager *)*((_QWORD *)this + 4);
          g_StreamClassPolicyManager = (struct CStreamClassPolicyManager *)*((_QWORD *)this + 5);
        }
        else
        {
          v7 = v19;
        }
      }
    }
  }
  memset(&spc, 0, sizeof(spc));
  if ( GetPwrCapabilities(&spc) && spc.spare2[2] )
  {
    g_bIsAoAcSystem = 1;
    Recipient[0] = LowPowerEpochNotificationCallback;
    Recipient[1] = 0LL;
    v14 = PowerSettingRegisterNotification(&GUID_LOW_POWER_EPOCH, 2u, Recipient, &g_hLowPowerEpochNotificationHandle);
    if ( v14 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        v15 = (unsigned __int16)v14 | 0x80070000;
        if ( v14 <= 0 )
          v15 = v14;
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_78549fd881243d94e0ba2a0c198539a5_Traceguids, v15);
      }
      v16 = (unsigned __int16)v14 | 0x80070000;
      if ( v14 <= 0 )
        v16 = v14;
      AudPolicyLogError("CWindowsPolicyManager::Initialize", 355, v16);
    }
  }
  else
  {
    g_bIsAoAcSystem = 0;
  }
  if ( v7 && _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 2, 0xFFFFFFFF) == 1 )
  {
    v17 = v19;
    (*(void (__fastcall **)(struct CApplicationManager *))(*(_QWORD *)v19 + 16LL))(v19);
    (*(void (__fastcall **)(struct CApplicationManager *, __int64))(*(_QWORD *)v17 + 8LL))(v17, 1LL);
  }
  return (unsigned int)Instance;
}
