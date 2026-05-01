/*
 * XREFs of DllMain @ 0x180001150
 * Callers:
 *     sub_180002850 @ 0x180002850 (sub_180002850.c)
 * Callees:
 *     _TlgWrite @ 0x180001000 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180002AB0 (__security_check_cookie.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  const GUID *v3; // r9
  GUID v5; // xmm0
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v10; // [rsp+30h] [rbp-50h] BYREF
  GUID ProviderId; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-38h] BYREF
  int *v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]

  if ( fdwReason == 1 )
  {
    v5 = (GUID)*((_OWORD *)off_180006008 - 1);
    qword_180006028 = 0LL;
    qword_180006030 = 0LL;
    ProviderId = v5;
    if ( !EventRegister(&ProviderId, TlgEnableCallback, &dword_180006000, &RegHandle) )
      EventSetInformation(RegHandle, 2LL, off_180006008, *(unsigned __int16 *)off_180006008);
    if ( (unsigned int)dword_180006000 > 4 )
    {
      v15 = 0;
      v13 = &v10;
      v10 = 1;
      v14 = 4;
      TlgWrite(v6, &unk_1800047B9, v7, v8, 3u, &pData);
    }
    DisableThreadLibraryCalls(hinstDLL);
  }
  else if ( !fdwReason )
  {
    if ( (unsigned int)dword_180006000 > 4 )
    {
      v10 = 0;
      v15 = 0;
      v13 = &v10;
      v14 = 4;
      TlgWrite((TraceLoggingHProvider)&pData, &unk_1800047B9, (LPCGUID)lpvReserved, v3, 3u, &pData);
    }
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_180006000 = 0;
  }
  return 1;
}
