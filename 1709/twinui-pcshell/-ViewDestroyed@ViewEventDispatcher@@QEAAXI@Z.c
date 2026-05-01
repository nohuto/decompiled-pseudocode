/*
 * XREFs of ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x18011E3B8
 * Callers:
 *     ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x1801364C0 (-OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x180123DD0 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1801241AC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180124460 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x180125288 (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180127F90 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ViewEventDispatcher::ViewDestroyed(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // rcx
  char v6; // r12
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r12
  int v9; // eax
  int MatchingViewEventRegistration; // eax
  _QWORD *v11; // r14
  char *v12; // rdx
  char *v13; // rax
  _DWORD *Ptr; // rcx
  char v15; // r13
  _QWORD *v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  int v19[2]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD v21[4]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v22[7]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v23; // [rsp+88h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v21[2] = -2LL;
  try
  {
    *(_QWORD *)v19 = 0LL;
    v11 = 0LL;
    v21[0] = 0LL;
    v4 = this + 37;
    AcquireSRWLockExclusive(this + 37);
    v21[3] = v4;
    v21[1] = 0LL;
    v20 = 0LL;
    v7 = 0LL;
    v15 = 1;
    while ( (PVOID)v7 < this[47].Ptr )
    {
      v5 = *((_QWORD *)this[46].Ptr + v7);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 576LL))(v5) == a2 )
      {
        v20 = v7;
        v6 = 1;
        goto LABEL_7;
      }
      ++v7;
    }
    v6 = 0;
LABEL_7:
    if ( v6 )
    {
      v8 = v20;
      v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, int *))this[46].Ptr + v20))(
             *((_QWORD *)this[46].Ptr + v20),
             &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f,
             v19);
      if ( v9 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x43B,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v9);
      ViewEventDispatcher::_RemoveValidView((ViewEventDispatcher *)this, v8);
      MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, *(_QWORD *)v19, v21);
      if ( MatchingViewEventRegistration < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x43E,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)MatchingViewEventRegistration);
      v11 = (_QWORD *)v21[0];
    }
    else
    {
      v12 = 0LL;
      v13 = 0LL;
      if ( this[55].Ptr )
      {
        Ptr = this[54].Ptr;
        while ( *Ptr != a2 )
        {
          ++v13;
          Ptr += 6;
          if ( v13 >= this[55].Ptr )
            goto LABEL_19;
        }
        v12 = v13;
      }
      else
      {
LABEL_19:
        v15 = 0;
      }
      if ( v15 )
        CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
          &this[54],
          v12);
    }
    v22[0] = off_180209BA0;
    v23 = v22;
    ViewEventDispatcher::_ForEachComponent((ViewEventDispatcher *)this);
    if ( v23 )
    {
      v16 = v22;
      LOBYTE(v16) = v23 != v22;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 32LL))(v23, v16);
    }
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v11 )
    {
      v17 = v11[4];
      v20 = v17;
      if ( v17 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v17 + 8LL))(v17);
      ViewEventDispatcher::_RaiseViewEvent(this, *(_QWORD *)v19, 4LL, &v20);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v19 + 688LL))(*(_QWORD *)v19);
    }
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    v18 = *(_QWORD *)v19;
    if ( *(_QWORD *)v19 )
    {
      *(_QWORD *)v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  catch ( ... )
  {
  }
}
