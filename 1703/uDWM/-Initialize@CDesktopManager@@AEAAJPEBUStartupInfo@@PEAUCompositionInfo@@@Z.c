/*
 * XREFs of ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180043D10
 * Callers:
 *     ?Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z @ 0x18004A1F8 (-Create@CDesktopManager@@SAJPEBUStartupInfo@@PEAUCompositionInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180021FE8 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ??0CContactManager@@QEAA@XZ @ 0x180041120 (--0CContactManager@@QEAA@XZ.c)
 *     ?CreateRootVisual@CWindowList@@QEAAJXZ @ 0x18004217C (-CreateRootVisual@CWindowList@@QEAAJXZ.c)
 *     ??0CWindowList@@QEAA@XZ @ 0x1800423F0 (--0CWindowList@@QEAA@XZ.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x1800432A0 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?_InitializeWnf@CDesktopManager@@AEAAJXZ @ 0x1800433A0 (-_InitializeWnf@CDesktopManager@@AEAAJXZ.c)
 *     ?Create@CLivePreview@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180049AB0 (-Create@CLivePreview@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ @ 0x18004A050 (-Init@CImmersiveIconicBitmapRegistry@@QEAAJXZ.c)
 *     ??0CTransitionVisualController@@QEAA@XZ @ 0x18004A0E8 (--0CTransitionVisualController@@QEAA@XZ.c)
 *     ?Init@CIconicBitmapRegistry@@QEAAJXZ @ 0x18004A2A0 (-Init@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z @ 0x18004A390 (-SetEventCallback@CAnimationClockCoordinator@@QEAAJPEAUIAnimationClockEventListener@@@Z.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18004A6B8 (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?Init@CTextCache@@QEAAJXZ @ 0x18004A73C (-Init@CTextCache@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x180078A98 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 *     Template_q @ 0x18007FA50 (Template_q.c)
 */

__int64 __fastcall CDesktopManager::Initialize(
        CDesktopManager *this,
        const struct StartupInfo *a2,
        struct CompositionInfo *a3)
{
  HANDLE EventW; // rbp
  char v6; // r15
  CWindowList *v7; // rax
  CWindowList *v8; // rbx
  CWindowList *v9; // rax
  CContactManager *v10; // rax
  CContactManager *v11; // rax
  CTransitionVisualController *v12; // rax
  CTransitionVisualController *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  CDesktopManager *v17; // rax
  int v18; // eax
  signed int v19; // ebx
  struct IDwmChannel **v20; // r14
  int Channel; // eax
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  struct IDwmChannel *v28; // rcx
  HANDLE Thread; // rax
  int v31; // r9d
  signed int LastError; // eax
  signed int v33; // eax
  signed int v34; // eax
  DWORD dwCreationFlags; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsa; // [rsp+20h] [rbp-48h]
  DWORD dwCreationFlagsb; // [rsp+20h] [rbp-48h]
  HANDLE Handles[2]; // [rsp+30h] [rbp-38h] BYREF
  int pvParam; // [rsp+70h] [rbp+8h] BYREF
  int v40; // [rsp+74h] [rbp+Ch]

