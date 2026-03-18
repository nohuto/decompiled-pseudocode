/*
 * XREFs of DxgkCreateContextVirtualInternal @ 0x1C009E810
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C001C1E4 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C004B2C0 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 * Callees:
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00A12D8 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtualInternal(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1)
{
  return DxgkCreateContextVirtualImpl(a1, 0);
}
