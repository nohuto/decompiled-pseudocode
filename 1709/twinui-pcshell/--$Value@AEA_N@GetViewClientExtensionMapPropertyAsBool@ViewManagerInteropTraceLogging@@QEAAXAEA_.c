/*
 * XREFs of ??$Value@AEA_N@GetViewClientExtensionMapPropertyAsBool@ViewManagerInteropTraceLogging@@QEAAXAEA_N@Z @ 0x180138784
 * Callers:
 *     ?GetViewClientExtensionMapPropertyAsBool@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAE@Z @ 0x180134980 (-GetViewClientExtensionMapPropertyAsBool@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PE.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsBool::Value<bool &>(
        __int64 a1,
        __int64 a2)
{
  const struct _TlgProvider_t *v4; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v4 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v9 = 0;
    v7 = a2;
    v8 = 1;
    LODWORD(v4) = TlgWrite(v4, &unk_18026162F, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 3u, &pData);
  }
  return (int)v4;
}
