/*
 * XREFs of _CmGetDeviceStatus @ 0x1404E7B28
 * Callers:
 *     _CmIsDeviceSafeRemovalRequired @ 0x1404E5E60 (_CmIsDeviceSafeRemovalRequired.c)
 *     PiCMValidateDeviceInstance @ 0x1404E6C28 (PiCMValidateDeviceInstance.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1404E6E2C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetDeviceStatus @ 0x1404E812C (PiCMGetDeviceStatus.c)
 *     PiCMQueryRemove @ 0x140597828 (PiCMQueryRemove.c)
 *     PiCMDeleteDevice @ 0x1406A46F0 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x1406A4EA8 (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x1406A532C (PiCMGenerateDeviceInstance.c)
 *     PiCMSetProblem @ 0x1406A5CDC (PiCMSetProblem.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     _CmGetDeviceRegProp @ 0x1404831A0 (_CmGetDeviceRegProp.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1404E7ED4 (_NtPlugPlayGetDeviceStatus.c)
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
  NTSTATUS inited; // esi
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
    inited = NtPlugPlayGetDeviceStatus(a1, (unsigned int)&v16, (_DWORD)a4, (_DWORD)v7, (__int64)v9);
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
