/*
 * XREFs of DxgkCreateDevice @ 0x1C00F6B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCreateDevice(struct _D3DKMT_CREATEDEVICE *a1)
{
  return DxgkCreateDeviceInternal(a1, 0LL);
}
