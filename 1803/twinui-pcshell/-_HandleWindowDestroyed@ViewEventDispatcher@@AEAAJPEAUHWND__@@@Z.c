/*
 * XREFs of ?_HandleWindowDestroyed@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x180032E50
 * Callers:
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x180034860 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??$As@UIViewWrapperInternal@@@?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180003F2C (--$As@UIViewWrapperInternal@@@-$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180051290 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180095D7C (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_HandleWindowDestroyed(RTL_SRWLOCK *this, HWND a2)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  HWND (__fastcall *v8)(ViewWrapperBase *__hidden); // rax
  HWND v9; // rax
  char v10; // al
  char *v11; // rdx
  ViewWrapperBase *v12; // rcx
  unsigned int v13; // ebx
  int v15; // eax
  void (__fastcall *v16)(ViewWrapperBase *__hidden, HWND); // rax
  HWND *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  ViewWrapperBase *v19; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v20; // [rsp+78h] [rbp+20h]

  SetLastError(0);
  if ( !(unsigned int)IsWindowInDestroy(a2) && GetLastError() != 1400 )
    return 0LL;
  v19 = 0LL;
  AcquireSRWLockExclusive(this + 37);
  v20 = this + 37;
  v5 = 0LL;
  v6 = 0LL;
  if ( this[47].Ptr )
  {
    while ( 1 )
    {
      v7 = (_QWORD *)*((_QWORD *)this[46].Ptr + v6);
      v8 = *(HWND (__fastcall **)(ViewWrapperBase *__hidden))(*v7 + 648LL);
      v9 = (HWND)(v8 == ViewWrapperBase::GetWindow ? v7[32] : ((__int64 (__fastcall *)(_QWORD *, __int64))v8)(v7, v4));
      if ( v9 == a2 )
        break;
      if ( (PVOID)++v6 >= this[47].Ptr )
        goto LABEL_8;
    }
    v5 = v6;
    v10 = 1;
  }
  else
  {
LABEL_8:
    v10 = 0;
  }
  if ( v10 )
  {
    v15 = Microsoft::WRL::ComPtr<IViewWrapperInternal>::As<IViewWrapperInternal>(
            (_QWORD *)this[46].Ptr + v5,
            (__int64)&v19);
    v13 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x963,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v15,
        -2);
      if ( this != (RTL_SRWLOCK *)-296LL )
        ReleaseSRWLockExclusive(this + 37);
      v12 = v19;
      goto LABEL_15;
    }
  }
  else
  {
    v11 = 0LL;
    if ( this[55].Ptr )
    {
      v17 = (HWND *)((char *)this[54].Ptr + 16);
      while ( *v17 != a2 )
      {
        ++v11;
        v17 += 3;
        if ( v11 >= this[55].Ptr )
          goto LABEL_11;
      }
      CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
        &this[54],
        v11);
    }
  }
LABEL_11:
  if ( this != (RTL_SRWLOCK *)-296LL )
    ReleaseSRWLockExclusive(this + 37);
  v12 = v19;
  if ( v19 )
  {
    v16 = *(void (__fastcall **)(ViewWrapperBase *__hidden, HWND))(*(_QWORD *)v19 + 680LL);
    if ( v16 == ViewWrapperBase::WindowDestroyed )
      ViewWrapperBase::WindowDestroyed(v19, a2);
    else
      v16(v19, a2);
    v12 = v19;
  }
  v13 = 0;
LABEL_15:
  if ( v12 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v13;
}
