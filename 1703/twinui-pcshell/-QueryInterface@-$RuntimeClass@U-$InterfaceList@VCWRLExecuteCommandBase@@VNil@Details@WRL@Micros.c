/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCWRLExecuteCommandBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180147970
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180147820 (-CreateInstance@-$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIU.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCWRLExecuteCommandBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180147F00 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCWRLExecuteCommandBase@@VNil@Detai_ea_180147F00.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCWRLExecuteCommandBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180147F20 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCWRLExecuteCommandBase@@VNil@Detai_ea_180147F20.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCWRLExecuteCommandBase@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180147F50 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCWRLExecuteCommandBase@@VNil@Detai_ea_180147F50.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLExecuteCommandBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  __int64 v5; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == 2140243376
      && a2[1] == *(_DWORD *)&GUID_7f9185b0_cb92_43c5_80a9_92277a4f7b54.Data2
      && a2[2] == *(_DWORD *)GUID_7f9185b0_cb92_43c5_80a9_92277a4f7b54.Data4
      && a2[3] == *(_DWORD *)&GUID_7f9185b0_cb92_43c5_80a9_92277a4f7b54.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
      goto LABEL_28;
    }
    v5 = a1 + 8;
    if ( *a2 == -514341983
      && a2[1] == *(_DWORD *)&GUID_e157c3a1_a532_4de2_9480_1452b7426eee.Data2
      && a2[2] == *(_DWORD *)GUID_e157c3a1_a532_4de2_9480_1452b7426eee.Data4
      && a2[3] == *(_DWORD *)&GUID_e157c3a1_a532_4de2_9480_1452b7426eee.Data4[4]
      || (v5 += 8LL, *a2 == 480040379)
      && a2[1] == *(_DWORD *)&GUID_1c9cd5bb_98e9_4491_a60f_31aacc72b83c.Data2
      && a2[2] == *(_DWORD *)GUID_1c9cd5bb_98e9_4491_a60f_31aacc72b83c.Data4
      && a2[3] == *(_DWORD *)&GUID_1c9cd5bb_98e9_4491_a60f_31aacc72b83c.Data4[4] )
    {
      *a3 = v5;
    }
    else
    {
      if ( *a2 != -62389853
        || a2[1] != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
        || a2[2] != *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
        || a2[3] != *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
      {
        v4 = -2147467262;
LABEL_27:
        if ( v4 < 0 )
          return (unsigned int)v4;
LABEL_28:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)v4;
      }
      *a3 = v5 + 8;
    }
    v4 = 0;
    goto LABEL_27;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
