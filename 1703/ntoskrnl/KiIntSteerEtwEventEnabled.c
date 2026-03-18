/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x14014C8F0
 * Callers:
 *     KiIntSteerLogState @ 0x14014C888 (KiIntSteerLogState.c)
 *     KiIntSteerLogStatus @ 0x14020587C (KiIntSteerLogStatus.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall KiIntSteerEtwEventEnabled(const EVENT_DESCRIPTOR *a1)
{
  if ( KiIntSteerEtwHandle )
    return EtwEventEnabled(KiIntSteerEtwHandle, a1);
  else
    return 0;
}
