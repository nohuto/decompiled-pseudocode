/*
 * XREFs of ?EmitUpdateCommands@CBlendEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014E2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C0147D70 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CBlendEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014E238 (-EmitData@CBlendEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CBlendEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CBlendEffectMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CEffectInputSet::EmitUpdateCommands(
         (__int64)this + 48,
         (__int64)a2,
         *((_DWORD *)this + 6),
         (struct DirectComposition::CBatch ***)a2) )
  {
    return DirectComposition::CBlendEffectMarshaler::EmitData(this, a2) != 0;
  }
  return v4;
}
