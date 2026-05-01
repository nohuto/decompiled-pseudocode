/*
 * XREFs of ?RmpGameModeUnapplyPriorityClass@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180039AC0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18004BEDC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpGameModeUnapplyPriorityClass(struct _RM_GAME_MODE_CONTEXT *a1, HANDLE *a2)
{
  char *v3; // rdi
  int v4; // edx
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  NTSTATUS v8; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  NTSTATUS *v11; // [rsp+60h] [rbp+7h]
  int v12; // [rsp+68h] [rbp+Fh]
  int v13; // [rsp+6Ch] [rbp+13h]
  int *v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+7Ch] [rbp+23h]
  char *v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]
  char *v20; // [rsp+90h] [rbp+37h]
  int v21; // [rsp+98h] [rbp+3Fh]
  int v22; // [rsp+9Ch] [rbp+43h]

  v3 = (char *)(a2 + 19);
  v8 = NtSetInformationProcess(a2[5], ProcessPriorityClass, a2 + 19, 2u);
  if ( v8 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v11 = &v8;
      v9 = *((_DWORD *)a2 + 23);
      v14 = &v9;
      v20 = (char *)a2 + 153;
      v12 = (int)v7;
      v15 = (int)v7;
      v17 = v3;
      v18 = v4;
      v21 = v4;
      TlgWrite(v5, &unk_180058121, v6, v7, 6u, &pData);
    }
  }
}
