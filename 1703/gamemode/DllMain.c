/*
 * XREFs of DllMain @ 0x180001140
 * Callers:
 *     __DllMainCRTStartup @ 0x1800027F0 (__DllMainCRTStartup.c)
 * Callees:
 *     _TlgWrite @ 0x180001000 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180002A60 (__security_check_cookie.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v10; // [rsp+30h] [rbp-68h] BYREF
  GUID ProviderId; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-50h] BYREF
  int *v13; // [rsp+68h] [rbp-30h]
  int v14; // [rsp+70h] [rbp-28h]
  int v15; // [rsp+74h] [rbp-24h]

  if ( fdwReason == 1 )
  {
    ProviderId = (GUID)*((_OWORD *)off_180006008 - 1);
    qword_180006028 = 0LL;
    qword_180006030 = 0LL;
    if ( !EventRegister(&ProviderId, TlgEnableCallback, &dword_180006000, &RegHandle) )
      EventSetInformation(RegHandle, 2LL, off_180006008, *(unsigned __int16 *)off_180006008);
    if ( (unsigned int)dword_180006000 > 4 )
    {
      v10 = 1;
      v13 = &v10;
      v14 = 4;
      v15 = 0;
      TlgWrite(v4, &unk_1800046C9, v5, v6, 3u, &pData);
    }
    DisableThreadLibraryCalls(hinstDLL);
    InitializeCriticalSection(&GmApiCriticalSection);
  }
  else if ( !fdwReason )
  {
    DeleteCriticalSection(&GmApiCriticalSection);
    if ( (unsigned int)dword_180006000 > 4 )
    {
      v10 = 0;
      v13 = &v10;
      v14 = 4;
      v15 = 0;
      TlgWrite((TraceLoggingHProvider)&pData, &unk_1800046C9, v7, v8, 3u, &pData);
    }
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_180006000 = 0;
  }
  return 1;
}
