/*
 * XREFs of ??0CGdiSpriteBitmap@@IEAA@PEAVCComposition@@@Z @ 0x1800938CC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CGdiSpriteBitmap *__fastcall CGdiSpriteBitmap::CGdiSpriteBitmap(CGdiSpriteBitmap *this, struct CComposition *a2)
{
  CGdiSpriteBitmap *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CGdiSpriteBitmap::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CGdiSpriteBitmap::`vftable'{for `ISpriteImage'};
  *((_QWORD *)this + 8) = &CGdiSpriteBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = (char *)this + 200;
  *((_QWORD *)this + 22) = (char *)this + 200;
  *((_DWORD *)this + 46) = 1;
  *(_QWORD *)((char *)this + 188) = 1LL;
  *((_QWORD *)this + 26) = (char *)this + 216;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 35) = &CRegionShape::`vftable';
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 78) = 1065353216;
  *((_DWORD *)this + 79) = 1065353216;
  *((_DWORD *)this + 80) = 1065353216;
  *(_QWORD *)((char *)this + 324) = 1065353216LL;
  result = this;
  *(_QWORD *)((char *)this + 332) = 0LL;
  *((_DWORD *)this + 85) = 0;
  *((_BYTE *)this + 344) = 0;
  *((_DWORD *)this + 22) = 87;
  *((_DWORD *)this + 24) = 0;
  return result;
}
