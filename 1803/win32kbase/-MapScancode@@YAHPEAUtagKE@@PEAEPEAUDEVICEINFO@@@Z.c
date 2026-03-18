/*
 * XREFs of ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C012F400
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C012FD50 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C012F118 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall MapScancode(struct tagKE *a1, char *a2, struct DEVICEINFO *a3)
{
  int *i; // rdx
  int v8; // ecx

  if ( (unsigned int)IsRemoteConnection() )
    return 1LL;
  if ( gpScancodeMap )
  {
    for ( i = (int *)(gpScancodeMap + 12); ; ++i )
    {
      v8 = *i;
      if ( !*i )
        break;
      if ( HIWORD(v8) == (*(unsigned __int8 *)a1 | (unsigned __int16)((unsigned __int8)*a2 << 8)) )
      {
        *(_BYTE *)a1 = v8;
        *a2 = BYTE1(v8);
        return MapFlexibleKeys(a1, *a2, a3);
      }
    }
  }
  return MapFlexibleKeys(a1, *a2, a3);
}
