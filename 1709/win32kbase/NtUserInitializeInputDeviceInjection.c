/*
 * XREFs of NtUserInitializeInputDeviceInjection @ 0x1C00E8AF0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateSharedHandle @ 0x1C005ABE4 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C010828C (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C010B444 (RIMIDE_InitializeDeviceInjection.c)
 *     InputExtensibilityCalloutGuard @ 0x1C0129DB0 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInitializeInputDeviceInjection(
        unsigned __int16 a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        ULONG64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // r15
  __int64 v9; // rdi
  __int64 v10; // r12
  int v11; // ecx
  int v12; // ebx
  _QWORD *v13; // rdx
  ULONG64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  unsigned int v18; // r14d
  void *v19; // rax
  __int64 v21; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+58h] [rbp-40h]
  __int64 v24; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int16 v26; // [rsp+A8h] [rbp+10h]

  v26 = a2;
  v7 = (unsigned int)a4;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v21, a2, (__int64)a3, a4);
  InputExtensibilityCalloutGuard();
  v9 = 0LL;
  v23 = 0LL;
  v10 = 0LL;
  v24 = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v11 = 5;
LABEL_3:
    v12 = 0;
    UserSetLastError(v11);
    goto LABEL_27;
  }
  v17 = 32 * v7;
  v18 = -1;
  if ( (unsigned __int64)(32 * v7) <= 0xFFFFFFFF )
    v18 = 32 * v7;
  v22 = v18;
  if ( (unsigned __int64)(32 * v7) > 0xFFFFFFFF || !(_DWORD)v7 || (unsigned int)(a6 - 1) > 2 )
  {
    v11 = 87;
    goto LABEL_3;
  }
  v14 = a5;
  if ( !a5 || (v10 = HMValidateSharedHandle(a5)) != 0 )
  {
    if ( v17 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v14) == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[v17] > MmUserProbeAddress || &a3[v17] < a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v19 = (void *)Win32AllocPoolWithQuota(v18, 0x74697355u);
    v9 = (__int64)v19;
    v23 = (__int64)v19;
    if ( !v19 )
      ExRaiseStatus(-1073741801);
    memmove(v19, a3, 32 * v7);
    v12 = RIMIDE_InitializeDeviceInjection(a1, v26, v9, v7, v10, a6, (__int64)&v24);
    HIDWORD(v21) = v12;
    if ( v12 )
    {
      v15 = (__int64)a7;
      v14 = MmUserProbeAddress;
      v13 = a7;
      if ( (unsigned __int64)a7 >= MmUserProbeAddress )
        v13 = (_QWORD *)MmUserProbeAddress;
      *v13 = *v13;
      *a7 = v24;
      v12 = HIDWORD(v21);
      v9 = v23;
    }
  }
  else
  {
    v12 = 0;
  }
  if ( v9 )
    Win32FreePool(v9);
LABEL_27:
  UserSessionSwitchLeaveCrit(v14, (__int64)v13, v15, v16);
  return v12;
}
