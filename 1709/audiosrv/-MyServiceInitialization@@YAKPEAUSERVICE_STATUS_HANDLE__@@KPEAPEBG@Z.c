/*
 * XREFs of ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x1800AC7CC
 * Callers:
 *     ServiceStart @ 0x1800AD388 (ServiceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     McGenEventRegister @ 0x1800ACF40 (McGenEventRegister.c)
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x1800BEB74 (-InitializeAudioThreadpool@@YAJXZ.c)
 */

unsigned int __fastcall MyServiceInitialization(
        struct SERVICE_STATUS_HANDLE__ *a1,
        DWORD a2,
        const unsigned __int16 **a3)
{
  unsigned int result; // eax
  __int64 v5; // rdx
  struct IAudioService *v6; // rax
  unsigned int Instance; // ebx
  DWORD LastError; // eax
  DWORD v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // ebx
  DWORD ThreadId; // [rsp+48h] [rbp+10h] BYREF

  ThreadId = a2;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids);
  }
  result = CoInitializeEx(0LL, 0);
  if ( result <= 1 )
  {
    v6 = g_AudioService;
    *((_QWORD *)g_AudioService + 1) = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    *((_DWORD *)v6 + 14) = 0;
    *((_DWORD *)v6 + 15) = 0;
    *((_DWORD *)v6 + 16) = 0;
    McGenEventRegister(&AUDIO_EVENT_PROVIDER, v5, AUDIO_EVENT_PROVIDER_Context, AUDIO_EVENT_PROVIDER_Context);
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 3u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)&g_DeviceEnumerator);
    if ( !Instance )
    {
      g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
      if ( g_WorkerEventPort )
        goto LABEL_13;
      LastError = GetLastError();
      Instance = LastError;
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids,
          LastError);
      }
      if ( !Instance )
      {
LABEL_13:
        Instance = InitializeAudioThreadpool();
        if ( !Instance )
        {
          g_EventWorkerThreadHandle = CreateThread(
                                        0LL,
                                        0LL,
                                        (LPTHREAD_START_ROUTINE)EventWorkerThread,
                                        0LL,
                                        0,
                                        &ThreadId);
          if ( !g_EventWorkerThreadHandle )
          {
            v9 = GetLastError();
            Instance = v9;
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0xDu,
                (__int64)&WPP_cbb33a57e23e3669b5894dbe7143f5ce_Traceguids,
                v9);
            }
          }
        }
      }
    }
    v10 = (**(__int64 (__fastcall ***)(struct IAudioService *, _QWORD))g_AudioService)(g_AudioService, Instance);
    v11 = v10;
    if ( !v10 )
      v11 = (*(unsigned int (__fastcall **)(struct IAudioService *, struct SERVICE_STATUS_HANDLE__ *))(*(_QWORD *)g_AudioService + 8LL))(
              g_AudioService,
              a1);
    v12 = (*(__int64 (__fastcall **)(struct IAudioService *, __int64))(*(_QWORD *)g_AudioService + 16LL))(
            g_AudioService,
            v11);
    CoUninitialize();
    return v12;
  }
  return result;
}
