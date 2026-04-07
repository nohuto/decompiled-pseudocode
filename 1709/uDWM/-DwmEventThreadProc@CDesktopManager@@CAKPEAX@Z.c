/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003DF00
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180017240 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ @ 0x180021D90 (-OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180027F90 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x18002DAB4 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x18002DFB0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180034984 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18003B6C0 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x18003DDB8 (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x18003F1A0 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x18003F540 (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     memcpy_0 @ 0x18004675A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18006CEDC (McTemplateU0.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x18006DE30 (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x18006DF20 (-Cleanup@CWaitForService@@QEAAXXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x18006E458 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x18006EF10 (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x180070C70 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x18008CEF0 (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::DwmEventThreadProc(PVOID Parameter)
{
  LARGE_INTEGER v1; // rbx
  HANDLE v3; // rsi
  bool v4; // r13
  int v5; // r14d
  __int64 (*v6)(HWND, unsigned int, unsigned __int64, __int64); // rdx
  const unsigned __int16 *v7; // rcx
  int v8; // eax
  signed int v9; // r15d
  HRESULT v10; // eax
  int Instance; // eax
  const unsigned __int16 *v12; // rdx
  bool v13; // si
  DWORD v14; // r14d
  CDesktopManager *v15; // rdi
  __int64 v16; // rsi
  bool v17; // si
  bool v18; // zf
  char v19; // al
  DWORD v20; // r8d
  bool v21; // di
  char v22; // r13
  const HANDLE *v23; // rdx
  DWORD v24; // eax
  double v25; // xmm6_8
  CDesktopManager *v26; // r14
  unsigned int v27; // esi
  const void *v28; // r9
  int v29; // edi
  CTopLevelWindow3D *v30; // rcx
  __int64 (__fastcall *v31)(CTopLevelWindow3D *); // rax
  int v32; // eax
  __int64 v33; // rdi
  bool v34; // di
  int updated; // eax
  CAnimationEngine *v36; // rcx
  unsigned int v37; // edx
  signed int LastError; // eax
  int v39; // r9d
  signed int v40; // eax
  signed int v41; // eax
  int v42; // eax
  int v43; // eax
  CDesktopManager *v44; // rcx
  CDesktopManager *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  CAnimationEngine *v48; // rcx
  CAnimationEngine *v49; // rcx
  unsigned int v51; // [rsp+28h] [rbp-E0h]
  unsigned int v52; // [rsp+28h] [rbp-E0h]
  bool v53[8]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v55[2]; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v57; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER Frequency; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE v59; // [rsp+68h] [rbp-A0h] BYREF
  tagMSG Msg; // [rsp+70h] [rbp-98h] BYREF
  _BYTE *v61; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE *v62; // [rsp+B0h] [rbp-58h]
  int v63; // [rsp+B8h] [rbp-50h]
  __int64 v64; // [rsp+BCh] [rbp-4Ch]
  _BYTE v65[80]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v66[12]; // [rsp+118h] [rbp+10h] BYREF

  v1.QuadPart = 0LL;
  v3 = 0LL;
  v4 = 0;
  v53[0] = 0;
  v5 = -2147221008;
  hObject = 0LL;
  Frequency.QuadPart = 0LL;
  v53[1] = 0;
  v53[3] = 0;
  *(_WORD *)&v53[4] = 0;
  v66[0] = 0LL;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 156) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v51 = 1907;
    goto LABEL_91;
  }
  v8 = CDesktopManager::RegisterWindowClass(v7, v6, (unsigned __int16 *)&v53[4]);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x775u);
    goto LABEL_129;
  }
  v10 = CoInitializeEx(0LL, 0);
  v55[1] = v10;
  v5 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x77Cu);
  v9 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x77Du);
    goto LABEL_129;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 24);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v51 = 1919;
    v39 = Instance;
LABEL_95:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, v51);
    goto LABEL_129;
  }
  if ( (int)CDesktopManager::InitializeComObjects((LPVOID *)CDesktopManager::s_pDesktopManagerInstance) < 0 )
    CWaitForService::WaitFor((CWaitForService *)v66, v12);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v40 = GetLastError();
    v9 = v40;
    if ( v40 > 0 )
      v9 = (unsigned __int16)v40 | 0x80070000;
    v51 = 1931;
