/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801CDC70
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@WJI@EAAKXZ @ 0x1801CECE0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActi_ea_1801CECE0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@WJA@EAAKXZ @ 0x1801CED70 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActi_ea_1801CED70.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBBI@EAAKXZ @ 0x1801CEDC0 (-AddRef@CLaunchActivatedEventArgs@@WBBI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WCA@EAAKXZ @ 0x1801CEDE0 (-AddRef@CLaunchActivatedEventArgs@@WCA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBBA@EAAKXZ @ 0x1801CEE70 (-AddRef@CLaunchActivatedEventArgs@@WBBA@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBI@EAAKXZ @ 0x1801CEEA0 (-AddRef@CLaunchActivatedEventArgs@@WBI@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@WKA@EAAKXZ @ 0x1801CEF20 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActi_ea_1801CEF20.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@WOA@EAAKXZ @ 0x1801CEF70 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActi_ea_1801CEF70.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@W7EAAKXZ @ 0x1801CEFF0 (-AddRef@CLaunchActivatedEventArgs@@W7EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WCI@EAAKXZ @ 0x1801CF000 (-AddRef@CLaunchActivatedEventArgs@@WCI@EAAKXZ.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@WII@EAAKXZ @ 0x1801CF100 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActi_ea_1801CF100.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@@Details@WRL@Microsoft@@WOI@EAAKXZ @ 0x1801CF180 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActi_ea_1801CF180.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBAI@EAAKXZ @ 0x1801CF1E0 (-AddRef@CLaunchActivatedEventArgs@@WBAI@EAAKXZ.c)
 *     ?AddRef@CLaunchActivatedEventArgs@@WBA@EAAKXZ @ 0x1801CF220 (-AddRef@CLaunchActivatedEventArgs@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 296);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 296), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
