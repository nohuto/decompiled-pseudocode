/*
 * XREFs of StorpUninititalizePerUnitPerfTelemetry @ 0x1C0045B7C
 * Callers:
 *     RaidUnitFreeResources @ 0x1C00132D0 (RaidUnitFreeResources.c)
 *     StorpInitializeUnitTelemetry @ 0x1C0013B18 (StorpInitializeUnitTelemetry.c)
 * Callees:
 *     <none>
 */

void __fastcall StorpUninititalizePerUnitPerfTelemetry(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[231];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x65546152u);
    a1[231] = 0LL;
  }
  v3 = (void *)a1[233];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x65546152u);
    a1[233] = 0LL;
  }
  v4 = (void *)a1[234];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x65546152u);
    a1[234] = 0LL;
  }
}
