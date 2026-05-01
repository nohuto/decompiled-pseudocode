/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UITaskbarLayoutParserTest@@UIPWSLayoutParser@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CE990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<ITaskbarLayoutParserTest,IPWSLayoutParser,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        _QWORD *a1,
        _DWORD *a2,
        _QWORD **a3)
{
  unsigned int v3; // ebx
  char v5; // cl
  char v6; // al

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(_QWORD *, _DWORD *, _QWORD **, _QWORD *))(*a1 + 8LL))(a1, a2, a3, a1);
  }
  else
  {
    v5 = 1;
    if ( *a2 == 1533597374
      && a2[1] == *(_DWORD *)&GUID_5b68d6be_adc1_487a_be26_e36adc82b19e.Data2
      && a2[2] == *(_DWORD *)GUID_5b68d6be_adc1_487a_be26_e36adc82b19e.Data4
      && a2[3] == *(_DWORD *)&GUID_5b68d6be_adc1_487a_be26_e36adc82b19e.Data4[4] )
    {
      v6 = 1;
      *a3 = a1;
    }
    else
    {
      v6 = 0;
    }
    if ( v6
      || (*a2 != -632175622
       || a2[1] != *(_DWORD *)&GUID_da51c3fa_dc0e_44eb_976a_3b7becd00205.Data2
       || a2[2] != *(_DWORD *)GUID_da51c3fa_dc0e_44eb_976a_3b7becd00205.Data4
       || a2[3] != *(_DWORD *)&GUID_da51c3fa_dc0e_44eb_976a_3b7becd00205.Data4[4]
        ? (_QWORD *)(v5 = 0)
        : (*a3 = a1),
          v5) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD **, _QWORD *))(**a3 + 8LL))(*a3, **a3, a3, a1);
    }
    else
    {
      return (unsigned int)-2147467262;
    }
  }
  return v3;
}
