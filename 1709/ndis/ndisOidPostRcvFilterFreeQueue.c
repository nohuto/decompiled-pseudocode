/*
 * XREFs of ndisOidPostRcvFilterFreeQueue @ 0x1C003A510
 * Callers:
 *     <none>
 * Callees:
 *     ndisFreeReceiveQueue @ 0x1C003A1AC (ndisFreeReceiveQueue.c)
 */

void __fastcall ndisOidPostRcvFilterFreeQueue(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax

  v2 = *(_QWORD *)a1;
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    if ( !v3 || v3 == 65539 && (*(_DWORD *)(v2 + 120) & 4) != 0 )
    {
      ndisFreeReceiveQueue(v2, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) + 8LL));
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
}
