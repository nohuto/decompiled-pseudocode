/*
 * XREFs of NtUserInitializePointerDeviceInjectionEx @ 0x1C00E8D30
 * Callers:
 *     NtUserInitializePointerDeviceInjection @ 0x1C00E8D00 (NtUserInitializePointerDeviceInjection.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateSharedHandle @ 0x1C005ABE4 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C010828C (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C010B548 (RIMIDE_InitializePointerDeviceInjection.c)
 *     InputExtensibilityCalloutGuard @ 0x1C0129DB0 (InputExtensibilityCalloutGuard.c)
 */

__int64 __fastcall NtUserInitializePointerDeviceInjectionEx(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  unsigned int v6; // esi
  unsigned int v8; // r14d
  __int64 v10; // rbx
  int v11; // ecx
  ULONG64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-20h] BYREF

  v6 = a4;
  v8 = a2;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v17, a2, a3, a4);
  InputExtensibilityCalloutGuard();
  v10 = 0LL;
  v18[0] = 0LL;
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v11 = 5;
LABEL_14:
    UserSetLastError(v11);
    goto LABEL_15;
  }
  if ( v8 - 1 > 0xFF || v6 - 1 > 2 )
  {
    v11 = 87;
    goto LABEL_14;
  }
  if ( !a3 || (v10 = HMValidateSharedHandle(a3)) != 0 )
  {
    LODWORD(v10) = RIMIDE_InitializePointerDeviceInjection(a1, v8, v10, v6, a5, v18);
    if ( (_DWORD)v10 )
    {
      v14 = (__int64)a6;
      v12 = MmUserProbeAddress;
      v13 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v13 = (_QWORD *)MmUserProbeAddress;
      *v13 = *v13;
      *a6 = v18[0];
    }
  }
LABEL_15:
  UserSessionSwitchLeaveCrit((__int64)v13, v12, v14, v15);
  return (int)v10;
}
