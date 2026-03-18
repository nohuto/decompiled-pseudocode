/*
 * XREFs of XilCoreUsbDevice_GetDeviceContextBufferSize @ 0x1C003FC40
 * Callers:
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C003F978 (XilCoreDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilCoreUsbDevice_GetDeviceContextBufferSize(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
    return *(unsigned int *)(result + 44);
  return result;
}
