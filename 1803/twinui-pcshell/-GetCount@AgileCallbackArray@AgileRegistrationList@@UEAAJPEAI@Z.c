/*
 * XREFs of ?GetCount@AgileCallbackArray@AgileRegistrationList@@UEAAJPEAI@Z @ 0x18001E9E0
 * Callers:
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x1800268C8 (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 *     _lambda_9d6c54c6eac66a68e681dddf193e983c_::operator() @ 0x18009117C (_lambda_9d6c54c6eac66a68e681dddf193e983c_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AgileRegistrationList::AgileCallbackArray::GetCount(
        AgileRegistrationList::AgileCallbackArray *this,
        unsigned int *a2)
{
  *a2 = (__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3;
  return 0LL;
}
