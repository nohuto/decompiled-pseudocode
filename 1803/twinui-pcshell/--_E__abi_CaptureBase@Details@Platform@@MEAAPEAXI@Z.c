/*
 * XREFs of ??_E__abi_CaptureBase@Details@Platform@@MEAAPEAXI@Z @ 0x1801FA900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Platform::Details::__abi_CaptureBase *__fastcall Platform::Details::__abi_CaptureBase::`vector deleting destructor'(
        Platform::Details::__abi_CaptureBase *this,
        char a2)
{
  *(_QWORD *)this = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
