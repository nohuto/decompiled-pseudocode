/*
 * XREFs of ?NdisPDPIQueryQueueDepth@@YAXPEBU_NDIS_PD_QUEUE@@PEA_K@Z @ 0x1C0074490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisPDPIQueryQueueDepth(const struct _NDIS_PD_QUEUE *a1, unsigned __int64 *a2)
{
  (*(void (__fastcall **)(const struct _NDIS_PD_QUEUE *, unsigned __int64 *))(*((_QWORD *)a1 + 2) + 16LL))(a1, a2);
}
