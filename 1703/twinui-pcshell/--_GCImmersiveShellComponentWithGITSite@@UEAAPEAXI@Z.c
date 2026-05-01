/*
 * XREFs of ??_GCImmersiveShellComponentWithGITSite@@UEAAPEAXI@Z @ 0x18001757C
 * Callers:
 *     ??_ECImmersiveShellComponentWithGITSite@@WCA@EAAPEAXI@Z @ 0x18001C6D0 (--_ECImmersiveShellComponentWithGITSite@@WCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x1800173E4 (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CImmersiveShellComponentWithGITSite *__fastcall CImmersiveShellComponentWithGITSite::`scalar deleting destructor'(
        CImmersiveShellComponentWithGITSite *this,
        char a2)
{
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
