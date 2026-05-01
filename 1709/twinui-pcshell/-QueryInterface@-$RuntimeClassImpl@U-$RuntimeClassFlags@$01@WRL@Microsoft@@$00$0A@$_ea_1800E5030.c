/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIPenWorkspaceDiscoverBroker@@UIImmersiveShellComponent@@UIWindowManagementInputUsageEvents@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E5030
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIPenWorkspaceDiscoverBroker@@UIImmersiveShellComponent@@UIWindowManagementInputUsageEvents@@@Details@WRL@Microsoft@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E62A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800E62A0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIPenWorkspaceDiscoverBroker@@UIImmersiveShellComponent@@UIWindowManagementInputUsageEvents@@@Details@WRL@Microsoft@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E62C0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800E62C0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIPenWorkspaceDiscoverBroker@@UIImmersiveShellComponent@@UIWindowManagementInputUsageEvents@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E6320 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800E6320.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IPenWorkspaceDiscoverBroker,IImmersiveShellComponent,IWindowManagementInputUsageEvents>::QueryInterface(
        Microsoft::WRL::FtmBase *a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // r8
  int v7; // edi
  __int64 v8; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( (int)Microsoft::WRL::FtmBase::CanCastTo(a1, (const struct _GUID *)a2, a3) >= 0 )
    {
      v7 = 0;
      goto LABEL_25;
    }
    v8 = v5 + 40;
    if ( *v4 == -2074983017
      && v4[1] == *(_DWORD *)&GUID_84524597_b734_4d3f_8b25_f753513d08cf.Data2
      && v4[2] == *(_DWORD *)GUID_84524597_b734_4d3f_8b25_f753513d08cf.Data4
      && v4[3] == *(_DWORD *)&GUID_84524597_b734_4d3f_8b25_f753513d08cf.Data4[4]
      || (v8 += 8LL, *v4 == -428157847)
      && v4[1] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data2
      && v4[2] == *(_DWORD *)GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4
      && v4[3] == *(_DWORD *)&GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4.Data4[4] )
    {
      *v6 = v8;
    }
    else
    {
      if ( *v4 != 1437680378
        || v4[1] != *(_DWORD *)&GUID_55b142fa_6422_4dcb_af06_171e657c7bb2.Data2
        || v4[2] != *(_DWORD *)GUID_55b142fa_6422_4dcb_af06_171e657c7bb2.Data4
        || v4[3] != *(_DWORD *)&GUID_55b142fa_6422_4dcb_af06_171e657c7bb2.Data4[4] )
      {
        v7 = -2147467262;
LABEL_24:
        if ( v7 < 0 )
          return (unsigned int)v7;
LABEL_25:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 8LL))(*v6);
        return (unsigned int)v7;
      }
      *v6 = v8 + 8;
    }
    v7 = 0;
    goto LABEL_24;
  }
  *a3 = a1;
  (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
