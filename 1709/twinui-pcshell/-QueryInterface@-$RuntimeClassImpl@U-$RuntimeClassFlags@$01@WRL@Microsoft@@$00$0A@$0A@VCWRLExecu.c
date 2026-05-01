/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017C610
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18017C4C0 (-CreateInstance@-$SimpleClassFactory@VVirtualTouchpadUriHandler@@$0A@@WRL@Microsoft@@UEAAJPEAUIU.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017CB80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18017CB80.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017CBB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18017CBB0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017CBD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18017CBD0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLExecuteCommandBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  signed int v3; // ebx
  void (*v4)(void); // rax

  v3 = 0;
  *(_QWORD *)a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *(_QWORD *)a3 = a1;
    v4 = *(void (**)(void))(*(_QWORD *)a1 + 8LL);
LABEL_27:
    v4();
    return (unsigned int)v3;
  }
  if ( *a2 == 2140243376
    && a2[1] == *(_DWORD *)&GUID_7f9185b0_cb92_43c5_80a9_92277a4f7b54.Data2
    && a2[2] == *(_DWORD *)GUID_7f9185b0_cb92_43c5_80a9_92277a4f7b54.Data4
    && a2[3] == *(_DWORD *)&GUID_7f9185b0_cb92_43c5_80a9_92277a4f7b54.Data4[4]
    || (a1 += 8LL, *a2 == -514341983)
    && a2[1] == *(_DWORD *)&GUID_e157c3a1_a532_4de2_9480_1452b7426eee.Data2
    && a2[2] == *(_DWORD *)GUID_e157c3a1_a532_4de2_9480_1452b7426eee.Data4
    && a2[3] == *(_DWORD *)&GUID_e157c3a1_a532_4de2_9480_1452b7426eee.Data4[4]
    || (a1 += 8LL, *a2 == 480040379)
    && a2[1] == *(_DWORD *)&GUID_1c9cd5bb_98e9_4491_a60f_31aacc72b83c.Data2
    && a2[2] == *(_DWORD *)GUID_1c9cd5bb_98e9_4491_a60f_31aacc72b83c.Data4
    && a2[3] == *(_DWORD *)&GUID_1c9cd5bb_98e9_4491_a60f_31aacc72b83c.Data4[4] )
  {
    *(_QWORD *)a3 = a1;
  }
  else if ( *a2 == -62389853
         && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
         && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
         && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
  {
    *(_QWORD *)a3 = a1 + 8;
  }
  else
  {
    v3 = -2147467262;
  }
  v3 = (v3 >> 31) & 0x80004002;
  if ( v3 >= 0 )
  {
    v4 = *(void (**)(void))(**(_QWORD **)a3 + 8LL);
    goto LABEL_27;
  }
  return (unsigned int)v3;
}
