/*
 * XREFs of ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007AADC
 * Callers:
 *     NtUserRegisterSessionPort @ 0x1C007A9B0 (NtUserRegisterSessionPort.c)
 * Callees:
 *     GreLockDwmState @ 0x1C003CA30 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C003CA70 (GreUnlockDwmState.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C007AA70 (CheckDwmProcessSecurityIdentifier.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C007ACF4 (-IsMobileCore@@YAEXZ.c)
 *     xxxDwmControl @ 0x1C007AF70 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C007B0B4 (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C00A7078 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00FE000 (DwmSetProcessBreakOnTerminate.c)
 */

__int64 __fastcall xxxDwmProcessStartup(HANDLE Handle, __int64 a2)
{
  int v3; // ebx
  bool v4; // r15
  PVOID v5; // r12
  PVOID v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  void *CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 i; // rcx
  __int64 v13; // rax
  LeaveEnterCrit *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  LeaveEnterCrit *v20; // rcx
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( g_pepDwm )
  {
    v3 = -1073741768;
  }
  else
  {
    if ( !IsMobileCore() )
      v3 = CheckDwmProcessSecurityIdentifier();
    if ( v3 >= 0 && (int)IsUserEnableConsoleModeSupported() >= 0 )
    {
      UserSessionSwitchLeaveCrit((__int64)Handle, a2, v7, v8);
      v3 = UserEnableConsoleMode(0LL);
      v4 = v3 >= 0;
      LeaveEnterCrit::~LeaveEnterCrit(v15);
    }
  }
  if ( g_pepDwm )
    v3 = -1073741768;
  if ( v3 < 0 )
    goto LABEL_29;
  if ( Handle )
  {
    v3 = ObReferenceObjectByHandle(Handle, 1u, LpcPortObjectType, 1, &Object, 0LL);
    v5 = Object;
  }
  if ( v3 < 0 )
    goto LABEL_29;
  CurrentProcess = (void *)PsGetCurrentProcess(Handle, a2);
  v3 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  if ( v3 < 0 )
    goto LABEL_29;
  v6 = (PVOID)PsGetCurrentProcess(v11, v10);
  GreLockDwmState();
  if ( g_pepDwm )
  {
    v3 = -1073741768;
  }
  else
  {
    g_pepDwm = v6;
    SetDwmApiPort(v5);
  }
  GreUnlockDwmState();
  if ( v3 < 0 || (v3 = _guard_dispatch_icall_fptr(), v3 < 0) )
  {
LABEL_29:
    GreLockDwmState();
    if ( g_pepDwm == v6 )
    {
      SetDwmApiPort(0LL);
      g_pepDwm = 0LL;
    }
    GreUnlockDwmState();
    if ( v5 )
      ObfDereferenceObject(v5);
    if ( v6 )
      ObfDereferenceObject(v6);
    if ( !g_pepDwm && v4 )
    {
      UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
      UserEnableConsoleMode(1LL);
      LeaveEnterCrit::~LeaveEnterCrit(v20);
    }
  }
  else
  {
    if ( IsMobileCore() )
      DwmSetProcessBreakOnTerminate(1LL);
    for ( i = *(_QWORD *)(PsGetProcessWin32Process(g_pepDwm) + 296); i; i = *(_QWORD *)(i + 640) )
    {
      *(_DWORD *)(i + 1184) |= 4u;
      v13 = *(_QWORD *)(i + 456);
      if ( v13 )
        *(_QWORD *)(v13 + 224) |= 1uLL;
    }
    xxxDwmControl(1037LL, 0LL);
  }
  return (unsigned int)v3;
}
