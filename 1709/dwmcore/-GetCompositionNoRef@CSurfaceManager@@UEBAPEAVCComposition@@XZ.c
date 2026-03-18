/*
 * XREFs of ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x180076A60
 * Callers:
 *     ?GetCompositionNoRef@CSurfaceManager@@WFA@EBAPEAVCComposition@@XZ @ 0x1800C5E80 (-GetCompositionNoRef@CSurfaceManager@@WFA@EBAPEAVCComposition@@XZ.c)
 * Callees:
 *     <none>
 */

struct CComposition *__fastcall CSurfaceManager::GetCompositionNoRef(CSurfaceManager *this)
{
  return (struct CComposition *)*((_QWORD *)this + 48);
}
