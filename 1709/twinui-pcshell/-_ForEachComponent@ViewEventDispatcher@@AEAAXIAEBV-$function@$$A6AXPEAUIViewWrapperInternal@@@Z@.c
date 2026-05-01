/*
 * XREFs of ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x180123DD0
 * Callers:
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x18011E3B8 (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z @ 0x18011E678 (-ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z.c)
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180123FF4 (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_DATA@@0@Z @ 0x180141D50 (-PropagateViewStateOverridesToComponentsIfNecessary@ViewWrapperBase@@AEAAXAEBUAPPLICATION_VIEW_D.c)
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x180141F1C (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetComponentsForHost@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@PEAPEAU?$IVectorView@I@Collections@Foundation@6@@Z @ 0x180120BD0 (-GetComponentsForHost@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCore@Int.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ViewEventDispatcher::_ForEachComponent(ViewEventDispatcher *this, int a2, __int64 a3)
{
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  struct IViewWrapperInternal *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  struct IViewWrapperInternal *v14; // [rsp+20h] [rbp-50h] BYREF
  int v15; // [rsp+28h] [rbp-48h]
  __int64 v16; // [rsp+30h] [rbp-40h]
  struct IViewWrapperInternal *v17; // [rsp+40h] [rbp-30h] BYREF
  int v18; // [rsp+48h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp-20h]
  unsigned int v20; // [rsp+58h] [rbp-18h] BYREF
  int *v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+68h] [rbp-8h]
  unsigned int v23; // [rsp+6Ch] [rbp-4h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct IViewWrapperInternal *v25; // [rsp+A0h] [rbp+30h] BYREF
  char v26; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+48h]

  v16 = -2LL;
  LODWORD(v14) = 0;
  HIDWORD(v14) = a2;
  v27 = 0LL;
  v17 = v14;
  v18 = v15;
  if ( (int)ViewEventDispatcher::GetComponentsForHost((__int64)this + 192, (__int64 *)&v17) >= 0 )
  {
    v19 = v27;
    v21 = (int *)&v26;
    v22 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 56LL))(v27, &v20);
    *v21 = v5;
    if ( v5 >= 0 && v20 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v19 + 48LL))(v19, 0LL, &v23);
      *v21 = v6;
    }
    v7 = 0;
    v8 = v20;
    while ( *v21 >= 0 && v7 != v8 )
    {
      v25 = 0LL;
      v9 = ViewEventDispatcher::_ViewFromViewInstanceId(this, v23, &v25);
      if ( v9 >= 0 )
      {
        v14 = v25;
        v10 = *(_QWORD *)(a3 + 56);
        if ( !v10 )
        {
          std::_Xbad_function_call();
          break;
        }
        (*(void (__fastcall **)(__int64, struct IViewWrapperInternal **))(*(_QWORD *)v10 + 16LL))(v10, &v14);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBEC,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v9);
      }
      v11 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      ++v7;
      if ( *v21 >= 0 && v7 < v20 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v19 + 48LL))(v19, v7, &v23);
        *v21 = v12;
      }
    }
  }
  v13 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
