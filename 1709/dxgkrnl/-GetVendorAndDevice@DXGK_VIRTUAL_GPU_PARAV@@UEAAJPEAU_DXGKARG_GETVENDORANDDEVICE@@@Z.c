/*
 * XREFs of ?GetVendorAndDevice@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_GETVENDORANDDEVICE@@@Z @ 0x1C00FC400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::GetVendorAndDevice(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_GETVENDORANDDEVICE *a2)
{
  *(_DWORD *)&a2->VendorId = 9311252;
  return 0LL;
}
