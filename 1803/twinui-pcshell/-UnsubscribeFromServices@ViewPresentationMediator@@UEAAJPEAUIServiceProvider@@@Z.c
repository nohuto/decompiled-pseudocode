/*
 * XREFs of ?UnsubscribeFromServices@ViewPresentationMediator@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801F6D70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShellWindowGrouping@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801F6AE8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShellWindowGrouping@@@wil@@CAX_NW.c)
 */

__int64 __fastcall ViewPresentationMediator::UnsubscribeFromServices(
        ViewPresentationMediator *this,
        struct IServiceProvider *a2)
{
  __int64 *v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v2 = (__int64 *)((char *)this + 160);
  v4 = *((_QWORD *)this + 20);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v4 + 64LL))(
      v4,
      ((unsigned __int64)this + 80) & -(__int64)(this != (ViewPresentationMediator *)40));
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)*v2 + 120LL))(
      *v2,
      ((unsigned __int64)this + 88) & -(__int64)(this != (ViewPresentationMediator *)40));
    wil::Feature<__WilFeatureTraits_Feature_TabShellWindowGrouping>::ReportUsageToService(v6, v5, v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  }
  return 0LL;
}
