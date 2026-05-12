/*
 * XREFs of StorpUninititalizePerUnitPerfTelemetry @ 0x1C0046B44
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x1C0017540 (StorpInitializeUnitTelemetry.c)
 *     RaidUnitFreeResources @ 0x1C001827C (RaidUnitFreeResources.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpUninititalizePerUnitPerfTelemetry(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[235];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    a1[235] = 0LL;
  }
  v3 = (void *)a1[237];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    a1[237] = 0LL;
  }
  v4 = (void *)a1[238];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    a1[238] = 0LL;
  }
}
