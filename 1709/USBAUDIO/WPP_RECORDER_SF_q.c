/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0001008
 * Callers:
 *     DeviceCreate @ 0x1C0001AA0 (DeviceCreate.c)
 *     DeviceRemove @ 0x1C0001D50 (DeviceRemove.c)
 *     USBCaptureProcessPin @ 0x1C00053F0 (USBCaptureProcessPin.c)
 *     DeviceStart @ 0x1C0013270 (DeviceStart.c)
 *     DeviceStop @ 0x1C0013450 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1C0013570 (DeviceSurpriseRemoval.c)
 *     PinCreate @ 0x1C00144D0 (PinCreate.c)
 *     PinClose @ 0x1C0014870 (PinClose.c)
 *     PinProcess @ 0x1C0014900 (PinProcess.c)
 *     USBType1RenderCreatePin @ 0x1C0020940 (USBType1RenderCreatePin.c)
 *     USBType1RenderClosePin @ 0x1C0020AF0 (USBType1RenderClosePin.c)
 *     USBType1SurpriseRemove @ 0x1C0020B90 (USBType1SurpriseRemove.c)
 *     USBCaptureCreatePin @ 0x1C0020F10 (USBCaptureCreatePin.c)
 *     USBCaptureClosePin @ 0x1C0021190 (USBCaptureClosePin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va, 8LL, 0LL);
}
