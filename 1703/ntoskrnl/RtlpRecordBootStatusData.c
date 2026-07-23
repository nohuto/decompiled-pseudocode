/*
 * XREFs of RtlpRecordBootStatusData @ 0x1405823F0
 * Callers:
 *     RtlpGetSetBootStatusData @ 0x140582208 (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x1405B8C9C (RtlInitializeBootStatusDataBlackBox.c)
 * Callees:
 *     ZwPowerInformation @ 0x14017EB20 (ZwPowerInformation.c)
 *     memset @ 0x140192D80 (memset.c)
 */

NTSTATUS __fastcall RtlpRecordBootStatusData(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD InputBuffer[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(InputBuffer, 0, 0x20uLL);
  InputBuffer[0] = a2;
  InputBuffer[1] = a4;
  InputBuffer[2] = a3;
  LODWORD(InputBuffer[3]) = 1;
  if ( a1 )
    HIDWORD(InputBuffer[3]) |= 1u;
  return ZwPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
}
