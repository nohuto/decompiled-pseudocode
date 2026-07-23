/*
 * XREFs of sub_1800839FC @ 0x1800839FC
 * Callers:
 *     RtlSetSystemBootStatus @ 0x1800839D0 (RtlSetSystemBootStatus.c)
 *     RtlGetSystemBootStatus @ 0x1800E6D30 (RtlGetSystemBootStatus.c)
 *     RtlGetSystemBootStatusEx @ 0x1800E6D60 (RtlGetSystemBootStatusEx.c)
 *     RtlSetSystemBootStatusEx @ 0x1800E6EE0 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     ZwPowerInformation @ 0x18009B690 (ZwPowerInformation.c)
 */

__int64 __fastcall sub_1800839FC(unsigned int a1, __int64 a2, unsigned int a3, void *a4)
{
  ULONG OutputBufferLength; // r10d
  unsigned int v6; // ecx
  unsigned __int64 v8; // rax
  _QWORD InputBuffer[5]; // [rsp+30h] [rbp-28h] BYREF

  OutputBufferLength = 0;
  if ( !a4 )
    goto LABEL_2;
  v8 = 4LL * a3;
  OutputBufferLength = -1;
  if ( v8 <= 0xFFFFFFFF )
    OutputBufferLength = 4 * a3;
  v6 = v8 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v8 <= 0xFFFFFFFF )
  {
LABEL_2:
    InputBuffer[2] = a2;
    InputBuffer[1] = a3;
    InputBuffer[0] = a1;
    return (unsigned int)ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, a4, OutputBufferLength);
  }
  return v6;
}
