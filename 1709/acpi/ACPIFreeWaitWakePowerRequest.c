/*
 * XREFs of ACPIFreeWaitWakePowerRequest @ 0x1C00018A0
 * Callers:
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00101CC (ACPIDereferenceWaitWakePowerRequest.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C000FC60 (ExFreeToNPagedLookasideList.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C005A0F4 (ACPIDelayedFreeWakeInterrupt.c)
 */

void __fastcall ACPIFreeWaitWakePowerRequest(char **Entry)
{
  unsigned int v1; // esi
  unsigned int **v2; // rdi
  unsigned int *v4; // rbp
  unsigned int *v5; // r14
  __int64 v6; // r15

  v1 = *((_DWORD *)Entry + 29);
  v2 = (unsigned int **)(Entry + 19);
  if ( v1 > 1 )
    v4 = *v2;
  else
    v4 = (unsigned int *)(Entry + 19);
  if ( v1 )
  {
    v5 = v4 + 6;
    v6 = *((unsigned int *)Entry + 29);
    do
    {
      ACPIDelayedFreeWakeInterrupt(*v5, *((_QWORD *)v5 + 1));
      v5 += 10;
      --v6;
    }
    while ( v6 );
  }
  if ( v1 > 1 )
  {
    ExFreePoolWithTag(v4, 0x50706341u);
    *v2 = 0LL;
  }
  *((_DWORD *)Entry + 29) = 0;
  ExFreeToNPagedLookasideList(&RequestLookAsideList, Entry);
}
