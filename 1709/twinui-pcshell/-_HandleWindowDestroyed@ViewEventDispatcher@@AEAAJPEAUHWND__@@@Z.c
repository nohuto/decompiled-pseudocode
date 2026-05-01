/*
 * XREFs of ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x180123280
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x18011FEB0 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180127F90 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_HandleWindowDestroyed(RTL_SRWLOCK *this, HWND a2)
{
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx
  char v9; // al
  __int64 (__fastcall ****Ptr)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rcx
  char *v15; // rdx
  HWND *v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v19; // [rsp+68h] [rbp+20h]

  SetLastError(0);
  if ( !(unsigned int)IsWindowInDestroy(a2) && GetLastError() != 1400 )
    return 0LL;
  v18 = 0LL;
  v5 = this + 37;
  AcquireSRWLockExclusive(this + 37);
  v19 = this + 37;
  v6 = 0LL;
  v7 = 0LL;
  if ( this[47].Ptr )
  {
    while ( 1 )
    {
      v8 = *((_QWORD *)this[46].Ptr + v7);
      if ( (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 624LL))(v8) == a2 )
        break;
      if ( (PVOID)++v7 >= this[47].Ptr )
        goto LABEL_9;
    }
    v6 = v7;
    v9 = 1;
  }
  else
  {
LABEL_9:
    v9 = 0;
  }
  if ( !v9 )
  {
    v15 = 0LL;
    if ( this[55].Ptr )
    {
      v16 = (HWND *)((char *)this[54].Ptr + 16);
      while ( *v16 != a2 )
      {
        ++v15;
        v16 += 3;
        if ( v15 >= this[55].Ptr )
          goto LABEL_23;
      }
      CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
        &this[54],
        v15);
    }
    goto LABEL_23;
  }
  Ptr = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this[46].Ptr;
  v11 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (**Ptr[v6])(Ptr[v6], &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f, &v18);
  v13 = v12;
  if ( v12 >= 0 )
  {
LABEL_23:
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    v14 = v18;
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v18 + 656LL))(v18, a2);
      v14 = v18;
    }
    v13 = 0;
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xB06,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v12);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v14 = v18;
LABEL_28:
  if ( v14 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v13;
}
