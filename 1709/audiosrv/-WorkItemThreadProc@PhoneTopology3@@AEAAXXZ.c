/*
 * XREFs of ?WorkItemThreadProc@PhoneTopology3@@AEAAXXZ @ 0x1800ECCF8
 * Callers:
 *     ?s_WorkerThreadProc@PhoneTopology3@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800ECE40 (-s_WorkerThreadProc@PhoneTopology3@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005BF24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@VWorkItemBase@@@ATL@@V?$CAutoPtrElementTraits@VWorkItemBase@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800EB5A8 (-FreeNode@-$CAtlList@V-$CAutoPtr@VWorkItemBase@@@ATL@@V-$CAutoPtrElementTraits@VWorkItemBase@@@2.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PhoneTopology3::WorkItemThreadProc(PhoneTopology3 *this)
{
  void (__fastcall ***v2)(_QWORD, PhoneTopology3 *); // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v10; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v11; // [rsp+38h] [rbp-20h] BYREF
  char v12; // [rsp+40h] [rbp-18h]

  while ( 1 )
  {
    v2 = 0LL;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
    v3 = *((_QWORD *)this + 15);
    if ( v3 )
    {
      v4 = *((_QWORD *)this + 13);
      if ( !v4 )
        ATL::AtlThrowImpl(-2147467259);
      v2 = *(void (__fastcall ****)(_QWORD, PhoneTopology3 *))(v4 + 16);
    }
    if ( v10 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v10 = 0;
    }
    if ( !v3 )
      break;
    (**v2)(v2, this);
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&v11,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
    v5 = (__int64 *)((char *)this + 104);
    v6 = (__int64 *)*((_QWORD *)this + 13);
    if ( !v6 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = v6[2];
    v6[2] = 0LL;
    v8 = *v6;
    *v5 = *v6;
    if ( v8 )
      *(_QWORD *)(v8 + 8) = 0LL;
    else
      *((_QWORD *)this + 14) = 0LL;
    ATL::CAtlList<ATL::CAutoPtr<WorkItemBase>,ATL::CAutoPtrElementTraits<WorkItemBase>>::FreeNode((__int64)v5, v6);
    if ( v7 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, 1LL);
    if ( v12 )
    {
      LeaveCriticalSection(v11);
      v12 = 0;
    }
  }
}
