/*
 * XREFs of NdisIMDeInitializeDeviceInstance @ 0x1C00E94A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceDriver @ 0x1C00016D8 (ndisDereferenceDriver.c)
 *     ndisReferenceDriver @ 0x1C0002828 (ndisReferenceDriver.c)
 *     ndisIsMiniportStarted @ 0x1C0008960 (ndisIsMiniportStarted.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisMDereferenceIfBlock @ 0x1C001F488 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001F6AC (ndisMReferenceIfBlock.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B4EFC (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ndisPnPRemoveDevice @ 0x1C00FE208 (ndisPnPRemoveDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00FF048 (ndisDeQueueMiniportOnDriver.c)
 */

NDIS_STATUS __stdcall NdisIMDeInitializeDeviceInstance(NDIS_HANDLE NdisMiniportHandle)
{
  int v2; // edi
  __int64 v3; // rsi
  bool v4; // cf
  __int64 v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = -1073741823;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x10u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)NdisMiniportHandle);
  v3 = *((_QWORD *)NdisMiniportHandle + 473);
  if ( ndisReferenceMiniport((__int64)NdisMiniportHandle) )
  {
    ndisReferenceDriver(v3);
    v4 = *((_BYTE *)NdisMiniportHandle + 32) < 6u;
    *((_DWORD *)NdisMiniportHandle + 380) = 3;
    if ( v4 )
      *((_BYTE *)NdisMiniportHandle + 5297) = 1;
    ndisPnPRemoveDevice((ULONG_PTR)NdisMiniportHandle);
    *((_DWORD *)NdisMiniportHandle + 973) = 0;
    *((_DWORD *)NdisMiniportHandle + 976) = 0;
    *((_DWORD *)NdisMiniportHandle + 1023) = 0;
    *((_BYTE *)NdisMiniportHandle + 5297) = 0;
    *((_DWORD *)NdisMiniportHandle + 1022) = 7;
    if ( ndisMReferenceIfBlock((__int64)NdisMiniportHandle, 0) )
    {
      *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 508) + 1112LL) = 7;
      *(_DWORD *)(*((_QWORD *)NdisMiniportHandle + 508) + 1116LL) = 0;
      v5 = *((_QWORD *)NdisMiniportHandle + 508);
      v7[0] = 1LL;
      v7[2] = 0x21800000008LL;
      v7[1] = v5 + 1112;
      ndisNsiNotifyClientInterfaceChange(v5, 0, (__int64)v7, 1);
      ndisMDereferenceIfBlock((__int64)NdisMiniportHandle, MPIFREF_IMDEINIT);
    }
    if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle) )
    {
      ndisDeQueueMiniportOnDriver(NdisMiniportHandle, *((_QWORD *)NdisMiniportHandle + 473));
      ndisDereferenceDriver(*((_QWORD *)NdisMiniportHandle + 473), 0);
    }
    ndisDereferenceMiniport((__int64)NdisMiniportHandle, 0x16u);
    ndisDereferenceDriver(v3, 0);
    v2 = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x11u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)NdisMiniportHandle, v2);
  return v2;
}
