/*
 * XREFs of ?AddWorkItemToQueue@PhoneTopology3@@AEAAJPEAVPhoneTopology3WorkItem@@@Z @ 0x1800EACEC
 * Callers:
 *     ?SetActiveEndpoint@PhoneTopology3@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x1800EC660 (-SetActiveEndpoint@PhoneTopology3@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEnd.c)
 *     ?SetCellularEnable@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800EC7F0 (-SetCellularEnable@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?SetCellularProviderChange@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x1800EC9A0 (-SetCellularProviderChange@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChang.c)
 *     ?SetCellularRxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800ECA80 (-SetCellularRxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 *     ?SetCellularTxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x1800ECC20 (-SetCellularTxMute@PhoneTopology3@@UEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?NewNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@VWorkItemBase@@@2@PEAV312@1@Z @ 0x1800A5288 (-NewNode@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@2@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology3::AddWorkItemToQueue(PhoneTopology3 *this, struct PhoneTopology3WorkItem *a2)
{
  __int64 *v4; // rax
  __int64 **v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]
  struct PhoneTopology3WorkItem *v9; // [rsp+50h] [rbp+8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  v9 = a2;
  v4 = ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::NewNode(
         (__int64)this + 104,
         (__int64 *)&v9,
         *((_QWORD *)this + 14));
  v5 = (__int64 **)*((_QWORD *)this + 14);
  if ( v5 )
    *v5 = v4;
  else
    *((_QWORD *)this + 13) = v4;
  *((_QWORD *)this + 14) = v4;
  SetEvent(*((HANDLE *)this + 7));
  if ( v9 )
    (*(void (__fastcall **)(struct PhoneTopology3WorkItem *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
