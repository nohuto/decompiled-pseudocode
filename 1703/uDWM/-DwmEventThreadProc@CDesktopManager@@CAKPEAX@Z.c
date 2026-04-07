/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800405E0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18001024C (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180012634 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180012B30 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180022580 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ @ 0x18002D860 (-OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002EFC0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x18004051C (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x180040BF0 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180041EBC (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x1800434BC (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004DE8A (memcpy_0.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x1800777AC (TemplateEventDescriptor.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x1800783D0 (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x1800784C0 (-Cleanup@CWaitForService@@QEAAXXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800789F8 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x180078F7C (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18007A9FC (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800912A0 (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
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
  __int64 v19; // rcx
  char v20; // al
  DWORD v21; // r8d
  bool v22; // di
  char v23; // r13
  const HANDLE *v24; // rdx
  DWORD v25; // eax
  __int64 v26; // rcx
  double v27; // xmm6_8
  CDesktopManager *v28; // r14
  unsigned int v29; // esi
  const void *v30; // r9
  int v31; // edi
  CTopLevelWindow3D *v32; // rcx
  __int64 (__fastcall *v33)(CTopLevelWindow3D *); // rax
  int v34; // eax
  __int64 v35; // rdi
  bool v36; // di
  int updated; // eax
  CAnimationEngine *v38; // rcx
  unsigned int v39; // edx
  signed int LastError; // eax
  int v41; // r9d
  signed int v42; // eax
  signed int v43; // eax
  int v44; // eax
  int v45; // eax
  CDesktopManager *v46; // rcx
  CDesktopManager *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  CAnimationEngine *v50; // rcx
  CAnimationEngine *v51; // rcx
  unsigned int v53; // [rsp+28h] [rbp-E0h]
  unsigned int v54; // [rsp+28h] [rbp-E0h]
  bool v55[8]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v57[2]; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v59; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER Frequency; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE v61; // [rsp+68h] [rbp-A0h] BYREF
  tagMSG Msg; // [rsp+70h] [rbp-98h] BYREF
  _BYTE *v63; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE *v64; // [rsp+B0h] [rbp-58h]
  int v65; // [rsp+B8h] [rbp-50h]
  __int64 v66; // [rsp+BCh] [rbp-4Ch]
  _BYTE v67[80]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v68[12]; // [rsp+118h] [rbp+10h] BYREF

  v1.QuadPart = 0LL;
  v3 = 0LL;
  v4 = 0;
  v55[0] = 0;
  v5 = -2147221008;
  hObject = 0LL;
  Frequency.QuadPart = 0LL;
  v55[1] = 0;
  v55[3] = 0;
  *(_WORD *)&v55[4] = 0;
  v68[0] = 0LL;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 144) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    v9 = LastError;
    if ( LastError > 0 )
      v9 = (unsigned __int16)LastError | 0x80070000;
    v53 = 1734;
    goto LABEL_92;
  }
  v8 = CDesktopManager::RegisterWindowClass(v7, v6, (unsigned __int16 *)&v55[4]);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x6C8u);
    goto LABEL_129;
  }
  v10 = CoInitializeEx(0LL, 0);
  v57[1] = v10;
  v5 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x6CFu);
  v9 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x6D0u);
    goto LABEL_129;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 20);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v53 = 1746;
    v41 = Instance;
LABEL_96:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, v53);
    goto LABEL_129;
  }
  if ( (int)CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance) < 0 )
    CWaitForService::WaitFor((CWaitForService *)v68, v12);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v42 = GetLastError();
    v9 = v42;
    if ( v42 > 0 )
      v9 = (unsigned __int16)v42 | 0x80070000;
    v53 = 1758;
LABEL_92:
    if ( v9 >= 0 )
      v9 = -2003304445;
    v41 = v9;
    goto LABEL_96;
  }
  v57[0] = 0;
  v55[3] = 1;
  while ( 1 )
  {
    if ( !v3
      && (int)MilCompositionEngine_GetComposedEventId(
                *((struct HMIL_CONNECTION__ **)CDesktopManager::s_pDesktopManagerInstance + 5),
                v57) >= 0 )
    {
      OpenComposedEvent(v57[0], v39, &hObject);
      v3 = hObject;
    }
    memset_0(&Msg, 0, sizeof(Msg));
    v61 = v3;
    v13 = 0;
    v14 = 1;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v15 = CDesktopManager::s_pDesktopManagerInstance;
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      v16 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v17 = !*(_DWORD *)(v16 + 64) || !*(_BYTE *)(v16 + 120);
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v13 = !v17 || (CDesktopManager::s_fTimelineDirty || *((_DWORD *)v15 + 130)) && !*((_BYTE *)v15 + 18);
      v18 = hObject == 0LL;
      *((_BYTE *)v15 + 17) = v13;
      v55[1] = !v18 && v13 | *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22);
      if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_UdwmHandle, &UdwmAllAnimationFinished_Info) )
      {
        if ( v13 )
        {
          CDesktopManager::s_fFireAnimationFinished = 1;
        }
        else if ( CDesktopManager::s_fFireAnimationFinished == 1 )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            TemplateEventDescriptor(v19, &UdwmAllAnimationFinished_Info);
          CDesktopManager::s_fFireAnimationFinished = 0;
        }
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v55[1] && v4 )
    {
      v20 = 1;
      v21 = 64;
LABEL_70:
      v22 = 0;
      v14 = 0;
      v55[0] = 0;
      goto LABEL_28;
    }
    v20 = 0;
    v21 = 64;
    if ( !v55[1] )
      goto LABEL_70;
    v22 = v55[0];
    if ( !v55[0] )
    {
      v1.QuadPart = -1LL;
      v55[0] = 1;
      v22 = 1;
      v21 = 0;
    }
