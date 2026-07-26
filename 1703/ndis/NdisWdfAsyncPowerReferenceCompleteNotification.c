/*
 * XREFs of NdisWdfAsyncPowerReferenceCompleteNotification @ 0x1C00E9400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisWdfAsyncPowerReferenceCompleteNotification(struct _NDIS_MINIPORT_BLOCK *a1, int a2, char a3)
{
  if ( a3 )
    ndisWdfAoAcDisengageComplete(a1, a2);
  else
    ndisWdfSelectiveSuspendResumeOperations(a1, (unsigned int)a2 >> 31, a2 < 0);
}
