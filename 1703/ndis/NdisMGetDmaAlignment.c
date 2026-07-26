/*
 * XREFs of NdisMGetDmaAlignment @ 0x1C00DF970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisMGetDmaAlignment(NDIS_HANDLE MiniportAdapterHandle)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)MiniportAdapterHandle + 63);
  if ( v1 )
    return (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(v1 + 24) + 8LL) + 72LL))();
  else
    return 0;
}
