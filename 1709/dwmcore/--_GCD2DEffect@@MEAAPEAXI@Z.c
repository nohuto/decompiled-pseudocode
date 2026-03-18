/*
 * XREFs of ??_GCD2DEffect@@MEAAPEAXI@Z @ 0x1801B4110
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CD2DEffect@@MEAA@XZ @ 0x1801B40DC (--1CD2DEffect@@MEAA@XZ.c)
 */

CD2DEffect *__fastcall CD2DEffect::`scalar deleting destructor'(CD2DEffect *this, char a2)
{
  CD2DEffect::~CD2DEffect(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
