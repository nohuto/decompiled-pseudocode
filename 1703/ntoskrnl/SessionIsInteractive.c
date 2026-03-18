/*
 * XREFs of SessionIsInteractive @ 0x140072D94
 * Callers:
 *     NtSetThreadExecutionState @ 0x140459BC0 (NtSetThreadExecutionState.c)
 *     PopCreateUserPowerRequest @ 0x1404C78BC (PopCreateUserPowerRequest.c)
 *     PopSetWin32kInputTimeout @ 0x1406D4784 (PopSetWin32kInputTimeout.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PsGetSiloBySessionId @ 0x1404C7990 (PsGetSiloBySessionId.c)
 */

bool __fastcall SessionIsInteractive(__int64 a1)
{
  int v1; // edi
  PVOID v2; // rbx
  bool v3; // di
  int v5; // eax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  if ( (_DWORD)a1 == -1 || (int)PsGetSiloBySessionId(a1, &Object) < 0 )
    return 0;
  v2 = Object;
  v3 = 1;
  if ( v1 == **(_DWORD **)(PsGetServerSiloGlobals(Object) + 1072) )
  {
    if ( v2 )
    {
      v5 = *(_DWORD *)(*(_QWORD *)(PsGetServerSiloGlobals(v2) + 1072) + 4LL);
    }
    else
    {
      v5 = MEMORY[0xFFFFF780000002D8];
      v2 = Object;
    }
    if ( v1 != v5 )
      v3 = 0;
  }
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  return v3;
}
