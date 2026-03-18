/*
 * XREFs of ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C012F5D0
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C012FB70 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C012F2E4 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall MapScancode(struct tagKE *a1, char *a2, struct DEVICEINFO *a3)
{
  __int16 *i; // rcx
  __int16 v8; // ax

  if ( (unsigned int)IsRemoteConnection() )
    return 1LL;
  if ( gpScancodeMap )
  {
    for ( i = (__int16 *)(gpScancodeMap + 12); *(_DWORD *)i; i += 2 )
    {
      if ( HIWORD(*(_DWORD *)i) == (*(unsigned __int8 *)a1 | (unsigned __int16)((unsigned __int8)*a2 << 8)) )
      {
        v8 = *i;
        *(_BYTE *)a1 = *i;
        *a2 = HIBYTE(v8);
        return MapFlexibleKeys(a1, *a2, a3);
      }
    }
  }
  return MapFlexibleKeys(a1, *a2, a3);
}
