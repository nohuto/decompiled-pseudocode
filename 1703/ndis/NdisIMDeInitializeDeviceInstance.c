/*
 * XREFs of NdisIMDeInitializeDeviceInstance @ 0x1C00DF620
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisIsMiniportStarted @ 0x1C0019CC0 (ndisIsMiniportStarted.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019F9C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0022560 (ndisMReferenceIfBlock.c)
 *     ndisReferenceDriver @ 0x1C0023B90 (ndisReferenceDriver.c)
 *     ndisDereferenceDriver @ 0x1C0025778 (ndisDereferenceDriver.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B6D6C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 *     ndisDeQueueMiniportOnDriver @ 0x1C00FB748 (ndisDeQueueMiniportOnDriver.c)
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
    WPP_SF_q(0x10u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)NdisMiniportHandle);
  v3 = *((_QWORD *)NdisMiniportHandle + 473);
  if ( ndisReferenceMiniport((__int64)NdisMiniportHandle, 0x16u) )
  {
    ndisReferenceDriver(v3, 0);
    v4 = *((_BYTE *)NdisMiniportHandle + 32) < 6u;
    *((_DWORD *)NdisMiniportHandle + 380) = 3;
    if ( v4 )
      *((_BYTE *)NdisMiniportHandle + 5297) = 1;
    ndisPnPRemoveDevice(NdisMiniportHandle);
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
      ndisMDereferenceIfBlock((__int64)NdisMiniportHandle, 0);
    }
    if ( ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)NdisMiniportHandle) )
    {
      ndisDeQueueMiniportOnDriver(NdisMiniportHandle, *((_QWORD *)NdisMiniportHandle + 473));
      ndisDereferenceDriver(*((_QWORD *)NdisMiniportHandle + 473), 0, 2u);
    }
    ndisDereferenceMiniport((__int64)NdisMiniportHandle, 0x16u);
    ndisDereferenceDriver(v3, 0, 0);
    v2 = 0;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x11u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)NdisMiniportHandle, v2);
  return v2;
}
