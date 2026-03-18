/*
 * XREFs of DxgkCreateDevice @ 0x1C00B5D80
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00B5930 (-DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 */

__int64 __fastcall DxgkCreateDevice(struct _D3DKMT_CREATEDEVICE *a1, __int64 a2, __int64 a3)
{
  return DxgkCreateDeviceInternal(a1, 0LL, a3);
}
