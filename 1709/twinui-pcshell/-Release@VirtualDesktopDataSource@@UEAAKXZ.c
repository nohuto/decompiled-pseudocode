/*
 * XREFs of ?Release@VirtualDesktopDataSource@@UEAAKXZ @ 0x180139120
 * Callers:
 *     ?Release@VirtualDesktopDataSource@@WBA@EAAKXZ @ 0x180139280 (-Release@VirtualDesktopDataSource@@WBA@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WBI@EAAKXZ @ 0x1801392C0 (-Release@VirtualDesktopDataSource@@WBI@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@WCA@EAAKXZ @ 0x180139320 (-Release@VirtualDesktopDataSource@@WCA@EAAKXZ.c)
 *     ?Release@VirtualDesktopDataSource@@W7EAAKXZ @ 0x180139350 (-Release@VirtualDesktopDataSource@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall VirtualDesktopDataSource::Release(VirtualDesktopDataSource *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::Release(this);
}
