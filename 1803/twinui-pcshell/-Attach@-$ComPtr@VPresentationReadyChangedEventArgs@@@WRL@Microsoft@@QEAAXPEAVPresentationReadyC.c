/*
 * XREFs of ?Attach@?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@QEAAXPEAVPresentationReadyChangedEventArgs@@@Z @ 0x1801B6828
 * Callers:
 *     ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAVPresentationReadyChangedEventArgs@@$$QEA_N@Z @ 0x1801B4E84 (--$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ??$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEAE@Details@WRL@Microsoft@@YAJPEAPEAVPresentationReadyChangedEventArgs@@AEAE@Z @ 0x1801BB160 (--$MakeAndInitialize@VPresentationReadyChangedEventArgs@@V1@AEAE@Details@WRL@Microsoft@@YAJPEAPE.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIPresentationReadyChangedEventArgs@Holographic@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180237690 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmB_ea_180237690.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::Release(v4);
  *a1 = a2;
  return result;
}
