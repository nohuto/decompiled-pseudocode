/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800809F0
 * Callers:
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1800432E0 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180044950 (-GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180044B40 (-GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z.c)
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18008071C (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIImmersiveApplicationArrayPrivate@@UIImmersiveApplicationArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIImmersiveApplicationArray2@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A2F70 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800A2F70.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rcx
  __int64 *v5; // r8
  __int64 v6; // r10
  _DWORD *v7; // r9
  int v8; // r11d

  v3 = 0;
  *a3 = 0LL;
  if ( *(_QWORD *)a2 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
    if ( !InlineIsEqualGUID(a2, &GUID_05581915_c410_44c8_819a_f310f6c0ffee)
      && !InlineIsEqualGUID(v4, &GUID_c6ed6dac_8fac_4598_a74c_69020137149c) )
    {
      if ( v8 != 773384899
        || v7[1] != *(_DWORD *)&GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34.Data2
        || v7[2] != *(_DWORD *)GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34.Data4
        || v7[3] != *(_DWORD *)&GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34.Data4[4] )
      {
        return (unsigned int)-2147467262;
      }
      v6 += 8LL;
    }
    *v5 = v6;
    a1 = *v5;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
