/*
 * XREFs of ?GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@@Z @ 0x1801CB2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180032CA0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z@std@@@Z @ 0x1801D0000 (-_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXAEBUtagHostIdentifier@ViewEven.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::GetTopLevelHost(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct Windows::Internal::Shell::Popups::ClientIdentifier *a3)
{
  RTL_SRWLOCK *v6; // rbx
  ViewEventDispatcher *v7; // rdi
  const char *v8; // r9
  __int64 (__fastcall ***v9)(); // rdx
  signed int v10; // eax
  DWORD v11; // ecx
  DWORD WindowThreadProcessId; // eax
  DWORD dwProcessId[4]; // [rsp+20h] [rbp-A8h] BYREF
  RTL_SRWLOCK *v15; // [rsp+30h] [rbp-98h]
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-90h]
  __int64 v17; // [rsp+40h] [rbp-88h]
  RTL_SRWLOCK *v18; // [rsp+48h] [rbp-80h]
  unsigned int v19[2]; // [rsp+50h] [rbp-78h] BYREF
  DWORD v20; // [rsp+58h] [rbp-70h]
  __int64 (__fastcall **v21)(); // [rsp+60h] [rbp-68h] BYREF
  __int128 v22; // [rsp+68h] [rbp-60h]
  __int64 (__fastcall ***v23)(); // [rsp+98h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v17 = -2LL;
  v6 = this + 10;
  v15 = this + 10;
  SRWLock = this + 10;
  AcquireSRWLockShared(this + 10);
  v18 = v6;
  v19[1] = 0;
  v20 = 0;
  v19[0] = a2;
  try
  {
    *(_QWORD *)dwProcessId = v19;
    v7 = (ViewEventDispatcher *)&this[-27];
    *(_QWORD *)&dwProcessId[2] = v7;
    v21 = off_180332C08;
    v22 = *(_OWORD *)dwProcessId;
    v23 = &v21;
    ViewEventDispatcher::_ForEachTrueHost(v7, a2, &v21);
    if ( v23 )
    {
      v9 = &v21;
      LOBYTE(v9) = v23 != &v21;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v23)[4])(v23, v9);
    }
  }
  catch ( ... )
  {
    dwProcessId[0] = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x71A,
                       (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                       v8);
    if ( v15 )
      ReleaseSRWLockShared(SRWLock);
    return dwProcessId[0];
  }
  if ( v19[0] )
  {
    v10 = v19[1];
    if ( !v19[1] )
    {
      *(_QWORD *)dwProcessId = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)dwProcessId);
      if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(v7, v19[0], (struct IViewWrapperInternal **)dwProcessId) >= 0 )
        v19[1] = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)dwProcessId + 648LL))(*(_QWORD *)dwProcessId);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)dwProcessId);
      v10 = v19[1];
    }
    v11 = v20;
    if ( !v20 )
    {
      WindowThreadProcessId = GetWindowThreadProcessId((HWND)v10, dwProcessId);
      v11 = v20;
      if ( WindowThreadProcessId )
        v11 = dwProcessId[0];
      v20 = v11;
    }
  }
  else
  {
    v11 = v20;
  }
  *(_QWORD *)a3 = *(_QWORD *)v19;
  *((_DWORD *)a3 + 2) = v11;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
