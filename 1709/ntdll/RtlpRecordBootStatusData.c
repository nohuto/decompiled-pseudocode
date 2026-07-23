/*
 * XREFs of RtlpRecordBootStatusData @ 0x1800EAEBC
 * Callers:
 *     RtlRestoreBootStatusDefaults @ 0x1800EABE0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800EAD84 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     NtPowerInformation @ 0x1800A0C90 (NtPowerInformation.c)
 *     memset @ 0x1800A6C80 (memset.c)
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
  return NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
}
