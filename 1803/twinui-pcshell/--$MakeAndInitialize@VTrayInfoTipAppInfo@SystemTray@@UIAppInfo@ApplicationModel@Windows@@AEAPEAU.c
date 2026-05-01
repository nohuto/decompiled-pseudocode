/*
 * XREFs of ??$MakeAndInitialize@VTrayInfoTipAppInfo@SystemTray@@UIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@@Z @ 0x180262CD4
 * Callers:
 *     ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x1802632D0 (-FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@Applicat.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18008F2D4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0TrayInfoTipAppInfo@SystemTray@@QEAA@XZ @ 0x180262F88 (--0TrayInfoTipAppInfo@SystemTray@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@ApplicationModel@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180263BD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApp_ea_180263BD0.c)
 *     ?RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x180264E3C (-RuntimeClassInitialize@TrayInfoTipAppInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipAppInfo,Windows::ApplicationModel::IAppInfo,HSTRING__ * &>(
        SystemTray::TrayInfoTipAppInfo **a1,
        HSTRING *a2)
{
  SystemTray::TrayInfoTipAppInfo *v4; // rax
  int CanCastTo; // ebx
  SystemTray::TrayInfoTipAppInfo *v6; // rdi
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // r9
  _DWORD *v10; // rdx

  *a1 = 0LL;
  v4 = (SystemTray::TrayInfoTipAppInfo *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v6 = (SystemTray::TrayInfoTipAppInfo *)SystemTray::TrayInfoTipAppInfo::TrayInfoTipAppInfo(v4);
  CanCastTo = SystemTray::TrayInfoTipAppInfo::RuntimeClassInitialize(v6, *a2);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_cf7f59b3_6a09_4de8_a6c0_5792d56880d1, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v6;
      (*(void (__fastcall **)(SystemTray::TrayInfoTipAppInfo *))(*(_QWORD *)v6 + 8LL))(v6);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v8, v9) )
      {
        *a1 = v6;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                      (__int64)v6 + 8,
                      v10,
                      a1);
        if ( CanCastTo < 0 )
          goto LABEL_11;
      }
      (*(void (__fastcall **)(SystemTray::TrayInfoTipAppInfo *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
  }
LABEL_11:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppInfo,Microsoft::WRL::FtmBase>::Release(v6);
  return (unsigned int)CanCastTo;
}
