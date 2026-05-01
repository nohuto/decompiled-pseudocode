/*
 * XREFs of ?get_WindowReuseAllowed@CImmersiveWindowFactoryBase@@UEAAJPEAE@Z @ 0x180191A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowFactoryBase::get_WindowReuseAllowed(
        CImmersiveWindowFactoryBase *this,
        unsigned __int8 *a2)
{
  __int64 result; // rax

  result = 2147500035LL;
  if ( a2 )
  {
    result = 0LL;
    *a2 = *((_BYTE *)this + 73);
  }
  return result;
}
