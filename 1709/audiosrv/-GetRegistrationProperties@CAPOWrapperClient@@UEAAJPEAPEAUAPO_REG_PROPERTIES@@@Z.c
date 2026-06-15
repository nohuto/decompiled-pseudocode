/*
 * XREFs of ?GetRegistrationProperties@CAPOWrapperClient@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x1800DC4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOWrapperClient::GetRegistrationProperties(
        CAPOWrapperClient *this,
        struct APO_REG_PROPERTIES **a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, struct APO_REG_PROPERTIES **))(*(_QWORD *)v2 + 40LL))(v2, a2);
  else
    return 2147500033LL;
}
