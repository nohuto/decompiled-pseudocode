/*
 * XREFs of ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140014BA0
 * Callers:
 *     WinMain @ 0x14001AC3C (WinMain.c)
 * Callees:
 *     ?InitializeCpuManager@@YAJXZ @ 0x1400013A4 (-InitializeCpuManager@@YAJXZ.c)
 *     ?InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z @ 0x140014814 (-InitializeSecurity@CAudioDGModule@@AEAAJKKK@Z.c)
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14001ADA0 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     WPP_SF_q @ 0x140034C70 (WPP_SF_q.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDGModule::PreMessageLoop(CAudioDGModule *this)
{
  SC_HANDLE v1; // rsi
  SC_HANDLE v2; // r14
  int v4; // ebx
  HANDLE EventW; // rax
  HANDLE v6; // rax
  bool v7; // cc
  SC_HANDLE v8; // rax
  DWORD v9; // r8d
  HANDLE v10; // rax
  CAudioDGModule *v11; // rcx
  LSTATUS ValueW; // eax
  unsigned int v13; // ecx
  void *v14; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  signed int LastError; // eax
  signed int v19; // eax
  signed int v20; // eax
  signed int v21; // eax
  unsigned int pvData; // [rsp+40h] [rbp-19h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-11h] BYREF
  DWORD pdwType; // [rsp+50h] [rbp-9h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-5h] BYREF
  LARGE_INTEGER Frequency; // [rsp+58h] [rbp-1h] BYREF
  BYTE Buffer[4]; // [rsp+60h] [rbp+7h] BYREF
  int v28; // [rsp+64h] [rbp+Bh]
  DWORD dwProcessId; // [rsp+7Ch] [rbp+23h]

  v1 = 0LL;
  pdwType = 36;
  v2 = 0LL;
  SecurityDescriptor = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids);
  }
  QueryPerformanceFrequency(&Frequency);
  g_u64QPCFrequency = Frequency.QuadPart;
  v4 = CoInitializeEx(0LL, 4u);
  if ( v4 < 0 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_30;
    }
    v17 = 12LL;
    goto LABEL_46;
  }
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 15) = EventW;
  if ( !EventW )
    goto LABEL_47;
  v6 = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 16) = v6;
  if ( !v6 )
    goto LABEL_47;
  v4 = InitializeCpuManager();
  if ( v4 < 0 )
    goto LABEL_30;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-405489"
           "3335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
LABEL_47:
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError <= 0 )
      goto LABEL_30;
    v4 = (unsigned __int16)LastError;
LABEL_74:
    v4 |= 0x80070000;
    goto LABEL_30;
  }
  v4 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, (RPC_WSTR)L"AudioDeviceGraph", SecurityDescriptor);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids,
      (unsigned int)v4);
  }
  v7 = v4 <= 0;
  if ( v4 )
    goto LABEL_72;
  v4 = RpcServerRegisterIf3(&unk_140063740, 0LL, 0LL, 33LL, 1234, 0, AudioDGRpcIfCallback, SecurityDescriptor);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids,
      (unsigned int)v4);
  }
  v7 = v4 <= 0;
  if ( v4 )
  {
LABEL_72:
    if ( v7 )
      goto LABEL_30;
    v4 = (unsigned __int16)v4;
    goto LABEL_74;
  }
  fRpcStarted = 1;
  v8 = OpenSCManagerW(0LL, 0LL, 1u);
  v1 = v8;
  if ( !v8 )
  {
    v19 = GetLastError();
    v4 = v19;
    if ( v19 > 0 )
      v4 = (unsigned __int16)v19 | 0x80070000;
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_30;
    }
    v17 = 15LL;
LABEL_46:
    WPP_SF_D(v16[2], v17, &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids, (unsigned int)v4);
    goto LABEL_30;
  }
  v2 = OpenServiceW(v8, L"AUDIOSRV", 4u);
  if ( !v2 )
  {
    v20 = GetLastError();
    v4 = v20;
    if ( v20 > 0 )
      v4 = (unsigned __int16)v20 | 0x80070000;
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_30;
    }
    v17 = 16LL;
    goto LABEL_46;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids);
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
        &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids,
        (unsigned int)v4);
    }
    v7 = v4 <= 0;
    goto LABEL_72;
  }
  if ( ((v28 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids, dwProcessId);
    }
    v9 = dwProcessId;
    *((_DWORD *)this + 36) = dwProcessId;
    v10 = OpenProcess(0x100000u, 0, v9);
    *((_QWORD *)this + 17) = v10;
    if ( v10 )
    {
      v4 = CAudioDGModule::InitializeSecurity(v11);
      if ( v4 >= 0 )
      {
        pcbData = 4;
        pvData = 0;
        g_EndpointStatistics = 0LL;
        dword_140087F10 = 0;
        ValueW = RegGetValueW(
                   HKEY_LOCAL_MACHINE,
                   L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                   L"AudioDgWatchDogTimerInMs",
                   0x18u,
                   0LL,
                   &pvData,
                   &pcbData);
        v13 = g_AudioDgWatchDogTimerInMs;
        if ( !ValueW )
          v13 = pvData;
        g_AudioDgWatchDogTimerInMs = v13;
        v4 = ATL::CAtlExeModuleT<CAudioDGModule>::PreMessageLoop(this);
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            23LL,
            &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids,
            (unsigned int)v4);
        }
        if ( v4 >= 0
          && !SetEvent(*((HANDLE *)this + 19))
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            24LL,
            &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids,
            *((_QWORD *)this + 19));
        }
      }
      goto LABEL_30;
    }
    v21 = GetLastError();
    v4 = v21;
    if ( v21 > 0 )
      v4 = (unsigned __int16)v21 | 0x80070000;
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v17 = 21LL;
      goto LABEL_46;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids);
    }
    v4 = -2147467259;
  }
LABEL_30:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  if ( v1 )
    CloseServiceHandle(v1);
  if ( v2 )
    CloseServiceHandle(v2);
  v14 = (void *)*((_QWORD *)this + 16);
  *((_DWORD *)this + 28) = v4;
  if ( v14 )
    SetEvent(v14);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        25LL,
        &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids,
        (unsigned int)v4);
    }
    AudDGTraceLoggingErrorHelper("CAudioDGModule::PreMessageLoop", 0x1DAu, v4);
  }
  return (unsigned int)v4;
}
