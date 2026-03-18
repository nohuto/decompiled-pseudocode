/*
 * XREFs of ?SetRemarshalingFlags@CPrimitiveColorMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C015D5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CPrimitiveColorMarshaler::SetRemarshalingFlags(
        DirectComposition::CPrimitiveColorMarshaler *this)
{
  return *((float *)this + 10) != 0.0
      || *((float *)this + 11) != 0.0
      || *((float *)this + 12) != 0.0
      || *((float *)this + 13) != 0.0;
}
