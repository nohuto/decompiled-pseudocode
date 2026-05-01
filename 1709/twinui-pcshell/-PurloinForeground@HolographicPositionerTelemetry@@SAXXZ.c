/*
 * XREFs of ?PurloinForeground@HolographicPositionerTelemetry@@SAXXZ @ 0x1800F9D70
 * Callers:
 *     ?PurloinForeground@HolographicPositioner@@UEAAJXZ @ 0x1800FC8D0 (-PurloinForeground@HolographicPositioner@@UEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ @ 0x1800F8A60 (-Provider@HolographicPositionerProvider@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void HolographicPositionerTelemetry::PurloinForeground(void)
{
  const struct _TlgProvider_t *v0; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v0 = HolographicPositionerProvider::Provider();
  if ( *(_DWORD *)v0 > 4u
    && (*((_QWORD *)v0 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x400000000000LL) == *((_QWORD *)v0 + 3) )
  {
    TlgWrite(v0, &unk_18025F2B2, 0LL, 0LL, 2u, &pData);
  }
}
