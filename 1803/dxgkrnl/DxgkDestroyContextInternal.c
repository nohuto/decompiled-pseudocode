/*
 * XREFs of DxgkDestroyContextInternal @ 0x1C009E7F8
 * Callers:
 *     ??1CAdapter@@IEAA@XZ @ 0x1C00141B0 (--1CAdapter@@IEAA@XZ.c)
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C001C1E4 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z @ 0x1C004B620 (-FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z.c)
 * Callees:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C00A0DF8 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 */

__int64 __fastcall DxgkDestroyContextInternal(const struct _D3DKMT_DESTROYCONTEXT *a1)
{
  return DxgkDestroyContextImpl(a1, 0);
}
