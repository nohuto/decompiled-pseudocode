/*
 * XREFs of ?EmitUpdateCommands@CHueRotationEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C015C080
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C0153080 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CHueRotationEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C015C020 (-EmitData@CHueRotationEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CHueRotationEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CHueRotationEffectMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CEffectInputSet::EmitUpdateCommands(
         (__int64)this + 48,
         (__int64)a2,
         *((_DWORD *)this + 6),
         a2) )
  {
    return DirectComposition::CHueRotationEffectMarshaler::EmitData(this, a2) != 0;
  }
  return v4;
}
