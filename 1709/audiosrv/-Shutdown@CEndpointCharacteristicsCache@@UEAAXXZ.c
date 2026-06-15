/*
 * XREFs of ?Shutdown@CEndpointCharacteristicsCache@@UEAAXXZ @ 0x1800B82D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristicsCache::Shutdown(CEndpointCharacteristicsCache *this)
{
  struct _TP_WORK *v2; // rcx

  *((_BYTE *)this + 104) = 1;
  v2 = (struct _TP_WORK *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    WaitForThreadpoolWorkCallbacks(v2, 1);
    CloseThreadpoolWork(*((PTP_WORK *)this + 12));
    *((_QWORD *)this + 12) = 0LL;
  }
}
