/*
 * XREFs of ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180082370
 * Callers:
 *     ?OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180082130 (-OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___ @ 0x180081338 (CApplicationFrameService--_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180094544 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180129B24 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180129B24.c)
 */

__int64 __fastcall CApplicationFrameService::GetFrameByWindow(
        CApplicationFrameService *this,
        __int64 a2,
        struct IApplicationFrameProxy **a3)
{
  int FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f; // ebx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _DWORD *v9; // r9
  _DWORD *v10; // rcx
  struct IApplicationFrameProxy *v11; // r8
  __int64 v13; // r9
  struct IApplicationFrameProxy *v14; // rcx
  struct IApplicationFrameProxy *v15; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v15);
  FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f = CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___(
                                                            (_QWORD *)this - 5,
                                                            a2,
                                                            &v15);
  if ( FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f >= 0 )
  {
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_7342f6ea_5b75_4f66_8b08_e40f686d2b41, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      v14 = v15;
      *a3 = v15;
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v14 + 8LL))(v14);
      FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f = 0;
      goto LABEL_7;
    }
    if ( InlineIsEqualGUID(v8, v9) || InlineIsEqualGUID(v10, &GUID_143715d9_a015_40ea_b695_d5cc267e36ee) )
    {
      *a3 = v11;
      FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f = 0;
    }
    else
    {
      FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::CanCastTo(
                                                                (char *)v11 + 8,
                                                                v13,
                                                                a3);
      if ( FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f < 0 )
        goto LABEL_7;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
LABEL_7:
  Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v15);
  return (unsigned int)FrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f;
}
