/*
 * XREFs of ??$PendingActivationAdd@AEA_KPEBGAEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG0@Z @ 0x180129A1C
 * Callers:
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180125704 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::PendingActivationAdd<unsigned __int64 &,unsigned short const *,unsigned __int64 &>(
        __int64 a1,
        const WCHAR **a2,
        int *a3)
{
  const struct _TlgProvider_t *v6; // rax
  const WCHAR *v7; // rdx
  const WCHAR *v8; // r8
  __int64 v9; // rcx
  int v11; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v13; // [rsp+68h] [rbp+17h]
  __int64 v14; // [rsp+70h] [rbp+1Fh]
  const WCHAR *v15; // [rsp+78h] [rbp+27h]
  int v16; // [rsp+80h] [rbp+2Fh]
  int v17; // [rsp+84h] [rbp+33h]
  int *v18; // [rsp+88h] [rbp+37h]
  __int64 v19; // [rsp+90h] [rbp+3Fh]

  v6 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a2;
    v8 = &word_18021F3A8;
    v13 = a1;
    v14 = 8LL;
    LODWORD(v9) = 0;
    if ( v7 )
    {
      v8 = v7;
      v9 = -1LL;
      do
        ++v9;
      while ( v7[v9] );
    }
    v15 = v8;
    v16 = 2 * v9 + 2;
    v11 = *a3;
    v18 = &v11;
    v17 = 0;
    v19 = 4LL;
    LODWORD(v6) = TlgWrite(v6, &unk_180260670, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
