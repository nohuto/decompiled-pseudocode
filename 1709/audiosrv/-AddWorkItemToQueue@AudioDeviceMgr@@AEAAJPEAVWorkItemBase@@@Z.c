/*
 * XREFs of ?AddWorkItemToQueue@AudioDeviceMgr@@AEAAJPEAVWorkItemBase@@@Z @ 0x1800E6B34
 * Callers:
 *     ?OnDeviceRemoved@AudioDeviceMgr@@UEAAJPEBG@Z @ 0x1800E7790 (-OnDeviceRemoved@AudioDeviceMgr@@UEAAJPEBG@Z.c)
 *     ?OnDeviceStateChanged@AudioDeviceMgr@@UEAAJPEBGK@Z @ 0x1800E7840 (-OnDeviceStateChanged@AudioDeviceMgr@@UEAAJPEBGK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?NewNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@VWorkItemBase@@@2@PEAV312@1@Z @ 0x1800A5288 (-NewNode@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@2@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::AddWorkItemToQueue(AudioDeviceMgr *this, struct WorkItemBase *a2)
{
  __int64 *v4; // rax
  __int64 **v5; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]
  struct WorkItemBase *v9; // [rsp+50h] [rbp+8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 216));
  v9 = a2;
  v4 = ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::NewNode(
         (__int64)this + 168,
         (__int64 *)&v9,
         *((_QWORD *)this + 22));
  v5 = (__int64 **)*((_QWORD *)this + 22);
  if ( v5 )
    *v5 = v4;
  else
    *((_QWORD *)this + 21) = v4;
  *((_QWORD *)this + 22) = v4;
  SetEvent(*((HANDLE *)this + 32));
  if ( v9 )
    (*(void (__fastcall **)(struct WorkItemBase *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
