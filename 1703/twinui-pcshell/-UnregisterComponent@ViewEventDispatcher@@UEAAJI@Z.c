/*
 * XREFs of ?UnregisterComponent@ViewEventDispatcher@@UEAAJI@Z @ 0x1800F5AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1800F8D74 (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::UnregisterComponent(RTL_SRWLOCK *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct IViewWrapperInternal *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IViewWrapperInternal *v9; // [rsp+50h] [rbp+20h] BYREF
  int v10; // [rsp+60h] [rbp+30h] BYREF
  int v11; // [rsp+64h] [rbp+34h]
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+38h] BYREF

  wil::srwlock::lock_exclusive(this + 10, &SRWLock);
  v4 = (*(__int64 (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)this[39].Ptr + 56LL))(this[39].Ptr, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = 0LL;
    if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)&this[-18], a2, &v9) >= 0 )
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v9 + 736LL))(v9, 0LL);
      (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)v9 + 760LL))(v9, 4LL);
      v10 = 0;
      v11 = 0;
      (*(void (__fastcall **)(struct IViewWrapperInternal *, int *))(*(_QWORD *)v9 + 768LL))(v9, &v10);
      ViewEventDispatcher::_HostChanged((ViewEventDispatcher *)&this[-18], v9);
    }
    v5 = 0;
    v6 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6B8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v5;
}
