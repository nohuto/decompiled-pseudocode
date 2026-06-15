/*
 * XREFs of ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x18010E094
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x18010E000 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x1800059B0 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x18010E104 (-get@-$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z.c)
 */

void __fastcall NUIAudioTracing::NuiAudioTrace_(NUIAudioTracing *this, const char *a2)
{
  LPCGUID v3; // r8
  TraceLoggingHProvider v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-28h] BYREF

  if ( **(_DWORD **)(wil::details::static_lazy<NUIAudioTracing>::get(
                       this,
                       lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_)
                   + 8) > 2u )
  {
    TlgCreateSz(&pDesc, a2);
    TlgWrite(v4, &unk_180149AA1, v3, (LPCGUID)v4, 3u, &pData);
  }
}
