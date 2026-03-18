/*
 * XREFs of SessionIsInteractive @ 0x1400B5200
 * Callers:
 *     NtSetThreadExecutionState @ 0x1404F19F4 (NtSetThreadExecutionState.c)
 *     PopCreateUserPowerRequest @ 0x1404F1DF4 (PopCreateUserPowerRequest.c)
 *     PopSetWin32kInputTimeout @ 0x14070A0DC (PopSetWin32kInputTimeout.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsGetSiloBySessionId @ 0x140528750 (PsGetSiloBySessionId.c)
 */

char __fastcall SessionIsInteractive(__int64 a1)
{
  int v1; // edi
  char v2; // bl
  int v4; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  if ( (_DWORD)a1 == -1 )
    return 0;
  v2 = 0;
  if ( (int)PsGetSiloBySessionId(a1, &v5) < 0 )
    return 0;
  if ( v1 != **((_DWORD **)PsGetServerSiloGlobals(v5) + 138) )
    return 1;
  v4 = v5 ? *(_DWORD *)(*((_QWORD *)PsGetServerSiloGlobals(v5) + 138) + 4LL) : MEMORY[0xFFFFF780000002D8];
  if ( v1 == v4 )
    return 1;
  return v2;
}
