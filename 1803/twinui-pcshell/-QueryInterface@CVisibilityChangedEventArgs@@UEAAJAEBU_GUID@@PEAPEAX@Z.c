/*
 * XREFs of ?QueryInterface@CVisibilityChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E3A0
 * Callers:
 *     ?QueryInterface@CVisibilityChangedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4AD0 (-QueryInterface@CVisibilityChangedEventArgs@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVisibilityChangedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A4AE0 (-QueryInterface@CVisibilityChangedEventArgs@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007B230 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Mu.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisibilityChangedEventArgs::QueryInterface(
        CVisibilityChangedEventArgs *this,
        struct _GUID *a2,
        void **a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  __int64 *v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r11
  _DWORD *v13; // rcx
  __int64 *v14; // r8
  int v15; // ebx
  __int64 (__fastcall *v16)(__int64); // rax

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_b27335b3_309e_40d6_8ed5_36dda0289f16) )
  {
    *v8 = v9;
LABEL_13:
    v15 = 0;
LABEL_9:
    v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL);
    if ( v16 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::AddRef )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::AddRef(v9);
    else
      v16(v9);
    return (unsigned int)v15;
  }
  if ( InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v11 = v12;
    goto LABEL_13;
  }
  if ( InlineIsEqualGUID(v10, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90)
    || InlineIsEqualGUID(v13, &GUID_00000003_0000_0000_c000_000000000046) )
  {
    *v14 = v9;
    v15 = 0;
  }
  else
  {
    v15 = -2147467262;
    v9 = 0LL;
  }
  if ( v15 >= 0 )
    goto LABEL_9;
  return (unsigned int)v15;
}
