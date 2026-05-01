/*
 * XREFs of ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1800F7FE4
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x1800F4FC0 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x1800FCE64 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_HandleWindowDestroyed(RTL_SRWLOCK *this, HWND a2)
{
  __int64 v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  __int64 (__fastcall ****Ptr)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  char *v14; // rdx
  HWND *v15; // rax
  PSRWLOCK SRWLock[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  SetLastError(0);
  if ( !(unsigned int)IsWindowInDestroy(a2) && GetLastError() != 1400 )
    return 0LL;
  v18 = 0LL;
  wil::srwlock::lock_exclusive(this + 28, SRWLock);
  v5 = 0LL;
  v6 = 0LL;
  if ( this[38].Ptr )
  {
    while ( 1 )
    {
      v7 = *((_QWORD *)this[37].Ptr + v6);
      if ( (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 624LL))(v7) == a2 )
        break;
      if ( (PVOID)++v6 >= this[38].Ptr )
        goto LABEL_9;
    }
    v5 = v6;
    v8 = 0;
  }
  else
  {
LABEL_9:
    v8 = -2147319765;
  }
  if ( v8 < 0 )
  {
    v14 = 0LL;
    if ( this[46].Ptr )
    {
      v15 = (HWND *)((char *)this[45].Ptr + 16);
      while ( *v15 != a2 )
      {
        ++v14;
        v15 += 3;
        if ( v14 >= this[46].Ptr )
          goto LABEL_23;
      }
      CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
        &this[45],
        v14);
    }
    goto LABEL_23;
  }
  Ptr = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[37].Ptr;
  v10 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = (**Ptr[v5])(Ptr[v5], &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v18);
  v12 = v11;
  if ( v11 >= 0 )
  {
LABEL_23:
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    v13 = v18;
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v18 + 656LL))(v18, a2);
      v13 = v18;
    }
    v12 = 0;
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xA84,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v11);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  v13 = v18;
LABEL_28:
  if ( v13 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v12;
}
