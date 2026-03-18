/*
 * XREFs of ?IsActive@DXGADAPTER@@QEBAHXZ @ 0x1C0015A90
 * Callers:
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AB090 (DxgkIsVirtualizationDisabledForTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DXGADAPTER::IsActive(DXGADAPTER *this)
{
  return *((_DWORD *)this + 44) == 1;
}
