/*
 * XREFs of ?GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@@Z @ 0x180122070
 * Callers:
 *     <none>
 * Callees:
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z@std@@@Z @ 0x180123F68 (-_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXAEBUtagHostIdentifier@ViewEven.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rcx
  DWORD v11; // ecx
  DWORD WindowThreadProcessId; // eax
  DWORD dwProcessId[4]; // [rsp+20h] [rbp-A8h] BYREF
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+38h] [rbp-90h]
  RTL_SRWLOCK *v17; // [rsp+40h] [rbp-88h]
  unsigned int v18[2]; // [rsp+48h] [rbp-80h] BYREF
  DWORD v19; // [rsp+50h] [rbp-78h]
  __int64 (__fastcall **v20)(); // [rsp+60h] [rbp-68h] BYREF
  __int128 v21; // [rsp+68h] [rbp-60h]
  __int64 (__fastcall ***v22)(); // [rsp+98h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v16 = -2LL;
  v6 = this + 11;
  SRWLock = this + 11;
  AcquireSRWLockShared(this + 11);
  v17 = v6;
  v18[1] = 0;
  v19 = 0;
  v18[0] = a2;
  try
  {
    *(_QWORD *)dwProcessId = v18;
    v7 = (ViewEventDispatcher *)&this[-26];
    *(_QWORD *)&dwProcessId[2] = v7;
    v20 = off_180209B70;
    v21 = *(_OWORD *)dwProcessId;
    v22 = &v20;
    ViewEventDispatcher::_ForEachTrueHost(v7, a2, &v20);
    if ( v22 )
    {
      v9 = &v20;
      LOBYTE(v9) = v22 != &v20;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v22)[4])(v22, v9);
    }
  }
  catch ( ... )
  {
    dwProcessId[0] = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x8C0,
                       (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                       v8);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return dwProcessId[0];
  }
  if ( v18[0] )
  {
    if ( !v18[1] )
    {
      *(_QWORD *)dwProcessId = 0LL;
      if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(v7, v18[0], (struct IViewWrapperInternal **)dwProcessId) >= 0 )
        v18[1] = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)dwProcessId + 624LL))(*(_QWORD *)dwProcessId);
      v10 = *(_QWORD *)dwProcessId;
      if ( *(_QWORD *)dwProcessId )
      {
        *(_QWORD *)dwProcessId = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    v11 = v19;
    if ( !v19 )
    {
      WindowThreadProcessId = GetWindowThreadProcessId((HWND)(int)v18[1], dwProcessId);
      v11 = v19;
      if ( WindowThreadProcessId )
        v11 = dwProcessId[0];
      v19 = v11;
    }
  }
  else
  {
    v11 = v19;
  }
  *(_QWORD *)a3 = *(_QWORD *)v18;
  *((_DWORD *)a3 + 2) = v11;
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return 0LL;
}
