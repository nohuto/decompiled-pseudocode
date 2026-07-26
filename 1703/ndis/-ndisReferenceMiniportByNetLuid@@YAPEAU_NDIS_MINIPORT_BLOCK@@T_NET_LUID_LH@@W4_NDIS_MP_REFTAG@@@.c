/*
 * XREFs of ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00722C4
 * Callers:
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0016578 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 * Callees:
 *     ndisIfReferenceMiniport @ 0x1C0009344 (ndisIfReferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0016734 (ndisIfFindInterfaceByNetLuid.c)
 *     ndisIfDereferenceMiniport @ 0x1C0020654 (ndisIfDereferenceMiniport.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceMiniportByNetLuid(union _NET_LUID_LH a1, unsigned __int8 a2)
{
  KIRQL v4; // di
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)a1.Value);
  v6 = (__int64)InterfaceByNetLuid;
  if ( InterfaceByNetLuid )
  {
    v7 = ndisIfReferenceMiniport((__int64)InterfaceByNetLuid, 1u);
    v9 = v7;
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 124) & 0x1080110) == 0 && *(_DWORD *)(v7 + 1520) == 1 && ndisReferenceMiniport(v7, a2) )
      {
        ndisIfDereferenceMiniport(v6, v8, 1u);
        KeReleaseSpinLock(&ndisIfListLock, v4);
        return (struct _NDIS_MINIPORT_BLOCK *)v9;
      }
      ndisIfDereferenceMiniport(v6, v8, 1u);
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v4);
  return 0LL;
}
