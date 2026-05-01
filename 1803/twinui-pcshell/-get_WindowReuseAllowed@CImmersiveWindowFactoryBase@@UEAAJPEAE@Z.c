/*
 * XREFs of ?get_WindowReuseAllowed@CImmersiveWindowFactoryBase@@UEAAJPEAE@Z @ 0x180316A30
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

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = *((_BYTE *)this + 105);
  return result;
}
