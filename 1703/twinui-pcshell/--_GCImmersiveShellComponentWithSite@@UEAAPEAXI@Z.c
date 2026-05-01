/*
 * XREFs of ??_GCImmersiveShellComponentWithSite@@UEAAPEAXI@Z @ 0x1800ECE00
 * Callers:
 *     ??_ECImmersiveShellComponentWithSite@@WBA@EAAPEAXI@Z @ 0x1800ED580 (--_ECImmersiveShellComponentWithSite@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x1800EC0C0 (--1CImmersiveShellComponentWithSite@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CImmersiveShellComponentWithSite *__fastcall CImmersiveShellComponentWithSite::`scalar deleting destructor'(
        CImmersiveShellComponentWithSite *this,
        char a2)
{
  CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
