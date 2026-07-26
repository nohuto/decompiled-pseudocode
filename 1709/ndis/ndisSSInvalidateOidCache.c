/*
 * XREFs of ndisSSInvalidateOidCache @ 0x1C0070C20
 * Callers:
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C006E0F8 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006E1A8 (-ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSSInvalidateOidCache(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 result; // rax

  v1 = 0LL;
  v2 = 5LL;
  do
  {
    result = *(_QWORD *)(a1 + 600);
    v1 += 24LL;
    *(_BYTE *)(result + v1 - 4) = 0;
    --v2;
  }
  while ( v2 );
  return result;
}
