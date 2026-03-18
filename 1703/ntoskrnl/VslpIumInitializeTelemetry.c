/*
 * XREFs of VslpIumInitializeTelemetry @ 0x140825458
 * Callers:
 *     VslpIumPhase4Initialize @ 0x140167AFC (VslpIumPhase4Initialize.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwUnregister @ 0x140589010 (EtwUnregister.c)
 *     TraceLoggingRegisterEx @ 0x14058919C (TraceLoggingRegisterEx.c)
 */

char VslpIumInitializeTelemetry()
{
  char result; // al
  unsigned int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rax
  _DWORD v6[4]; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  _DWORD *v8; // [rsp+60h] [rbp+7h]
  int v9; // [rsp+68h] [rbp+Fh]
  int v10; // [rsp+6Ch] [rbp+13h]
  __int64 v11; // [rsp+70h] [rbp+17h]
  _DWORD v12[2]; // [rsp+78h] [rbp+1Fh] BYREF
  _DWORD *v13; // [rsp+80h] [rbp+27h]
  int v14; // [rsp+88h] [rbp+2Fh]
  int v15; // [rsp+8Ch] [rbp+33h]

  result = TraceLoggingRegisterEx(&stru_14033C7D0, 0LL, 0LL);
  if ( (*(_DWORD *)(KeLoaderBlock_0 + 264) & 1) != 0 )
  {
    if ( stru_14033C7D0.LevelPlus1 <= 5 )
      goto LABEL_5;
    result = TlgKeywordOn(&stru_14033C7D0, 0x400000000000uLL);
    if ( result )
    {
      v3 = *(_QWORD *)(v2 + 240);
      v6[0] = (v1 >> 2) & 1;
      v4 = *(unsigned __int16 *)(v3 + 2432);
      v5 = *(_QWORD *)(v3 + 2440);
      v10 = 0;
      v12[1] = 0;
      v15 = 0;
      v11 = v5;
      v13 = v6;
      v8 = v12;
      v9 = 2;
      v12[0] = v4;
      v14 = 4;
      result = TlgWrite(&stru_14033C7D0, &unk_1402ABA56, 0LL, 0LL, 5u, &pData);
    }
  }
  if ( stru_14033C7D0.LevelPlus1 > 5 )
  {
    result = TlgKeywordOn(&stru_14033C7D0, 0x400000000000uLL);
    if ( result )
    {
      v10 = 0;
      v6[0] = (unsigned __int8)VslVsmEnabled;
      v8 = v6;
      v9 = 4;
      result = TlgWrite(&stru_14033C7D0, &unk_1402ABA31, 0LL, 0LL, 3u, &pData);
    }
  }
LABEL_5:
  if ( !VslVsmEnabled )
  {
    result = EtwUnregister(stru_14033C7D0.RegHandle);
    stru_14033C7D0.RegHandle = 0LL;
    stru_14033C7D0.LevelPlus1 = 0;
  }
  return result;
}
