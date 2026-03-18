/*
 * XREFs of NtUserInjectDeviceInput @ 0x1C00E8E70
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
 *     RIMIDEInjectDeviceInput @ 0x1C0109710 (RIMIDEInjectDeviceInput.c)
 *     InputExtensibilityCalloutGuard @ 0x1C0129DB0 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInjectDeviceInput(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  int v7; // ebx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdi
  size_t v15; // r14
  void *v16; // rax
  __int64 v17; // rdi
  __int64 v19; // [rsp+80h] [rbp+18h] BYREF
  int v20; // [rsp+88h] [rbp+20h]

  v4 = (unsigned int)a3;
  v7 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v19, (__int64)a2, a3, a4);
  InputExtensibilityCalloutGuard();
  if ( !(_DWORD)v4 )
    goto LABEL_2;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(0LL) )
  {
    v8 = 5;
    goto LABEL_3;
  }
  v14 = 12 * v4;
  v15 = 0xFFFFFFFFLL;
  if ( (unsigned __int64)(12 * v4) <= 0xFFFFFFFF )
    v15 = (unsigned int)v14;
  v20 = v15;
  if ( (unsigned __int64)(12 * v4) > 0xFFFFFFFF )
  {
LABEL_2:
    v8 = 87;
LABEL_3:
    UserSetLastError(v8);
    goto LABEL_21;
  }
  if ( v14 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v13) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a2[v14] > MmUserProbeAddress || &a2[v14] < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v16 = (void *)Win32AllocPoolWithQuota(v15, 0x74697355u);
  v17 = (__int64)v16;
  if ( !v16 )
    ExRaiseStatus(-1073741801);
  memmove(v16, a2, v15);
  if ( (int)RIMIDEInjectDeviceInput(a1, v17, (unsigned int)v4) >= 0 )
    v7 = 1;
  if ( v17 )
    Win32FreePool(v17);
LABEL_21:
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v7;
}
