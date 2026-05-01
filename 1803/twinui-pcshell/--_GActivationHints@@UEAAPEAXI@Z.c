/*
 * XREFs of ??_GActivationHints@@UEAAPEAXI@Z @ 0x1802B0EF0
 * Callers:
 *     ??_EActivationHints@@WCI@EAAPEAXI@Z @ 0x1800AEC10 (--_EActivationHints@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800F5B20 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801048B4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ?_Tidy@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXXZ @ 0x1802B150C (-_Tidy@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXXZ.c)
 */

ActivationHints *__fastcall ActivationHints::`scalar deleting destructor'(ActivationHints *this, char a2)
{
  std::vector<ActivationHints::Hint>::_Tidy((char *)this + 160);
  *((_DWORD *)this + 37) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  CImmersiveShellComponent::~CImmersiveShellComponent((ActivationHints *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
