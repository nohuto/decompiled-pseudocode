/*
 * XREFs of ??_GCCompiledEffectTemplate@@MEAAPEAXI@Z @ 0x180005C70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x180005D0C (--1CCompiledEffectTemplate@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CCompiledEffectTemplate *__fastcall CCompiledEffectTemplate::`scalar deleting destructor'(
        CCompiledEffectTemplate *this,
        char a2)
{
  CCompiledEffectTemplate::~CCompiledEffectTemplate(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
