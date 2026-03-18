/*
 * XREFs of Bulk_EP_StartMapping @ 0x1C002E260
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x1C002275C (TR_AttemptStateChange.c)
 *     Bulk_MapTransfers @ 0x1C002EA78 (Bulk_MapTransfers.c)
 */

void __fastcall Bulk_EP_StartMapping(__int64 a1)
{
  KIRQL v2; // si
  char v3; // bl
  __int64 v4; // rdx

  v2 = 0;
  if ( KeGetCurrentIrql() )
  {
    v3 = 0;
  }
  else
  {
    v2 = KfRaiseIrql(2u);
    v3 = 1;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 324), 0);
  *(_DWORD *)(a1 + 352) = 0;
  if ( !(unsigned int)TR_AttemptStateChange(a1, 5, 3) )
  {
    LOBYTE(v4) = v3;
    Bulk_MapTransfers(a1, v4);
  }
  if ( v3 )
    KeLowerIrql(v2);
}
