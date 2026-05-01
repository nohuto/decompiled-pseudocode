/*
 * XREFs of ?InitializeWithPosition@CImmersiveWindowFactoryBase@@UEAAJPEAUIImmersiveMonitor@@PEBGPEBUtagRECT@@@Z @ 0x180191AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180175B80 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::InitializeWithPosition(
        void **this,
        struct IImmersiveMonitor *a2,
        const unsigned __int16 *a3,
        const struct tagRECT *a4)
{
  unsigned __int64 v5; // r9
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-18h]

  v5 = -1LL;
  do
    ++v5;
  while ( a3[v5] );
  result = _AllocStringWorker<CTCoAllocPolicy>((__int64)this, (__int64)a2, a3, v5, v9, this + 7);
  if ( (int)result >= 0 )
    return (*((__int64 (__fastcall **)(char *, struct IImmersiveMonitor *, const struct tagRECT *))*(this - 6) + 9))(
             (char *)this - 48,
             a2,
             a4);
  return result;
}
