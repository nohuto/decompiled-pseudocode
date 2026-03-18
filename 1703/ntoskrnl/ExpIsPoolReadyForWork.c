/*
 * XREFs of ExpIsPoolReadyForWork @ 0x1400FD850
 * Callers:
 *     ExTryQueueWorkItem @ 0x1400688A0 (ExTryQueueWorkItem.c)
 *     ExpQueueWorkItem @ 0x1400FD5D0 (ExpQueueWorkItem.c)
 *     ExTryQueueWorkItemFromIo @ 0x140130680 (ExTryQueueWorkItemFromIo.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpIsPoolReadyForWork(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v3; // ecx

  if ( !a1 )
    return 0;
  if ( (*(_DWORD *)(a1 + 2092) & 1) == 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 8LL * a2 + 320);
  if ( (v2 & 1) != 0 || !v2 )
    return 0;
  v3 = (*(_DWORD *)(v2 + 704) & 0x3FFF) - 1;
  if ( (*(_DWORD *)(v2 + 704) & 0x4000) == 0 )
    v3 = *(_DWORD *)(v2 + 704) & 0x3FFF;
  return v3 >= (2 * *(_DWORD *)(v2 + 708)) >> 1;
}
