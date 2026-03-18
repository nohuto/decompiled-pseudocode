/*
 * XREFs of xxxRemoteConsoleShadowStop @ 0x1C01EECA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     DrvReleaseHDEV @ 0x1C024AA6C (DrvReleaseHDEV.c)
 *     bDrvDisconnect @ 0x1C029BE1C (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteConsoleShadowStop()
{
  __int64 v0; // rcx
  _QWORD *RemoteContext; // rbx
  __int64 v2; // rcx
  unsigned int v4; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v6[8]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v7[57]; // [rsp+98h] [rbp-70h] BYREF
  WCHAR SourceString[422]; // [rsp+17Ch] [rbp+74h] BYREF

  memset(v6, 0, sizeof(v6));
  EtwActivityIdControl(3u, (LPGUID)&v6[1]);
  v6[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v6[3]) = 23;
  memset(v7, 0, 0xDCuLL);
  RemoteContext = (_QWORD *)GreGetRemoteContext(v0);
  if ( PsGetCurrentProcess(v2) != gpepCSRSS )
    return 3221225506LL;
  if ( !gConsoleShadowhDev )
    return 3221225473LL;
  bDrvDisconnect();
  DrvGetHdevName(gConsoleShadowhDev, SourceString);
  RtlInitUnicodeString(&DestinationString, SourceString);
  DrvReleaseHDEV();
  gfRemotingConsole = 0;
  LOWORD(v7[17]) = 220;
  v7[18] = 1572896;
  if ( (unsigned int)xxxUserChangeDisplaySettings(&DestinationString, v7, 0LL, 268435457LL, 0LL, 0, 0, v6) )
  {
    v4 = -1073741823;
  }
  else
  {
    xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, 0, v6);
    RemoteContext[1] = G_SaveRemoteVideoFileObject;
    RemoteContext[2] = G_SaveRemoteConnectionFileObject;
    RemoteContext[4] = G_SavePerformanceStatistics;
    RemoteContext[3] = G_SaveRemoteConnectionChannel;
    v4 = 0;
  }
  if ( gConsoleShadowVideoFileObject )
  {
    ObfDereferenceObject(gConsoleShadowVideoFileObject);
    gConsoleShadowVideoFileObject = 0LL;
  }
  if ( gConsoleShadowThinwireFileObject )
  {
    ObfDereferenceObject(gConsoleShadowThinwireFileObject);
    gConsoleShadowThinwireFileObject = 0LL;
  }
  if ( gpConsoleShadowBeepDevice )
  {
    ObfDereferenceObject(gpConsoleShadowBeepDevice);
    gpConsoleShadowBeepDevice = 0LL;
  }
  if ( gpConsoleShadowDisplayChangeEvent )
  {
    ObfDereferenceObject(gpConsoleShadowDisplayChangeEvent);
    gpConsoleShadowDisplayChangeEvent = 0LL;
  }
  gConsoleShadowhDev = 0LL;
  return v4;
}
