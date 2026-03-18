/*
 * XREFs of UserProcessMITInput @ 0x1C004C450
 * Callers:
 *     NtMITWaitForMultipleObjectsEx @ 0x1C004C0E0 (NtMITWaitForMultipleObjectsEx.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C004C980 (-WaitAndDispatch@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@.c)
 *     ?ReassociateUserHandleForIOCP@IOCPDispatcher@@QEAAJPEAPEAXPEAU_MITUserModeHandleEntry@@K@Z @ 0x1C004CBE4 (-ReassociateUserHandleForIOCP@IOCPDispatcher@@QEAAJPEAPEAXPEAU_MITUserModeHandleEntry@@K@Z.c)
 *     ?PrepareUserHandleForIOCP@IOCPDispatcher@@QEAAJIPEAPEAXPEAU_MITIocpContext@@@Z @ 0x1C004CC90 (-PrepareUserHandleForIOCP@IOCPDispatcher@@QEAAJIPEAPEAXPEAU_MITIocpContext@@@Z.c)
 *     ApiSetEditionHandleMitSignal @ 0x1C004E40C (ApiSetEditionHandleMitSignal.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall UserProcessMITInput(unsigned int a1, void **a2, struct _MITIocpContext *a3, int a4, int a5)
{
  __int64 v5; // rbx
  struct _MITIocpContext *v6; // rdi
  __int64 v7; // rsi
  union _LARGE_INTEGER *v8; // r13
  int v9; // eax
  int v10; // edx
  NTSTATUS v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // bp
  LARGE_INTEGER *CurrentThreadWin32Thread; // r14
  struct tagTHREADINFO *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  IOCPDispatcher *v22; // rcx
  __int64 v23; // r15
  int v24; // r8d
  LARGE_INTEGER v25; // r14
  _DWORD *KeyContext; // rbx
  __int64 v27; // rax
  ULONG v29; // eax
  __int64 v30; // rax
  _BYTE *v31; // rcx
  __int64 v32; // [rsp+30h] [rbp-68h] BYREF
  _FILE_IO_COMPLETION_INFORMATION v33; // [rsp+38h] [rbp-60h] BYREF
  void **v34; // [rsp+A8h] [rbp+10h]

  v34 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      1,
      15,
      (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
    a2 = v34;
  }
  if ( (_DWORD)v5 == -1 )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (union _LARGE_INTEGER *)&v32;
    v32 = -10000 * v5;
  }
  v9 = IOCPDispatcher::PrepareUserHandleForIOCP((IOCPDispatcher *)WPP_MAIN_CB.Queue.ListEntry.Blink, v7, a2, v6);
  v11 = v9;
  if ( v9 < 0 )
  {
LABEL_24:
    if ( (_DWORD)v7 )
    {
      v27 = v7;
      do
      {
        if ( *(_QWORD *)v6 )
          *(_QWORD *)v6 = 0LL;
        v6 = (struct _MITIocpContext *)((char *)v6 + 56);
        --v27;
      }
      while ( v27 );
    }
    goto LABEL_29;
  }
  if ( v9 != 257 )
  {
    while ( 1 )
    {
      UserSessionSwitchLeaveCrit();
      v12 = IOCPDispatcher::WaitAndDispatch((IOCPDispatcher *)WPP_MAIN_CB.Queue.ListEntry.Blink, v8, a5, &v33);
      v11 = v12;
      if ( v12 < 0 || v12 == 258 )
      {
        v16 = (_DWORD)v7 == 0;
        goto LABEL_13;
      }
      if ( v12 == 257 && a5 || v33.ApcContext == (PVOID)1 )
        goto LABEL_35;
      if ( v33.ApcContext == (PVOID)2 )
        break;
      v16 = 0;
LABEL_13:
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14, v13, v15);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v18 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v23 = PsGetCurrentThreadWin32Thread(v20, v19, v21);
      if ( v23 )
      {
        v25 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v23 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
        {
          LOBYTE(v22) = byte_1C0186D98 - 1;
          if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
            && (qword_1C0186D80 & 0x200000010000000LL) != 0
            && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            Template_xqx(
              (_DWORD)v22,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v24,
              v25.LowPart,
              0,
              (char)gullUserCritAcquireToken);
          }
        }
        if ( v25.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        {
          Template_xqx(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v24,
            0,
            1000 * v25.QuadPart / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        }
        *(_QWORD *)(v23 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      gptiCurrent = v18;
      gbValidateHandleForIL = 1;
      if ( !v16 )
      {
        v6 = a3;
        if ( v11 >= 0 && v11 != 258 && v33.ApcContext == (PVOID)3 )
        {
          KeyContext = v33.KeyContext;
          IOCPDispatcher::ReassociateUserHandleForIOCP(
            v22,
            v34,
            (struct _MITUserModeHandleEntry *)v33.KeyContext,
            *((_DWORD *)v33.KeyContext + 7));
          v11 = KeyContext[7];
        }
        goto LABEL_24;
      }
    }
    ApiSetEditionHandleMitSignal(&v33);
LABEL_35:
    v16 = 1;
    goto LABEL_13;
  }
  v30 = 0LL;
  if ( (_DWORD)v7 )
  {
    v31 = (char *)v6 + 12;
    while ( !*v31 )
    {
      v30 = (unsigned int)(v30 + 1);
      v31 += 56;
      if ( (unsigned int)v30 >= (unsigned int)v7 )
        goto LABEL_24;
    }
    v11 = *((_DWORD *)v6 + 14 * v30 + 2);
    goto LABEL_24;
  }
LABEL_29:
  if ( v11 < 0 )
  {
    v29 = RtlNtStatusToDosError(v11);
    UserSetLastError(v29);
    v11 = -1;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      1,
      16,
      (__int64)&WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids);
  }
  return (unsigned int)v11;
}
