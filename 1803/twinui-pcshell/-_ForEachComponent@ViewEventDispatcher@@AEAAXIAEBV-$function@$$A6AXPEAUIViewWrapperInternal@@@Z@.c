/*
 * XREFs of ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x1800325CC
 * Callers:
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x180035B2C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800501C0 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180056E10 (-OnPropertyChanged@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@G@Z.c)
 *     ?ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@0@Z @ 0x1800F061C (-ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInter.c)
 *     ?HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z @ 0x1801CB850 (-HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetComponentsForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@PEAPEAU?$IVectorView@I@Collections@Foundation@5@@Z @ 0x18002F060 (-GetComponentsForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEA.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180032CA0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetAtCurrent@?$VectorRangeNoThrow@U?$IVectorView@I@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x1801CA894 (-GetAtCurrent@-$VectorRangeNoThrow@U-$IVectorView@I@Collections@Foundation@Windows@@@wil@@QEAAXI.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall ViewEventDispatcher::_ForEachComponent(ViewEventDispatcher *this, int a2, __int64 a3)
{
  RTL_SRWLOCK *v5; // rcx
  __int64 (__fastcall *v6)(RTL_SRWLOCK *, int *, __int64 *); // rax
  int ComponentsForHost; // eax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // r14d
  int v12; // ebx
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  struct IViewWrapperInternal *v17; // [rsp+20h] [rbp-50h] BYREF
  int v18; // [rsp+28h] [rbp-48h]
  __int64 v19; // [rsp+30h] [rbp-40h]
  struct IViewWrapperInternal *v20; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp-20h] BYREF
  int v23; // [rsp+58h] [rbp-18h] BYREF
  int *v24; // [rsp+60h] [rbp-10h]
  int v25; // [rsp+68h] [rbp-8h]
  unsigned int v26; // [rsp+6Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v28; // [rsp+A0h] [rbp+30h] BYREF
  char v29; // [rsp+A8h] [rbp+38h] BYREF
  struct IViewWrapperInternal *v30; // [rsp+B8h] [rbp+48h] BYREF

  v19 = -2LL;
  LODWORD(v17) = 0;
  HIDWORD(v17) = a2;
  v28 = 0LL;
  v20 = v17;
  v21 = v18;
  v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 66);
  v6 = (__int64 (__fastcall *)(RTL_SRWLOCK *, int *, __int64 *))*((_QWORD *)v5->Ptr + 8);
  if ( v6 == Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentsForHost )
    ComponentsForHost = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentsForHost(
                          v5,
                          (int *)&v20,
                          &v28);
  else
    ComponentsForHost = v6(v5, (int *)&v20, &v28);
  if ( ComponentsForHost >= 0 )
  {
    v22 = v28;
    v24 = (int *)&v29;
    v25 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 56LL))(v28, &v23);
    *v24 = v9;
    wil::VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<unsigned int>>::GetAtCurrent(&v22, 0LL);
    v10 = 0;
    v11 = v23;
    v12 = 0;
    while ( 1 )
    {
      LOBYTE(ComponentsForHost) = *v24 >= 0 && v12 != v11;
      if ( !(_BYTE)ComponentsForHost )
        break;
      v13 = v26;
      v30 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v30);
      v14 = ViewEventDispatcher::_ViewFromViewInstanceId(this, v13, &v30);
      if ( v14 >= 0 )
      {
        v17 = v30;
        v15 = *(_QWORD *)(a3 + 56);
        if ( !v15 )
        {
          std::_Xbad_function_call();
          goto LABEL_19;
        }
        (*(void (__fastcall **)(__int64, struct IViewWrapperInternal **))(*(_QWORD *)v15 + 16LL))(v15, &v17);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA53,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v14,
          (int)v17);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v30);
      v12 = ++v10;
      wil::VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<unsigned int>>::GetAtCurrent(&v22, v10);
    }
  }
  v8 = v28;
  if ( v28 )
  {
LABEL_19:
    v28 = 0LL;
    LOBYTE(ComponentsForHost) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return ComponentsForHost;
}
