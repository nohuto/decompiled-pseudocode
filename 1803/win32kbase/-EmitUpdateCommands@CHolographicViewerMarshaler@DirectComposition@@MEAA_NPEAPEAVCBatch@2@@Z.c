/*
 * XREFs of ?EmitUpdateCommands@CHolographicViewerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014C720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CHolographicViewerMarshaler::EmitUpdateCommands(
        DirectComposition::CHolographicViewerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CHolographicViewerMarshaler *))(*(_QWORD *)this + 248LL))(this)
    && (*(unsigned __int8 (__fastcall **)(DirectComposition::CHolographicViewerMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 256LL))(
         this,
         a2) )
  {
    return (*(unsigned __int8 (__fastcall **)(DirectComposition::CHolographicViewerMarshaler *, struct DirectComposition::CBatch **))(*(_QWORD *)this + 264LL))(
             this,
             a2) != 0;
  }
  return v4;
}
