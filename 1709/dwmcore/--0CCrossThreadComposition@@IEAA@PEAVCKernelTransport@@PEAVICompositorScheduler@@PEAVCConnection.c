/*
 * XREFs of ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x18012FB0C
 * Callers:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x18012FB90 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnect.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x1801271B8 (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebu.c)
 */

CCrossThreadComposition *__fastcall CCrossThreadComposition::CCrossThreadComposition(
        CCrossThreadComposition *this,
        struct CKernelTransport *a2,
        struct ICompositorScheduler *a3,
        struct CConnection *a4,
        struct CDebugFrameCounter *a5,
        struct CoRenderHost *a6)
{
  CComposition::CComposition(this, a2, a3, a4, a5, a6);
  *((_DWORD *)this + 326) = 900;
  *(_QWORD *)this = &CCrossThreadComposition::`vftable';
  *((_DWORD *)this + 332) = 37120;
  *(_QWORD *)((char *)this + 1332) = 37120LL;
  *((_DWORD *)this + 335) = 0;
  *((_BYTE *)this + 1344) = 0;
  *((_QWORD *)this + 165) = (*(__int64 (__fastcall **)(struct ICompositorScheduler *))(*(_QWORD *)a3 + 80LL))(a3);
  return this;
}
