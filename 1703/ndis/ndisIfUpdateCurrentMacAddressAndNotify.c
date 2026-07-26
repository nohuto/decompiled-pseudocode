/*
 * XREFs of ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00D1614
 * Callers:
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00DD78C (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ndisIfUpdateCurrentMacAddress @ 0x1C0045244 (ndisIfUpdateCurrentMacAddress.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B6D6C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00D0664 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00D070C (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 */

char __fastcall ndisIfUpdateCurrentMacAddressAndNotify(struct _NDIS_IF_BLOCK *a1, unsigned __int16 *a2)
{
  NdisIfBlockSource Source; // eax
  _QWORD v5[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-10h]

  LOBYTE(Source) = ndisIfUpdateCurrentMacAddress((__int64)a1, a2);
  if ( (_BYTE)Source )
  {
    v5[0] = 1LL;
    v5[1] = &a1->ifPhysAddress;
    v6 = 0x22400000022LL;
    ndisNsiNotifyClientInterfaceChange((__int64)a1, 0, (__int64)v5, 1);
    LODWORD(v5[0]) = 0;
    v6 = 0x21800000022LL;
    ndisNsiNotifyClientInterfaceChange((__int64)a1, 0, (__int64)v5, 0);
    Source = a1->Source;
    if ( Source == NdisIfBlockSourcePersistedNetSetup )
    {
      LOBYTE(Source) = ndisIfWriteBackPersistedInterface(a1);
    }
    else if ( Source == NdisIfBlockSourcePersistedNsi )
    {
      LOBYTE(Source) = ndisIfUpdatePersistedInterfaceInfo(
                         (unsigned __int8 *)&a1->NetLuid,
                         0x22u,
                         0x440u,
                         (unsigned __int8 *)&a1->ifPhysAddress);
    }
  }
  return Source;
}
