/*
 * XREFs of ??2?$DXGQUOTAALLOCATOR@$00$0HDGCEDEG@@@SAPEAX_K@Z @ 0x1C0050EC0
 * Callers:
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C0050FD4 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C0051F80 (-Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourc.c)
 * Callees:
 *     <none>
 */

PVOID DXGQUOTAALLOCATOR<1,1935819590>::operator new()
{
  return ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x28uLL, 0x73624346u);
}
