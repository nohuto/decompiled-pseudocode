/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x1405AC0A4
 * Callers:
 *     PoClearTransitionMarker @ 0x1405ABF50 (PoClearTransitionMarker.c)
 *     RtlGetSystemBootStatus @ 0x1405AC050 (RtlGetSystemBootStatus.c)
 *     RtlGetSystemBootStatusEx @ 0x1405AC080 (RtlGetSystemBootStatusEx.c)
 *     PopRecordPhysicalPowerButton @ 0x1406F55C8 (PopRecordPhysicalPowerButton.c)
 *     PopWriteBsdPowerTransition @ 0x1406F5A28 (PopWriteBsdPowerTransition.c)
 *     RtlSetSystemBootStatus @ 0x140723590 (RtlSetSystemBootStatus.c)
 *     RtlSetSystemBootStatusEx @ 0x1407235C0 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     ZwPowerInformation @ 0x14017E4A0 (ZwPowerInformation.c)
 */

__int64 __fastcall RtlpSystemBootStatusRequest(unsigned int a1, __int64 a2, unsigned int a3, void *a4)
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
