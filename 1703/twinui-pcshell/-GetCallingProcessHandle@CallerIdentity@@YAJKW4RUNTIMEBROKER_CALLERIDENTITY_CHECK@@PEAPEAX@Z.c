/*
 * XREFs of ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180176018
 * Callers:
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z @ 0x180175FE0 (-GetCallingProcessHandle@CallerIdentity@@YAJKPEAPEAX@Z.c)
 *     ?GetCallingProcessId@CallerIdentity@@YAJPEAK@Z @ 0x18017611C (-GetCallingProcessId@CallerIdentity@@YAJPEAK@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x180176318 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureRuntimeBrokerPID@CallerIdentity@@YAXXZ @ 0x180175EF0 (-_EnsureRuntimeBrokerPID@CallerIdentity@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::GetCallingProcessHandle(__int64 a1, int a2, HANDLE *a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  CallerIdentity *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  void *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v14; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  v5 = CoGetCallContext(&GUID_68c6a1b9_de39_42c3_8d28_bf40a5126541, &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -2147417833 )
    {
      v10 = (unsigned int)v5;
      v9 = 89LL;
      goto LABEL_11;
    }
    *a3 = GetCurrentProcess();
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(void *, __int64, HANDLE *))(*(_QWORD *)v14 + 24LL))(v14, 4096LL, a3);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x51,
        (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_12;
    }
  }
  if ( a2 != 1
    || (CallerIdentity::_EnsureRuntimeBrokerPID(v8), GetProcessId(*a3) != CallerIdentity::g_dwRuntimeBrokerProcessId) )
  {
    v6 = 0;
    goto LABEL_12;
  }
  CloseHandle(*a3);
  *a3 = 0LL;
  v9 = 99LL;
  v6 = -2147467259;
  v10 = 2147500037LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity.cpp",
    (const char *)v10);
LABEL_12:
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v6;
}
