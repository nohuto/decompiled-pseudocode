/*
 * XREFs of ?CitpIsInteractiveSession@@YAEXZ @ 0x1C0161FD4
 * Callers:
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C01622DC (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0164570 (-CitpStart@@YAJXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int8 CitpIsInteractiveSession(void)
{
  char IsMultiSessionSku; // al
  char v1; // cl

  if ( gSessionId != (unsigned int)RtlGetCurrentServiceSessionId() )
    return 1;
  IsMultiSessionSku = RtlIsMultiSessionSku();
  v1 = 0;
  if ( !IsMultiSessionSku )
    return 1;
  return v1;
}
