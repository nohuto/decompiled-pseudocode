/*
 * XREFs of ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@II@Z @ 0x1800F5944
 * Callers:
 *     ?RegisterHostComponentPair@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@IIPEAUIInspectable@@@Z @ 0x1800F5410 (-RegisterHostComponentPair@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCor.c)
 *     ?RegisterComponentForHost@ViewEventDispatcher@@UEAAJIII@Z @ 0x1800F5EF0 (-RegisterComponentForHost@ViewEventDispatcher@@UEAAJIII@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x1800F5A14 (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewEventDispatcher::_PropagateNewRegistration(
        ViewEventDispatcher *a1,
        int a2,
        unsigned int a3,
        unsigned int a4)
{
  int v7; // eax
  struct IViewWrapperInternal *v8; // rcx
  struct IViewWrapperInternal *v9; // rcx
  struct IViewWrapperInternal *v10; // [rsp+20h] [rbp-28h] BYREF
  struct IViewWrapperInternal *v11[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11[1] = (struct IViewWrapperInternal *)-2LL;
  v11[0] = 0LL;
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(a1, a4, v11) >= 0 )
  {
    v10 = 0LL;
    if ( !a2 )
    {
      v7 = ViewEventDispatcher::_ViewFromViewInstanceId(a1, a3, &v10);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x69B,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v7);
    }
    ViewEventDispatcher::_PropagateNewRegistration(a1, v10, v11[0]);
    v8 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = v11[0];
  if ( v11[0] )
  {
    v11[0] = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
