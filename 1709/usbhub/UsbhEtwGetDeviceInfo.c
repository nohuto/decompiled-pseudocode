/*
 * XREFs of UsbhEtwGetDeviceInfo @ 0x1C001FF38
 * Callers:
 *     UsbhEtwLogDevicePowerEvent @ 0x1C0004E6C (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhBusConnectPdo @ 0x1C001B7E0 (UsbhBusConnectPdo.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C001FE2C (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C0058F78 (UsbhEtwLogDeviceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhEtwGetDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = *(_QWORD *)(a1 + 1152);
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 1400);
  *(_WORD *)(a2 + 10) = *(_WORD *)(a1 + 1402);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 2680);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 2684);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 2688);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 2692);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 2696);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 2700);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 2704);
  result = *(unsigned int *)(a1 + 1160);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
