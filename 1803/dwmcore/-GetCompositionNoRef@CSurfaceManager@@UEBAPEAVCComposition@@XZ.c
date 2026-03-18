/*
 * XREFs of ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x18001FC20
 * Callers:
 *     ?GetCompositionNoRef@CSurfaceManager@@WFA@EBAPEAVCComposition@@XZ @ 0x1800DD480 (-GetCompositionNoRef@CSurfaceManager@@WFA@EBAPEAVCComposition@@XZ.c)
 * Callees:
 *     <none>
 */

struct CComposition *__fastcall CSurfaceManager::GetCompositionNoRef(CSurfaceManager *this)
{
  return (struct CComposition *)*((_QWORD *)this + 39);
}
