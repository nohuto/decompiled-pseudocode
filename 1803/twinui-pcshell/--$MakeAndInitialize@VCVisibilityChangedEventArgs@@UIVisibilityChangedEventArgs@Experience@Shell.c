/*
 * XREFs of ??$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18007E220
 * Callers:
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18007B970 (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x1801583DC (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     ?OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ @ 0x1801652DC (-OnVisibilityChanged@CToastCenterExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007B230 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Mu.c)
 *     ??0CVisibilityChangedEventArgs@@QEAA@XZ @ 0x18007E4A4 (--0CVisibilityChangedEventArgs@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007E550 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVis_ea_18007E550.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18008F2D4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVisibilityChangedEventArgs,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,>(
        __int64 *a1)
{
  CVisibilityChangedEventArgs *v2; // rax
  CVisibilityChangedEventArgs *v3; // rax
  CVisibilityChangedEventArgs *v4; // rbx
  _DWORD *v5; // rcx
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  __int64 v8; // rdx
  int CanCastTo; // edi
  void (*v10)(void); // rax

  *a1 = 0LL;
  v2 = (CVisibilityChangedEventArgs *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v3 = CVisibilityChangedEventArgs::CVisibilityChangedEventArgs(v2);
  *a1 = 0LL;
  v4 = v3;
  if ( InlineIsEqualGUID(&GUID_b27335b3_309e_40d6_8ed5_36dda0289f16, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = (__int64)v4;
    (*(void (__fastcall **)(CVisibilityChangedEventArgs *))(*(_QWORD *)v4 + 8LL))(v4);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v6, v7) )
    {
      *a1 = (__int64)v4;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    (char *)v4 + 8,
                    v8);
      if ( CanCastTo < 0 )
        goto LABEL_8;
    }
    v10 = *(void (**)(void))(*(_QWORD *)*a1 + 8LL);
    if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::AddRef )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::AddRef(*a1);
    else
      v10();
  }
LABEL_8:
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(v4);
  return (unsigned int)CanCastTo;
}
