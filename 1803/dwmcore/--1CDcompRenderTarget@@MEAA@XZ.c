/*
 * XREFs of ??1CDcompRenderTarget@@MEAA@XZ @ 0x1800DA48C
 * Callers:
 *     ??_ECDcompRenderTarget@@MEAAPEAXI@Z @ 0x1800DA450 (--_ECDcompRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 */

void __fastcall CDcompRenderTarget::~CDcompRenderTarget(CDcompRenderTarget *this)
{
  *(_QWORD *)this = &CDcompRenderTarget::`vftable';
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 7));
  CResource::~CResource(this);
}
