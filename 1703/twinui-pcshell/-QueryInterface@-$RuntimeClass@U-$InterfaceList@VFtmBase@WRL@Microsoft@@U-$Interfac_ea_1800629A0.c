/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIApplicationFrameWrapper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800629A0
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIApplicationFrameWrapper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180062B00 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$Interfac_ea_180062B00.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002438 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IApplicationFrameWrapper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        Microsoft::WRL::FtmBase *a1,
        __int64 a2,
        void **a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  int CanCastTo; // edi
  _QWORD *v7; // r8

  v3 = 0;
  *a3 = 0LL;
  if ( *(_DWORD *)a2
    || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || *(_DWORD *)(a2 + 8) != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(a1, (const struct _GUID *)a2, a3);
    if ( CanCastTo < 0 )
    {
      if ( *v4 != 335815980
        || v4[1] != *(_DWORD *)&GUID_1404252c_1e59_462d_b5c1_9cbe30e85f19.Data2
        || v4[2] != *(_DWORD *)GUID_1404252c_1e59_462d_b5c1_9cbe30e85f19.Data4
        || v4[3] != *(_DWORD *)&GUID_1404252c_1e59_462d_b5c1_9cbe30e85f19.Data4[4] )
      {
        return (unsigned int)-2147467262;
      }
      CanCastTo = 0;
      *v7 = v5 + 24;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    return (unsigned int)CanCastTo;
  }
  *a3 = a1;
  (*(void (__fastcall **)(Microsoft::WRL::FtmBase *))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
