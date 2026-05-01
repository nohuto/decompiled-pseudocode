/*
 * XREFs of ?InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z @ 0x1803168E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18000C374 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18030C674 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::InitializeWithPosition(
        void **this,
        struct IImmersiveMonitor *a2,
        const unsigned __int16 *a3,
        const struct tagRECT *a4)
{
  unsigned __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-18h]

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  v8 = -1LL;
  do
    ++v8;
  while ( a3[v8] );
  result = _AllocStringWorker<CTCoAllocPolicy>((__int64)this, (__int64)a2, a3, v8, v10, this + 8);
  if ( (int)result >= 0 )
    return (*((__int64 (__fastcall **)(char *, struct IImmersiveMonitor *, const struct tagRECT *))*(this - 9) + 9))(
             (char *)this - 72,
             a2,
             a4);
  return result;
}
