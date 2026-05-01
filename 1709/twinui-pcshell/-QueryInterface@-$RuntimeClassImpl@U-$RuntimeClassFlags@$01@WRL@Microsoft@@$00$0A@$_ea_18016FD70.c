/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlViewHost@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016FD70
 * Callers:
 *     ??$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180170434 (--$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlViewHost@@@Details@WRL@Microsoft@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801705D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801705D0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlViewHost@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801705F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801705F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<ISnapAssistViewHost>,IXamlViewHost>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  char v4; // r9
  char v5; // al
  int v6; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    v4 = 1;
    if ( *a2 == -1237536422
      && a2[1] == *(_DWORD *)&GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4.Data2
      && a2[2] == *(_DWORD *)GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4.Data4
      && a2[3] == *(_DWORD *)&GUID_b63cb15a_d1aa_4a39_bc06_78e9843bf5c4.Data4[4] )
    {
      *a3 = a1;
      v5 = 1;
    }
    else
    {
      v5 = 0;
    }
    if ( !v5 )
    {
      if ( *a2 == 1229475324
        && a2[1] == *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data2
        && a2[2] == *(_DWORD *)GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4
        && a2[3] == *(_DWORD *)&GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9.Data4[4] )
      {
        *a3 = a1;
      }
      else
      {
        v4 = 0;
      }
      if ( !v4 )
      {
        if ( *a2 != -1811144131
          || a2[1] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data2
          || a2[2] != *(_DWORD *)GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4
          || a2[3] != *(_DWORD *)&GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270.Data4[4] )
        {
          if ( *a2 == -239769734
            && a2[1] == *(_DWORD *)&GUID_f1b5677a_51f5_46d9_9108_3d9c8201199b.Data2
            && a2[2] == *(_DWORD *)GUID_f1b5677a_51f5_46d9_9108_3d9c8201199b.Data4
            && a2[3] == *(_DWORD *)&GUID_f1b5677a_51f5_46d9_9108_3d9c8201199b.Data4[4] )
          {
            v6 = 0;
            *a3 = a1 + 120;
          }
          else
          {
            v6 = -2147467262;
          }
          if ( v6 < 0 )
            return (unsigned int)v6;
          goto LABEL_26;
        }
        *a3 = a1 + 8;
      }
    }
    v6 = 0;
LABEL_26:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v6;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
