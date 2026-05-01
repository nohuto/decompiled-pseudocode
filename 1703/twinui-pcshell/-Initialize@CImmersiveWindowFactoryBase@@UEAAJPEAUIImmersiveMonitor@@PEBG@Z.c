/*
 * XREFs of ?Initialize@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBG@Z @ 0x180191A60
 * Callers:
 *     <none>
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180175B80 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::Initialize(
        void **this,
        struct IImmersiveMonitor *a2,
        const unsigned __int16 *a3)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-18h]

  v3 = -1LL;
  do
    ++v3;
  while ( a3[v3] );
  result = _AllocStringWorker<CTCoAllocPolicy>((__int64)this, (__int64)a2, a3, v3, v7, this + 7);
  if ( (int)result >= 0 )
    return (*((__int64 (__fastcall **)(char *, struct IImmersiveMonitor *, _QWORD))*(this - 6) + 9))(
             (char *)this - 48,
             a2,
             0LL);
  return result;
}
