/*
 * XREFs of ?UpdateTaskbarExistenceForMonitor@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18014AE30
 * Callers:
 *     ?MonitorAdded@XamlTaskbarManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18014ADB0 (-MonitorAdded@XamlTaskbarManager@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?DisplaySettingsChange@XamlTaskbarManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18014ADF0 (-DisplaySettingsChange@XamlTaskbarManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18014AF78 (-CreateTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?DestroyTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18014B05C (-DestroyTaskbar@XamlTaskbarManager@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?count@?$_Hash@V?$_Umap_traits@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@V?$_Uhash_compare@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@U?$hash@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@std@@U?$equal_to@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@5@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V?$ComPtr@UIXamlTaskbarProxyInternal@@@23@@std@@@6@$0A@@std@@@std@@QEBA_KAEBV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x18014B968 (-count@-$_Hash@V-$_Umap_traits@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@V-$ComPtr@UIXamlTas.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlTaskbarManager::UpdateTaskbarExistenceForMonitor(
        RTL_SRWLOCK *this,
        struct IImmersiveMonitor *a2)
{
  RTL_SRWLOCK *v4; // rbp
  int v5; // eax
  unsigned int v6; // ebx
  void (__fastcall *v7)(struct IImmersiveMonitor *); // rax
  __int64 v8; // rbx
  int Taskbar; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v15; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v16; // [rsp+68h] [rbp+20h]

  v4 = this + 35;
  AcquireSRWLockExclusive(this + 35);
  v16 = v4;
  if ( this[9].Ptr )
  {
    v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v14);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6F,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_13;
    }
    v15 = a2;
    v7 = *(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL);
    if ( v14 )
    {
      v7(a2);
      v8 = std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::count(
             &this[11],
             &v15);
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 16LL))(a2);
      if ( !v8 )
      {
        Taskbar = XamlTaskbarManager::CreateTaskbar((XamlTaskbarManager *)this, a2);
        v6 = Taskbar;
        if ( Taskbar >= 0 )
          goto LABEL_13;
        v10 = 117LL;
LABEL_11:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
          (const char *)(unsigned int)Taskbar);
        goto LABEL_13;
      }
    }
    else
    {
      v7(a2);
      v11 = std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::count(
              &this[11],
              &v15);
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 16LL))(a2);
      if ( v11 )
      {
        Taskbar = XamlTaskbarManager::DestroyTaskbar((XamlTaskbarManager *)this, a2);
        v6 = Taskbar;
        if ( Taskbar >= 0 )
          goto LABEL_13;
        v10 = 124LL;
        goto LABEL_11;
      }
    }
  }
  v6 = 0;
LABEL_13:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v6;
}
