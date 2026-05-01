/*
 * XREFs of ?GetSwitchItemForView@AppViewSwitchItemDataSource@@AEAAJPEAUIApplicationView@@PEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18015D4C4
 * Callers:
 *     ?OnApplicationViewChanged@AppViewSwitchItemDataSource@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18015CF30 (-OnApplicationViewChanged@AppViewSwitchItemDataSource@@UEAAJPEAUIApplicationView@@W4APPLICATION_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppViewSwitchItemDataSource::GetSwitchItemForView(
        AppViewSwitchItemDataSource *this,
        struct IApplicationView *a2,
        struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem **a3)
{
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rcx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = (__int64 *)*((_QWORD *)this + 34);
  v7 = v6;
  v8 = (__int64 *)v6[1];
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( v8[4] >= (unsigned __int64)a2 )
    {
      v7 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( v7 == v6 || (unsigned __int64)a2 < v7[4] )
    v7 = (__int64 *)*((_QWORD *)this + 34);
  if ( a2 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 16LL))(a2);
  if ( v7 == *((__int64 **)this + 34) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  else
  {
    v10 = v7[5];
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    *a3 = (struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *)v7[5];
    return 0LL;
  }
}
