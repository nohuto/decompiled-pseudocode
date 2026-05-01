/*
 * XREFs of ??_GCCommonApplicationViewArrangePosition@@UEAAPEAXI@Z @ 0x18008B5A0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewArrangePositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008B1B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCo_ea_18008B1B0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCommonApplicationViewArrangePosition *__fastcall CCommonApplicationViewArrangePosition::`scalar deleting destructor'(
        CCommonApplicationViewArrangePosition *this,
        char a2)
{
  *((_DWORD *)this + 21) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
