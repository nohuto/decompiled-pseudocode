/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIXamlExplorerHostWindowInternal@@UIXamlExplorerHostWindow@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180149B40
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIXamlExplorerHostWindowInternal@@UIXamlExplorerHostWindow@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180149B20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180149B20.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800025E8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  char v4; // r9
  char v5; // al
  int v6; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    v4 = 1;
    if ( *(_DWORD *)a2 == 1005335054
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_3bec320e_9ff7_4998_81b5_eeda3e38768e.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_3bec320e_9ff7_4998_81b5_eeda3e38768e.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_3bec320e_9ff7_4998_81b5_eeda3e38768e.Data4[4] )
    {
      *a3 = (void *)a1;
      v5 = 1;
    }
    else
    {
      v5 = 0;
    }
    if ( v5
      || (*(_DWORD *)a2 != -1452113404
       || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_a9728204_899b_46a5_9344_43e74614d24b.Data2
       || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_a9728204_899b_46a5_9344_43e74614d24b.Data4
       || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_a9728204_899b_46a5_9344_43e74614d24b.Data4[4]
        ? (void *)(v4 = 0)
        : (*a3 = (void *)a1),
          v4) )
    {
      v6 = 0;
    }
    else
    {
      v6 = -2147467262;
      if ( (int)Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3) >= 0 )
        v6 = 0;
      if ( v6 < 0 )
        return (unsigned int)v6;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v6;
  }
  *a3 = (void *)a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
