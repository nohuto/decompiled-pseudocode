/*
 * XREFs of ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180036A78
 * Callers:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x1800CB878 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnect.c)
 * Callees:
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x180064E04 (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebu.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  *((_DWORD *)this + 348) = 0;
  *(_QWORD *)this = &CCrossThreadComposition::`vftable';
  *((_DWORD *)this + 346) = 37120;
  *((_DWORD *)this + 347) = 37120;
  *((_DWORD *)this + 349) = 0;
  *((_QWORD *)this + 172) = (*(__int64 (__fastcall **)(struct ICompositorScheduler *))(*(_QWORD *)a3 + 80LL))(a3);
  return this;
}
