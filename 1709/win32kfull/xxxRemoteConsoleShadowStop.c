/*
 * XREFs of xxxRemoteConsoleShadowStop @ 0x1C01F9130
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     DrvReleaseHDEV @ 0x1C024C364 (DrvReleaseHDEV.c)
 *     bDrvDisconnect @ 0x1C0298620 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteConsoleShadowStop()
{
  __int64 v0; // rcx
  _QWORD *RemoteContext; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v5; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v7[10]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v8[57]; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR SourceString[422]; // [rsp+184h] [rbp+84h] BYREF

  memset(v7, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v7[1]);
  v7[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v7[3]) = 23;
  LOBYTE(v7[6]) = -1;
  memset(v8, 0, 0xDCuLL);
  RemoteContext = (_QWORD *)GreGetRemoteContext(v0);
  if ( PsGetCurrentProcess(v3, v2) != gpepCSRSS )
    return 3221225506LL;
  if ( !gConsoleShadowhDev )
    return 3221225473LL;
  bDrvDisconnect();
  DrvGetHdevName(gConsoleShadowhDev, SourceString);
  RtlInitUnicodeString(&DestinationString, SourceString);
  DrvReleaseHDEV();
  gfRemotingConsole = 0;
  LOWORD(v8[17]) = 220;
  v8[18] = 1572896;
  if ( (unsigned int)xxxUserChangeDisplaySettings(&DestinationString, v8, 0LL, 268435457LL, 0LL, 0, v7) )
  {
    v5 = -1073741823;
  }
  else
  {
    xxxUserChangeDisplaySettings(0LL, 0LL, 0LL, 0LL, 0LL, 0, v7);
    RemoteContext[1] = G_SaveRemoteVideoFileObject;
    RemoteContext[2] = G_SaveRemoteConnectionFileObject;
    RemoteContext[4] = G_SavePerformanceStatistics;
    RemoteContext[3] = G_SaveRemoteConnectionChannel;
    v5 = 0;
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
  return v5;
}
