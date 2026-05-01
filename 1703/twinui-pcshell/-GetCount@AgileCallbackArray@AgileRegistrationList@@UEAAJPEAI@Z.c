/*
 * XREFs of ?GetCount@AgileCallbackArray@AgileRegistrationList@@UEAAJPEAI@Z @ 0x1800244A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AgileRegistrationList::AgileCallbackArray::GetCount(
        AgileRegistrationList::AgileCallbackArray *this,
        unsigned int *a2)
{
  *a2 = (__int64)(*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 3;
  return 0LL;
}
