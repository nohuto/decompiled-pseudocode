/*
 * XREFs of ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x18011D8E0
 * Callers:
 *     ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@@Z @ 0x1801271B8 (--0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebu.c)
 *     ??0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z @ 0x1801306A4 (--0CRenderTargetManager@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x18007E6CC (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

__int64 __fastcall DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DynArrayImpl<1>::DynArrayImpl<1>(a1, 0LL, 0, a4, 8);
  return a1;
}
