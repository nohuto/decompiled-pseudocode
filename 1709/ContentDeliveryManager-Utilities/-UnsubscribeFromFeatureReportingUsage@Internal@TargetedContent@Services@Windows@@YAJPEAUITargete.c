/*
 * XREFs of ?UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005EE60 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_LoadStagingConfig@@YAJPEAPEAUwil_StagingConfig@@W4wil_FeatureStore@@H@Z @ 0x18005EE8C (-wil_LoadStagingConfig@@YAJPEAPEAUwil_StagingConfig@@W4wil_FeatureStore@@H@Z.c)
 *     ?wil_SaveStagingConfig@@YAJPEAUwil_StagingConfig@@H@Z @ 0x18005EF14 (-wil_SaveStagingConfig@@YAJPEAUwil_StagingConfig@@H@Z.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F948 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 *     ?GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@AEAIAEAG@Z @ 0x180060940 (-GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::UnsubscribeFromFeatureReportingUsage(
        Windows::Services::TargetedContent::Internal *this,
        __int64 a2)
{
  int StagingConfig; // eax
  __int64 v5; // r8
  unsigned __int16 *v6; // r9
  int FeatureIdAndReportingIdForTrigger; // eax
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v8; // rdx
  struct _WNF_STATE_NAME WnfStateForTrigger; // rax
  __int64 v10; // r8
  LPVOID v11; // rbx
  __int64 v12; // rsi
  const struct __WIL__WNF_TYPE_ID *v13; // r9
  __int64 v14; // rdx
  unsigned __int16 v15; // r10
  __int16 v16; // r15
  int v17; // r13d
  int v18; // eax
  __int64 v19; // r8
  HANDLE ProcessHeap; // rax
  HANDLE v21; // rax
  const char *v22; // r9
  volatile signed __int32 *v23; // rsi
  volatile signed __int32 *v25; // rsi
  unsigned int v26; // [rsp+20h] [rbp-58h]
  LPVOID lpMem[10]; // [rsp+28h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v30; // [rsp+90h] [rbp+18h] BYREF
  int v31; // [rsp+98h] [rbp+20h] BYREF

  lpMem[1] = (LPVOID)-2LL;
  try
  {
    lpMem[0] = 0LL;
    StagingConfig = wil_LoadStagingConfig((char **)lpMem);
    if ( StagingConfig < 0 )
      wil::details::in1diag3::_Throw_NtStatus(retaddr, (void *)0x1F3, v5, (const char *)(unsigned int)StagingConfig);
    FeatureIdAndReportingIdForTrigger = Windows::Services::TargetedContent::Internal::GetFeatureIdAndReportingIdForTrigger(
                                          (__int64)this,
                                          (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)&v31,
                                          &v30,
                                          v6);
    if ( FeatureIdAndReportingIdForTrigger < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1F7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)FeatureIdAndReportingIdForTrigger);
    WnfStateForTrigger = Windows::Services::TargetedContent::Internal::GetWnfStateForTrigger(this, v8);
    v11 = lpMem[0];
    v12 = *((_QWORD *)lpMem[0] + 3);
    v13 = (const struct __WIL__WNF_TYPE_ID *)*((_QWORD *)lpMem[0] + 5);
    v14 = 0LL;
    v15 = 0;
    if ( *(_WORD *)(v12 + 6) )
    {
      v16 = v30;
      v17 = v31;
      do
      {
        v10 = 2LL * v15;
        if ( *((_DWORD *)v13 + 4 * v15) != v17
          || *((_WORD *)v13 + 8 * v15 + 6) != v16
          || *((_DWORD *)v13 + 4 * v15 + 1) != WnfStateForTrigger.Data[0]
          || *((_DWORD *)v13 + 4 * v15 + 2) != WnfStateForTrigger.Data[1] )
        {
          if ( (_WORD)v14 != v15 )
            *((_OWORD *)v13 + (unsigned __int16)v14) = *((_OWORD *)v13 + v15);
          LOWORD(v14) = v14 + 1;
        }
        ++v15;
      }
      while ( v15 < *(_WORD *)(v12 + 6) );
    }
    if ( (unsigned __int16)v14 < *(_WORD *)(v12 + 6) )
    {
      *((_QWORD *)v11 + 8) -= 16LL * (*(unsigned __int16 *)(v12 + 6) - (unsigned __int16)v14);
      *((_DWORD *)v11 + 4) = 1;
      *(_WORD *)(v12 + 6) = v14;
    }
    v18 = wil_SaveStagingConfig((struct wil_StagingConfig *)v11, v14, v10, v13);
    if ( v18 < 0 )
      wil::details::in1diag3::_Throw_NtStatus(retaddr, (void *)0x1FF, v19, (const char *)(unsigned int)v18);
    if ( *((_DWORD *)v11 + 20) )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *((LPVOID *)v11 + 7));
      *((_QWORD *)v11 + 7) = 0LL;
      *((_QWORD *)v11 + 3) = 0LL;
    }
    v21 = GetProcessHeap();
    HeapFree(v21, 0, v11);
  }
  catch ( ... )
  {
    v26 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x202,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v22);
    v25 = *(volatile signed __int32 **)(a2 + 8);
    if ( v25 && _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
    return v26;
  }
  v23 = *(volatile signed __int32 **)(a2 + 8);
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  return 0LL;
}
