/*
 * XREFs of ??0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z @ 0x1801A3588
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CHolographicInteropTexture *__fastcall CHolographicInteropTexture::CHolographicInteropTexture(
        CHolographicInteropTexture *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CHolographicInteropTexture::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicInteropTexture::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 8) = &CHolographicInteropTexture::`vftable'{for `IHolographicInteropTexture'};
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 26) = (char *)this + 216;
  *((_DWORD *)this + 54) = 0;
  InitializeSRWLock((PSRWLOCK)this + 35);
  return this;
}
