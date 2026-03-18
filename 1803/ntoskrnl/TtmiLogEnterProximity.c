/*
 * XREFs of TtmiLogEnterProximity @ 0x140775FD0
 * Callers:
 *     TtmpEnterProximity @ 0x140772324 (TtmpEnterProximity.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14006F0F0 (_TlgKeywordOn.c)
 *     PsGetProcessSessionIdEx @ 0x1400BD230 (PsGetProcessSessionIdEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall TtmiLogEnterProximity(int a1)
{
  int ProcessSessionId; // eax
  int v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( stru_140861840.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140861840, 1uLL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v8 = 0;
      v11 = 0;
      v3 = ProcessSessionId;
      v6 = &v3;
      v9 = &v4;
      v4 = a1;
      v7 = 4;
      v10 = 4;
      TlgWrite(&stru_140861840, &unk_14030D533, 0LL, 0LL, 4u, &pData);
    }
  }
}
