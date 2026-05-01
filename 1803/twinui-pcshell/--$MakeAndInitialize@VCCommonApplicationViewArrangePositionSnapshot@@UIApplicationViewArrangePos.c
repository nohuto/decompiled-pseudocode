/*
 * XREFs of ??$MakeAndInitialize@VCCommonApplicationViewArrangePositionSnapshot@@UIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewArrangePosition@@AEAPEAUHWND__@@@Z @ 0x18008B228
 * Callers:
 *     ?GetPosition@CDesktopPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180021FB0 (-GetPosition@CDesktopPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPosition@HolographicPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1801AEB60 (-GetPosition@HolographicPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPosition@SurfaceHubPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1802BC970 (-GetPosition@SurfaceHubPositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetPosition@TabletModePositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1802C7140 (-GetPosition@TabletModePositioner@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewArrangePositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008B1B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCo_ea_18008B1B0.c)
 *     ?RuntimeClassInitialize@CCommonApplicationViewArrangePositionSnapshot@@QEAAJPEAUHWND__@@@Z @ 0x18008B5E0 (-RuntimeClassInitialize@CCommonApplicationViewArrangePositionSnapshot@@QEAAJPEAUHWND__@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCommonApplicationViewArrangePositionImpl@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18008B63C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCCommonApplicationViewArrangePosition.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewArrangePositionSnapshot,IApplicationViewArrangePosition,HWND__ * &>(
        void **a1,
        HWND *a2)
{
  void *v4; // rax
  __int64 v5; // rbx
  volatile int *v6; // rdx
  int CanCastTo; // edi
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  const struct _GUID *v10; // rcx

  *a1 = 0LL;
  v4 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (__int64)v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>(v4);
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewArrangePositionImpl>,Microsoft::WRL::FtmBase>>'};
    *(_QWORD *)(v5 + 48) = &CCommonApplicationViewArrangePositionSnapshot::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewArrangePositionImpl>,Microsoft::WRL::FtmBase>>'};
    CanCastTo = CCommonApplicationViewArrangePositionSnapshot::RuntimeClassInitialize(
                  (CCommonApplicationViewArrangePositionSnapshot *)v5,
                  *a2);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_3fc0257d_21c2_4ad3_8fb0_fd481cd204e2, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = (void *)v5;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        CanCastTo = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(v8, v8) || InlineIsEqualGUID(v9, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6) )
        {
          *a1 = (void *)v5;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 48), v10, a1);
          if ( CanCastTo == -2147467262 )
            CanCastTo = -2147467262;
        }
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewArrangePositionImpl,Microsoft::WRL::FtmBase>::Release(
        v5,
        v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
