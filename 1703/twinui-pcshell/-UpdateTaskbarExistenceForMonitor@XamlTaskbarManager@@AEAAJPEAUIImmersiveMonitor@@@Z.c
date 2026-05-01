/*
 * XREFs of ?UpdateTaskbarExistenceForMonitor@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801208E0
 * Callers:
 *     ?MonitorAdded@XamlTaskbarManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x180120860 (-MonitorAdded@XamlTaskbarManager@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?DisplaySettingsChange@XamlTaskbarManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801208A0 (-DisplaySettingsChange@XamlTaskbarManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180120A24 (-CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?DestroyTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180120B04 (-DestroyTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?count@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@V?$_Uhash_compare@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@6@$0A@@std@@@std@@QEBA_KAEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x18012141C (-count@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V-$ComPtr@UIXamlTas.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlTaskbarManager::UpdateTaskbarExistenceForMonitor(
        RTL_SRWLOCK *this,
        struct IImmersiveMonitor *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  void (__fastcall *v6)(struct IImmersiveMonitor *); // rax
  bool v7; // bl
  int Taskbar; // eax
  __int64 v9; // rdx
  bool v10; // bl
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+50h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v14; // [rsp+60h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h] BYREF

  wil::srwlock::lock_exclusive(this + 33, &SRWLock);
  if ( this[7].Ptr )
  {
    v4 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6F,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_13;
    }
    v14 = a2;
    v6 = *(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL);
    if ( v13 )
    {
      v6(a2);
      v7 = std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::count(
             &this[9],
             &v14) == 0;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 16LL))(a2);
      if ( v7 )
      {
        Taskbar = XamlTaskbarManager::CreateTaskbar((XamlTaskbarManager *)this, a2);
        v5 = Taskbar;
        if ( Taskbar >= 0 )
          goto LABEL_13;
        v9 = 117LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
          (const char *)(unsigned int)Taskbar);
        goto LABEL_13;
      }
    }
    else
    {
      v6(a2);
      v10 = std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::count(
              &this[9],
              &v14) != 0;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 16LL))(a2);
      if ( v10 )
      {
        Taskbar = XamlTaskbarManager::DestroyTaskbar((XamlTaskbarManager *)this, a2);
        v5 = Taskbar;
        if ( Taskbar >= 0 )
          goto LABEL_13;
        v9 = 124LL;
        goto LABEL_11;
      }
    }
  }
  v5 = 0;
LABEL_13:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v5;
}
