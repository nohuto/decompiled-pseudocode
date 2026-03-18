/*
 * XREFs of PfSnLogScenarioDecision @ 0x14057FA6C
 * Callers:
 *     PfSnBeginScenario @ 0x140453178 (PfSnBeginScenario.c)
 *     PfSnBeginAppLaunch @ 0x14057F874 (PfSnBeginAppLaunch.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall PfSnLogScenarioDecision(__int64 a1, int a2, __int16 a3, char a4, char a5, char a6, __int64 a7)
{
  _UNKNOWN **v7; // rax
  __int64 v11; // rax
  char v13; // [rsp+38h] [rbp-81h] BYREF
  char v14; // [rsp+39h] [rbp-80h] BYREF
  __int16 v15; // [rsp+3Ch] [rbp-7Dh] BYREF
  __int16 v16; // [rsp+40h] [rbp-79h] BYREF
  int v17; // [rsp+44h] [rbp-75h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-71h] BYREF
  __int64 v19; // [rsp+58h] [rbp-61h]
  int v20; // [rsp+60h] [rbp-59h]
  int v21; // [rsp+64h] [rbp-55h]
  __int64 v22; // [rsp+68h] [rbp-51h]
  __int64 v23; // [rsp+70h] [rbp-49h]
  int *v24; // [rsp+78h] [rbp-41h]
  __int64 v25; // [rsp+80h] [rbp-39h]
  __int16 *v26; // [rsp+88h] [rbp-31h]
  __int64 v27; // [rsp+90h] [rbp-29h]
  char *v28; // [rsp+98h] [rbp-21h]
  __int64 v29; // [rsp+A0h] [rbp-19h]
  char *v30; // [rsp+A8h] [rbp-11h]
  __int64 v31; // [rsp+B0h] [rbp-9h]
  char *v32; // [rsp+B8h] [rbp-1h]
  __int64 v33; // [rsp+C0h] [rbp+7h]
  int *v34; // [rsp+C8h] [rbp+Fh]
  __int64 v35; // [rsp+D0h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+47h] BYREF
  int v37; // [rsp+110h] [rbp+57h] BYREF

  v7 = &retaddr;
  v37 = a2;
  if ( RegHandle )
  {
    LOBYTE(v7) = EtwEventEnabled(RegHandle, &PfSnEvt_ScenarioDecision_Info);
    if ( (_BYTE)v7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(a1 + 2 * v11) );
      v15 = v11;
      UserData.Ptr = (ULONGLONG)&v15;
      v20 = 2 * (unsigned __int16)v11;
      v22 = a1 + 60;
      v24 = &v37;
      v26 = &v16;
      v28 = &v13;
      v14 = a5;
      v30 = &v14;
      v32 = &a6;
      *(_QWORD *)&UserData.Size = 2LL;
      v19 = a1;
      v21 = 0;
      v23 = 4LL;
      v25 = 4LL;
      v16 = a3;
      v27 = 2LL;
      v13 = a4;
      v29 = 1LL;
      v31 = 1LL;
      v33 = 4LL;
      if ( a7 < 0 )
        v17 = -(a7 != -1) - 1;
      else
        v17 = a7 / 10000000;
      v34 = &v17;
      v35 = 4LL;
      LOBYTE(v7) = EtwWrite(RegHandle, &PfSnEvt_ScenarioDecision_Info, 0LL, 9u, &UserData);
    }
  }
  return (char)v7;
}
