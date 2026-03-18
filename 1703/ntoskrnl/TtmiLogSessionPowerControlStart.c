/*
 * XREFs of TtmiLogSessionPowerControlStart @ 0x1406DC974
 * Callers:
 *     TtmpSessionPowerControl @ 0x1406D9984 (TtmpSessionPowerControl.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x140072E20 (PsGetProcessSessionIdEx.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall TtmiLogSessionPowerControlStart(char a1, int a2)
{
  int ProcessSessionId; // eax
  char v5; // [rsp+30h] [rbp-29h] BYREF
  int v6; // [rsp+34h] [rbp-25h] BYREF
  int v7; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v9; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+68h] [rbp+Fh]
  int v11; // [rsp+6Ch] [rbp+13h]
  char *v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  int *v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]

  if ( stru_1407AC710.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407AC710, 1uLL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v6 = ProcessSessionId;
      v9 = &v6;
      v12 = &v5;
      v15 = &v7;
      v5 = a1;
      v7 = a2;
      v10 = 4;
      v13 = 1;
      v16 = 4;
      TlgWrite(&stru_1407AC710, &unk_1402AE0E9, 0LL, 0LL, 5u, &pData);
    }
  }
}
