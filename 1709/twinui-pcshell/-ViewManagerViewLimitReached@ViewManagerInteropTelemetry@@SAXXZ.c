/*
 * XREFs of ?ViewManagerViewLimitReached@ViewManagerInteropTelemetry@@SAXXZ @ 0x18012C8F8
 * Callers:
 *     ?OnViewLimitReached@ViewManagerBridge@@UEAAJXZ @ 0x180136FC0 (-OnViewLimitReached@ViewManagerBridge@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void ViewManagerInteropTelemetry::ViewManagerViewLimitReached(void)
{
  const struct _TlgProvider_t *v0; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v0 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v0 > 5u
    && (*((_QWORD *)v0 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x200000000000LL) == *((_QWORD *)v0 + 3) )
  {
    TlgWrite(v0, &unk_180263A40, 0LL, 0LL, 2u, &pData);
  }
}
