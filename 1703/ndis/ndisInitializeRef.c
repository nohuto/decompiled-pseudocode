/*
 * XREFs of ndisInitializeRef @ 0x1C00B6E54
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00160A0 (NdisFRegisterFilterDriver.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0020200 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterProtocolDriver @ 0x1C00B7D70 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00DC150 (NdisRegisterProtocol.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisRegisterMiniportDriver @ 0x1C01046B8 (ndisRegisterMiniportDriver.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x1C00B6E90 (NdisAllocateRefCount.c)
 */

__int64 __fastcall ndisInitializeRef(__int64 a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  KeInitializeSpinLock((PKSPIN_LOCK)a1);
  LOBYTE(v4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  LOBYTE(v5) = a2;
  result = NdisAllocateRefCount(v5, v4);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
