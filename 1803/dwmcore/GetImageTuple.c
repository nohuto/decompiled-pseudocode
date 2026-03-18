/*
 * XREFs of GetImageTuple @ 0x18020EF18
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18020EFCC (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetImageTuple(HMODULE a1, CHAR *a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  char *v7; // rax
  int v8; // edx
  int v9; // r8d
  DWORD ModuleFileNameA; // eax
  DWORD v11; // ecx
  DWORD v12; // edx

  if ( !a1 )
    return 0LL;
  v7 = (char *)a1 + *((int *)a1 + 15);
  if ( *((_WORD *)v7 + 12) == 267 || *((_WORD *)v7 + 12) == 523 )
  {
    v8 = *((_DWORD *)v7 + 20);
    v9 = *((_DWORD *)v7 + 2);
  }
  else
  {
    v8 = 0;
    v9 = 0;
  }
  *a4 = v9;
  *a5 = v8;
  ModuleFileNameA = GetModuleFileNameA(a1, a2, 0x104u);
  if ( !ModuleFileNameA )
    return 0LL;
  v11 = ModuleFileNameA - 1;
  v12 = ModuleFileNameA - 1;
  if ( ModuleFileNameA != 1 )
  {
    while ( a2[v12] != 92 )
    {
      if ( !--v12 )
        goto LABEL_13;
    }
    v11 = v12;
  }
LABEL_13:
  if ( v11 != 259 )
    memmove(a2, &a2[v11 + 1], 259 - v11);
  return 1LL;
}