LABEL_28:
    v23 = 0;
    if ( v20 )
    {
      v23 = v13;
      goto LABEL_61;
    }
    if ( !v22 )
      v21 = -1;
    v24 = &v61;
    if ( !v14 )
      v24 = 0LL;
    v25 = MsgWaitForMultipleObjectsEx(v14, v24, v21, 0x1CFFu, 6u);
    if ( v25 == v14 )
      break;
    if ( !v22 || v25 && v25 != 258 )
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
        v27 = (double)(PerformanceCount.LowPart - v1.LowPart) / (double)(int)Frequency.LowPart;
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          TemplateEventDescriptor(v26, &UdwmAnimation_Info);
        v28 = CDesktopManager::s_pDesktopManagerInstance;
        CDesktopManager::AdvanceTimelines(CDesktopManager::s_pDesktopManagerInstance, v27);
        v29 = *((_DWORD *)v28 + 130);
        if ( v29 )
        {
          v30 = (const void *)*((_QWORD *)v28 + 62);
          v63 = v67;
          v31 = 0;
          v65 = 10;
          v64 = v67;
          v23 = 1;
          v66 = 10LL;
          if ( v29 <= 0xA )
          {
            memcpy_0(v67, v30, 8LL * v29);
            HIDWORD(v66) = v29;
            goto LABEL_45;
          }
          v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v63, 8u, v29, v30);
          v9 = v44;
          if ( v44 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0xC0u);
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5D6u);
            goto LABEL_119;
          }
          v29 = HIDWORD(v66);
LABEL_45:
          if ( v29 )
          {
            while ( 1 )
            {
              v32 = *(CTopLevelWindow3D **)&v63[8 * v31];
              v33 = *(__int64 (__fastcall **)(CTopLevelWindow3D *))(*(_QWORD *)v32 + 128LL);
              v34 = v33 == CTopLevelWindow3D::OnGlobalTimeUpdated
                  ? CTopLevelWindow3D::OnGlobalTimeUpdated(v32)
                  : ((__int64 (*)(void))v33)();
              v9 = v34;
              if ( v34 < 0 )
                break;
              if ( (unsigned int)++v31 >= HIDWORD(v66) )
                goto LABEL_50;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x5DAu);
LABEL_119:
            DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v63);
LABEL_53:
            if ( v9 >= 0 )
              goto LABEL_54;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5F1u);
            goto LABEL_58;
          }
LABEL_50:
          if ( v63 != v64 )
          {
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
            v63 = 0LL;
          }
        }
        if ( !*((_BYTE *)v28 + 22) )
          goto LABEL_53;
        v45 = CIconicBitmapRegistry::ProcessTick(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                 + 26));
        v9 = v45;
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x5E0u);
          goto LABEL_53;
        }
LABEL_54:
        v35 = *((_QWORD *)v28 + 20);
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v36 = !*(_DWORD *)(v35 + 64) || !*(_BYTE *)(v35 + 120);
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        if ( !v36 )
        {
          v38 = (CAnimationEngine *)*((_QWORD *)v28 + 20);
          v55[2] = 0;
          CAnimationEngine::OnTick(v38, *((double *)CDesktopManager::s_pDesktopManagerInstance + 29), &v55[2]);
          v23 |= v55[2];
        }
LABEL_58:
        if ( v9 >= 0 )
        {
          v1 = PerformanceCount;
          goto LABEL_60;
        }
        v54 = 1563;
      }
      else
      {
        v43 = GetLastError();
        v9 = v43;
        if ( v43 > 0 )
          v9 = (unsigned __int16)v43 | 0x80070000;
        v54 = 1553;
        if ( v9 >= 0 )
          v9 = -2003304445;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v54);
    }
LABEL_60:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x758u);
      goto LABEL_126;
    }
LABEL_61:
    if ( Msg.message == 18 )
      goto LABEL_126;
    v18 = v23 == 0;
    v4 = v55[0];
    if ( !v18 )
    {
      v59 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( CDesktopManager::s_pDesktopManagerInstance )
      {
        updated = CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51));
        v9 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x76Au);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v59);
          goto LABEL_126;
        }
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v4 = v55[0];
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
  v5 = v57[1];
LABEL_129:
  CWaitForService::Cleanup((CWaitForService *)v68);
  if ( v55[3] )
  {
    v59 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      CDesktopManager::EnableLivePreviewInputHooks(0, 0);
      if ( *(_WORD *)&v55[4] )
        UnregisterClassW((LPCWSTR)*(unsigned __int16 *)&v55[4], g_hInstance);
      CDesktopManager::AbandonActiveAnimations(v46);
      v47 = CDesktopManager::s_pDesktopManagerInstance;
      v48 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
      if ( v48 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
        v47 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) = 0LL;
      }
      v49 = *((_QWORD *)v47 + 31);
      if ( v49 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
        v47 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 31) = 0LL;
      }
      v50 = (CAnimationEngine *)*((_QWORD *)v47 + 20);
      if ( v50 )
      {
        CAnimationEngine::Cleanup(v50);
        v47 = CDesktopManager::s_pDesktopManagerInstance;
      }
      v51 = (CAnimationEngine *)*((_QWORD *)v47 + 20);
      if ( v51 )
      {
        CAnimationEngine::Release(v51);
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20) = 0LL;
      }
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v59);
  }
  if ( v5 >= 0 )
    CoUninitialize();
  if ( v9 >= 0 )
    return (unsigned int)v9;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003302654, 0x79Du);
  return 2291664642LL;
}
