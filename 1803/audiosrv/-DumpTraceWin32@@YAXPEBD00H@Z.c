/*
 * XREFs of ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x18010E000
 * Callers:
 *     ?IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayElementErrorDetails@@@Z @ 0x18010DC9C (-IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayEleme.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _snprintf_s @ 0x180061964 (_snprintf_s.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800972D0 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z @ 0x18010E094 (-NuiAudioTrace_@NUIAudioTracing@@QEAAXPEBD@Z.c)
 *     ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x18010E104 (-get@-$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z.c)
 */

void __fastcall DumpTraceWin32(const char *a1, const char *a2, const char *a3, int a4)
{
  __int64 v4; // rcx
  wil::TraceLoggingProvider *v5; // rax
  __int64 v6; // rcx
  NUIAudioTracing *v7; // rcx
  char Buffer[512]; // [rsp+40h] [rbp-218h] BYREF

  snprintf_s(Buffer, 0x200uLL, 0xFFFFFFFFFFFFFFFFuLL, "Function %s(%s) : *** TRACE *** code = 0x%x!\n", a2, a3, a4);
  Buffer[511] = 0;
  v5 = (wil::TraceLoggingProvider *)wil::details::static_lazy<NUIAudioTracing>::get(
                                      v4,
                                      lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_(v5, 0) )
  {
    wil::details::static_lazy<NUIAudioTracing>::get(
      v6,
      lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
    NUIAudioTracing::NuiAudioTrace_(v7, Buffer);
  }
}
