/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@VImmersiveShellComponentCreator@@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800051E0
 * Callers:
 *     ??$MakeAndInitialize@VPCShellImmersiveComponentCreator@@UIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180006544 (--$MakeAndInitialize@VPCShellImmersiveComponentCreator@@UIUnknown@@@Details@WRL@Microsoft@@YAJPE.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@VImmersiveShellComponentCreator@@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800066C0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@VImmersiveShellC_ea_1800066C0.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<ImmersiveShellComponentCreator,IImmersiveComponentCreator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  char v4; // r9
  char v5; // al
  int CanCastTo; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    v4 = 1;
    if ( *(_DWORD *)a2 == 401655101
      && *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_17f0c53d_fae4_44a6_9dc6_ff79f1b092c1.Data2
      && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_17f0c53d_fae4_44a6_9dc6_ff79f1b092c1.Data4
      && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_17f0c53d_fae4_44a6_9dc6_ff79f1b092c1.Data4[4] )
    {
      v5 = 1;
      *a3 = (void *)a1;
    }
    else
    {
      v5 = 0;
    }
    if ( v5
      || (*(_DWORD *)a2 != 849234178
       || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8.Data2
       || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8.Data4
       || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8.Data4[4]
        ? (void *)(v4 = 0)
        : (*a3 = (void *)a1),
          v4) )
    {
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a1 + 8), (const struct _GUID *)a2, a3);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)CanCastTo;
  }
  *a3 = (void *)a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
