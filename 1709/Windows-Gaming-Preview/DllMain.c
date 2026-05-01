/*
 * XREFs of DllMain @ 0x180008B34
 * Callers:
 *     dllmain_dispatch @ 0x180040DC0 (dllmain_dispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  GUID v3; // xmm0
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      v3 = (GUID)*((_OWORD *)off_18005B008 - 1);
      qword_18005B028 = 0LL;
      qword_18005B030 = 0LL;
      ProviderId = v3;
      if ( !EventRegister(&ProviderId, TlgEnableCallback, &dword_18005B000, &RegHandle) )
        EventSetInformation(RegHandle, 2LL, off_18005B008, *(unsigned __int16 *)off_18005B008);
    }
  }
  else
  {
    v4 = (volatile signed __int32 *)qword_18005BED0;
    qword_18005BED0 = 0LL;
    Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_instance = 0LL;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *, DWORD, LPVOID))v4)(v4, fdwReason, lpvReserved);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
    v5 = (volatile signed __int32 *)qword_18005BE90;
    qword_18005BE90 = 0LL;
    Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance = 0LL;
    if ( v5 )
    {
      if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *, _QWORD, LPVOID))v5)(v5, *(_QWORD *)&fdwReason, lpvReserved);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_18005B000 = 0;
  }
  return 1;
}
