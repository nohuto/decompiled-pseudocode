/*
 * XREFs of ?WorkItemThreadProc@PhoneTopology@@AEAAXXZ @ 0x180119F88
 * Callers:
 *     ?s_WorkerThreadProc@PhoneTopology@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18011A0A0 (-s_WorkerThreadProc@PhoneTopology@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005F9F4 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveHead@?$CAtlList@V?$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopologyWorkItem@@@2@@ATL@@QEAA?AV?$CAutoPtr@VPhoneTopologyWorkItem@@@2@XZ @ 0x180119740 (-RemoveHead@-$CAtlList@V-$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhone.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PhoneTopology::WorkItemThreadProc(PhoneTopology *this)
{
  void (__fastcall ***v2)(_QWORD, PhoneTopology *); // r14
  __int64 v3; // rsi
  __int64 v4; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-40h] BYREF
  char v6; // [rsp+30h] [rbp-38h]
  LPCRITICAL_SECTION v7; // [rsp+38h] [rbp-30h] BYREF
  char v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF

  while ( 1 )
  {
    v2 = 0LL;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 56));
    v3 = *((_QWORD *)this + 14);
    if ( v3 )
    {
      v4 = *((_QWORD *)this + 12);
      if ( !v4 )
        ATL::AtlThrowImpl(-2147467259);
      v2 = *(void (__fastcall ****)(_QWORD, PhoneTopology *))(v4 + 16);
    }
    if ( v6 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v6 = 0;
    }
    if ( !v3 )
      break;
    (**v2)(v2, this);
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&v7,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 56));
    ATL::CAtlList<ATL::CAutoPtr<PhoneTopologyWorkItem>,ATL::CAutoPtrElementTraits<PhoneTopologyWorkItem>>::RemoveHead(
      (__int64 **)this + 12,
      &v9);
    if ( v9 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
    v9 = 0LL;
    if ( v8 )
    {
      LeaveCriticalSection(v7);
      v8 = 0;
    }
  }
}
