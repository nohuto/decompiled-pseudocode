/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIXamlTaskbarManagerInternal@@UIXamlTaskbarManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveMonitorNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014BC20
 * Callers:
 *     ?XamlTaskbarManager_CreateInstance@@YAJPE$AAVXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z @ 0x18014B6C8 (-XamlTaskbarManager_CreateInstance@@YAJPE$AAVXamlExplorerHost@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIXamlTaskbarManagerInternal@@UIXamlTaskbarManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveMonitorNotification@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014C6B0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18014C6B0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIXamlTaskbarManagerInternal@@UIXamlTaskbarManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveMonitorNotification@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014C6C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18014C6C0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IXamlTaskbarManagerInternal,IXamlTaskbarManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveMonitorNotification,Microsoft::WRL::FtmBase>::QueryInterface(
        char *a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  char v4; // r9
  char v5; // al
  char *v6; // rcx
  int v7; // edi

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
      *a3 = a1;
      v5 = 1;
    }
    else
    {
      v5 = 0;
    }
    if ( v5
      || (*(_DWORD *)a2 != -367568090
       || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_ea175b26_b96d_4201_9c1d_48bb4eb1892a.Data2
       || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_ea175b26_b96d_4201_9c1d_48bb4eb1892a.Data4
       || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_ea175b26_b96d_4201_9c1d_48bb4eb1892a.Data4[4]
        ? (void *)(v4 = 0)
        : (*a3 = a1),
          v4) )
    {
      v7 = 0;
    }
    else
    {
      v6 = a1 + 8;
      if ( *(_DWORD *)a2 == -1811144131
        && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
        && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
        && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
      {
        *a3 = v6;
        v7 = 0;
      }
      else
      {
        v7 = -2147467262;
        if ( (int)Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v6 + 8), (const struct _GUID *)a2, a3) >= 0 )
          v7 = 0;
      }
      if ( v7 < 0 )
        return (unsigned int)v7;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v7;
  }
  *a3 = a1;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
