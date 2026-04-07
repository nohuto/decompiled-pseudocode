/*
 * XREFs of ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003C138
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x180038D08 (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016C9C (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CTransitionVisualController@@QEAA@XZ @ 0x180038DB0 (--0CTransitionVisualController@@QEAA@XZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x180038E34 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?Init@CTextCache@@QEAAJXZ @ 0x180038E60 (-Init@CTextCache@@QEAAJXZ.c)
 *     ?Create@CLivePreview@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180038EA8 (-Create@CLivePreview@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x1800391D4 (-SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ?Init@CIconicBitmapRegistry@@QEAAJXZ @ 0x180039230 (-Init@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ @ 0x180039354 (-Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x180039B00 (--0CContactManager@@QEAA@XZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18003B448 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?ReadProductType@CDesktopManager@@AEAAXXZ @ 0x18003B548 (-ReadProductType@CDesktopManager@@AEAAXXZ.c)
 *     ?_InitializeWnf@CDesktopManager@@AEAAJXZ @ 0x18003B5A4 (-_InitializeWnf@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateRootVisual@CWindowList@@QEAAJXZ @ 0x18003D518 (-CreateRootVisual@CWindowList@@QEAAJXZ.c)
 *     ??0CWindowList@@QEAA@XZ @ 0x18003D7A0 (--0CWindowList@@QEAA@XZ.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18006CF14 (McTemplateU0d.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18006E7F8 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::Initialize(
        CDesktopManager *this,
        const struct StartupInfo *a2,
        struct CompositionInfo *a3)
{
  HANDLE EventW; // rbp
  char v6; // r12
  char v7; // r15
  CWindowList *v8; // rax
  CWindowList *v9; // rbx
  CWindowList *v10; // rax
  CContactManager *v11; // rax
  CContactManager *v12; // rax
  CTransitionVisualController *v13; // rax
  CTransitionVisualController *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  CDesktopManager *v18; // rax
  int v19; // eax
  signed int v20; // ebx
  struct IDwmChannel **v21; // r14
  int Channel; // eax
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  struct IDwmChannel *v29; // rcx
  HANDLE Thread; // rax
  int v32; // r9d
  signed int v33; // eax
  signed int v34; // eax
  signed int LastError; // eax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsa; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsb; // [rsp+20h] [rbp-48h]
  HANDLE Handles[2]; // [rsp+30h] [rbp-38h] BYREF
  int pvParam; // [rsp+70h] [rbp+8h] BYREF
  int v41; // [rsp+74h] [rbp+Ch]

  *((_BYTE *)this + 19) = 0;
  *((_BYTE *)this + 23) = 0;
  EventW = 0LL;
  v6 = 0;
  *((_QWORD *)this + 7) = *(_QWORD *)a2;
  v7 = 0;
  *((_QWORD *)this + 5) = *(_QWORD *)a3;
  v8 = (CWindowList *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        592LL);
  v9 = v8;
  if ( v8 )
  {
    memset_0(v8, 0, 0x250uLL);
    v10 = CWindowList::CWindowList(v9);
  }
  else
  {
    v10 = 0LL;
  }
  *((_QWORD *)this + 57) = v10;
  if ( !v10 )
  {
    dwCreationFlags = 303;
LABEL_57:
    v20 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA384, 1u, -2147024882, dwCreationFlags);
    return (unsigned int)v20;
  }
  v11 = (CContactManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                             WPF::g_pProcessHeap,
                             328LL);
  if ( v11 )
    v12 = CContactManager::CContactManager(v11);
  else
    v12 = 0LL;
  *((_QWORD *)this + 22) = v12;
  if ( !v12 )
  {
    dwCreationFlags = 306;
    goto LABEL_57;
  }
  v13 = (CTransitionVisualController *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 16LL))(
                                         WPF::g_pProcessHeap,
                                         192LL);
  if ( v13 )
    v14 = CTransitionVisualController::CTransitionVisualController(v13);
  else
    v14 = 0LL;
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29) = v14;
  if ( !v14 )
  {
    dwCreationFlags = 309;
    goto LABEL_57;
  }
  v15 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          88LL);
  v16 = v15;
  if ( v15 )
  {
    *(_QWORD *)v15 = &CAnimationScheduler::`vftable'{for `IAnimationListener'};
    *(_QWORD *)(v15 + 8) = &CAnimationScheduler::`vftable'{for `IAnimationClockEventListener'};
    *(_QWORD *)(v15 + 16) = 0LL;
    *(_QWORD *)(v15 + 24) = 0LL;
    *(_QWORD *)(v15 + 32) = 0LL;
    *(_DWORD *)(v15 + 40) = 0;
    *(_QWORD *)(v15 + 48) = 0LL;
    *(_QWORD *)(v15 + 56) = 0LL;
    *(_QWORD *)(v15 + 64) = 0LL;
    *(_DWORD *)(v15 + 72) = 0;
    *(_BYTE *)(v15 + 80) = 0;
  }
  else
  {
    v16 = 0LL;
  }
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28) = v16;
  if ( !v16 )
  {
    dwCreationFlags = 312;
    goto LABEL_57;
  }
  v17 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v17 )
  {
    *(_QWORD *)v17 = &CAnimationClockCoordinator::`vftable';
    InitializeCriticalSection((LPCRITICAL_SECTION)(v17 + 8));
    *(_QWORD *)(v17 + 48) = 0LL;
    *(_QWORD *)(v17 + 56) = 0LL;
    *(_QWORD *)(v17 + 64) = 0LL;
    *(_QWORD *)(v17 + 72) = 0LL;
    *(_DWORD *)(v17 + 80) = 0;
  }
  else
  {
    v17 = 0LL;
  }
  v18 = CDesktopManager::s_pDesktopManagerInstance;
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) = v17;
  if ( !v17 )
  {
    dwCreationFlags = 315;
    goto LABEL_57;
  }
  v19 = CAnimationClockCoordinator::SetEventCallback(
          (CAnimationClockCoordinator *)v17,
          (struct IAnimationClockEventListener *)((*((_QWORD *)v18 + 28) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v18 + 28) >> 64)));
  v20 = v19;
  if ( v19 < 0 )
  {
    dwCreationFlagsa = 318;
LABEL_67:
    v32 = v19;
LABEL_70:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA384, 1u, v32, dwCreationFlagsa);
    goto LABEL_50;
  }
  pvParam = 8;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) )
    CDesktopManager::SetWindowAnimation(v41 != 0);
  v19 = DwmRedirectionManagerInitialize(
          a3,
          *((struct IDwmRedirectionClient **)this + 57),
          (struct IDwmRedirectionManager **)this + 6);
  v20 = v19;
  if ( v19 < 0 )
  {
    dwCreationFlagsa = 334;
    goto LABEL_67;
  }
  v21 = (struct IDwmChannel **)((char *)this + 32);
  v6 = 1;
  Channel = MilConnection_CreateChannel(*((struct HMIL_CONNECTION__ **)this + 5), (struct IDwmChannel **)this + 4);
  v20 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 338;
    goto LABEL_69;
  }
  v7 = 1;
  Channel = (*(__int64 (__fastcall **)(struct IDwmChannel *, __int64))(*(_QWORD *)*v21 + 160LL))(*v21, 1LL);
  v20 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 342;
    goto LABEL_69;
  }
  v7 = 0;
  v23 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    128LL);
  v24 = v23;
  if ( v23 )
  {
    memset_0(v23, 0, 0x80uLL);
    *v24 = &CTextCache::`vftable';
    memset_0(v24 + 1, 0, 0x5CuLL);
    v24[13] = 0LL;
    v24[14] = 0LL;
    v24[15] = 0LL;
  }
  else
  {
    v24 = 0LL;
  }
  *((_QWORD *)this + 31) = v24;
  if ( v24 )
  {
    Channel = CTextCache::Init((CTextCache *)v24);
    v20 = Channel;
    if ( Channel < 0 )
    {
      dwCreationFlagsa = 351;
      goto LABEL_69;
    }
    v25 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            112LL);
    if ( v25 )
    {
      *(_QWORD *)v25 = &CIconicBitmapRegistry::`vftable';
      *(_QWORD *)(v25 + 16) = 0LL;
      *(_QWORD *)(v25 + 24) = 0LL;
      *(_QWORD *)(v25 + 32) = 0LL;
      *(_DWORD *)(v25 + 40) = 0;
      *(_QWORD *)(v25 + 48) = 0LL;
      *(_QWORD *)(v25 + 56) = 0LL;
      *(_QWORD *)(v25 + 64) = 0LL;
      *(_DWORD *)(v25 + 72) = 0;
      *(_QWORD *)(v25 + 96) = 0LL;
    }
    else
    {
      v25 = 0LL;
    }
    *((_QWORD *)this + 32) = v25;
    if ( v25 )
    {
      Channel = CIconicBitmapRegistry::Init((CIconicBitmapRegistry *)v25);
      v20 = Channel;
      if ( Channel < 0 )
      {
        dwCreationFlagsa = 355;
        goto LABEL_69;
      }
      v26 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              88LL);
      if ( v26 )
      {
        *(_QWORD *)v26 = &CImmersiveIconicBitmapRegistry::`vftable';
        *(_QWORD *)(v26 + 16) = 0LL;
        *(_QWORD *)(v26 + 24) = 0LL;
        *(_QWORD *)(v26 + 32) = 0LL;
        *(_DWORD *)(v26 + 40) = 0;
        *(_QWORD *)(v26 + 48) = 0LL;
        *(_QWORD *)(v26 + 56) = 0LL;
        *(_QWORD *)(v26 + 64) = 0LL;
        *(_DWORD *)(v26 + 72) = 0;
        *(_QWORD *)(v26 + 80) = 0LL;
      }
      else
      {
        v26 = 0LL;
      }
      *((_QWORD *)this + 33) = v26;
      if ( v26 )
      {
        Channel = CImmersiveIconicBitmapRegistry::Init((CImmersiveIconicBitmapRegistry *)v26);
        v20 = Channel;
        if ( Channel < 0 )
        {
          dwCreationFlagsa = 359;
          goto LABEL_69;
        }
        CDesktopManager::SetupDPIValues(this);
        *((_DWORD *)this + 124) = -1;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0d(v27, &UdwmStartup_Info, 1LL);
        Channel = WICCreateImagingFactory_Proxy(567LL, (char *)this + 272);
        v20 = Channel;
        if ( Channel < 0 )
        {
          dwCreationFlagsa = 368;
          goto LABEL_69;
        }
        Channel = CDesktopManager::UpdateSettings(this, 13);
        v20 = Channel;
        if ( Channel < 0 )
        {
          dwCreationFlagsa = 381;
          goto LABEL_69;
        }
        Channel = CLivePreview::Create(*v21, (struct CLivePreview **)this + 60);
        v20 = Channel;
        if ( Channel < 0 )
        {
          dwCreationFlagsa = 383;
          goto LABEL_69;
        }
        v28 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                440LL);
        if ( v28 )
        {
          v29 = *v21;
          *(_QWORD *)v28 = &CProjectionBorderManager::`vftable';
          *(_QWORD *)(v28 + 400) = 0LL;
          *(_QWORD *)(v28 + 408) = 0LL;
          *(_QWORD *)(v28 + 416) = 0LL;
          *(_DWORD *)(v28 + 424) = 0;
          *(_QWORD *)(v28 + 432) = v29;
        }
        else
        {
          v28 = 0LL;
        }
        *((_QWORD *)this + 61) = v28;
        if ( *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) )
        {
          Channel = DCompositionCreateDevice3(0LL, &GUID_e5416f03_7e37_415e_aacb_83cb988a6bb4, (char *)this + 200);
          v20 = Channel;
          if ( Channel < 0 )
          {
            dwCreationFlagsa = 388;
          }
          else
          {
            Channel = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4)
                                                        + 248LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 4));
            v20 = Channel;
            if ( Channel < 0 )
            {
              dwCreationFlagsa = 390;
            }
            else
            {
              Channel = CWindowList::CreateRootVisual(*((CWindowList **)this + 57));
              v20 = Channel;
              if ( Channel >= 0 )
              {
                SetLastError(0);
                EventW = CreateEventW(0LL, 1, 0, 0LL);
                if ( EventW )
                {
                  SetLastError(0);
                  Thread = CreateThread(0LL, 0LL, CDesktopManager::DwmEventThreadProc, EventW, 0, (LPDWORD)this + 156);
                  *((_QWORD *)this + 79) = Thread;
                  if ( Thread )
                  {
                    Handles[0] = EventW;
                    Handles[1] = Thread;
                    SetLastError(0);
                    if ( !WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) )
                    {
                      Channel = CDesktopManager::_InitializeWnf(this);
                      v20 = Channel;
                      if ( Channel >= 0 )
                      {
                        CDesktopManager::ReadProductType(this);
                        *((_BYTE *)this + 23) = 1;
LABEL_50:
                        if ( v20 >= 0 )
                          goto LABEL_51;
                        if ( v7 )
                        {
                          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 40LL))(*((_QWORD *)this + 4));
                          *((_QWORD *)this + 4) = 0LL;
                        }
                        if ( !v6 )
                          goto LABEL_51;
                        goto LABEL_106;
                      }
                      dwCreationFlagsa = 430;
                      goto LABEL_69;
                    }
                    LastError = GetLastError();
                    v20 = LastError;
                    if ( LastError > 0 )
                      v20 = (unsigned __int16)LastError | 0x80070000;
                    dwCreationFlagsa = 425;
                  }
                  else
                  {
                    v34 = GetLastError();
                    v20 = v34;
                    if ( v34 > 0 )
                      v20 = (unsigned __int16)v34 | 0x80070000;
                    dwCreationFlagsa = 409;
                  }
                }
                else
                {
                  v33 = GetLastError();
                  v20 = v33;
                  if ( v33 > 0 )
                    v20 = (unsigned __int16)v33 | 0x80070000;
                  dwCreationFlagsa = 400;
                }
                if ( v20 >= 0 )
                  v20 = -2003304445;
                v32 = v20;
                goto LABEL_70;
              }
              dwCreationFlagsa = 392;
            }
          }
LABEL_69:
          v32 = Channel;
          goto LABEL_70;
        }
        dwCreationFlagsb = 386;
      }
      else
      {
        dwCreationFlagsb = 358;
      }
    }
    else
    {
      dwCreationFlagsb = 354;
    }
  }
  else
  {
    dwCreationFlagsb = 350;
  }
  v20 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA384, 1u, -2147024882, dwCreationFlagsb);
LABEL_106:
  CDesktopManager::NotifyRedirectionShutdown(this);
  DwmRedirectionManagerShutdown();
LABEL_51:
  if ( EventW )
    CloseHandle(EventW);
  return (unsigned int)v20;
}
