/*
 * XREFs of UsbDevice_GetEndpointOffloadInformation @ 0x1C00324BC
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0031C40 (UsbDevice_EndpointsConfigureCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Interrupter_InitializeForOffload @ 0x1C0017924 (Interrupter_InitializeForOffload.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1C003FC54 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall UsbDevice_GetEndpointOffloadInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 DeviceContextBufferVA; // rax
  __int64 v12; // r10
  int v13; // r9d
  __int64 v14; // rdx

  result = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  v8 = *(_QWORD *)(result + 128);
  if ( *(_DWORD *)(result + 532) == 1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8LL * *(unsigned int *)(v8 + 64));
    result = Interrupter_InitializeForOffload(v4);
  }
  v9 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    while ( 1 )
    {
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v9),
                 off_1C004B1D8);
      if ( *(unsigned __int8 *)(result + 98) == *(_WORD *)(a3 + 4) )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)(a2 + 24) )
        return result;
    }
    v10 = a1 + 568;
    if ( !*(_BYTE *)(a1 + 609) )
      v10 = a1 + 560;
    DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(v10);
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 532LL);
    *(_DWORD *)(a3 + 10) = v13;
    *(_BYTE *)(a3 + 14) = *(_BYTE *)(DeviceContextBufferVA + 6);
    *(_DWORD *)(a3 + 14) ^= (*(_DWORD *)(a3 + 14) ^ (*(_DWORD *)DeviceContextBufferVA << 8)) & 0xFFFFF00;
    *(_DWORD *)(a3 + 14) = (*(_DWORD *)DeviceContextBufferVA << 8) ^ (*(_DWORD *)(a3 + 14) ^ (*(_DWORD *)DeviceContextBufferVA << 8)) & 0xFFFFFFF;
    *(_BYTE *)(a3 + 18) = *(_BYTE *)(DeviceContextBufferVA + 12);
    *(_BYTE *)(a3 + 19) = *(_BYTE *)(a1 + 135);
    result = (*(_DWORD *)(a3 + 18) ^ (*(_DWORD *)DeviceContextBufferVA >> 9)) & 0x10000;
    *(_DWORD *)(a3 + 18) ^= result;
    if ( v13 == 1 )
    {
      v14 = *(_QWORD *)(v12 + 88);
      *(_QWORD *)(a3 + 22) = *(_QWORD *)(*(_QWORD *)(v14 + 176) + 24LL);
      *(_QWORD *)(a3 + 38) = *(unsigned int *)(*(_QWORD *)(v14 + 176) + 44LL);
      *(_QWORD *)(a3 + 30) = *(_QWORD *)(*(_QWORD *)(v14 + 176) + 16LL);
      *(_DWORD *)(a3 + 46) = *(_DWORD *)(v14 + 200);
      *(_DWORD *)(a3 + 50) = *(_DWORD *)(v8 + 64);
      *(_QWORD *)(a3 + 54) = *(_QWORD *)(*(_QWORD *)(v4 + 144) + 24LL);
      *(_QWORD *)(a3 + 70) = *(unsigned int *)(*(_QWORD *)(v4 + 144) + 44LL);
      *(_QWORD *)(a3 + 62) = *(_QWORD *)(*(_QWORD *)(v4 + 144) + 16LL);
      result = *(unsigned int *)(v4 + 120);
      *(_DWORD *)(a3 + 78) = result;
    }
  }
  return result;
}
