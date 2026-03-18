/*
 * XREFs of TtmiLogSessionDeviceAssignmentPolicySet @ 0x1406DC630
 * Callers:
 *     TtmInitCurrentSession @ 0x1406D8F38 (TtmInitCurrentSession.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x1406DA634 (TtmpDispatchSetDefaultDeviceAssignment.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall TtmiLogSessionDeviceAssignmentPolicySet(char a1)
{
  int ProcessSessionId; // eax
  char v3; // [rsp+30h] [rbp-78h] BYREF
  int v4; // [rsp+34h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *v6; // [rsp+60h] [rbp-48h]
  int v7; // [rsp+68h] [rbp-40h]
  int v8; // [rsp+6Ch] [rbp-3Ch]
  char *v9; // [rsp+70h] [rbp-38h]
  int v10; // [rsp+78h] [rbp-30h]
  int v11; // [rsp+7Ch] [rbp-2Ch]

  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407AC710, 1uLL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v8 = 0;
      v11 = 0;
      v4 = ProcessSessionId;
      v6 = &v4;
      v9 = &v3;
      v3 = a1;
      v7 = 4;
      v10 = 1;
      TlgWrite(&stru_1407AC710, &unk_1402AE735, 0LL, 0LL, 4u, &pData);
    }
  }
}
