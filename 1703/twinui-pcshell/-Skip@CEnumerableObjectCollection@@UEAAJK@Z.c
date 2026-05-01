/*
 * XREFs of ?Skip@CEnumerableObjectCollection@@UEAAJK@Z @ 0x180023850
 * Callers:
 *     ?Skip@CEnumerableObjectCollection@@W7EAAJK@Z @ 0x180023470 (-Skip@CEnumerableObjectCollection@@W7EAAJK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CEnumerableObjectCollection::Skip(CEnumerableObjectCollection *this, unsigned int a2)
{
  int v2; // r9d
  unsigned int v3; // r10d

  v2 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)this + 10);
  if ( v2 + a2 < v3 )
    v3 = v2 + a2;
  *((_DWORD *)this + 6) = v3;
  return v3 - v2 < a2;
}
