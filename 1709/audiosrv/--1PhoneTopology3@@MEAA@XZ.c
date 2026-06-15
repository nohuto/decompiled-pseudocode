/*
 * XREFs of ??1PhoneTopology3@@MEAA@XZ @ 0x1800EA78C
 * Callers:
 *     ??_EPhoneTopology3@@MEAAPEAXI@Z @ 0x1800EA9B0 (--_EPhoneTopology3@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?RemoveAll@?$CAtlList@V?$CAutoPtr@VPhoneTopology3WorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopology3WorkItem@@@2@@ATL@@QEAAXXZ @ 0x1800EC490 (-RemoveAll@-$CAtlList@V-$CAutoPtr@VPhoneTopology3WorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhone.c)
 *     ?RemoveAll@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@QEAAXXZ @ 0x1800EC4F0 (-RemoveAll@-$CAtlMap@IV-$CComPtr@UIKsControl@@@ATL@@V-$CElementTraits@I@2@V-$CElementTraits@V-$C.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall PhoneTopology3::~PhoneTopology3(PhoneTopology3 *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = &PhoneTopology3::`vftable'{for `IPhoneTopology'};
  *((_QWORD *)this + 1) = &PhoneTopology3::`vftable'{for `CUnknown'};
  if ( *((_QWORD *)this + 6) )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
    *((_DWORD *)this + 48) = 1;
    if ( v6 )
      LeaveCriticalSection(lpCriticalSection);
    SetThreadpoolWait(*((PTP_WAIT *)this + 6), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 6), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  v2 = (char *)*((_QWORD *)this + 7);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::RemoveAll((char *)this + 200);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  ATL::CAtlList<ATL::CAutoPtr<PhoneTopology3WorkItem>,ATL::CAutoPtrElementTraits<PhoneTopology3WorkItem>>::RemoveAll((char *)this + 104);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
}