  *((_BYTE *)this + 19) = 0;
  *((_BYTE *)this + 23) = 0;
  EventW = 0LL;
  v6 = 0;
  *((_QWORD *)this + 7) = *(_QWORD *)a2;
  *((_QWORD *)this + 5) = *(_QWORD *)a3;
  v7 = (CWindowList *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        592LL);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7, 0, 0x250uLL);
    v9 = CWindowList::CWindowList(v8);
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 51) = v9;
  if ( !v9 )
  {
    dwCreationFlags = 295;
LABEL_56:
    v19 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1800AB3E4, 1u, -2147024882, dwCreationFlags);
    return (unsigned int)v19;
  }
  v10 = (CContactManager *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 16LL))(
                             WPF::g_pProcessHeap,
                             328LL);
  if ( v10 )
    v11 = CContactManager::CContactManager(v10);
  else
    v11 = 0LL;
  *((_QWORD *)this + 18) = v11;
  if ( !v11 )
  {
    dwCreationFlags = 298;
    goto LABEL_56;
  }
  v12 = (CTransitionVisualController *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                  + 16LL))(
                                         WPF::g_pProcessHeap,
                                         192LL);
  if ( v12 )
    v13 = CTransitionVisualController::CTransitionVisualController(v12);
  else
    v13 = 0LL;
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) = v13;
  if ( !v13 )
  {
    dwCreationFlags = 301;
    goto LABEL_56;
  }
  v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          88LL);
  v15 = v14;
  if ( v14 )
  {
    *(_QWORD *)v14 = &CAnimationScheduler::`vftable'{for `IAnimationListener'};
    *(_QWORD *)(v14 + 8) = &CAnimationScheduler::`vftable'{for `IAnimationClockEventListener'};
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_QWORD *)(v14 + 24) = 0LL;
    *(_QWORD *)(v14 + 32) = 0LL;
    *(_DWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 48) = 0LL;
    *(_QWORD *)(v14 + 56) = 0LL;
    *(_QWORD *)(v14 + 64) = 0LL;
    *(_DWORD *)(v14 + 72) = 0;
    *(_BYTE *)(v14 + 80) = 0;
  }
  else
  {
    v15 = 0LL;
  }
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) = v15;
  if ( !v15 )
  {
    dwCreationFlags = 304;
    goto LABEL_56;
  }
  v16 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v16 )
  {
    *(_QWORD *)v16 = &CAnimationClockCoordinator::`vftable';
    InitializeCriticalSection((LPCRITICAL_SECTION)(v16 + 8));
    *(_QWORD *)(v16 + 48) = 0LL;
    *(_QWORD *)(v16 + 56) = 0LL;
    *(_QWORD *)(v16 + 64) = 0LL;
    *(_QWORD *)(v16 + 72) = 0LL;
    *(_DWORD *)(v16 + 80) = 0;
  }
  else
  {
    v16 = 0LL;
  }
  v17 = CDesktopManager::s_pDesktopManagerInstance;
  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 19) = v16;
  if ( !v16 )
  {
    dwCreationFlags = 307;
    goto LABEL_56;
  }
  v18 = CAnimationClockCoordinator::SetEventCallback(
          (CAnimationClockCoordinator *)v16,
          (struct IAnimationClockEventListener *)((*((_QWORD *)v17 + 22) + 8LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)v17 + 22) >> 64)));
  v19 = v18;
  if ( v18 < 0 )
  {
    dwCreationFlagsa = 310;
LABEL_66:
    v31 = v18;
LABEL_69:
    MilInstrumentationCheckHR(0x14u, &dword_1800AB3E4, 1u, v31, dwCreationFlagsa);
    goto LABEL_49;
  }
  pvParam = 8;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) )
    CDesktopManager::SetWindowAnimation(v40 != 0);
  v18 = DwmRedirectionManagerInitialize(
          a3,
          *((struct IDwmRedirectionClient **)this + 51),
          (struct IDwmRedirectionManager **)this + 6);
  v19 = v18;
  if ( v18 < 0 )
  {
    dwCreationFlagsa = 326;
    goto LABEL_66;
  }
  v20 = (struct IDwmChannel **)((char *)this + 32);
  v6 = 1;
  Channel = MilConnection_CreateChannel(*((struct HMIL_CONNECTION__ **)this + 5), (struct IDwmChannel **)this + 4);
  v19 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 330;
LABEL_68:
    v31 = Channel;
    goto LABEL_69;
  }
  v22 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    128LL);
  v23 = v22;
  if ( v22 )
  {
    memset_0(v22, 0, 0x80uLL);
    *v23 = &CTextCache::`vftable';
    memset_0(v23 + 1, 0, 0x5CuLL);
    v23[13] = 0LL;
    v23[14] = 0LL;
    v23[15] = 0LL;
  }
  else
  {
    v23 = 0LL;
  }
  *((_QWORD *)this + 25) = v23;
  if ( !v23 )
  {
    dwCreationFlagsb = 339;
LABEL_73:
    v19 = -2147024882;
    MilInstrumentationCheckHR(0x14u, &dword_1800AB3E4, 1u, -2147024882, dwCreationFlagsb);
LABEL_102:
    CDesktopManager::NotifyRedirectionShutdown(this);
    DwmRedirectionManagerShutdown();
    goto LABEL_50;
  }
  Channel = CTextCache::Init((CTextCache *)v23);
  v19 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 340;
    goto LABEL_68;
  }
  v24 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          112LL);
  if ( v24 )
  {
    *(_QWORD *)v24 = &CIconicBitmapRegistry::`vftable';
    *(_QWORD *)(v24 + 16) = 0LL;
    *(_QWORD *)(v24 + 24) = 0LL;
    *(_QWORD *)(v24 + 32) = 0LL;
    *(_DWORD *)(v24 + 40) = 0;
    *(_QWORD *)(v24 + 48) = 0LL;
    *(_QWORD *)(v24 + 56) = 0LL;
    *(_QWORD *)(v24 + 64) = 0LL;
    *(_DWORD *)(v24 + 72) = 0;
    *(_QWORD *)(v24 + 96) = 0LL;
  }
  else
  {
    v24 = 0LL;
  }
  *((_QWORD *)this + 26) = v24;
  if ( !v24 )
  {
    dwCreationFlagsb = 343;
    goto LABEL_73;
  }
  Channel = CIconicBitmapRegistry::Init((CIconicBitmapRegistry *)v24);
  v19 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 344;
    goto LABEL_68;
  }
  v25 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          88LL);
  if ( v25 )
  {
    *(_QWORD *)v25 = &CImmersiveIconicBitmapRegistry::`vftable';
    *(_QWORD *)(v25 + 16) = 0LL;
    *(_QWORD *)(v25 + 24) = 0LL;
    *(_QWORD *)(v25 + 32) = 0LL;
    *(_DWORD *)(v25 + 40) = 0;
    *(_QWORD *)(v25 + 48) = 0LL;
    *(_QWORD *)(v25 + 56) = 0LL;
    *(_QWORD *)(v25 + 64) = 0LL;
    *(_DWORD *)(v25 + 72) = 0;
    *(_QWORD *)(v25 + 80) = 0LL;
  }
  else
  {
    v25 = 0LL;
  }
  *((_QWORD *)this + 27) = v25;
  if ( !v25 )
  {
    dwCreationFlagsb = 347;
    goto LABEL_73;
  }
  Channel = CImmersiveIconicBitmapRegistry::Init((CImmersiveIconicBitmapRegistry *)v25);
  v19 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 348;
    goto LABEL_68;
  }
  CDesktopManager::SetupDPIValues(this);
  *((_DWORD *)this + 112) = -1;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q(v26, &UdwmStartup_Info, 1LL);
  Channel = WICCreateImagingFactory_Proxy(567LL, (char *)this + 224);
  v19 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 357;
    goto LABEL_68;
  }
  Channel = CDesktopManager::UpdateSettings(this, 13);
  v19 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 370;
    goto LABEL_68;
  }
  Channel = CLivePreview::Create(*v20, (struct CLivePreview **)this + 54);
  v19 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 372;
    goto LABEL_68;
  }
  v27 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          440LL);
  if ( v27 )
  {
    v28 = *v20;
    *(_QWORD *)v27 = &CProjectionBorderManager::`vftable';
    *(_QWORD *)(v27 + 400) = 0LL;
    *(_QWORD *)(v27 + 408) = 0LL;
    *(_QWORD *)(v27 + 416) = 0LL;
    *(_DWORD *)(v27 + 424) = 0;
    *(_QWORD *)(v27 + 432) = v28;
  }
  else
  {
    v27 = 0LL;
  }
  *((_QWORD *)this + 55) = v27;
  if ( !*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 55) )
  {
    dwCreationFlagsb = 375;
    goto LABEL_73;
  }
  Channel = DCompositionCreateDevice3(0LL, &GUID_0ab6bdb3_4d49_46a8_b90b_1a86b0cd4e41, (char *)this + 168);
  v19 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 377;
    goto LABEL_68;
  }
  Channel = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 240LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
  v19 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 379;
    goto LABEL_68;
  }
  Channel = CWindowList::CreateRootVisual(*((struct CVisual ***)this + 51));
  v19 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 383;
    goto LABEL_68;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  if ( !EventW )
  {
    LastError = GetLastError();
    v19 = LastError;
    if ( LastError > 0 )
      v19 = (unsigned __int16)LastError | 0x80070000;
    dwCreationFlagsa = 391;
    goto LABEL_92;
  }
  SetLastError(0);
  Thread = CreateThread(
             0LL,
             0LL,
             (LPTHREAD_START_ROUTINE)CDesktopManager::DwmEventThreadProc,
             EventW,
             0,
             (LPDWORD)this + 144);
  *((_QWORD *)this + 73) = Thread;
  if ( !Thread )
  {
    v33 = GetLastError();
    v19 = v33;
    if ( v33 > 0 )
      v19 = (unsigned __int16)v33 | 0x80070000;
    dwCreationFlagsa = 400;
    goto LABEL_92;
  }
  Handles[0] = EventW;
  Handles[1] = Thread;
  SetLastError(0);
  if ( WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) )
  {
    v34 = GetLastError();
    v19 = v34;
    if ( v34 > 0 )
      v19 = (unsigned __int16)v34 | 0x80070000;
    dwCreationFlagsa = 416;
LABEL_92:
    if ( v19 >= 0 )
      v19 = -2003304445;
    v31 = v19;
    goto LABEL_69;
  }
  Channel = CDesktopManager::_InitializeWnf(this);
  v19 = Channel;
  if ( Channel < 0 )
  {
    dwCreationFlagsa = 421;
    goto LABEL_68;
  }
  *((_BYTE *)this + 23) = 1;
LABEL_49:
  if ( v19 < 0 && v6 )
    goto LABEL_102;
LABEL_50:
  if ( EventW )
    CloseHandle(EventW);
  return (unsigned int)v19;
}
