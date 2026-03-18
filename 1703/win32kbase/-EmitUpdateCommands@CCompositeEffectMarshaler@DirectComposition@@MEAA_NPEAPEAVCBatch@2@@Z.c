/*
 * XREFs of ?EmitUpdateCommands@CCompositeEffectMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014E1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z @ 0x1C0147D70 (-EmitUpdateCommands@CEffectInputSet@DirectComposition@@QEAA_NW4MILCMD@@IPEAPEAVCBatch@2@@Z.c)
 *     ?EmitData@CCompositeEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014E13C (-EmitData@CCompositeEffectMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CCompositeEffectMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositeEffectMarshaler *this,
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
    return DirectComposition::CCompositeEffectMarshaler::EmitData(this, a2) != 0;
  }
  return v4;
}
