/*
 * XREFs of RtlpRecordBootStatusData @ 0x1800EAEBC
 * Callers:
 *     RtlRestoreBootStatusDefaults @ 0x1800EABE0 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800EAD84 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     NtPowerInformation @ 0x1800A0C90 (NtPowerInformation.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpRecordBootStatusData(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v9[4]; // [rsp+30h] [rbp-28h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[0] = a2;
  v9[1] = a4;
  v9[2] = a3;
  LODWORD(v9[3]) = 1;
  if ( a1 )
    HIDWORD(v9[3]) |= 1u;
  return NtPowerInformation();
}
