/*
 * XREFs of ACPIFreeWaitWakePowerRequest @ 0x1C0059770
 * Callers:
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C001EA0C (ACPIDereferenceWaitWakePowerRequest.c)
 * Callees:
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C00594F0 (ACPIDelayedFreeWakeInterrupt.c)
 */

void __fastcall ACPIFreeWaitWakePowerRequest(void **a1)
{
  unsigned int v1; // esi
  void **v2; // rdi
  char *v4; // rbp
  char *v5; // r14
  __int64 v6; // r15

  v1 = *((_DWORD *)a1 + 29);
  v2 = a1 + 19;
  if ( v1 <= 1 )
    v4 = (char *)(a1 + 19);
  else
    v4 = (char *)*v2;
  if ( v1 )
  {
    v5 = v4 + 24;
    v6 = *((unsigned int *)a1 + 29);
    do
    {
      ACPIDelayedFreeWakeInterrupt(*(_DWORD *)v5, *((_QWORD *)v5 + 1));
      v5 += 40;
      --v6;
    }
    while ( v6 );
  }
  if ( v1 > 1 )
  {
    ExFreePoolWithTag(v4, 0x50706341u);
    *v2 = 0LL;
  }
  *((_DWORD *)a1 + 29) = 0;
  ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&RequestLookAsideList, a1);
}
