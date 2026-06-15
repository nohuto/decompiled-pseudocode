/*
 * XREFs of ServiceMain @ 0x1800345F0
 * Callers:
 *     <none>
 * Callees:
 *     WppInitUm @ 0x18003456C (WppInitUm.c)
 *     StringCbCopyW @ 0x18003485C (StringCbCopyW.c)
 *     ReportStatusToSCMgr @ 0x1800370BC (ReportStatusToSCMgr.c)
 *     AudioWriteLogHeader @ 0x1800375F0 (AudioWriteLogHeader.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ServiceMain(unsigned int a1, LPCWSTR *a2)
{
  __int64 v2; // rsi
  __int64 v4; // r9
  DWORD v5; // eax
  LPVOID v6; // rbx
  __int64 v7; // r9
  __int64 dwServiceSpecificExitCode; // rdx
  HANDLE v9; // rcx
  LPVOID v10; // rax
  __int64 v11; // r9
  unsigned int v12; // ebp
  __int64 v13; // rdi
  __int64 v14; // rax
  SIZE_T v15; // r15
  wchar_t *v16; // rcx
  HANDLE Thread; // rax
  DWORD CurrentProcessId; // eax
  __int64 v19; // rdx
  unsigned int i; // edi
  void *v21; // r8

  v2 = a1;
  if ( !a1 )
    return;
  qword_18012B798 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  qword_18012B790 = 0LL;
  WPP_GLOBAL_Control = (CVolumeStrip *)&WPP_MAIN_CB;
  WPP_MAIN_CB = 0LL;
  WppInitUm();
  AudioWriteLogHeader(*a2);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    CurrentProcessId = GetCurrentProcessId();
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11LL,
      &WPP_579770171f033cf210c6bb4fbf8d98d3_Traceguids,
      CurrentProcessId);
  }
  sshStatusHandle = RegisterServiceCtrlHandlerExW(*a2, (LPHANDLER_FUNCTION_EX)ServiceCtrl, 0LL);
  if ( !sshStatusHandle )
    return;
  ssStatus.dwServiceType = 32;
  ssStatus.dwServiceSpecificExitCode = 0;
  if ( !(unsigned int)ReportStatusToSCMgr(2LL, 0LL, 5000LL, v4) )
    return;
  hEventShutdown = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hEventShutdown )
  {
    ssStatus.dwServiceSpecificExitCode = GetLastError();
    dwServiceSpecificExitCode = ssStatus.dwServiceSpecificExitCode;
LABEL_27:
    ReportStatusToSCMgr(1LL, dwServiceSpecificExitCode, 0LL, v7);
    return;
  }
  v5 = (*(__int64 (__fastcall **)(HANDLE *, LPCWSTR, HANDLE, __int64 (__fastcall *)(), _QWORD, int))(gpSvchostSharedGlobals + 192))(
         &hEventShutdownWait,
         *a2,
         hEventShutdown,
         OnServiceShutdown,
         0LL,
         8);
  ssStatus.dwServiceSpecificExitCode = v5;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_579770171f033cf210c6bb4fbf8d98d3_Traceguids, v5);
  }
  v6 = HeapAlloc(hHeap, 0, 0x18uLL);
  dwServiceSpecificExitCode = 8LL;
  if ( !v6 )
  {
    ssStatus.dwServiceSpecificExitCode = 8;
    goto LABEL_27;
  }
  v9 = hHeap;
  *(_QWORD *)v6 = sshStatusHandle;
  *((_DWORD *)v6 + 2) = v2;
  v10 = HeapAlloc(v9, 8u, 8 * v2);
  *((_QWORD *)v6 + 2) = v10;
  if ( v10 )
  {
    v12 = 0;
    if ( (_DWORD)v2 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( a2[v13][v14] );
        v15 = (unsigned int)(2 * v14 + 2);
        *(_QWORD *)(v13 * 8 + *((_QWORD *)v6 + 2)) = HeapAlloc(hHeap, 8u, v15);
        v16 = *(wchar_t **)(v13 * 8 + *((_QWORD *)v6 + 2));
        if ( !v16 || StringCbCopyW(v16, (unsigned int)v15, a2[v13]) < 0 )
          break;
        ++v12;
        ++v13;
        if ( v12 >= (unsigned int)v2 )
          goto LABEL_22;
      }
      ssStatus.dwServiceSpecificExitCode = 8;
      v19 = 8LL;
    }
    else
    {
LABEL_22:
      Thread = CreateThread(0LL, 0LL, AudioSrvStartupThread, v6, 0, 0LL);
      if ( Thread )
      {
        CloseHandle(Thread);
        return;
      }
      ssStatus.dwServiceSpecificExitCode = GetLastError();
      v19 = ssStatus.dwServiceSpecificExitCode;
    }
  }
  else
  {
    ssStatus.dwServiceSpecificExitCode = 8;
    v19 = 8LL;
  }
  ReportStatusToSCMgr(1LL, v19, 0LL, v11);
  if ( *((_QWORD *)v6 + 2) )
  {
    for ( i = 0; i < *((_DWORD *)v6 + 2); ++i )
    {
      v21 = *(void **)(*((_QWORD *)v6 + 2) + 8LL * i);
      if ( v21 )
        HeapFree(hHeap, 0, v21);
    }
    HeapFree(hHeap, 0, *((LPVOID *)v6 + 2));
  }
  HeapFree(hHeap, 0, v6);
}
