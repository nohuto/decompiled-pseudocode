/*
 * XREFs of UsbDevice_GetEndpointOffloadInformation @ 0x1C00349D4
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0034130 (UsbDevice_EndpointsConfigureCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     XilUsbDevice_GetDeviceContextBufferVA @ 0x1C00333D0 (XilUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_GetEndpointOffloadInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v8; // r14
  __int64 DeviceContextBufferVA; // rax
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    while ( 1 )
    {
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v4),
                 off_1C004E1D8);
      v8 = result;
      if ( *(unsigned __int8 *)(result + 98) == *(_WORD *)(a3 + 4) )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(a2 + 24) )
        return result;
    }
    DeviceContextBufferVA = XilUsbDevice_GetDeviceContextBufferVA(a1);
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 524LL);
    *(_DWORD *)(a3 + 10) = v10;
    *(_BYTE *)(a3 + 14) = *(_BYTE *)(DeviceContextBufferVA + 6);
    *(_DWORD *)(a3 + 14) ^= (*(_DWORD *)(a3 + 14) ^ (*(_DWORD *)DeviceContextBufferVA << 8)) & 0xFFFFF00;
    *(_DWORD *)(a3 + 14) = (*(_DWORD *)DeviceContextBufferVA << 8) ^ (*(_DWORD *)(a3 + 14) ^ (*(_DWORD *)DeviceContextBufferVA << 8)) & 0xFFFFFFF;
    *(_BYTE *)(a3 + 18) = *(_BYTE *)(DeviceContextBufferVA + 12);
    *(_BYTE *)(a3 + 19) = *(_BYTE *)(a1 + 135);
    result = (*(_DWORD *)(a3 + 18) ^ (*(_DWORD *)DeviceContextBufferVA >> 9)) & 0x10000;
    *(_DWORD *)(a3 + 18) ^= result;
    if ( v10 == 1 )
    {
      v11 = *(_QWORD *)(v8 + 88);
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 128LL);
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8LL * *(unsigned int *)(v12 + 64));
      *(_QWORD *)(a3 + 22) = *(_QWORD *)(*(_QWORD *)(v11 + 176) + 24LL);
      *(_QWORD *)(a3 + 38) = *(unsigned int *)(*(_QWORD *)(v11 + 176) + 44LL);
      *(_QWORD *)(a3 + 30) = *(_QWORD *)(*(_QWORD *)(v11 + 176) + 16LL);
      *(_DWORD *)(a3 + 46) = *(_DWORD *)(v11 + 200);
      *(_DWORD *)(a3 + 50) = *(_DWORD *)(v12 + 64);
      *(_QWORD *)(a3 + 54) = *(_QWORD *)(*(_QWORD *)(v13 + 144) + 24LL);
      *(_QWORD *)(a3 + 70) = *(unsigned int *)(*(_QWORD *)(v13 + 144) + 44LL);
      *(_QWORD *)(a3 + 62) = *(_QWORD *)(*(_QWORD *)(v13 + 144) + 16LL);
      result = *(unsigned int *)(v13 + 120);
      *(_DWORD *)(a3 + 78) = result;
    }
  }
  return result;
}
