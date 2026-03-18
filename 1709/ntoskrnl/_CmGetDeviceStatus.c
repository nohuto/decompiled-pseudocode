/*
 * XREFs of _CmGetDeviceStatus @ 0x140529914
 * Callers:
 *     PiCMDeviceAction @ 0x14044E39C (PiCMDeviceAction.c)
 *     PiCMSetProblem @ 0x14044E740 (PiCMSetProblem.c)
 *     PiCMValidateDeviceInstance @ 0x140530010 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x140530950 (PiCMGetDeviceStatus.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14054F964 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140551654 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiCMQueryRemove @ 0x14057468C (PiCMQueryRemove.c)
 *     PiCMDeleteDevice @ 0x1406CF9C8 (PiCMDeleteDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406D0308 (PiCMGenerateDeviceInstance.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140528154 (_NtPlugPlayGetDeviceStatus.c)
 */

__int64 __fastcall CmGetDeviceStatus(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int a7)
{
  _DWORD *v7; // r14
  char v8; // bl
  _DWORD *v9; // r15
  int inited; // esi
  UNICODE_STRING v16; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF

  v7 = a5;
  v8 = 0;
  v9 = a6;
  *a4 = 0;
  v17 = 0;
  *v7 = 0;
  *v9 = 0;
  inited = RtlInitUnicodeStringEx(&v16, a2);
  if ( inited >= 0 )
  {
    inited = NtPlugPlayGetDeviceStatus(a1, (__int64)&v16, (__int64)a4, (__int64)v7, (__int64)v9);
    if ( inited >= 0 )
    {
      a7 = 4;
      if ( !(unsigned int)CmGetDeviceRegProp(a1, (__int64)a2, a3, 11, (__int64)&a5, (__int64)&v17, (__int64)&a7, 0)
        && a7 >= 4
        && (_DWORD)a5 == 4 )
      {
        v8 = v17;
      }
      if ( (v8 & 4) != 0 )
        *a4 |= 0x10u;
      if ( (*a4 & 0x400) == 0 && (v8 & 0x40) != 0 )
      {
        *a4 |= 0x400u;
        *v7 = 28;
      }
    }
  }
  return (unsigned int)inited;
}
