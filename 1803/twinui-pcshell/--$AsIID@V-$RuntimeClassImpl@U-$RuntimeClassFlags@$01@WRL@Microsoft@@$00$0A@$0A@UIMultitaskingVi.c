/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180080664
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180080600 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitas.c)
 *     ?MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18026BA00 (-MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // r9
  _DWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r11
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  int v9; // ebx

  *a3 = 0LL;
  v3 = a1;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -1408119389
      && a2[1] == *(_DWORD *)&GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307.Data2
      && a2[2] == *(_DWORD *)GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307.Data4
      && a2[3] == *(_DWORD *)&GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307.Data4[4] )
    {
      *a3 = a1;
    }
    else
    {
      if ( !InlineIsEqualGUID(a2, &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58) )
      {
        if ( InlineIsEqualGUID(v4, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
          || InlineIsEqualGUID(v7, &GUID_00000003_0000_0000_c000_000000000046) )
        {
          *v8 = v3;
          v9 = 0;
        }
        else
        {
          v9 = -2147467262;
          v3 = 0LL;
        }
        if ( v9 < 0 )
          return (unsigned int)v9;
        goto LABEL_8;
      }
      *v5 = v6;
    }
    v9 = 0;
LABEL_8:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    return (unsigned int)v9;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a1);
  return 0LL;
}
