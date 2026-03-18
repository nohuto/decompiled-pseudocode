/*
 * XREFs of ??_ECCrossThreadComposition@@UEAAPEAXI@Z @ 0x18013BA10
 * Callers:
 *     ??$SAFE_DELETE@VCCrossThreadComposition@@@@YAXAEAPEAVCCrossThreadComposition@@@Z @ 0x18013B520 (--$SAFE_DELETE@VCCrossThreadComposition@@@@YAXAEAPEAVCCrossThreadComposition@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18013EE78 (--1CComposition@@MEAA@XZ.c)
 */

CCrossThreadComposition *__fastcall CCrossThreadComposition::`vector deleting destructor'(
        CCrossThreadComposition *this,
        char a2)
{
  CComposition::~CComposition(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
