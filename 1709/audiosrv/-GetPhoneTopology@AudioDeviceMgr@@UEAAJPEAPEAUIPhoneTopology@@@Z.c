/*
 * XREFs of ?GetPhoneTopology@AudioDeviceMgr@@UEAAJPEAPEAUIPhoneTopology@@@Z @ 0x1800E7470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

__int64 __fastcall AudioDeviceMgr::GetPhoneTopology(AudioDeviceMgr *this, struct IPhoneTopology **a2)
{
  unsigned int v4; // ebx
  void (__fastcall ***v5)(_QWORD, GUID *, struct IPhoneTopology **); // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 128));
  v4 = 0;
  if ( a2
    && (*a2 = 0LL, (v5 = (void (__fastcall ***)(_QWORD, GUID *, struct IPhoneTopology **))*((_QWORD *)this + 10)) != 0LL) )
  {
    (**v5)(v5, &GUID_e5835393_9428_4f86_a59b_44effc19857f, a2);
  }
  else
  {
    v4 = -2147467261;
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
