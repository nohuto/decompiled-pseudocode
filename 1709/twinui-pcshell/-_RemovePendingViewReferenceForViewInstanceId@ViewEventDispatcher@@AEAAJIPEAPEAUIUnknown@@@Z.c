/*
 * XREFs of ?_RemovePendingViewReferenceForViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIUnknown@@@Z @ 0x18012411C
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18011C358 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x180123720 (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardCompareHelper@UPendingViewData@ViewEventDispatcher@@@@V?$CSimpleArrayStandardMergeHelper@UPendingViewData@ViewEventDispatcher@@@@@@QEAAJ_K@Z @ 0x180127F90 (-RemoveAt@-$CTSimpleArray@UPendingViewData@ViewEventDispatcher@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::_RemovePendingViewReferenceForViewInstanceId(
        ViewEventDispatcher *this,
        int a2,
        struct IUnknown **a3)
{
  unsigned __int64 v3; // rbx
  _DWORD **v4; // rdi
  _DWORD *v5; // rax
  void (__fastcall ***v7)(_QWORD, GUID *, struct IUnknown **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0LL;
  v4 = (_DWORD **)((char *)this + 432);
  *a3 = 0LL;
  if ( *((_QWORD *)this + 55) )
  {
    v5 = *v4;
    while ( *v5 != a2 )
    {
      ++v3;
      v5 += 6;
      if ( v3 >= *((_QWORD *)this + 55) )
        goto LABEL_5;
    }
    v7 = *(void (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))&(*v4)[6 * v3 + 2];
    (**v7)(v7, &GUID_00000000_0000_0000_c000_000000000046, a3);
    CTSimpleArray<ViewEventDispatcher::PendingViewData,4294967294,CTPolicyCoTaskMem<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardCompareHelper<ViewEventDispatcher::PendingViewData>,CSimpleArrayStandardMergeHelper<ViewEventDispatcher::PendingViewData>>::RemoveAt(
      v4,
      v3);
    return 0LL;
  }
  else
  {
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xC3D,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8002802BLL);
    return 2147647531LL;
  }
}
