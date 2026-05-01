/*
 * XREFs of ??$DroppedPendingActivation@PEBG@ViewManagerInteropTelemetry@@SAX$$QEAPEBG@Z @ 0x180129AFC
 * Callers:
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180125704 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTelemetry::DroppedPendingActivation<unsigned short const *>(const WCHAR **a1)
{
  const struct _TlgProvider_t *v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  const WCHAR *v4; // r8
  __int64 v5; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const WCHAR *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  v2 = ViewManagerInteropLogging::Provider();
  v3 = v2;
  if ( *(_DWORD *)v2 > 5u )
  {
    LODWORD(v2) = 0;
    if ( (*((_QWORD *)v3 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v3 + 3) & 0x200000000000LL) == *((_QWORD *)v3 + 3) )
    {
      v4 = &word_18021F3A8;
      LODWORD(v5) = 0;
      if ( *a1 )
      {
        v4 = *a1;
        v5 = -1LL;
        do
          ++v5;
        while ( (*a1)[v5] );
      }
      v8 = v4;
      v9 = 2 * v5 + 2;
      v10 = 0;
      LODWORD(v2) = TlgWrite(v3, &unk_1802606BE, 0LL, 0LL, 3u, &pData);
    }
  }
  return (int)v2;
}
