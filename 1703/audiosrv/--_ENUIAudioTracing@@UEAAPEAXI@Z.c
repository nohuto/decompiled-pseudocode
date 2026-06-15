/*
 * XREFs of ??_ENUIAudioTracing@@UEAAPEAXI@Z @ 0x1800D3720
 * Callers:
 *     _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_ @ 0x1800D36E0 (_lambda_904e72f60f56877f633fc2ab0ce9f5f8_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x18007F5F8 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

NUIAudioTracing *__fastcall NUIAudioTracing::`vector deleting destructor'(NUIAudioTracing *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
