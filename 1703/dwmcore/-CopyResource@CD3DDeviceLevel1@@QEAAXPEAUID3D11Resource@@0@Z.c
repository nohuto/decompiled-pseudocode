/*
 * XREFs of ?CopyResource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@0@Z @ 0x1800CDE40
 * Callers:
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z @ 0x1800CEC60 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?CacheFrame@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z @ 0x1801A4F70 (-CacheFrame@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DDeviceLevel1::CopyResource(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        struct ID3D11Resource *a3)
{
  (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *, struct ID3D11Resource *))(**((_QWORD **)this + 81) + 376LL))(
    *((_QWORD *)this + 81),
    a2,
    a3);
}
