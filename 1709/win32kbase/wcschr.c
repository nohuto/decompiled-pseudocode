/*
 * XREFs of wcschr @ 0x1C00A7308
 * Callers:
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00406A0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z @ 0x1C0079B18 (-ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z.c)
 *     xxxRemoteConnect @ 0x1C00A9030 (xxxRemoteConnect.c)
 *     InitCreateUserSubsystem @ 0x1C01DD5C0 (InitCreateUserSubsystem.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}
