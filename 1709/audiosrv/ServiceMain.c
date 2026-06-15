/*
 * XREFs of ServiceMain @ 0x1800ABF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ReportStatusToSCMgr @ 0x1800ABDC8 (ReportStatusToSCMgr.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AC2C8 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WppInitUm @ 0x1800AC430 (WppInitUm.c)
 *     AudioWriteLogHeader @ 0x1800B8C0C (AudioWriteLogHeader.c)
 */

void __fastcall ServiceMain(unsigned int a1, LPCWSTR *a2)
{
  __int64 v2; // rsi
  DWORD CurrentProcessId; // eax
  DWORD dwServiceSpecificExitCode; // edx
  DWORD v6; // eax
  LPVOID v7; // rbx
  HANDLE v8; // rcx
  LPVOID v9; // rax
  DWORD v10; // edx
  unsigned int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // rax
  SIZE_T v14; // r15
  unsigned __int16 *v15; // rcx
  HANDLE Thread; // rax
  unsigned int i; // edi
  void *v18; // r8

  v2 = a1;
  if ( a1 )
  {
    qword_18014BB58 = 1LL;
    WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
    qword_18014BB50 = 0LL;
    WPP_GLOBAL_Control = (CAudioDGProcess *)&WPP_MAIN_CB;
    WPP_MAIN_CB = 0LL;
    WppInitUm();
    AudioWriteLogHeader(*a2);
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      CurrentProcessId = GetCurrentProcessId();
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xBu,
        (__int64)&WPP_579770171f033cf210c6bb4fbf8d98d3_Traceguids,
        CurrentProcessId);
    }
    sshStatusHandle = RegisterServiceCtrlHandlerExW(*a2, (LPHANDLER_FUNCTION_EX)ServiceCtrl, 0LL);
    if ( sshStatusHandle )
    {
      ssStatus.dwServiceType = 32;
      ssStatus.dwServiceSpecificExitCode = 0;
      if ( (unsigned int)ReportStatusToSCMgr(2u, 0, 0x1388u) )
      {
        hEventShutdown = CreateEventW(0LL, 1, 0, 0LL);
        if ( !hEventShutdown )
        {
          ssStatus.dwServiceSpecificExitCode = GetLastError();
          dwServiceSpecificExitCode = ssStatus.dwServiceSpecificExitCode;
LABEL_10:
          ReportStatusToSCMgr(1u, dwServiceSpecificExitCode, 0);
          return;
        }
        v6 = (*(__int64 (__fastcall **)(HANDLE *, LPCWSTR, HANDLE, __int64 (*)(), _QWORD, int))(gpSvchostSharedGlobals
                                                                                              + 192))(
               &hEventShutdownWait,
               *a2,
               hEventShutdown,
               OnServiceShutdown,
               0LL,
               8);
        ssStatus.dwServiceSpecificExitCode = v6;
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xCu,
            (__int64)&WPP_579770171f033cf210c6bb4fbf8d98d3_Traceguids,
            v6);
        }
        v7 = HeapAlloc(hHeap, 0, 0x18uLL);
        dwServiceSpecificExitCode = 8;
        if ( !v7 )
        {
          ssStatus.dwServiceSpecificExitCode = 8;
          goto LABEL_10;
        }
        v8 = hHeap;
        *(_QWORD *)v7 = sshStatusHandle;
        *((_DWORD *)v7 + 2) = v2;
        v9 = HeapAlloc(v8, 8u, 8 * v2);
        *((_QWORD *)v7 + 2) = v9;
        if ( v9 )
        {
          v11 = 0;
          if ( (_DWORD)v2 )
          {
            v12 = 0LL;
            while ( 1 )
            {
              v13 = -1LL;
              do
                ++v13;
              while ( a2[v12][v13] );
              v14 = (unsigned int)(2 * v13 + 2);
              *(_QWORD *)(v12 * 8 + *((_QWORD *)v7 + 2)) = HeapAlloc(hHeap, 8u, v14);
              v15 = *(unsigned __int16 **)(v12 * 8 + *((_QWORD *)v7 + 2));
              if ( !v15 || (int)StringCbCopyW(v15, (unsigned int)v14, a2[v12]) < 0 )
                break;
              ++v11;
              ++v12;
              if ( v11 >= (unsigned int)v2 )
                goto LABEL_26;
            }
            ssStatus.dwServiceSpecificExitCode = 8;
            v10 = 8;
          }
          else
          {
LABEL_26:
            Thread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)AudioSrvStartupThread, v7, 0, 0LL);
            if ( Thread )
            {
              CloseHandle(Thread);
              return;
            }
            ssStatus.dwServiceSpecificExitCode = GetLastError();
            v10 = ssStatus.dwServiceSpecificExitCode;
          }
        }
        else
        {
          ssStatus.dwServiceSpecificExitCode = 8;
          v10 = 8;
        }
        ReportStatusToSCMgr(1u, v10, 0);
        if ( *((_QWORD *)v7 + 2) )
        {
          for ( i = 0; i < *((_DWORD *)v7 + 2); ++i )
          {
            v18 = *(void **)(*((_QWORD *)v7 + 2) + 8LL * i);
            if ( v18 )
              HeapFree(hHeap, 0, v18);
          }
          HeapFree(hHeap, 0, *((LPVOID *)v7 + 2));
        }
        HeapFree(hHeap, 0, v7);
      }
    }
  }
}
