/*
 * XREFs of Isoch_EP_StartMapping @ 0x1C0028120
 * Callers:
 *     <none>
 * Callees:
 *     TR_AttemptStateChange @ 0x1C002275C (TR_AttemptStateChange.c)
 *     Isoch_MapTransfers @ 0x1C0028964 (Isoch_MapTransfers.c)
 */

void __fastcall Isoch_EP_StartMapping(__int64 a1)
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
  _InterlockedExchange((volatile __int32 *)(a1 + 328), 0);
  *(_DWORD *)(a1 + 376) = 0;
  if ( !(unsigned int)TR_AttemptStateChange(a1, 5, 3) )
  {
    LOBYTE(v4) = v3;
    Isoch_MapTransfers(a1, v4);
  }
  if ( v3 )
    KeLowerIrql(v2);
}
