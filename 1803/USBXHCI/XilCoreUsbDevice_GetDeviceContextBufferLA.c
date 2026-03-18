/*
 * XREFs of XilCoreUsbDevice_GetDeviceContextBufferLA @ 0x1C003FC28
 * Callers:
 *     XilUsbDevice_GetDeviceContextBufferLA @ 0x1C0030F4C (XilUsbDevice_GetDeviceContextBufferLA.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C003F978 (XilCoreDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCoreUsbDevice_GetDeviceContextBufferLA(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return *(_QWORD *)(result + 24);
  return result;
}