LABEL_91:
    if ( v9 >= 0 )
      v9 = -2003304445;
    v39 = v9;
    goto LABEL_95;
  }
  v55[0] = 0;
  v53[3] = 1;
  while ( 1 )
  {
    if ( !v3
      && (int)MilCompositionEngine_GetComposedEventId(
                *((struct HMIL_CONNECTION__ **)CDesktopManager::s_pDesktopManagerInstance + 5),
                v55) >= 0 )
    {
      OpenComposedEvent(v55[0], v37, &hObject);
      v3 = hObject;
    }
    memset_0(&Msg, 0, sizeof(Msg));
    v59 = v3;
    v13 = 0;
    v14 = 1;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v15 = CDesktopManager::s_pDesktopManagerInstance;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      v16 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v17 = !*(_DWORD *)(v16 + 64) || !*(_BYTE *)(v16 + 120);
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v13 = !v17 || (CDesktopManager::s_fTimelineDirty || *((_DWORD *)v15 + 142)) && !*((_BYTE *)v15 + 18);
      v18 = hObject == 0LL;
      *((_BYTE *)v15 + 17) = v13;
      v53[1] = !v18 && v13 | *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22);
      if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAllAnimationFinished_Info) )
      {
        if ( v13 )
        {
          CDesktopManager::s_fFireAnimationFinished = 1;
        }
        else if ( CDesktopManager::s_fFireAnimationFinished == 1 )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAllAnimationFinished_Info);
          CDesktopManager::s_fFireAnimationFinished = 0;
        }
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v53[1] && v4 )
    {
      v19 = 1;
LABEL_70:
      v21 = 0;
      v14 = 0;
      v53[0] = 0;
      v20 = 64;
      goto LABEL_28;
    }
    v19 = 0;
    v20 = 64;
    if ( !v53[1] )
      goto LABEL_70;
    v21 = v53[0];
    if ( !v53[0] )
    {
      v1.QuadPart = -1LL;
      v53[0] = 1;
      v21 = 1;
      v20 = 0;
    }
LABEL_28:
    v22 = 0;
    if ( v19 )
    {
      v22 = v13;
      goto LABEL_61;
    }
    if ( !v21 )
      v20 = -1;
    v23 = &v59;
    if ( !v14 )
      v23 = 0LL;
    v24 = MsgWaitForMultipleObjectsEx(v14, v23, v20, 0x1CFFu, 6u);
    if ( v24 == v14 )
      break;
    if ( !v21 || v24 && v24 != 258 )
      goto LABEL_61;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v9 = 0;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      PerformanceCount.QuadPart = 0LL;
      SetLastError(0);
      if ( QueryPerformanceCounter(&PerformanceCount) )
      {
        if ( v1.QuadPart == -1 )
          v1 = PerformanceCount;
        v25 = (double)(PerformanceCount.LowPart - v1.LowPart) / (double)(int)Frequency.LowPart;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAnimation_Info);
        v26 = CDesktopManager::s_pDesktopManagerInstance;
        CDesktopManager::AdvanceTimelines(CDesktopManager::s_pDesktopManagerInstance, v25);
        v27 = *((_DWORD *)v26 + 142);
        if ( v27 )
        {
          v28 = (const void *)*((_QWORD *)v26 + 68);
          v61 = v65;
          v29 = 0;
          v63 = 10;
          v62 = v65;
          v22 = 1;
          v64 = 10LL;
          if ( v27 <= 0xA )
          {
            memcpy_0(v65, v28, 8LL * v27);
            HIDWORD(v64) = v27;
            goto LABEL_45;
          }
          v42 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v61, 8u, v27, v28);
          v9 = v42;
          if ( v42 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0xC0u);
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x683u);
            goto LABEL_118;
          }
          v27 = HIDWORD(v64);
