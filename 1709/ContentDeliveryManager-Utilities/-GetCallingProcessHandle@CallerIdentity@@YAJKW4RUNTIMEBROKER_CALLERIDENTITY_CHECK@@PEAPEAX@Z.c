/*
 * XREFs of ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180054BE0
 * Callers:
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x1800070A4 (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180054BA8 (-GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessHandle(__int64 a1, __int64 a2, HANDLE *a3)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  void *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppInterface; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  ppInterface = 0LL;
  v4 = CoGetCallContext(&GUID_68c6a1b9_de39_42c3_8d28_bf40a5126541, &ppInterface);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(void *, __int64, HANDLE *))(*(_QWORD *)ppInterface + 24LL))(ppInterface, 4096LL, a3);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x51,
        (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  if ( v4 == -2147417833 )
  {
    *a3 = GetCurrentProcess();
LABEL_6:
    v5 = 0;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x59,
    (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
    (const char *)(unsigned int)v4);
LABEL_8:
  v7 = ppInterface;
  if ( ppInterface )
  {
    ppInterface = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
