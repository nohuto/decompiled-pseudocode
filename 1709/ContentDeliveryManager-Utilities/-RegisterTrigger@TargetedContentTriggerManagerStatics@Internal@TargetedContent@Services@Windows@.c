/*
 * XREFs of ?RegisterTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1@Z @ 0x1800585A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x180058220 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180058824 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x18006B45C (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTrigger(
        __int64 a1,
        __int64 a2,
        int a3,
        HSTRING a4)
{
  int v7; // eax
  unsigned int v8; // edi
  _QWORD *v9; // rax
  unsigned int v10; // esi
  int v11; // eax
  _QWORD *v12; // rbx
  unsigned int v13; // eax
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int64 v21; // [rsp+38h] [rbp-39h] BYREF
  __int64 v22; // [rsp+40h] [rbp-31h] BYREF
  volatile signed __int32 *v23; // [rsp+48h] [rbp-29h]
  __int64 v24; // [rsp+58h] [rbp-19h] BYREF
  volatile signed __int32 *v25; // [rsp+60h] [rbp-11h]
  __int64 v26; // [rsp+68h] [rbp-9h]
  RTL_SRWLOCK *v27; // [rsp+70h] [rbp-1h]
  __int64 v28; // [rsp+78h] [rbp+7h] BYREF
  __int64 v29; // [rsp+88h] [rbp+17h] BYREF
  __int64 v30; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  unsigned int v32; // [rsp+E0h] [rbp+6Fh] BYREF

  v26 = -2LL;
  AcquireSRWLockExclusive(&`anonymous namespace'::g_triggerManagerLock);
  v27 = &`anonymous namespace'::g_triggerManagerLock;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v32);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Windows::Services::TargetedContent::Internal::GetCorrelationVector(&v24, a4);
    v9 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
           &v28,
           &v24);
    CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(&v22, v9);
    v10 = 0;
    if ( v32 )
    {
      while ( 1 )
      {
        v21 = 0LL;
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, v10, &v21);
        v8 = v11;
        if ( v11 < 0 )
          break;
        v12 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                &v29,
                &v22);
        v13 = (unsigned int)std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                              &v30,
                              &v24);
        v8 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::RegisterTriggerInternal(
               v14,
               v21,
               a3,
               v13,
               (__int64)v12);
        if ( (int)(v8 + 0x80000000) >= 0 && v8 != -2147483638 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x77,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
            (const char *)v8);
          goto LABEL_13;
        }
        v15 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        if ( ++v10 >= v32 )
          goto LABEL_15;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x75,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_13:
      v16 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    else
    {
LABEL_15:
      if ( *(_BYTE *)(v22 + 24) )
      {
        v17 = RtlPublishWnfStateData(WNF_SHEL_SOFTLANDING_RULES_UPDATED, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x149B,
            (__int64)"internal\\sdk\\inc\\wil\\resource.h",
            (const char *)(unsigned int)v17);
          __debugbreak();
        }
      }
      v8 = 0;
    }
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        v18 = v23;
        (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
      }
    }
    v19 = v25;
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7);
  }
  ReleaseSRWLockExclusive(&`anonymous namespace'::g_triggerManagerLock);
  return v8;
}