LABEL_45:
          if ( v27 )
          {
            while ( 1 )
            {
              v30 = *(CTopLevelWindow3D **)&v61[8 * v29];
              v31 = *(__int64 (__fastcall **)(CTopLevelWindow3D *))(*(_QWORD *)v30 + 128LL);
              v32 = v31 == CTopLevelWindow3D::OnGlobalTimeUpdated
                  ? CTopLevelWindow3D::OnGlobalTimeUpdated(v30)
                  : ((__int64 (*)(void))v31)();
              v9 = v32;
              if ( v32 < 0 )
                break;
              if ( (unsigned int)++v29 >= HIDWORD(v64) )
                goto LABEL_50;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x687u);
LABEL_118:
            DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v61);
LABEL_53:
            if ( v9 >= 0 )
              goto LABEL_54;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x69Eu);
            goto LABEL_58;
          }
LABEL_50:
          if ( v61 != v62 )
          {
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
            v61 = 0LL;
          }
        }
        if ( !*((_BYTE *)v26 + 22) )
          goto LABEL_53;
        v43 = CIconicBitmapRegistry::ProcessTick(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                 + 32));
        v9 = v43;
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x68Du);
          goto LABEL_53;
        }
LABEL_54:
        v33 = *((_QWORD *)v26 + 24);
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v34 = !*(_DWORD *)(v33 + 64) || !*(_BYTE *)(v33 + 120);
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !v34 )
        {
          v36 = (CAnimationEngine *)*((_QWORD *)v26 + 24);
          v53[2] = 0;
          CAnimationEngine::OnTick(v36, *((double *)CDesktopManager::s_pDesktopManagerInstance + 35), &v53[2]);
          v22 |= v53[2];
        }
LABEL_58:
        if ( v9 >= 0 )
        {
          v1 = PerformanceCount;
          goto LABEL_60;
        }
        v52 = 1736;
      }
      else
      {
        v41 = GetLastError();
        v9 = v41;
        if ( v41 > 0 )
          v9 = (unsigned __int16)v41 | 0x80070000;
        v52 = 1726;
        if ( v9 >= 0 )
          v9 = -2003304445;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v52);
    }
LABEL_60:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x805u);
      goto LABEL_126;
    }
LABEL_61:
    if ( Msg.message == 18 )
      goto LABEL_126;
    v18 = v22 == 0;
    v4 = v53[0];
    if ( !v18 )
    {
      v57 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( CDesktopManager::s_pDesktopManagerInstance )
      {
        updated = CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57));
        v9 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x817u);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v57);
          goto LABEL_126;
        }
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v4 = v53[0];
    }
    v3 = hObject;
  }
  if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
    goto LABEL_61;
  while ( Msg.message != 18 )
  {
    DispatchMessageW(&Msg);
    if ( !Msg.hwnd )
      CDesktopManager::HandleThreadMessage(Msg.message, (HWND)Msg.wParam, Msg.lParam);
    if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      goto LABEL_61;
  }
LABEL_126:
  if ( hObject )
    CloseHandle(hObject);
  v5 = v55[1];
LABEL_129:
  CWaitForService::Cleanup((CWaitForService *)v66);
  if ( v53[3] )
  {
    v57 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      CDesktopManager::EnableLivePreviewInputHooks(0, 0);
      if ( *(_WORD *)&v53[4] )
        UnregisterClassW((LPCWSTR)*(unsigned __int16 *)&v53[4], g_hInstance);
      CDesktopManager::AbandonActiveAnimations(v44);
      v45 = CDesktopManager::s_pDesktopManagerInstance;
      v46 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 36);
      if ( v46 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
        v45 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 36) = 0LL;
      }
      v47 = *((_QWORD *)v45 + 37);
      if ( v47 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
        v45 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 37) = 0LL;
      }
      v48 = (CAnimationEngine *)*((_QWORD *)v45 + 24);
      if ( v48 )
      {
        CAnimationEngine::Cleanup(v48);
        v45 = CDesktopManager::s_pDesktopManagerInstance;
      }
      v49 = (CAnimationEngine *)*((_QWORD *)v45 + 24);
      if ( v49 )
      {
        CAnimationEngine::Release(v49);
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) = 0LL;
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v57);
  }
  if ( v5 >= 0 )
    CoUninitialize();
  if ( v9 >= 0 )
    return (unsigned int)v9;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003302654, 0x84Au);
  return 2291664642LL;
}
