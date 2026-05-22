/*
 * XREFs of ?AddRef@ComboButtonProcessor@@UEAAKXZ @ 0x180017620
 * Callers:
 *     ?AddRef@DragNDropProcessor@@W7EAAKXZ @ 0x180017A10 (-AddRef@DragNDropProcessor@@W7EAAKXZ.c)
 *     ?AddRef@ControllerProcessor@@WCI@EAAKXZ @ 0x180036880 (-AddRef@ControllerProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComboButtonProcessor::AddRef(ComboButtonProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
