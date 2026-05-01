/*
 * XREFs of _HolographicPositionerTelemetry::ControlGainedForActivation::StartActivity_::_1_::dtor$0 @ 0x1801B05B3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HolographicPositionerTelemetry::ControlGainedForActivation::StartActivity_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>((void **)(a2 + 48));
}
