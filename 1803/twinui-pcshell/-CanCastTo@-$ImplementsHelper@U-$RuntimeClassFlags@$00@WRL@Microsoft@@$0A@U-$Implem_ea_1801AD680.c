/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewHostItemEventArgsBase@@@Details@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801AD680
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewHostItemEventArgsBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AF9D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1801AF9D0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewHostItemEventArgsBase>,IWeakReferenceSource>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  void **v2; // r8
  const struct _GUID *v3; // r10
  __int64 v4; // r11
  __int64 result; // rax
  _QWORD *v6; // r8
  _DWORD *v7; // r10
  __int64 v8; // r11

  if ( InlineIsEqualGUID(a2, &GUID_fd9e009a_061f_45df_a623_54eb80d770a5) )
  {
    *v2 = (void *)v4;
    return 0LL;
  }
  result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v4 + 8), v3, v2);
  if ( (_DWORD)result == -2147467262 )
    result = 2147500034LL;
  if ( (_DWORD)result == -2147467262 )
  {
    if ( *v7 == 56
      && v7[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && v7[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && v7[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      *v6 = v8 + 64;
      return 0LL;
    }
    return 2147500034LL;
  }
  return result;
}
