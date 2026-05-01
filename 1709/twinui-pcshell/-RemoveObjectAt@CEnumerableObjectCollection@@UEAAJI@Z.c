/*
 * XREFs of ?RemoveObjectAt@CEnumerableObjectCollection@@UEAAJI@Z @ 0x180023F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEnumerableObjectCollection::RemoveObjectAt(CEnumerableObjectCollection *this, unsigned int a2)
{
  unsigned __int64 v2; // r8
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( a2 >= v2 )
    return 2147650721LL;
  if ( a2 != v2 - 1 )
  {
    v5 = *((_QWORD *)this + 5) + 8LL * a2;
    memmove((void *)v5, (const void *)(v5 + 8), 8 * (v2 - a2) - 8);
  }
  --*((_QWORD *)this + 6);
  return 0LL;
}
