/*
 * XREFs of ?EmitUpdateCommands@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00893C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CRemotingRenderTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CRemotingRenderTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CRemotingRenderTargetMarshaler *))(*(_QWORD *)this + 240LL))(this)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CRemotingRenderTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 248LL))(
         this,
         a2) )
  {
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CRemotingRenderTargetMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 256LL))(
             this,
             a2) != 0;
  }
  return v4;
}
