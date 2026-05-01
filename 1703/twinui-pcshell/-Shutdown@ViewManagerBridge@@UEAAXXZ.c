/*
 * XREFs of ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x18010A860
 * Callers:
 *     ?Shutdown@ViewEventDispatcher@@UEAAJXZ @ 0x1800F6DD0 (-Shutdown@ViewEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     IsNAVShutdownPresent @ 0x180195EC0 (IsNAVShutdownPresent.c)
 */

void __fastcall ViewManagerBridge::Shutdown(ViewManagerBridge *this)
{
  const struct _TlgProvider_t *v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v2 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1801FF9CC, 0LL, 0LL, 2u, &pData);
  if ( (unsigned __int8)IsNAVShutdownPresent() )
  {
    if ( !*((_BYTE *)this + 137) )
    {
      *((_BYTE *)this + 136) = 1;
      NAVShutdown();
    }
  }
}
