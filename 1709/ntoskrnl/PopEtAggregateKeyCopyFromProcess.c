/*
 * XREFs of PopEtAggregateKeyCopyFromProcess @ 0x140457830
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x140457570 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     PsGetProcessId @ 0x1400BAF50 (PsGetProcessId.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopEtAggregateKeyCopy @ 0x1404587B4 (PopEtAggregateKeyCopy.c)
 */

__int64 __fastcall PopEtAggregateKeyCopyFromProcess(__int64 a1, struct _KPROCESS *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2[2].ActiveProcessors.Bitmap[15];
  memset(v8, 0, 0x20uLL);
  v8[0] = *(_QWORD *)(v3 + 448);
  v8[1] = *(_QWORD *)(v3 + 456);
  if ( (*(_DWORD *)(a3 + 8) & 1) != 0 )
  {
    LODWORD(v8[3]) = (unsigned int)PsGetProcessId(a2);
    v8[2] = a2[2].ActiveProcessors.Bitmap[17];
  }
  return PopEtAggregateKeyCopy(a1, v8);
}
