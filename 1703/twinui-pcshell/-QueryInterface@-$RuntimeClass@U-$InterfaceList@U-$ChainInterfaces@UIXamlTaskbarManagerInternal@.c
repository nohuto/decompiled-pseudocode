/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIXamlTaskbarManagerInternal@@UIXamlTaskbarManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180121700
 * Callers:
 *     ?XamlTaskbarManager_CreateInstance@@YAJPE$AAVXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x18012113C (-XamlTaskbarManager_CreateInstance@@YAJPE$AAVXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIXamlTaskbarManagerInternal@@UIXamlTaskbarManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180122160 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIXamlTaskbarMan_ea_180122160.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIXamlTaskbarManagerInternal@@UIXamlTaskbarManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180122170 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIXamlTaskbarMan_ea_180122170.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IXamlTaskbarManagerInternal,IXamlTaskbarManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        char *a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  char v4; // r9
  char v5; // al
  char *v6; // rcx
  int CanCastTo; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    v4 = 1;
    if ( *(_DWORD *)a2 == 1243123725
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_4a18900d_2219_4123_8afb_e733c16a2e33.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_4a18900d_2219_4123_8afb_e733c16a2e33.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_4a18900d_2219_4123_8afb_e733c16a2e33.Data4[4] )
    {
      v5 = 1;
      *a3 = a1;
    }
    else
    {
      v5 = 0;
    }
    if ( !v5 )
    {
      if ( *(_DWORD *)a2 == -367568090
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_ea175b26_b96d_4201_9c1d_48bb4eb1892a.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_ea175b26_b96d_4201_9c1d_48bb4eb1892a.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_ea175b26_b96d_4201_9c1d_48bb4eb1892a.Data4[4] )
      {
        *a3 = a1;
      }
      else
      {
        v4 = 0;
      }
      if ( !v4 )
      {
        v6 = a1 + 8;
        if ( *(_DWORD *)a2 != -1811144131
          || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
          || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
          || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
        {
          CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(
                        (Microsoft::WRL::FtmBase *)(v6 + 8),
                        (const struct _GUID *)a2,
                        a3);
          if ( CanCastTo < 0 )
            return (unsigned int)CanCastTo;
          goto LABEL_26;
        }
        *a3 = v6;
      }
    }
    CanCastTo = 0;
LABEL_26:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
