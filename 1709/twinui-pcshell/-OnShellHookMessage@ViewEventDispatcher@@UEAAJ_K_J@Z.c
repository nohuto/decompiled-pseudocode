/*
 * XREFs of ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x18011FEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z @ 0x1801227F4 (-_HandleWindowCreated@ViewEventDispatcher@@AEAAJPEAUHWND__@@W4WindowType@1@@Z.c)
 *     ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x180123280 (-_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18012343C (-_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewEventDispatcher::OnShellHookMessage(RTL_SRWLOCK *this, unsigned __int64 a2, HWND a3)
{
  RTL_SRWLOCK *v6; // rcx
  __int64 v7; // r8
  RTL_SRWLOCK *v8; // r15
  RTL_SRWLOCK *v9; // rcx
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rcx
  int v13; // r14d
  __int64 (__fastcall ***v14)(_QWORD, GUID *, RTL_SRWLOCK **); // rcx
  int v15; // eax
  RTL_SRWLOCK *v16; // rcx
  RTL_SRWLOCK *v18; // rcx
  RTL_SRWLOCK *v19; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  RTL_SRWLOCK *v21; // [rsp+78h] [rbp+48h] BYREF
  RTL_SRWLOCK *v22; // [rsp+80h] [rbp+50h]
  __int64 v23; // [rsp+88h] [rbp+58h]

  if ( a2 <= 0x19 )
  {
    switch ( a2 )
    {
      case 0x19uLL:
        goto LABEL_39;
      case 0x11uLL:
        v6 = this - 8;
        v7 = 0LL;
        break;
      case 0x12uLL:
        ViewEventDispatcher::_HandleWindowDestroyed((ViewEventDispatcher *)&this[-8], a3);
        return 0LL;
      case 0x13uLL:
        goto LABEL_39;
      case 0x15uLL:
        v6 = this - 8;
        v7 = 1LL;
        break;
      case 0x17uLL:
LABEL_39:
        v19 = this + 29;
        AcquireSRWLockExclusive(this + 29);
        v21 = v19;
        ViewEventDispatcher::_HandleForegroundWindow((ViewEventDispatcher *)&this[-8], a3);
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
  v21 = 0LL;
  v8 = this + 29;
  AcquireSRWLockShared(this + 29);
  v22 = v8;
  v9 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*((void (__fastcall **)(RTL_SRWLOCK *))v9->Ptr + 2))(v9);
  }
  v23 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( this[39].Ptr )
  {
    while ( 1 )
    {
      v12 = *((_QWORD *)this[38].Ptr + v11);
      if ( (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 624LL))(v12) == a3 )
        break;
      if ( (PVOID)++v11 >= this[39].Ptr )
        goto LABEL_25;
    }
    v10 = v11;
    v13 = 0;
  }
  else
  {
LABEL_25:
    v13 = -2147319765;
  }
  if ( v13 >= 0 )
  {
    v14 = (__int64 (__fastcall ***)(_QWORD, GUID *, RTL_SRWLOCK **))*((_QWORD *)this[38].Ptr + v10);
    v15 = (**v14)(v14, &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v21);
    v13 = v15;
    if ( v15 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB52,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v15);
    if ( v13 >= 0 )
    {
      if ( v8 )
        ReleaseSRWLockShared(v8);
      (*((void (__fastcall **)(RTL_SRWLOCK *, unsigned __int64))v21->Ptr + 83))(v21, a2);
      v18 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*((void (__fastcall **)(RTL_SRWLOCK *))v18->Ptr + 2))(v18);
      }
      return 0LL;
    }
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x5FD,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v13);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  v16 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*((void (__fastcall **)(RTL_SRWLOCK *))v16->Ptr + 2))(v16);
  }
  return (unsigned int)v13;
}
