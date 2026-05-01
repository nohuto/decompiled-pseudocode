/*
 * XREFs of ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x1800F373C
 * Callers:
 *     ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18010B790 (-OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x1800F8B48 (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1800F8F2C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1800F91E0 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     ?_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z @ 0x1800F9F54 (-_RemoveValidView@ViewEventDispatcher@@AEAAX_K@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x1800FCE64 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall ViewEventDispatcher::ViewDestroyed(RTL_SRWLOCK *this, int a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // r13
  int v6; // r12d
  int v7; // r14d
  char *i; // r14
  int v9; // eax
  int MatchingViewEventRegistration; // eax
  _QWORD *v11; // rsi
  char *v12; // rdx
  char *v13; // rax
  _DWORD *Ptr; // rcx
  _QWORD *v15; // rdx
  RTL_SRWLOCK *v16; // rcx
  __int64 v17; // rcx
  int v18[4]; // [rsp+20h] [rbp-A8h] BYREF
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v21[7]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v22; // [rsp+88h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v20[2] = -2LL;
  try
  {
    *(_QWORD *)v18 = 0LL;
    v11 = 0LL;
    v20[0] = 0LL;
    wil::srwlock::lock_exclusive(this + 28, &SRWLock);
    v20[1] = 0LL;
    v5 = 0LL;
    for ( i = 0LL; i < this[38].Ptr; ++i )
    {
      v4 = *((_QWORD *)this[37].Ptr + (_QWORD)i);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 576LL))(v4) == a2 )
      {
        v5 = (unsigned __int64)i;
        v6 = 0;
        v7 = -2147319765;
        goto LABEL_7;
      }
    }
    v7 = -2147319765;
    v6 = -2147319765;
LABEL_7:
    if ( v6 < 0 )
    {
      v12 = 0LL;
      v13 = 0LL;
      if ( this[46].Ptr )
      {
        Ptr = this[45].Ptr;
        while ( *Ptr != a2 )
        {
          ++v13;
          Ptr += 6;
          if ( v13 >= this[46].Ptr )
            goto LABEL_19;
        }
        v12 = v13;
        v7 = 0;
      }
LABEL_19:
      if ( v7 >= 0 )
        CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
          &this[45],
          v12);
    }
    else
    {
      v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, int *))this[37].Ptr + v5))(
             *((_QWORD *)this[37].Ptr + v5),
             &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f,
             v18);
      if ( v9 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x435,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v9);
      ViewEventDispatcher::_RemoveValidView((ViewEventDispatcher *)this, v5);
      MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, *(_QWORD *)v18, v20);
      if ( MatchingViewEventRegistration < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x438,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)MatchingViewEventRegistration);
      v11 = (_QWORD *)v20[0];
    }
    v21[0] = off_1801B4670;
    v22 = v21;
    ViewEventDispatcher::_ForEachComponent((ViewEventDispatcher *)this);
    if ( v22 )
    {
      v15 = v21;
      LOBYTE(v15) = v22 != v21;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v22 + 32LL))(v22, v15);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v11 )
    {
      v16 = (RTL_SRWLOCK *)v11[4];
      SRWLock = v16;
      if ( v16 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))v16->Ptr + 1))(v16);
      ViewEventDispatcher::_RaiseViewEvent(this, *(_QWORD *)v18, 4LL, &SRWLock);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v18 + 688LL))(*(_QWORD *)v18);
    }
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    v17 = *(_QWORD *)v18;
    if ( *(_QWORD *)v18 )
    {
      *(_QWORD *)v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  catch ( ... )
  {
  }
}
