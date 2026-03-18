/*
 * XREFs of ?EmitUpdateCommands@CHolographicCompositionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014D2C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CHolographicCompositionMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicCompositionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CHolographicCompositionMarshaler *))(*(_QWORD *)this + 240LL))(this) )
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CHolographicCompositionMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 248LL))(
             this,
             a2) != 0;
  return v4;
}
