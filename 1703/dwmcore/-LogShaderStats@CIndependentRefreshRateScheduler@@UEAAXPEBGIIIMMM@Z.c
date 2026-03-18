/*
 * XREFs of ?LogShaderStats@CIndependentRefreshRateScheduler@@UEAAXPEBGIIIMMM@Z @ 0x180004BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIndependentRefreshRateScheduler::LogShaderStats(
        CIndependentRefreshRateScheduler *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        float a6,
        float a7,
        float a8)
{
  CTelemetryTracking::LogShaderStats(
    (CIndependentRefreshRateScheduler *)((char *)this + 24728),
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8);
}
