/*
 * XREFs of ?Shutdown@ViewManagerBridge@@UEAAXXZ @ 0x180135320
 * Callers:
 *     ?Shutdown@ViewEventDispatcher@@UEAAJXZ @ 0x180122000 (-Shutdown@ViewEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     IsNAVShutdownPresent @ 0x1801E40C8 (IsNAVShutdownPresent.c)
 */

void __fastcall ViewManagerBridge::Shutdown(ViewManagerBridge *this)
{
  const struct _TlgProvider_t *v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v2 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_180262F43, 0LL, 0LL, 2u, &pData);
  if ( (unsigned __int8)IsNAVShutdownPresent() )
  {
    if ( !*((_BYTE *)this + 153) )
    {
      *((_BYTE *)this + 152) = 1;
      NAVShutdown();
    }
  }
}
