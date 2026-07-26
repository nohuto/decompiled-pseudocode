/*
 * XREFs of ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00C8F80
 * Callers:
 *     ndisInitModeTimeoutWorkItem @ 0x1C00C8F00 (ndisInitModeTimeoutWorkItem.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 * Callees:
 *     ndisReferenceProtocol @ 0x1C00062A4 (ndisReferenceProtocol.c)
 *     ndisDereferenceProtocol @ 0x1C0006BC0 (ndisDereferenceProtocol.c)
 *     ndisNotifyBindFailure @ 0x1C00C908C (ndisNotifyBindFailure.c)
 */

__int64 __fastcall ndisNotifyBindFailureOnUnboundProtocols(__int64 a1)
{
  int v2; // r14d
  unsigned __int64 v3; // rdi
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rax
  _NDIS_PROTOCOL_BLOCK *v7; // rbp
  __int64 v8; // rdx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1 + 5160, 0LL);
  do
  {
LABEL_2:
    v2 = *(_DWORD *)(a1 + 5128);
    v3 = 0LL;
    v4 = *(unsigned int *)(a1 + 5036);
    while ( v3 != v4 )
    {
      if ( v3 >= *(unsigned int *)(a1 + 5036) )
        __fastfail(5u);
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 5040) + 8 * v3);
      v6 = *(_QWORD *)(v5 + 80);
      v7 = *(_NDIS_PROTOCOL_BLOCK **)(v6 + 40);
      if ( v7 && !*(_DWORD *)(v5 + 52) && ndisReferenceProtocol(*(_QWORD *)(v6 + 40), 0xDu) )
      {
        KeLeaveCriticalRegion();
        ExReleasePushLockEx(a1 + 5160, 0LL);
        ndisNotifyBindFailure(a1, v7);
        ndisDereferenceProtocol(v7, v8, 0xDu);
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(a1 + 5160, 0LL);
      }
      if ( v2 != *(_DWORD *)(a1 + 5128) )
        goto LABEL_2;
      ++v3;
    }
  }
  while ( v2 != *(_DWORD *)(a1 + 5128) );
  KeLeaveCriticalRegion();
  return ExReleasePushLockEx(a1 + 5160, 0LL);
}
