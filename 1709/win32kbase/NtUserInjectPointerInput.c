/*
 * XREFs of NtUserInjectPointerInput @ 0x1C00E9450
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
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C010999C (RIMIDEInjectHIDReportFromPointerInfo.c)
 *     InputExtensibilityCalloutGuard @ 0x1C0129DB0 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInjectPointerInput(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rbx
  void *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v4 = (unsigned int)a3;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v18, (__int64)a2, a3, a4);
  InputExtensibilityCalloutGuard();
  if ( (unsigned int)(v4 - 1) > 0xFF )
  {
    v8 = 87;
    goto LABEL_17;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v8 = 5;
LABEL_17:
    v14 = 0;
    UserSetLastError(v8);
    goto LABEL_18;
  }
  v9 = 152 * v4;
  if ( 152 * v4 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v7) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v9] > MmUserProbeAddress || &a2[v9] < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v10 = (void *)Win32AllocPoolWithQuota(152 * v4, 0x74697355u);
  v11 = (__int64)v10;
  if ( !v10 )
    ExRaiseStatus(-1073741801);
  memmove(v10, a2, 152 * v4);
  v14 = RIMIDEInjectHIDReportFromPointerInfo(a1, v11, (unsigned int)v4);
  if ( !v14 )
    UserSetLastError(87);
  if ( v11 )
    Win32FreePool(v11);
LABEL_18:
  UserSessionSwitchLeaveCrit(v13, v12, v15, v16);
  return v14;
}
