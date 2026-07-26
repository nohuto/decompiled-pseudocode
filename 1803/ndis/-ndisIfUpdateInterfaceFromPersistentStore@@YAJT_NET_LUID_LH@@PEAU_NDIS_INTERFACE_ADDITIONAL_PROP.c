/*
 * XREFs of ?ndisIfUpdateInterfaceFromPersistentStore@@YAJT_NET_LUID_LH@@PEAU_NDIS_INTERFACE_ADDITIONAL_PROPERTIES@@@Z @ 0x1C003F240
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C003F080 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00C14A8 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ndisIfFindInterfaceByNetLuid @ 0x1C001D438 (ndisIfFindInterfaceByNetLuid.c)
 *     WPP_SF_I @ 0x1C0041960 (WPP_SF_I.c)
 *     WPP_SF_IL @ 0x1C0041994 (WPP_SF_IL.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceFromPersistentStore(
        union _NET_LUID_LH a1,
        struct _NDIS_INTERFACE_ADDITIONAL_PROPERTIES *a2)
{
  unsigned int v4; // edi
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  KIRQL v6; // r8
  __int64 v7; // rdx

  v4 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WPP_SF_I)(175LL, a2, (union _NET_LUID_LH)a1.Value);
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)a1.Value);
  if ( InterfaceByNetLuid )
  {
    BYTE4(InterfaceByNetLuid[34].Blink) = *(_BYTE *)a2;
    LODWORD(InterfaceByNetLuid[33].Flink) = *((_DWORD *)a2 + 1);
    LODWORD(InterfaceByNetLuid[33].Blink) = *((_DWORD *)a2 + 2);
    HIDWORD(InterfaceByNetLuid[33].Flink) = *((_DWORD *)a2 + 3);
    BYTE2(InterfaceByNetLuid[93].Flink) = 1;
  }
  else
  {
    v4 = -1073741072;
  }
  KeReleaseSpinLock(&ndisIfListLock, v6);
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WPP_SF_IL)(176LL, v7, (union _NET_LUID_LH)a1.Value, v4);
  return v4;
}
