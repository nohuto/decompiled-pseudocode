/*
 * XREFs of GetImageTuple @ 0x1801CE58C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1801CE648 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetImageTuple(HMODULE hModule, CHAR *a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  char *v8; // rcx
  int v9; // eax
  int v10; // ecx
  DWORD ModuleFileNameA; // eax
  DWORD v12; // ecx
  DWORD v13; // edx

  if ( !hModule )
    return 0LL;
  v8 = (char *)hModule + *((int *)hModule + 15);
  if ( *((_WORD *)v8 + 12) == 267 || *((_WORD *)v8 + 12) == 523 )
  {
    v9 = *((_DWORD *)v8 + 2);
    v10 = *((_DWORD *)v8 + 20);
    *a4 = v9;
    *a5 = v10;
  }
  else
  {
    *a4 = 0;
    *a5 = 0;
  }
  ModuleFileNameA = GetModuleFileNameA(hModule, a2, 0x104u);
  if ( !ModuleFileNameA )
    return 0LL;
  v12 = ModuleFileNameA - 1;
  v13 = ModuleFileNameA - 1;
  if ( ModuleFileNameA != 1 )
  {
    while ( a2[v13] != 92 )
    {
      if ( !--v13 )
        goto LABEL_13;
    }
    v12 = v13;
  }
LABEL_13:
  if ( v12 != 259 )
    memmove(a2, &a2[v12 + 1], 259 - v12);
  return 1LL;
}
