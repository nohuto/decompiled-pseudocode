/*
 * XREFs of ?SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060B90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DB90 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005EE60 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_LoadStagingConfig@@YAJPEAPEAUwil_StagingConfig@@W4wil_FeatureStore@@H@Z @ 0x18005EE8C (-wil_LoadStagingConfig@@YAJPEAPEAUwil_StagingConfig@@W4wil_FeatureStore@@H@Z.c)
 *     ?wil_SaveStagingConfig@@YAJPEAUwil_StagingConfig@@H@Z @ 0x18005EF14 (-wil_SaveStagingConfig@@YAJPEAUwil_StagingConfig@@H@Z.c)
 *     ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F948 (-GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA-AU_WNF_STATE_NAME@@PEAUITar.c)
 *     ?GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@AEAIAEAG@Z @ 0x180060940 (-GetFeatureIdAndReportingIdForTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::SubscribeToFeatureReportingUsage(
        Windows::Services::TargetedContent::Internal *this,
        __int64 a2)
{
  int StagingConfig; // eax
  __int64 v5; // r8
  unsigned __int16 *v6; // r9
  int FeatureIdAndReportingIdForTrigger; // eax
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v8; // rdx
  struct _WNF_STATE_NAME WnfStateForTrigger; // rax
  LPVOID v10; // rbx
  __int64 v11; // r11
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r8
  HANDLE ProcessHeap; // rax
  HANDLE v18; // rax
  const char *v19; // r9
  volatile signed __int32 *v20; // rsi
  volatile signed __int32 *v22; // rsi
  unsigned int v23; // [rsp+20h] [rbp-58h]
  LPVOID lpMem[2]; // [rsp+28h] [rbp-50h] BYREF
  __int128 v25; // [rsp+38h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v28; // [rsp+90h] [rbp+18h] BYREF
  int v29; // [rsp+98h] [rbp+20h] BYREF

  lpMem[1] = (LPVOID)-2LL;
  try
  {
    lpMem[0] = 0LL;
    StagingConfig = wil_LoadStagingConfig((char **)lpMem);
    if ( StagingConfig < 0 )
      wil::details::in1diag3::_Throw_NtStatus(retaddr, (void *)0x1DF, v5, (const char *)(unsigned int)StagingConfig);
    FeatureIdAndReportingIdForTrigger = Windows::Services::TargetedContent::Internal::GetFeatureIdAndReportingIdForTrigger(
                                          (__int64)this,
                                          (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)&v29,
                                          &v28,
                                          v6);
    if ( FeatureIdAndReportingIdForTrigger < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x1E3,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)FeatureIdAndReportingIdForTrigger);
    WnfStateForTrigger = Windows::Services::TargetedContent::Internal::GetWnfStateForTrigger(this, v8);
    LODWORD(v25) = v29;
    HIDWORD(v25) = (unsigned __int16)v28;
    *(struct _WNF_STATE_NAME *)((char *)&v25 + 4) = WnfStateForTrigger;
    v10 = lpMem[0];
    v11 = *((_QWORD *)lpMem[0] + 3);
    v12 = *((_QWORD *)lpMem[0] + 5);
    v13 = 0LL;
    v14 = 1LL;
    if ( *(_WORD *)(v11 + 6) )
    {
      while ( *(_DWORD *)(v12 + 16LL * (unsigned int)v13) != v29
           || *(_WORD *)(v12 + 16LL * (unsigned int)v13 + 12) != (_WORD)v28
           || *(_DWORD *)(v12 + 16LL * (unsigned int)v13 + 4) != WnfStateForTrigger.Data[0]
           || *(_DWORD *)(v12 + 16LL * (unsigned int)v13 + 8) != WnfStateForTrigger.Data[1] )
      {
        v13 = (const char *)(unsigned int)((_DWORD)v13 + 1);
        if ( (unsigned int)v13 >= *(unsigned __int16 *)(v11 + 6) )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      if ( *((_QWORD *)lpMem[0] + 9) - *((_QWORD *)lpMem[0] + 8) >= 0x10uLL )
      {
        *(_OWORD *)(v12 + 16LL * (unsigned __int16)(*(_WORD *)(v11 + 6))++) = v25;
        *((_QWORD *)v10 + 8) += 16LL;
        *((_DWORD *)v10 + 4) = 1;
      }
      else
      {
        v14 = 0LL;
      }
    }
    if ( !(_DWORD)v14 )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x1E9,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        v13);
    v15 = wil_SaveStagingConfig((struct wil_StagingConfig *)v10, v14, v12, (const struct __WIL__WNF_TYPE_ID *)v13);
    if ( v15 < 0 )
      wil::details::in1diag3::_Throw_NtStatus(retaddr, (void *)0x1EB, v16, (const char *)(unsigned int)v15);
    if ( *((_DWORD *)v10 + 20) )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *((LPVOID *)v10 + 7));
      *((_QWORD *)v10 + 7) = 0LL;
      *((_QWORD *)v10 + 3) = 0LL;
    }
    v18 = GetProcessHeap();
    HeapFree(v18, 0, v10);
  }
  catch ( ... )
  {
    v23 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1EE,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
            v19);
    v22 = *(volatile signed __int32 **)(a2 + 8);
    if ( v22 && _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
    return v23;
  }
  v20 = *(volatile signed __int32 **)(a2 + 8);
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  return 0LL;
}
