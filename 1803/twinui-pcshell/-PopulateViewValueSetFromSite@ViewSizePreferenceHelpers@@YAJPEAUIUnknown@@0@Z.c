/*
 * XREFs of ?PopulateViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@0@Z @ 0x1802B4D8C
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x1802B4540 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802B49B8 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 *     ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802B525C (-SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Founda.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewSizePreferenceHelpers::PopulateViewValueSetFromSite(
        IUnknown *punk,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  struct Windows::Foundation::Collections::IPropertySet **v5; // r8
  int ViewValueSetFromSite; // eax
  struct Windows::Foundation::Collections::IPropertySet *v7; // r8
  unsigned int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown v12; // [rsp+50h] [rbp+18h] BYREF

  v12.lpVtbl = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  ViewValueSetFromSite = ViewSizePreferenceHelpers::GetViewValueSetFromSite(punk, &v12, v5);
  v8 = ViewValueSetFromSite;
  if ( ViewValueSetFromSite >= 0 )
  {
    if ( !v12.lpVtbl
      || (ViewValueSetFromSite = ViewSizePreferenceHelpers::SetViewValueSet(
                                   (ViewSizePreferenceHelpers *)a2,
                                   (struct IUnknown *)v12.lpVtbl,
                                   v7),
          v8 = ViewValueSetFromSite,
          ViewValueSetFromSite >= 0) )
    {
      v8 = 0;
      goto LABEL_8;
    }
    v9 = 324LL;
  }
  else
  {
    v9 = 321LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"internal\\onecoreuapshell\\inc\\ViewSizePreference.h",
    (const char *)(unsigned int)ViewValueSetFromSite);
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v8;
}
