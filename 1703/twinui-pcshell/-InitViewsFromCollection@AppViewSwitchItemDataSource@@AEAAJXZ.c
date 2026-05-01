/*
 * XREFs of ?InitViewsFromCollection@AppViewSwitchItemDataSource@@AEAAJXZ @ 0x18015D2DC
 * Callers:
 *     ?RuntimeClassInitialize@AppViewSwitchItemDataSource@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@@Z @ 0x18015CCB8 (-RuntimeClassInitialize@AppViewSwitchItemDataSource@@QEAAJPEAUIApplicationViewCollection@@PEAUIA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??DIterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA?AV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@XZ @ 0x18004363C (--DIterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA-AV-$ComPtr@UIImmersiveMonitor@@@WRL@.c)
 *     ?end@?$ObjectArrayAdapter@UIApplicationView@@@@QEAA?AVIterator@1@XZ @ 0x1800DC620 (-end@-$ObjectArrayAdapter@UIApplicationView@@@@QEAA-AVIterator@1@XZ.c)
 *     ?begin@?$ObjectArrayAdapter@UIApplicationView@@@@QEAA?AVIterator@1@XZ @ 0x1800DC65C (-begin@-$ObjectArrayAdapter@UIApplicationView@@@@QEAA-AVIterator@1@XZ.c)
 *     ??0?$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1800DC694 (--0-$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x1800DE2E0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     ?CreateSwitchItemForView@AppViewSwitchItemDataSource@@AEAAJPEAUIApplicationView@@PEAPEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18015D5A4 (-CreateSwitchItemForView@AppViewSwitchItemDataSource@@AEAAJPEAUIApplicationView@@PEAPEAUISwitchI.c)
 *     ?ShouldIncludeView@AppViewSwitchItemDataSource@@AEAA_NPEAUIApplicationView@@@Z @ 0x18015DA10 (-ShouldIncludeView@AppViewSwitchItemDataSource@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?InternalAddSwitchItem@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@IEAAXPEAUISwitchItem@23456@@Z @ 0x180160E8C (-InternalAddSwitchItem@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AppViewSwitchItemDataSource::InitViewsFromCollection(AppViewSwitchItemDataSource *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  struct IApplicationView *v5; // rdi
  AppViewSwitchItemDataSource *v6; // rcx
  int v7; // eax
  struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h]
  __int64 v17; // [rsp+48h] [rbp-28h]
  int v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v22; // [rsp+90h] [rbp+20h] BYREF
  struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *v23; // [rsp+98h] [rbp+28h] BYREF
  struct IApplicationView *v24; // [rsp+A0h] [rbp+30h] BYREF

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    v22 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v22);
    v3 = v4;
    if ( v4 >= 0 )
    {
      ObjectArrayAdapter<IApplicationView>::ObjectArrayAdapter<IApplicationView>((__int64)v14, v22);
      ObjectArrayAdapter<IApplicationView>::begin((__int64)v14, (__int64)&v15);
      ObjectArrayAdapter<IApplicationView>::end((__int64)v14, (__int64)&v18);
      while ( v15 != v18 || v17 != v20 )
      {
        ObjectArrayAdapter<IImmersiveMonitor>::Iterator::operator*((__int64)&v15, &v24);
        v5 = v24;
        if ( AppViewSwitchItemDataSource::ShouldIncludeView(v6, v24) )
        {
          v23 = 0LL;
          v7 = AppViewSwitchItemDataSource::CreateSwitchItemForView(this, v5, &v23);
          v8 = v23;
          if ( v7 >= 0 )
            WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemDataSourceBase::InternalAddSwitchItem(
              this,
              v23);
          else
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x97,
              (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
              (const char *)(unsigned int)v7);
          if ( v8 )
            (*(void (__fastcall **)(struct WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *))(*(_QWORD *)v8 + 16LL))(v8);
        }
        if ( v5 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v5 + 16LL))(v5);
        }
        ++v15;
        ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v15);
      }
      v9 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v10 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = v14[0];
      if ( v14[0] )
      {
        v14[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v3 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x90,
        (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
        (const char *)(unsigned int)v4);
    }
    v12 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    v3 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
      (const char *)0x80070490LL);
  }
  return v3;
}
