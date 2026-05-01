/*
 * XREFs of ?GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@@Z @ 0x1800F6E40
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z@std@@@Z @ 0x1800F8CE8 (-_ForEachTrueHost@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXAEBUtagHostIdentifier@ViewEven.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::GetTopLevelHost(
        RTL_SRWLOCK *this,
        unsigned int a2,
        struct Windows::Internal::Shell::Popups::ClientIdentifier *a3)
{
  ViewEventDispatcher *v6; // rbx
  const char *v7; // r9
  __int64 (__fastcall ***v8)(); // rdx
  __int64 v9; // rcx
  DWORD v10; // ecx
  DWORD WindowThreadProcessId; // eax
  DWORD dwProcessId[4]; // [rsp+20h] [rbp-98h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v15[2]; // [rsp+40h] [rbp-78h] BYREF
  DWORD v16; // [rsp+48h] [rbp-70h]
  __int64 (__fastcall **v17)(); // [rsp+50h] [rbp-68h] BYREF
  __int128 v18; // [rsp+58h] [rbp-60h]
  __int64 (__fastcall ***v19)(); // [rsp+88h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 8, SRWLock);
  v15[1] = 0;
  v16 = 0;
  v15[0] = a2;
  try
  {
    *(_QWORD *)dwProcessId = v15;
    v6 = (ViewEventDispatcher *)&this[-20];
    *(_QWORD *)&dwProcessId[2] = v6;
    v17 = off_1801B45B0;
    v18 = *(_OWORD *)dwProcessId;
    v19 = &v17;
    ViewEventDispatcher::_ForEachTrueHost(v6, a2, &v17);
    if ( v19 )
    {
      v8 = &v17;
      LOBYTE(v8) = v19 != &v17;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v19)[4])(v19, v8);
    }
  }
  catch ( ... )
  {
    dwProcessId[0] = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x87D,
                       (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
                       v7);
    if ( SRWLock[0] )
      ReleaseSRWLockShared(SRWLock[0]);
    return dwProcessId[0];
  }
  if ( v15[0] )
  {
    if ( !v15[1] )
    {
      *(_QWORD *)dwProcessId = 0LL;
      if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(v6, v15[0], (struct IViewWrapperInternal **)dwProcessId) >= 0 )
        v15[1] = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)dwProcessId + 624LL))(*(_QWORD *)dwProcessId);
      v9 = *(_QWORD *)dwProcessId;
      if ( *(_QWORD *)dwProcessId )
      {
        *(_QWORD *)dwProcessId = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    v10 = v16;
    if ( !v16 )
    {
      WindowThreadProcessId = GetWindowThreadProcessId((HWND)(int)v15[1], dwProcessId);
      v10 = v16;
      if ( WindowThreadProcessId )
        v10 = dwProcessId[0];
      v16 = v10;
    }
  }
  else
  {
    v10 = v16;
  }
  *(_QWORD *)a3 = *(_QWORD *)v15;
  *((_DWORD *)a3 + 2) = v10;
  if ( SRWLock[0] )
    ReleaseSRWLockShared(SRWLock[0]);
  return 0LL;
}
