/*
 * XREFs of _CmGetDeviceStatus @ 0x140585D34
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140584DD4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetDeviceStatus @ 0x140585B84 (PiCMGetDeviceStatus.c)
 *     PiCMValidateDeviceInstance @ 0x1405C664C (PiCMValidateDeviceInstance.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1405E2A54 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpDevCfgProcessDevices @ 0x1406246C4 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x140737184 (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x140737610 (PiCMGenerateDeviceInstance.c)
 *     PiCMQueryRemove @ 0x140737E40 (PiCMQueryRemove.c)
 *     PiCMSetProblem @ 0x1407385C4 (PiCMSetProblem.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x140585FB4 (_NtPlugPlayGetDeviceStatus.c)
 */

__int64 __fastcall CmGetDeviceStatus(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        int *a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int a7)
{
  _DWORD *v7; // r14
  char v8; // bl
  _DWORD *v9; // r15
  NTSTATUS inited; // esi
  int v15; // edx
  UNICODE_STRING v17; // [rsp+40h] [rbp-38h] BYREF
  int v18; // [rsp+98h] [rbp+20h] BYREF

  v7 = a5;
  v8 = 0;
  v9 = a6;
  *a4 = 0;
  v18 = 0;
  *v7 = 0;
  *v9 = 0;
  inited = RtlInitUnicodeStringEx(&v17, a2);
  if ( inited >= 0 )
  {
    inited = NtPlugPlayGetDeviceStatus(a1, (unsigned int)&v17, (_DWORD)a4, (_DWORD)v7, (__int64)v9);
    if ( inited >= 0 )
    {
      a7 = 4;
      if ( !(unsigned int)CmGetDeviceRegProp(a1, (__int64)a2, a3, 11, (__int64)&a5, (__int64)&v18, (__int64)&a7, 0)
        && a7 >= 4
        && (_DWORD)a5 == 4 )
      {
        v8 = v18;
      }
      v15 = *a4;
      if ( (v8 & 4) != 0 )
      {
        v15 |= 0x10u;
        *a4 = v15;
      }
      if ( (v15 & 0x400) == 0 && (v8 & 0x40) != 0 )
      {
        *a4 = v15 | 0x400;
        *v7 = 28;
      }
    }
  }
  return (unsigned int)inited;
}
