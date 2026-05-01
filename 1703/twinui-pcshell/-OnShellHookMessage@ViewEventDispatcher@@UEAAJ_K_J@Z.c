/*
 * XREFs of ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x1800F4FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1800F7598 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 *     ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1800F7FE4 (-_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1800F819C (-_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewEventDispatcher::OnShellHookMessage(RTL_SRWLOCK *this, unsigned __int64 a2, HWND a3)
{
  RTL_SRWLOCK *v6; // rcx
  __int64 v7; // r8
  PSRWLOCK v8; // rcx
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // r14d
  __int64 (__fastcall ***v13)(_QWORD, GUID *, PSRWLOCK *); // rcx
  int v14; // eax
  PSRWLOCK v15; // rcx
  PSRWLOCK v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  PSRWLOCK v19; // [rsp+68h] [rbp+38h] BYREF
  PSRWLOCK SRWLock; // [rsp+70h] [rbp+40h] BYREF
  __int64 v21; // [rsp+78h] [rbp+48h]

  if ( a2 <= 0x19 )
  {
    switch ( a2 )
    {
      case 0x19uLL:
        goto LABEL_39;
      case 0x11uLL:
        v6 = this - 5;
        v7 = 0LL;
        break;
      case 0x12uLL:
        ViewEventDispatcher::_HandleWindowDestroyed((ViewEventDispatcher *)&this[-5], a3);
        return 0LL;
      case 0x13uLL:
        goto LABEL_39;
      case 0x15uLL:
        v6 = this - 5;
        v7 = 1LL;
        break;
      case 0x17uLL:
LABEL_39:
        wil::srwlock::lock_exclusive(this + 23, &v19);
        ViewEventDispatcher::_HandleForegroundWindow((ViewEventDispatcher *)&this[-5], a3);
        if ( v19 )
          ReleaseSRWLockExclusive(v19);
        return 0LL;
      default:
        return 0LL;
    }
    ViewEventDispatcher::_HandleWindowCreated(v6, a3, v7);
    return 0LL;
  }
  if ( a2 == 26 || a2 == 27 )
    goto LABEL_39;
  if ( a2 != 31 && a2 != 36 && a2 != 38 )
    return 0LL;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 23, &SRWLock);
  v8 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*((void (__fastcall **)(PSRWLOCK))v8->Ptr + 2))(v8);
  }
  v21 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( this[33].Ptr )
  {
    while ( 1 )
    {
      v11 = *((_QWORD *)this[32].Ptr + v10);
      if ( (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 624LL))(v11) == a3 )
        break;
      if ( (PVOID)++v10 >= this[33].Ptr )
        goto LABEL_25;
    }
    v9 = v10;
    v12 = 0;
  }
  else
  {
LABEL_25:
    v12 = -2147319765;
  }
  if ( v12 >= 0 )
  {
    v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, PSRWLOCK *))*((_QWORD *)this[32].Ptr + v9);
    v14 = (**v13)(v13, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v19);
    v12 = v14;
    if ( v14 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAD0,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v14);
    if ( v12 >= 0 )
    {
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      (*((void (__fastcall **)(PSRWLOCK, unsigned __int64))v19->Ptr + 83))(v19, a2);
      v17 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*((void (__fastcall **)(PSRWLOCK))v17->Ptr + 2))(v17);
      }
      return 0LL;
    }
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x5F4,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v12);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  v15 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*((void (__fastcall **)(PSRWLOCK))v15->Ptr + 2))(v15);
  }
  return (unsigned int)v12;
}
