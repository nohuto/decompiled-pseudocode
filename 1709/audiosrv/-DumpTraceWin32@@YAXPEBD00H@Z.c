/*
 * XREFs of ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x1800E0E80
 * Callers:
 *     ?IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayElementErrorDetails@@@Z @ 0x1800E0B14 (-IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayEleme.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _snprintf_s @ 0x180033BE0 (_snprintf_s.c)
 *     TraceLoggingProviderEnabled @ 0x18007DC00 (TraceLoggingProviderEnabled.c)
 *     ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x1800E0F18 (-NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z.c)
 *     ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x1800E0F88 (-get@-$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z.c)
 */

void __fastcall DumpTraceWin32(const char *a1, const char *a2, const char *a3, int a4)
{
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  ULONGLONG v6; // r8
  __int64 v7; // rcx
  NUIAudioTracing *v8; // rcx
  char Buffer[512]; // [rsp+40h] [rbp-218h] BYREF

  snprintf_s(Buffer, 0x200uLL, 0xFFFFFFFFFFFFFFFFuLL, "Function %s(%s) : *** TRACE *** code = 0x%x!\n", a2, a3, a4);
  Buffer[511] = 0;
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<NUIAudioTracing>::get(
                                           v4,
                                           lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( v5 )
  {
    if ( TraceLoggingProviderEnabled(v5, 0, v6) )
    {
      wil::details::static_lazy<NUIAudioTracing>::get(
        v7,
        lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
      NUIAudioTracing::NuiAudioTrace_(v8, Buffer);
    }
  }
}
