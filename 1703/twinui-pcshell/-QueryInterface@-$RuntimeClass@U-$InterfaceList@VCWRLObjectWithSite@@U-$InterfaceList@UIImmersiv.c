/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@UIImmersiveCharmsWindowManager@@U?$InterfaceList@UICharmWindowManagerInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003BC70
 * Callers:
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@UIImmersiveCharmsWindowManager@@U?$InterfaceList@UICharmWindowManagerInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003BE90 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceLi_ea_18003BE90.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@UIImmersiveCharmsWindowManager@@U?$InterfaceList@UICharmWindowManagerInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003BEC0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceLi_ea_18003BEC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<IImmersiveCharmsWindowManager,Microsoft::WRL::Details::InterfaceList<ICharmWindowManagerInternal,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // edi
  int v5; // ecx
  unsigned int v6; // ebx
  __int64 v7; // r9

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -62389853
      && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      v5 = 1;
      *a3 = a1;
    }
    else
    {
      v5 = 0;
    }
    v6 = v5 == 0 ? 0x80004002 : 0;
    if ( !v5 )
    {
      v7 = a1 + 16;
      if ( *a2 == 891065648
        && a2[1] == *(_DWORD *)&GUID_351c9530_3568_4ec4_bb33_9e2dc0ffee84.Data2
        && a2[2] == *(_DWORD *)GUID_351c9530_3568_4ec4_bb33_9e2dc0ffee84.Data4
        && a2[3] == *(_DWORD *)&GUID_351c9530_3568_4ec4_bb33_9e2dc0ffee84.Data4[4] )
      {
        *a3 = v7;
        v6 = 0;
        goto LABEL_25;
      }
      if ( *a2 == -1411766756
        && a2[1] == *(_DWORD *)&GUID_abda261c_6cda_4269_9160_4a16fbc0ffee.Data2
        && a2[2] == *(_DWORD *)GUID_abda261c_6cda_4269_9160_4a16fbc0ffee.Data4
        && a2[3] == *(_DWORD *)&GUID_abda261c_6cda_4269_9160_4a16fbc0ffee.Data4[4] )
      {
        v6 = 0;
        *a3 = v7 + 8;
      }
      else
      {
        v6 = -2147467262;
      }
    }
    if ( (v6 & 0x80000000) != 0 )
      return v6;
LABEL_25:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return v6;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a1);
  return v3;
}
