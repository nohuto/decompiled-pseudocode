/*
 * XREFs of TtmiLogSessionSetCsSessionGoalStart @ 0x140777318
 * Callers:
 *     TtmpSetCsSessionGoal @ 0x1407738D4 (TtmpSetCsSessionGoal.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     PsGetProcessSessionIdEx @ 0x1400BD230 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall TtmiLogSessionSetCsSessionGoalStart(char a1, int a2)
{
  int ProcessSessionId; // eax
  char v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  int v7; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  char *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  int *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  if ( stru_140861840.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140861840, 1uLL) )
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
      TlgWrite(&stru_140861840, &unk_14030CF6D, 0LL, 0LL, 5u, &pData);
    }
  }
}
