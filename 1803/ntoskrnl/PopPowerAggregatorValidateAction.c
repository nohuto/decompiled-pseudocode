/*
 * XREFs of PopPowerAggregatorValidateAction @ 0x14076AB7C
 * Callers:
 *     PopPowerAggregatorWorker @ 0x14076AC00 (PopPowerAggregatorWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopDiagTracePowerAggregatorValidationEvent @ 0x140768AB8 (PopDiagTracePowerAggregatorValidationEvent.c)
 */

__int64 __fastcall PopPowerAggregatorValidateAction(int *a1, int *a2)
{
  int v2; // esi
  unsigned int v5; // ebx
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  do
  {
    v7 = v2;
    v5 = (*((__int64 (__fastcall **)(int *, int *))&unk_140861B50 + 3 * v2))(a1, &v7);
    PopDiagTracePowerAggregatorValidationEvent(*a1, v2, v5);
    v2 = v7;
  }
  while ( v5 == 1 );
  if ( !v5 )
    *a2 = v7;
  return v5;
}
