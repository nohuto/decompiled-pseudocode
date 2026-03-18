/*
 * XREFs of DpQueueDpc @ 0x1C0001B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall DpQueueDpc(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v3; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 64);
    if ( v1 )
    {
      if ( *(_DWORD *)(v1 + 16) == 1953656900 && (unsigned int)(*(_DWORD *)(v1 + 20) - 2) <= 1 )
        return KeInsertQueueDpc((PRKDPC)(v1 + 1248), 0LL, 0LL);
    }
  }
  v3 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v3 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v3);
  return 0;
}
