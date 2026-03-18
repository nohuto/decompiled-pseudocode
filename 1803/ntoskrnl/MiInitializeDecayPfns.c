/*
 * XREFs of MiInitializeDecayPfns @ 0x1408BC3FC
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY MiInitializeDecayPfns()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  PSLIST_ENTRY result; // rax

  if ( ((unsigned __int8)&ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  ListHead = 0uLL;
  v0 = 48 * qword_1403CC0A0 - 0x57FFFFE8030LL;
  v1 = 2048LL;
  *(_QWORD *)(v0 + 40) = *(_QWORD *)(v0 + 40) & 0xFFFFFFF000000000uLL | 1;
  do
  {
    result = RtlpInterlockedPushEntrySList(&ListHead, (PSLIST_ENTRY)v0);
    v0 -= 48LL;
    --v1;
  }
  while ( v1 );
  return result;
}
