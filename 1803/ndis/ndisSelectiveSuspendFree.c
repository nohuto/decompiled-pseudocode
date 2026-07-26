/*
 * XREFs of ndisSelectiveSuspendFree @ 0x1C00F57A0
 * Callers:
 *     ndisSelectiveSuspendInitialize @ 0x1C00F5884 (ndisSelectiveSuspendInitialize.c)
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C00120B0 (NdisNblTrackerDeregisterComponent.c)
 */

void __fastcall ndisSelectiveSuspendFree(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  char *v5; // rcx

  v1 = *(_QWORD *)(a1 + 4480);
  KeCancelTimer((PKTIMER)(v1 + 16));
  KeWaitForSingleObject((PVOID)(v1 + 152), Executive, 0, 0, 0LL);
  if ( *(_QWORD *)(v1 + 600) )
  {
    v3 = 0LL;
    v4 = 5LL;
    do
    {
      v5 = *(char **)(v1 + 600);
      if ( *(_QWORD *)&v5[v3 + 8] )
      {
        ExFreePoolWithTag(*(PVOID *)&v5[v3 + 8], 0);
        *(_QWORD *)(v3 + *(_QWORD *)(v1 + 600) + 8) = 0LL;
        v5 = *(char **)(v1 + 600);
      }
      v3 += 24LL;
      --v4;
    }
    while ( v4 );
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(v1 + 600) = 0LL;
  }
  NdisNblTrackerDeregisterComponent(*(_QWORD *)(v1 + 608));
  NdisNblTrackerDeregisterComponent(*(_QWORD *)(v1 + 616));
  ExFreePoolWithTag((PVOID)v1, 0);
  *(_QWORD *)(a1 + 4480) = 0LL;
}
