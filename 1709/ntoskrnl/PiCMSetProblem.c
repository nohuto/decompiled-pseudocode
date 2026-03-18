/*
 * XREFs of PiCMSetProblem @ 0x14044E740
 * Callers:
 *     PiCMDeviceAction @ 0x14044E39C (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x1406D0C14 (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x14017FDE0 (ZwPlugPlayControl.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _CmGetDeviceStatus @ 0x140529914 (_CmGetDeviceStatus.c)
 */

NTSTATUS __fastcall PiCMSetProblem(PCWSTR SourceString, int a2, int a3)
{
  NTSTATUS result; // eax
  int v7; // edi
  _BYTE v8[8]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE DestinationString[40]; // [rsp+48h] [rbp-28h] BYREF
  int v10; // [rsp+A0h] [rbp+30h] BYREF
  int v11; // [rsp+A8h] [rbp+38h] BYREF

  v10 = 0;
  v11 = 0;
  if ( (unsigned int)(a3 - 1) > 1 )
    return -1073741811;
  result = CmGetDeviceStatus(PiPnpRtlCtx, (_DWORD)SourceString, 0, (unsigned int)&v11, (__int64)&v10, (__int64)v8);
  if ( result >= 0 )
  {
    v7 = v10;
    if ( a2 && (v11 & 0x400) != 0 && v10 != a2 && a3 != 2 )
      return -1073741811;
    memset(DestinationString, 0, sizeof(DestinationString));
    RtlInitUnicodeString((PUNICODE_STRING)DestinationString, SourceString);
    *(_DWORD *)&DestinationString[20] = 1024;
    if ( a2 )
    {
      *(_DWORD *)&DestinationString[16] = 1;
      *(_DWORD *)&DestinationString[24] = a2;
    }
    else
    {
      *(_DWORD *)&DestinationString[16] = 2;
      *(_DWORD *)&DestinationString[24] = v7;
    }
    return ZwPlugPlayControl(PlugPlayControlDeviceStatus, DestinationString, 0x28u);
  }
  return result;
}
