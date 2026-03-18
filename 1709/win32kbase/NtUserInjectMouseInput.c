/*
 * XREFs of NtUserInjectMouseInput @ 0x1C00E92C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C010828C (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C01091E0 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0109FB4 (RIMIDEInjectMouseFromMouseInputStruct.c)
 *     InputExtensibilityCalloutGuard @ 0x1C0129DB0 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInjectMouseInput(char *Src, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcessWin32Process; // r14
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rbx
  void *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // [rsp+68h] [rbp+10h] BYREF

  v4 = (unsigned int)a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v25, a2, a3, a4);
  InputExtensibilityCalloutGuard();
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8);
  if ( (unsigned int)(v4 - 1) > 9 )
  {
    v11 = 87;
    goto LABEL_19;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v11 = 5;
LABEL_19:
    v19 = 0;
    UserSetLastError(v11);
    goto LABEL_20;
  }
  v12 = 32 * v4;
  if ( 32 * v4 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v10) == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[v12] > MmUserProbeAddress || &Src[v12] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v13 = (void *)Win32AllocPoolWithQuota(32 * v4, 0x6D697355u);
  v14 = (__int64)v13;
  if ( !v13 )
    ExRaiseStatus(-1073741801);
  memmove(v13, Src, 32 * v4);
  if ( *(_QWORD *)(CurrentProcessWin32Process + 856) == -1LL
    && (v18 = PsGetCurrentProcessWin32Process(v16, v15, v17),
        (int)RIMIDECreatePseudoMouseOrKeyboardDevice(0LL, v18 + 856) < 0) )
  {
    v19 = 0;
    UserSetLastError(1359);
  }
  else
  {
    v19 = RIMIDEInjectMouseFromMouseInputStruct(*(_QWORD *)(CurrentProcessWin32Process + 856), v14, (unsigned int)v4);
  }
  if ( v14 )
    Win32FreePool(v14);
LABEL_20:
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v19;
}
