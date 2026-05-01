/*
 * XREFs of ?RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180039990
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18004BEDC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpGameModeUnapplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  int v10; // eax
  int v11; // [rsp+30h] [rbp-29h] BYREF
  int v12; // [rsp+34h] [rbp-25h] BYREF
  int v13; // [rsp+38h] [rbp-21h] BYREF
  __int64 v14; // [rsp+40h] [rbp-19h] BYREF
  __int64 v15; // [rsp+48h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  int *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  int *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]
  int *v23; // [rsp+90h] [rbp+37h]
  int v24; // [rsp+98h] [rbp+3Fh]
  int v25; // [rsp+9Ch] [rbp+43h]

  if ( (*((_BYTE *)a1 + 149) & 1) == 0 )
  {
    v15 = 0LL;
    v14 = 0LL;
    HIDWORD(v15) = *((_DWORD *)a1 + 12);
    v3 = *((_DWORD *)a1 + 15);
    LODWORD(v14) = 16;
    LODWORD(v15) = v3;
    if ( (int)D3DKMTSetYieldPercentage(&v14) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    v15 = 0LL;
    v14 = 0LL;
    v15 = *(_QWORD *)((char *)a1 + 52);
    LODWORD(v14) = 16;
    if ( (int)D3DKMTSetMemoryBudgetTarget(&v14, v4, v5, v6) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v10 = *((_DWORD *)a1 + 12);
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v11 = v10;
        v17 = &v11;
        v12 = *((_DWORD *)a1 + 13);
        v20 = &v12;
        v13 = *((_DWORD *)a1 + 14);
        v23 = &v13;
        v18 = (int)v9;
        v21 = (int)v9;
        v24 = (int)v9;
        TlgWrite(v7, &unk_1800582FA, v8, v9, 5u, &pData);
      }
    }
  }
}
