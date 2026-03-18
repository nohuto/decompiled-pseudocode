/*
 * XREFs of XilCoreDeviceSlot_QueryEndpointContextInfo @ 0x1C0041164
 * Callers:
 *     UsbDevice_GetEndpointState @ 0x1C0034B64 (UsbDevice_GetEndpointState.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C0034BB8 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 * Callees:
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00333D0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall XilCoreDeviceSlot_QueryEndpointContextInfo(__int64 a1, int a2, _DWORD *a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v8; // r10
  __int64 v9; // r10

  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 104LL) & 4) != 0 )
  {
    result = XilUsbDevice_GetDeviceContextBufferVA(a1);
    v8 = ((unsigned int)(a2 - 1) + 1LL) << 6;
  }
  else
  {
    result = XilUsbDevice_GetDeviceContextBufferVA(a1);
    v8 = 32 * ((unsigned int)(a2 - 1) + 1LL);
  }
  v9 = result + v8;
  if ( a3 )
  {
    result = *(_DWORD *)v9 & 7;
    *a3 = result;
  }
  if ( a4 )
  {
    result = *(_QWORD *)(v9 + 8);
    *a4 = result;
  }
  return result;
}
