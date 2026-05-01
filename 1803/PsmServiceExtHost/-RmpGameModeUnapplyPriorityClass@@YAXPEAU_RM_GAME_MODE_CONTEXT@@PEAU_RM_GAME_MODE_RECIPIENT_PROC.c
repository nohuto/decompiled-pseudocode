/*
 * XREFs of ?RmpGameModeUnapplyPriorityClass@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180059020
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006C948 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpGameModeUnapplyPriorityClass(struct _RM_GAME_MODE_CONTEXT *a1, HANDLE *a2)
{
  char *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edx
  const struct _TlgProvider_t *v9; // rcx
  int v10; // r9d
  NTSTATUS v11; // [rsp+30h] [rbp-29h] BYREF
  int v12; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  NTSTATUS *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  int *v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  int v19; // [rsp+7Ch] [rbp+23h]
  char *v20; // [rsp+80h] [rbp+27h]
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]
  char *v23; // [rsp+90h] [rbp+37h]
  int v24; // [rsp+98h] [rbp+3Fh]
  int v25; // [rsp+9Ch] [rbp+43h]

  v3 = (char *)(a2 + 21);
  v11 = NtSetInformationProcess(a2[5], ProcessPriorityClass, a2 + 21, 2u);
  if ( v11 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs(v5, v4, v6, v7);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v14 = &v11;
      v12 = *((_DWORD *)a2 + 27);
      v17 = &v12;
      v23 = (char *)a2 + 169;
      v15 = v10;
      v18 = v10;
      v20 = v3;
      v21 = v8;
      v24 = v8;
      TlgWrite(v9, &unk_18007E4D6, 0LL, 0LL, 6u, &pData);
    }
  }
}
