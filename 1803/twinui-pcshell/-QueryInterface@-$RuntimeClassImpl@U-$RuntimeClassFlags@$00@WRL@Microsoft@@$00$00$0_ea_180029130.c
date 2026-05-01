/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180029130
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180041090 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7B00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800A7B00.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7B10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800A7B10.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewEventArgsForNavigationRequest@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A7B20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800A7B20.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r10
  unsigned int v10; // ebx
  _DWORD *v11; // rcx
  _DWORD *v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(); // rax
  signed __int64 v19; // rax
  signed __int64 v20; // rtt

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0LL;
  }
  if ( InlineIsEqualGUID(v6, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57) )
  {
    *v8 = v9;
    v10 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v7, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
    {
      *v8 = v14;
      v10 = 0;
    }
    else if ( InlineIsEqualGUID(v11, &GUID_00000003_0000_0000_c000_000000000046) )
    {
      *v8 = v15;
      v10 = 0;
    }
    else
    {
      v10 = -2147467262;
    }
    if ( v10 == -2147467262 )
    {
      v16 = v13 + 64;
      if ( *v12 == 56
        && v12[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        && v12[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        && v12[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        *v8 = v16;
        v10 = 0;
        goto LABEL_23;
      }
      if ( *v12 == -1462589172
        && v12[1] == *(_DWORD *)&GUID_a8d2a90c_a403_4593_95ff_012516ae9351.Data2
        && v12[2] == *(_DWORD *)GUID_a8d2a90c_a403_4593_95ff_012516ae9351.Data4
        && v12[3] == *(_DWORD *)&GUID_a8d2a90c_a403_4593_95ff_012516ae9351.Data4[4] )
      {
        v10 = 0;
        *v8 = v16 + 8;
      }
      else
      {
        v10 = -2147467262;
      }
    }
  }
  if ( (v10 & 0x80000000) != 0 )
    return v10;
LABEL_23:
  v17 = *v8;
  v18 = *(__int64 (__fastcall **)())(*(_QWORD *)*v8 + 8LL);
  if ( v18 != Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest>::AddRef )
  {
    ((void (__fastcall *)(_QWORD))v18)(*v8);
    return v10;
  }
  v19 = *(_QWORD *)(v17 + 88);
  while ( v19 >= 0 )
  {
    if ( (_DWORD)v19 == 0x7FFFFFFF )
      return v10;
    v20 = v19;
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 88), v19 + 1, v19);
    if ( v20 == v19 )
      return v10;
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v19 + 16));
  return v10;
}
