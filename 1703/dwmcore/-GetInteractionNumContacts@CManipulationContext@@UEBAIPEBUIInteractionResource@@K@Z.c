/*
 * XREFs of ?GetInteractionNumContacts@CManipulationContext@@UEBAIPEBUIInteractionResource@@K@Z @ 0x1800D2880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationContext::GetInteractionNumContacts(
        CManipulationContext *this,
        const struct IInteractionResource *a2,
        unsigned int a3)
{
  if ( a2 )
    return (*(__int64 (__fastcall **)(const struct IInteractionResource *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, a3);
  else
    return 0LL;
}
