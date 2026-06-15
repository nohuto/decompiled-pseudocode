/*
 * XREFs of ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180058F10
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180015210 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WppInitUm @ 0x180058E8C (WppInitUm.c)
 *     ReportStatusToSCMgr @ 0x18005A598 (ReportStatusToSCMgr.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ServiceMain(unsigned int a1, LPCWSTR *a2)
{
  __int64 v4; // r9
  _DWORD *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx
  HANDLE v8; // rcx
  LPVOID v9; // rax
  __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // rax
  SIZE_T v14; // r15
  char *v15; // rcx
  HANDLE Thread; // rax
  __int64 v17; // rdx
  LPVOID *v18; // r8
  unsigned int i; // edi

  if ( !a1 )
    return;
  qword_18018B030 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_AudioTrace;
  qword_18018B028 = 0LL;
  WPP_GLOBAL_Control = (CAudioSessionManager *)&WPP_MAIN_CB;
  WPP_MAIN_CB = 0LL;
  WppInitUm();
  sshStatusHandle = RegisterServiceCtrlHandlerExW(*a2, (LPHANDLER_FUNCTION_EX)ServiceCtrl, 0LL);
  if ( !sshStatusHandle )
    return;
  ssStatus = 32;
  dword_18018AFF8 = 0;
  if ( !(unsigned int)ReportStatusToSCMgr(2LL, 0LL, 5000LL, v4) )
    return;
  hEventShutdown = CreateEventW(0LL, 1, 0, 0LL);
  if ( !hEventShutdown )
  {
    dword_18018AFF8 = GetLastError();
    v7 = (unsigned int)dword_18018AFF8;
LABEL_19:
    ReportStatusToSCMgr(1LL, v7, 0LL, v6);
    return;
  }
  dword_18018AFF8 = (*((__int64 (__fastcall **)(HANDLE *, LPCWSTR, HANDLE, void (__fastcall *)(void *, unsigned __int8), _QWORD, int))gpSvchostSharedGlobals
                     + 24))(
                      &hEventShutdownWait,
                      *a2,
                      hEventShutdown,
                      OnServiceShutdown,
                      0LL,
                      8);
  v5 = HeapAlloc(hHeap, 0, 0x18uLL);
  v7 = 8LL;
  if ( !v5 )
  {
    dword_18018AFF8 = 8;
    goto LABEL_19;
  }
  v8 = hHeap;
  *(_QWORD *)v5 = sshStatusHandle;
  v5[2] = a1;
  v9 = HeapAlloc(v8, 8u, 8LL * a1);
  *((_QWORD *)v5 + 2) = v9;
  if ( v9 )
  {
    v11 = 0;
    if ( a1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        v13 = -1LL;
        do
          ++v13;
        while ( a2[v12][v13] );
        v14 = (unsigned int)(2 * v13 + 2);
        *(_QWORD *)(v12 * 8 + *((_QWORD *)v5 + 2)) = HeapAlloc(hHeap, 8u, v14);
        v15 = *(char **)(v12 * 8 + *((_QWORD *)v5 + 2));
        if ( !v15 || (int)StringCbCopyW(v15, (unsigned int)v14, (char *)a2[v12]) < 0 )
          break;
        ++v11;
        ++v12;
        if ( v11 >= a1 )
          goto LABEL_14;
      }
      dword_18018AFF8 = 8;
      v17 = 8LL;
    }
    else
    {
LABEL_14:
      Thread = CreateThread(0LL, 0LL, AudioSrvStartupThread, v5, 0, 0LL);
      if ( Thread )
      {
        CloseHandle(Thread);
        return;
      }
      dword_18018AFF8 = GetLastError();
      v17 = (unsigned int)dword_18018AFF8;
    }
  }
  else
  {
    dword_18018AFF8 = 8;
    v17 = 8LL;
  }
  ReportStatusToSCMgr(1LL, v17, 0LL, v10);
  v18 = (LPVOID *)*((_QWORD *)v5 + 2);
  if ( v18 )
  {
    for ( i = 0; i < v5[2]; ++i )
    {
      v18 = (LPVOID *)*((_QWORD *)v5 + 2);
      if ( v18[i] )
      {
        HeapFree(hHeap, 0, v18[i]);
        v18 = (LPVOID *)*((_QWORD *)v5 + 2);
      }
    }
    HeapFree(hHeap, 0, v18);
  }
  HeapFree(hHeap, 0, v5);
}
