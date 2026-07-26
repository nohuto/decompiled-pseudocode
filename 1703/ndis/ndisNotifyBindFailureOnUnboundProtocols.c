/*
 * XREFs of ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B2180
 * Callers:
 *     ndisInitModeTimeoutWorkItem @ 0x1C00B8590 (ndisInitModeTimeoutWorkItem.c)
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C001802C (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0019DB4 (ndisReferenceProtocol.c)
 *     ndisNotifyBindFailure @ 0x1C00BDB0C (ndisNotifyBindFailure.c)
 */

__int64 __fastcall ndisNotifyBindFailureOnUnboundProtocols(__int64 a1)
{
  int v2; // r14d
  __int64 v3; // rdi
  int v4; // r15d
  __int64 v5; // rdx
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
    v4 = *(_DWORD *)(a1 + 5036);
    while ( (_DWORD)v3 != v4 )
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 5036) )
        __fastfail(0xBAD0FFu);
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 5040) + 8 * v3);
      v6 = *(_QWORD *)(v5 + 80);
      v7 = *(_NDIS_PROTOCOL_BLOCK **)(v6 + 48);
      if ( v7 && !*(_DWORD *)(v5 + 52) && ndisReferenceProtocol(*(_QWORD *)(v6 + 48), 0xDu) )
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
      v3 = (unsigned int)(v3 + 1);
    }
  }
  while ( v2 != *(_DWORD *)(a1 + 5128) );
  KeLeaveCriticalRegion();
  return ExReleasePushLockEx(a1 + 5160, 0LL);
}
