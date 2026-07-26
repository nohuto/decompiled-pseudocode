/*
 * XREFs of ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B4EFC
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00014EC (ndisIfDeregisterInterfaceEx.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C00036EC (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0004530 (-ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C0004954 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C003DFB0 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C003E05C (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C003FB90 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C00411E0 (ndisIfAliasChange.c)
 *     ndisIfSetIfDescr @ 0x1C0041CD8 (ndisIfSetIfDescr.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00AA964 (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00AEFC8 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ndisNsiSyncMiniportMediaConnectStateNotification @ 0x1C00AF01C (ndisNsiSyncMiniportMediaConnectStateNotification.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00DBE44 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 *     ndisIfUpdateL2MtuSizeAndNotify @ 0x1C00DBF10 (ndisIfUpdateL2MtuSizeAndNotify.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00E94A0 (NdisIMDeInitializeDeviceInstance.c)
 * Callees:
 *     ?ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0004688 (-ndisIsCompartmentEnumerable@@YAEPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

void __fastcall ndisNsiNotifyClientInterfaceChange(__int64 a1, int a2, __int64 a3, __int16 a4)
{
  __int64 v8; // xmm1_8
  _OWORD v9[4]; // [rsp+20h] [rbp-40h] BYREF

  if ( ndisIsCompartmentEnumerable(*(struct _NDIS_IF_COMPARTMENT_BLOCK **)(a1 + 1384)) )
  {
    if ( (unsigned __int8)byte_1C009875D >= 4u )
      WPP_SF_qD(0x90u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2);
    memset(v9, 0, sizeof(v9));
    *(_QWORD *)&v9[0] = ndisNsiSavedClientNpi;
    *(_QWORD *)&v9[1] = a1 + 1312;
    WORD4(v9[0]) = a4;
    HIDWORD(v9[0]) = a2;
    DWORD2(v9[1]) = 8;
    if ( a2 )
    {
      *((_QWORD *)&v9[2] + 1) = 0LL;
    }
    else
    {
      v8 = *(_QWORD *)(a3 + 16);
      v9[2] = *(_OWORD *)a3;
      *(_QWORD *)&v9[3] = v8;
    }
    DWORD2(v9[3]) = *(_DWORD *)(*(_QWORD *)(a1 + 1384) + 16LL);
    (*(void (__fastcall **)(_OWORD *))(qword_1C00980E8 + 8))(v9);
    if ( (unsigned __int8)byte_1C009875D >= 4u )
      WPP_SF_qD(0x91u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, a2);
  }
}
