/*
 * XREFs of ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C078C
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00121B4 (ndisIfDeregisterInterfaceEx.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001B8B0 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C001D080 (-ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001D500 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C003F300 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C003F3AC (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0040C70 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C004232C (ndisIfAliasChange.c)
 *     ndisIfSetIfDescr @ 0x1C0042C6C (ndisIfSetIfDescr.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00B1F20 (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00C129C (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C00C249C (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00DDB78 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 *     ndisIfUpdateL2MtuSizeAndNotify @ 0x1C00DDC44 (ndisIfUpdateL2MtuSizeAndNotify.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00EB410 (NdisIMDeInitializeDeviceInstance.c)
 * Callees:
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C001BF90 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

void __fastcall ndisNsiNotifyClientInterfaceChange(__int64 a1, int a2, __int64 a3, __int16 a4)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v4; // r14
  __int64 v9; // xmm1_8
  _OWORD v10[4]; // [rsp+20h] [rbp-40h] BYREF

  v4 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 1384);
  if ( ndisIsCompartmentEnumerable(v4) )
  {
    if ( (unsigned __int8)byte_1C009961D >= 4u )
    {
      WPP_SF_qD(0x90u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2);
      v4 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 1384);
    }
    memset(v10, 0, sizeof(v10));
    *(_QWORD *)&v10[0] = ndisNsiSavedClientNpi;
    *(_QWORD *)&v10[1] = a1 + 1312;
    WORD4(v10[0]) = a4;
    HIDWORD(v10[0]) = a2;
    DWORD2(v10[1]) = 8;
    if ( a2 )
    {
      *((_QWORD *)&v10[2] + 1) = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(a3 + 16);
      v10[2] = *(_OWORD *)a3;
      *(_QWORD *)&v10[3] = v9;
    }
    DWORD2(v10[3]) = v4->CompartmentId;
    (*(void (__fastcall **)(_OWORD *))(qword_1C0098F68 + 8))(v10);
    if ( (unsigned __int8)byte_1C009961D >= 4u )
      WPP_SF_qD(0x91u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2);
  }
}
