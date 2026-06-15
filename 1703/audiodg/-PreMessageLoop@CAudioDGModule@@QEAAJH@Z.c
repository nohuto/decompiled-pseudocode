/*
 * XREFs of ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x1400031A8
 * Callers:
 *     wWinMain @ 0x140001340 (wWinMain.c)
 * Callees:
 *     ?InitializeCpuManager@@YAJXZ @ 0x14000162C (-InitializeCpuManager@@YAJXZ.c)
 *     ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x140002DF4 (-InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z.c)
 *     ?AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z @ 0x140016CE8 (-AtlComModuleRegisterClassObjects@ATL@@YAJPEAU_ATL_COM_MODULE70@1@KK@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x1400303B4 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 *     WPP_SF_q @ 0x14003651C (WPP_SF_q.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDGModule::PreMessageLoop(CAudioDGModule *this)
{
  SC_HANDLE v1; // r14
  SC_HANDLE v2; // r15
  int v4; // ebx
  HANDLE EventW; // rax
  HANDLE v6; // rax
  bool v7; // cc
  SC_HANDLE v8; // rax
  DWORD v9; // r8d
  HANDLE v10; // rax
  CAudioDGModule *v11; // rcx
  LSTATUS ValueW; // eax
  unsigned int v13; // edx
  unsigned int v14; // r8d
  unsigned __int64 v15; // rcx
  int v16; // eax
  HRESULT v17; // edi
  void *v18; // rcx
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  signed int LastError; // eax
  signed int v23; // eax
  signed int v24; // eax
  signed int v25; // eax
  __int64 *v26; // rbx
  HRESULT v27; // eax
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  struct ATL::_ATL_COM_MODULE70 *pvData; // [rsp+40h] [rbp-29h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-21h] BYREF
  DWORD pdwType; // [rsp+50h] [rbp-19h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-15h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-11h] BYREF
  __int64 v35; // [rsp+60h] [rbp-9h] BYREF
  BYTE Buffer[4]; // [rsp+68h] [rbp-1h] BYREF
  int v37; // [rsp+6Ch] [rbp+3h]
  DWORD dwProcessId; // [rsp+84h] [rbp+1Bh]

  v1 = 0LL;
  pdwType = 36;
  v2 = 0LL;
  SecurityDescriptor = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids);
  }
  QueryPerformanceFrequency(&Frequency);
  g_u64QPCFrequency = Frequency.QuadPart;
  v4 = CoInitializeEx(0LL, 4u);
  if ( v4 < 0 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_47;
    }
    v21 = 12LL;
    goto LABEL_61;
  }
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 14) = EventW;
  if ( !EventW )
    goto LABEL_62;
  v6 = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 15) = v6;
  if ( !v6 )
    goto LABEL_62;
  v4 = InitializeCpuManager();
  if ( v4 < 0 )
    goto LABEL_47;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-405489"
           "3335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
LABEL_62:
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError <= 0 )
      goto LABEL_47;
    v4 = (unsigned __int16)LastError;
LABEL_83:
    v4 |= 0x80070000;
    goto LABEL_47;
  }
  v4 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioDeviceGraph", SecurityDescriptor);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids,
      (unsigned int)v4);
  }
  v7 = v4 <= 0;
  if ( v4 )
    goto LABEL_81;
  v4 = RpcServerRegisterIf3(&unk_140062050, 0LL, 0LL, 33LL, 1234, 0, AudioDGRpcIfCallback, SecurityDescriptor);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids,
      (unsigned int)v4);
  }
  v7 = v4 <= 0;
  if ( v4 )
  {
LABEL_81:
    if ( v7 )
      goto LABEL_47;
    v4 = (unsigned __int16)v4;
    goto LABEL_83;
  }
  fRpcStarted = 1;
  v8 = OpenSCManagerW(0LL, 0LL, 1u);
  v1 = v8;
  if ( !v8 )
  {
    v23 = GetLastError();
    v4 = v23;
    if ( v23 > 0 )
      v4 = (unsigned __int16)v23 | 0x80070000;
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_47;
    }
    v21 = 15LL;
LABEL_61:
    WPP_SF_D(v20[2], v21, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids, (unsigned int)v4);
    goto LABEL_47;
  }
  v2 = OpenServiceW(v8, L"AUDIOSRV", 4u);
  if ( !v2 )
  {
    v24 = GetLastError();
    v4 = v24;
    if ( v24 > 0 )
      v4 = (unsigned __int16)v24 | 0x80070000;
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_47;
    }
    v21 = 16LL;
    goto LABEL_61;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids);
  }
  if ( !QueryServiceStatusEx(v2, SC_STATUS_PROCESS_INFO, Buffer, 0x24u, &pdwType) )
  {
    v4 = GetLastError();
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        18LL,
        &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids,
        (unsigned int)v4);
    }
    v7 = v4 <= 0;
    goto LABEL_81;
  }
  if ( ((v37 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids, dwProcessId);
    }
    v9 = dwProcessId;
    *((_DWORD *)this + 34) = dwProcessId;
    v10 = OpenProcess(0x100000u, 0, v9);
    *((_QWORD *)this + 16) = v10;
    if ( v10 )
    {
      v4 = CAudioDGModule::InitializeSecurity(v11);
      if ( v4 >= 0 )
      {
        pcbData = 4;
        LODWORD(pvData) = 0;
        g_EndpointStatistics = 0LL;
        dword_140085F10 = 0;
        ValueW = RegGetValueW(
                   HKEY_LOCAL_MACHINE,
                   L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                   L"AudioDgWatchDogTimerInMs",
                   0x18u,
                   0LL,
                   &pvData,
                   &pcbData);
        v15 = g_AudioDgWatchDogTimerInMs;
        if ( !ValueW )
          v15 = (unsigned int)pvData;
        g_AudioDgWatchDogTimerInMs = v15;
        v16 = ATL::AtlComModuleRegisterClassObjects((struct ATL::_ATL_COM_MODULE70 *)v15, v13, v14);
        v17 = v16;
        if ( v16 >= 0 )
        {
          if ( v16 )
          {
            *((_BYTE *)this + 96) = 0;
          }
          else
          {
            if ( *((_BYTE *)this + 96) )
            {
              v35 = -1LL;
              v17 = CoResumeClassObjects();
              if ( v17 < 0 )
              {
                SetEvent(*((HANDLE *)this + 10));
                WaitForSingleObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, 2 * *((_DWORD *)this + 22));
              }
              ATL::CHandle::Close((ATL::CHandle *)&v35);
            }
            else
            {
              v17 = CoResumeClassObjects();
            }
            if ( v17 < 0 )
            {
              v26 = (__int64 *)qword_140086020;
              v27 = 0;
              v28 = qword_140086028;
              while ( (unsigned __int64)v26 < v28 && !v27 )
              {
                v29 = *v26;
                if ( *v26 && *(_DWORD *)(v29 + 40) )
                {
                  v27 = CoRevokeClassObject(*(_DWORD *)(v29 + 40));
                  v28 = qword_140086028;
                }
                ++v26;
              }
            }
          }
        }
        v4 = v17;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            23LL,
            &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids,
            (unsigned int)v17);
        }
        if ( v17 >= 0
          && !SetEvent(*((HANDLE *)this + 18))
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            24LL,
            &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids,
            *((_QWORD *)this + 18));
        }
      }
      goto LABEL_47;
    }
    v25 = GetLastError();
    v4 = v25;
    if ( v25 > 0 )
      v4 = (unsigned __int16)v25 | 0x80070000;
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v21 = 21LL;
      goto LABEL_61;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids);
    }
    v4 = -2147467259;
  }
LABEL_47:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  if ( v1 )
    CloseServiceHandle(v1);
  if ( v2 )
    CloseServiceHandle(v2);
  v18 = (void *)*((_QWORD *)this + 15);
  *((_DWORD *)this + 26) = v4;
  if ( v18 )
    SetEvent(v18);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        25LL,
        &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids,
        (unsigned int)v4);
    }
    AudDGTraceLoggingErrorHelper("CAudioDGModule::PreMessageLoop", 0x1C9u, v4);
  }
  return (unsigned int)v4;
}
